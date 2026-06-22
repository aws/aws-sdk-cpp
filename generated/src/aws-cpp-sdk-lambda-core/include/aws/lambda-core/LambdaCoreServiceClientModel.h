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
#include <aws/lambda-core/LambdaCoreEndpointProvider.h>
#include <aws/lambda-core/LambdaCoreErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in LambdaCoreClient header */
#include <aws/lambda-core/model/CreateNetworkConnectorResult.h>
#include <aws/lambda-core/model/DeleteNetworkConnectorResult.h>
#include <aws/lambda-core/model/GetNetworkConnectorResult.h>
#include <aws/lambda-core/model/ListNetworkConnectorsRequest.h>
#include <aws/lambda-core/model/ListNetworkConnectorsResult.h>
#include <aws/lambda-core/model/UpdateNetworkConnectorResult.h>
/* End of service model headers required in LambdaCoreClient header */

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

namespace LambdaCore {
using LambdaCoreClientConfiguration = Aws::Client::GenericClientConfiguration;
using LambdaCoreEndpointProviderBase = Aws::LambdaCore::Endpoint::LambdaCoreEndpointProviderBase;
using LambdaCoreEndpointProvider = Aws::LambdaCore::Endpoint::LambdaCoreEndpointProvider;

namespace Model {
/* Service model forward declarations required in LambdaCoreClient header */
class CreateNetworkConnectorRequest;
class DeleteNetworkConnectorRequest;
class GetNetworkConnectorRequest;
class ListNetworkConnectorsRequest;
class UpdateNetworkConnectorRequest;
/* End of service model forward declarations required in LambdaCoreClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateNetworkConnectorResult, LambdaCoreError> CreateNetworkConnectorOutcome;
typedef Aws::Utils::Outcome<DeleteNetworkConnectorResult, LambdaCoreError> DeleteNetworkConnectorOutcome;
typedef Aws::Utils::Outcome<GetNetworkConnectorResult, LambdaCoreError> GetNetworkConnectorOutcome;
typedef Aws::Utils::Outcome<ListNetworkConnectorsResult, LambdaCoreError> ListNetworkConnectorsOutcome;
typedef Aws::Utils::Outcome<UpdateNetworkConnectorResult, LambdaCoreError> UpdateNetworkConnectorOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateNetworkConnectorOutcome> CreateNetworkConnectorOutcomeCallable;
typedef std::future<DeleteNetworkConnectorOutcome> DeleteNetworkConnectorOutcomeCallable;
typedef std::future<GetNetworkConnectorOutcome> GetNetworkConnectorOutcomeCallable;
typedef std::future<ListNetworkConnectorsOutcome> ListNetworkConnectorsOutcomeCallable;
typedef std::future<UpdateNetworkConnectorOutcome> UpdateNetworkConnectorOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class LambdaCoreClient;

/* Service model async handlers definitions */
typedef std::function<void(const LambdaCoreClient*, const Model::CreateNetworkConnectorRequest&,
                           const Model::CreateNetworkConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateNetworkConnectorResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::DeleteNetworkConnectorRequest&,
                           const Model::DeleteNetworkConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteNetworkConnectorResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::GetNetworkConnectorRequest&, const Model::GetNetworkConnectorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetNetworkConnectorResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::ListNetworkConnectorsRequest&, const Model::ListNetworkConnectorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListNetworkConnectorsResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::UpdateNetworkConnectorRequest&,
                           const Model::UpdateNetworkConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateNetworkConnectorResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace LambdaCore
}  // namespace Aws
