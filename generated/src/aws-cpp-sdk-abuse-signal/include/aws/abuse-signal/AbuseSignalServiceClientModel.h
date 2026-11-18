/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/abuse-signal/AbuseSignalEndpointProvider.h>
#include <aws/abuse-signal/AbuseSignalErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in AbuseSignalClient header */
#include <aws/abuse-signal/model/CreateAbuseReportResult.h>
#include <aws/abuse-signal/model/GetAbuseReportStatusResult.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesRequest.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesResult.h>
/* End of service model headers required in AbuseSignalClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace AbuseSignal {
using AbuseSignalClientConfiguration = Aws::Client::GenericClientConfiguration;
using AbuseSignalEndpointProviderBase = Aws::AbuseSignal::Endpoint::AbuseSignalEndpointProviderBase;
using AbuseSignalEndpointProvider = Aws::AbuseSignal::Endpoint::AbuseSignalEndpointProvider;

namespace Model {
/* Service model forward declarations required in AbuseSignalClient header */
class CreateAbuseReportRequest;
class GetAbuseReportStatusRequest;
class ListAbuseReportStatusesRequest;
/* End of service model forward declarations required in AbuseSignalClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateAbuseReportResult, AbuseSignalError> CreateAbuseReportOutcome;
typedef Aws::Utils::Outcome<GetAbuseReportStatusResult, AbuseSignalError> GetAbuseReportStatusOutcome;
typedef Aws::Utils::Outcome<ListAbuseReportStatusesResult, AbuseSignalError> ListAbuseReportStatusesOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateAbuseReportOutcome> CreateAbuseReportOutcomeCallable;
typedef std::future<GetAbuseReportStatusOutcome> GetAbuseReportStatusOutcomeCallable;
typedef std::future<ListAbuseReportStatusesOutcome> ListAbuseReportStatusesOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class AbuseSignalClient;

/* Service model async handlers definitions */
typedef std::function<void(const AbuseSignalClient*, const Model::CreateAbuseReportRequest&, const Model::CreateAbuseReportOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAbuseReportResponseReceivedHandler;
typedef std::function<void(const AbuseSignalClient*, const Model::GetAbuseReportStatusRequest&, const Model::GetAbuseReportStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAbuseReportStatusResponseReceivedHandler;
typedef std::function<void(const AbuseSignalClient*, const Model::ListAbuseReportStatusesRequest&,
                           const Model::ListAbuseReportStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAbuseReportStatusesResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace AbuseSignal
}  // namespace Aws
