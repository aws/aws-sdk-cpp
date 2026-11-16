/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/connectscheduling/ConnectSchedulingEndpointProvider.h>
#include <aws/connectscheduling/ConnectSchedulingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ConnectSchedulingClient header */
#include <aws/connectscheduling/model/ApproveTimeOffResult.h>
#include <aws/connectscheduling/model/CancelTimeOffResult.h>
#include <aws/connectscheduling/model/CreateTimeOffResult.h>
#include <aws/connectscheduling/model/GetTimeOffResult.h>
#include <aws/connectscheduling/model/PutTimeOffBalanceResult.h>
#include <aws/connectscheduling/model/RejectTimeOffResult.h>
/* End of service model headers required in ConnectSchedulingClient header */

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

namespace ConnectScheduling {
using ConnectSchedulingClientConfiguration = Aws::Client::GenericClientConfiguration;
using ConnectSchedulingEndpointProviderBase = Aws::ConnectScheduling::Endpoint::ConnectSchedulingEndpointProviderBase;
using ConnectSchedulingEndpointProvider = Aws::ConnectScheduling::Endpoint::ConnectSchedulingEndpointProvider;

namespace Model {
/* Service model forward declarations required in ConnectSchedulingClient header */
class ApproveTimeOffRequest;
class CancelTimeOffRequest;
class CreateTimeOffRequest;
class GetTimeOffRequest;
class PutTimeOffBalanceRequest;
class RejectTimeOffRequest;
/* End of service model forward declarations required in ConnectSchedulingClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<ApproveTimeOffResult, ConnectSchedulingError> ApproveTimeOffOutcome;
typedef Aws::Utils::Outcome<CancelTimeOffResult, ConnectSchedulingError> CancelTimeOffOutcome;
typedef Aws::Utils::Outcome<CreateTimeOffResult, ConnectSchedulingError> CreateTimeOffOutcome;
typedef Aws::Utils::Outcome<GetTimeOffResult, ConnectSchedulingError> GetTimeOffOutcome;
typedef Aws::Utils::Outcome<PutTimeOffBalanceResult, ConnectSchedulingError> PutTimeOffBalanceOutcome;
typedef Aws::Utils::Outcome<RejectTimeOffResult, ConnectSchedulingError> RejectTimeOffOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<ApproveTimeOffOutcome> ApproveTimeOffOutcomeCallable;
typedef std::future<CancelTimeOffOutcome> CancelTimeOffOutcomeCallable;
typedef std::future<CreateTimeOffOutcome> CreateTimeOffOutcomeCallable;
typedef std::future<GetTimeOffOutcome> GetTimeOffOutcomeCallable;
typedef std::future<PutTimeOffBalanceOutcome> PutTimeOffBalanceOutcomeCallable;
typedef std::future<RejectTimeOffOutcome> RejectTimeOffOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ConnectSchedulingClient;

/* Service model async handlers definitions */
typedef std::function<void(const ConnectSchedulingClient*, const Model::ApproveTimeOffRequest&, const Model::ApproveTimeOffOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ApproveTimeOffResponseReceivedHandler;
typedef std::function<void(const ConnectSchedulingClient*, const Model::CancelTimeOffRequest&, const Model::CancelTimeOffOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelTimeOffResponseReceivedHandler;
typedef std::function<void(const ConnectSchedulingClient*, const Model::CreateTimeOffRequest&, const Model::CreateTimeOffOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTimeOffResponseReceivedHandler;
typedef std::function<void(const ConnectSchedulingClient*, const Model::GetTimeOffRequest&, const Model::GetTimeOffOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTimeOffResponseReceivedHandler;
typedef std::function<void(const ConnectSchedulingClient*, const Model::PutTimeOffBalanceRequest&, const Model::PutTimeOffBalanceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTimeOffBalanceResponseReceivedHandler;
typedef std::function<void(const ConnectSchedulingClient*, const Model::RejectTimeOffRequest&, const Model::RejectTimeOffOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RejectTimeOffResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ConnectScheduling
}  // namespace Aws
