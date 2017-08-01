#include <aws/core/probes/Probe.h>
#include <aws/core/probes/ProbeHandlerInterface.h>

using namespace Aws;
using namespace Aws::Probes;

Probe::Probe(const char* s) :
    start(std::chrono::steady_clock::now()),
    serviceRequestName(s)
{
}

Probe::~Probe()
{
    // Trigger the probe handlers to process the current probe before its destruction.
    for(auto& sH: GetProbeHandlers())
    {
        sH->OnReceive(*this);
    }
}

void Probe::AddAttempt(HttpResponseOutcome outcome)
{
    // Compute the cumulative latency and insert a new attempt to the attempts vector
    auto now = std::chrono::steady_clock::now();
    auto latency = std::chrono::duration_cast<std::chrono::microseconds>(now - start);
    attempts.push_back(Attempt{latency, outcome});
}

const char* Probe::GetServiceRequestName() const
{
    return serviceRequestName;
}

std::chrono::microseconds Probe::GetGlobalLatency() const
{
    if(attempts.empty())
    {
        return std::chrono::microseconds(0);
    }
    else
    {
        return attempts.back().cumulativeLatency;
    }
}

const Aws::Vector<Attempt>& Probe::GetAttemptVector() const
{
    return attempts;
}
