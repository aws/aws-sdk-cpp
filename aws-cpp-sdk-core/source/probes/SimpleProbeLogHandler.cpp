#include <aws/core/probes/SimpleProbeLogHandler.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/DateTime.h>

#include <sstream>

using namespace Aws;
using namespace Aws::Probes;

static const char* ALLOCATION_TAG = "Aws_probes";

/*
 * Logs basic information from every probe received: Global latency, number of attempts and the final return code.
 */
void SimpleProbeLogHandler::OnReceive(const Probe& aProbe)
{
    const char* requestName(aProbe.GetServiceRequestName());

    uint32_t latency_microseconds = aProbe.GetGlobalLatency().count();
    uint32_t nbAttempts = aProbe.GetAttemptVector().size();
    uint32_t rc = 0;
    if (!aProbe.GetAttemptVector().empty())
    {
        auto outcome = aProbe.GetAttemptVector().back().outcome;
        if (outcome.IsSuccess())
        {
            rc = static_cast<uint32_t>(outcome.GetResult()->GetResponseCode());
        }
    }

    AWS_LOGSTREAM_INFO(ALLOCATION_TAG, "[" << requestName << "] latency: " << latency_microseconds << " us");
    AWS_LOGSTREAM_INFO(ALLOCATION_TAG, "[" << requestName << "] attempts: " << nbAttempts);
    AWS_LOGSTREAM_INFO(ALLOCATION_TAG, "[" << requestName << "] return code: " << rc);
}
