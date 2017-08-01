#include <aws/core/probes/ProbeHandlerInterface.h>
#include <aws/core/utils/logging/LogMacros.h>

static const char* TAG = "Aws_probes";

using namespace Aws;
using namespace Aws::Probes;

// Global vector containing one or multiple stats handlers
static Aws::Vector<std::shared_ptr<ProbeHandlerInterface>> ProbeHandlers;

Aws::Vector<std::shared_ptr<ProbeHandlerInterface>>& Aws::Probes::GetProbeHandlers()
{
    return ProbeHandlers;
}

void Aws::Probes::SetProbeHandlers(const Aws::Vector<std::shared_ptr<ProbeHandlerInterface>>& probeHandlers)
{
    AWS_LOGSTREAM_DEBUG(TAG, probeHandlers.size() << " probe Handlers have been set");
    ProbeHandlers = probeHandlers;
}
