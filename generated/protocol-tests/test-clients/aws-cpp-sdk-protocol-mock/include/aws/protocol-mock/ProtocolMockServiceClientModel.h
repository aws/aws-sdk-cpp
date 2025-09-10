/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/protocol-mock/ProtocolMockEndpointProvider.h>
#include <aws/protocol-mock/ProtocolMockErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ProtocolMockClient header */
#include <aws/protocol-mock/model/GetRequestsReceivedRequest.h>
#include <aws/protocol-mock/model/GetRequestsReceivedResult.h>
#include <aws/protocol-mock/model/PingRequest.h>
#include <aws/protocol-mock/model/PingResult.h>
#include <aws/protocol-mock/model/ResetRequest.h>
#include <aws/protocol-mock/model/ResetResult.h>
#include <aws/protocol-mock/model/SetNextResponseRequest.h>
#include <aws/protocol-mock/model/SetNextResponseResult.h>
#include <aws/protocol-mock/model/TerminateRequest.h>
#include <aws/protocol-mock/model/TerminateResult.h>
/* End of service model headers required in ProtocolMockClient header */

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

namespace ProtocolMock {
using ProtocolMockClientConfiguration = Aws::Client::GenericClientConfiguration;
using ProtocolMockEndpointProviderBase = Aws::ProtocolMock::Endpoint::ProtocolMockEndpointProviderBase;
using ProtocolMockEndpointProvider = Aws::ProtocolMock::Endpoint::ProtocolMockEndpointProvider;

namespace Model {
/* Service model forward declarations required in ProtocolMockClient header */
class GetRequestsReceivedRequest;
class PingRequest;
class ResetRequest;
class SetNextResponseRequest;
class TerminateRequest;
/* End of service model forward declarations required in ProtocolMockClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetRequestsReceivedResult, ProtocolMockError> GetRequestsReceivedOutcome;
typedef Aws::Utils::Outcome<PingResult, ProtocolMockError> PingOutcome;
typedef Aws::Utils::Outcome<ResetResult, ProtocolMockError> ResetOutcome;
typedef Aws::Utils::Outcome<SetNextResponseResult, ProtocolMockError> SetNextResponseOutcome;
typedef Aws::Utils::Outcome<TerminateResult, ProtocolMockError> TerminateOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetRequestsReceivedOutcome> GetRequestsReceivedOutcomeCallable;
typedef std::future<PingOutcome> PingOutcomeCallable;
typedef std::future<ResetOutcome> ResetOutcomeCallable;
typedef std::future<SetNextResponseOutcome> SetNextResponseOutcomeCallable;
typedef std::future<TerminateOutcome> TerminateOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ProtocolMockClient;

/* Service model async handlers definitions */
typedef std::function<void(const ProtocolMockClient*, const Model::GetRequestsReceivedRequest&, const Model::GetRequestsReceivedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRequestsReceivedResponseReceivedHandler;
typedef std::function<void(const ProtocolMockClient*, const Model::PingRequest&, const Model::PingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PingResponseReceivedHandler;
typedef std::function<void(const ProtocolMockClient*, const Model::ResetRequest&, const Model::ResetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ResetResponseReceivedHandler;
typedef std::function<void(const ProtocolMockClient*, const Model::SetNextResponseRequest&, const Model::SetNextResponseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SetNextResponseResponseReceivedHandler;
typedef std::function<void(const ProtocolMockClient*, const Model::TerminateRequest&, const Model::TerminateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TerminateResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ProtocolMock
}  // namespace Aws
