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
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolEndpointProvider.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in NonQueryCompatibleRpcV2ProtocolClient header */
#include <aws/core/NoResult.h>
#include <aws/non-query-compatible-rpcv2-protocol/model/NonQueryCompatibleOperationRequest.h>
/* End of service model headers required in NonQueryCompatibleRpcV2ProtocolClient header */

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

namespace NonQueryCompatibleRpcV2Protocol {
using NonQueryCompatibleRpcV2ProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using NonQueryCompatibleRpcV2ProtocolEndpointProviderBase =
    Aws::NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolEndpointProviderBase;
using NonQueryCompatibleRpcV2ProtocolEndpointProvider =
    Aws::NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolEndpointProvider;

namespace Model {
/* Service model forward declarations required in NonQueryCompatibleRpcV2ProtocolClient header */
class NonQueryCompatibleOperationRequest;
/* End of service model forward declarations required in NonQueryCompatibleRpcV2ProtocolClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<Aws::NoResult, NonQueryCompatibleRpcV2ProtocolError> NonQueryCompatibleOperationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<NonQueryCompatibleOperationOutcome> NonQueryCompatibleOperationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class NonQueryCompatibleRpcV2ProtocolClient;

/* Service model async handlers definitions */
typedef std::function<void(const NonQueryCompatibleRpcV2ProtocolClient*, const Model::NonQueryCompatibleOperationRequest&,
                           const Model::NonQueryCompatibleOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    NonQueryCompatibleOperationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws
