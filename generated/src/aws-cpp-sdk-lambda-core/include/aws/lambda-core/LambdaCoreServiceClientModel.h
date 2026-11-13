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
#include <aws/lambda-core/model/CreateRuntimeAliasResult.h>
#include <aws/lambda-core/model/CreateRuntimeResult.h>
#include <aws/lambda-core/model/CreateRuntimeVersionResult.h>
#include <aws/lambda-core/model/DeleteNetworkConnectorResult.h>
#include <aws/lambda-core/model/DeleteRuntimeAliasResult.h>
#include <aws/lambda-core/model/DeleteRuntimeResult.h>
#include <aws/lambda-core/model/DeleteRuntimeVersionResult.h>
#include <aws/lambda-core/model/GetNetworkConnectorResult.h>
#include <aws/lambda-core/model/GetRuntimeAliasResult.h>
#include <aws/lambda-core/model/GetRuntimeResult.h>
#include <aws/lambda-core/model/GetRuntimeVersionResult.h>
#include <aws/lambda-core/model/ListNetworkConnectorVersionsResult.h>
#include <aws/lambda-core/model/ListNetworkConnectorsRequest.h>
#include <aws/lambda-core/model/ListNetworkConnectorsResult.h>
#include <aws/lambda-core/model/ListRuntimeAliasesResult.h>
#include <aws/lambda-core/model/ListRuntimeVersionsResult.h>
#include <aws/lambda-core/model/ListRuntimesRequest.h>
#include <aws/lambda-core/model/ListRuntimesResult.h>
#include <aws/lambda-core/model/RestoreRuntimeResult.h>
#include <aws/lambda-core/model/UpdateNetworkConnectorResult.h>
#include <aws/lambda-core/model/UpdateRuntimeAliasResult.h>
#include <aws/lambda-core/model/UpdateRuntimeResult.h>
#include <aws/lambda-core/model/UpdateRuntimeVersionResult.h>
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
class CreateRuntimeRequest;
class CreateRuntimeAliasRequest;
class CreateRuntimeVersionRequest;
class DeleteNetworkConnectorRequest;
class DeleteRuntimeRequest;
class DeleteRuntimeAliasRequest;
class DeleteRuntimeVersionRequest;
class GetNetworkConnectorRequest;
class GetRuntimeRequest;
class GetRuntimeAliasRequest;
class GetRuntimeVersionRequest;
class ListNetworkConnectorVersionsRequest;
class ListNetworkConnectorsRequest;
class ListRuntimeAliasesRequest;
class ListRuntimeVersionsRequest;
class ListRuntimesRequest;
class RestoreRuntimeRequest;
class UpdateNetworkConnectorRequest;
class UpdateRuntimeRequest;
class UpdateRuntimeAliasRequest;
class UpdateRuntimeVersionRequest;
/* End of service model forward declarations required in LambdaCoreClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateNetworkConnectorResult, LambdaCoreError> CreateNetworkConnectorOutcome;
typedef Aws::Utils::Outcome<CreateRuntimeResult, LambdaCoreError> CreateRuntimeOutcome;
typedef Aws::Utils::Outcome<CreateRuntimeAliasResult, LambdaCoreError> CreateRuntimeAliasOutcome;
typedef Aws::Utils::Outcome<CreateRuntimeVersionResult, LambdaCoreError> CreateRuntimeVersionOutcome;
typedef Aws::Utils::Outcome<DeleteNetworkConnectorResult, LambdaCoreError> DeleteNetworkConnectorOutcome;
typedef Aws::Utils::Outcome<DeleteRuntimeResult, LambdaCoreError> DeleteRuntimeOutcome;
typedef Aws::Utils::Outcome<DeleteRuntimeAliasResult, LambdaCoreError> DeleteRuntimeAliasOutcome;
typedef Aws::Utils::Outcome<DeleteRuntimeVersionResult, LambdaCoreError> DeleteRuntimeVersionOutcome;
typedef Aws::Utils::Outcome<GetNetworkConnectorResult, LambdaCoreError> GetNetworkConnectorOutcome;
typedef Aws::Utils::Outcome<GetRuntimeResult, LambdaCoreError> GetRuntimeOutcome;
typedef Aws::Utils::Outcome<GetRuntimeAliasResult, LambdaCoreError> GetRuntimeAliasOutcome;
typedef Aws::Utils::Outcome<GetRuntimeVersionResult, LambdaCoreError> GetRuntimeVersionOutcome;
typedef Aws::Utils::Outcome<ListNetworkConnectorVersionsResult, LambdaCoreError> ListNetworkConnectorVersionsOutcome;
typedef Aws::Utils::Outcome<ListNetworkConnectorsResult, LambdaCoreError> ListNetworkConnectorsOutcome;
typedef Aws::Utils::Outcome<ListRuntimeAliasesResult, LambdaCoreError> ListRuntimeAliasesOutcome;
typedef Aws::Utils::Outcome<ListRuntimeVersionsResult, LambdaCoreError> ListRuntimeVersionsOutcome;
typedef Aws::Utils::Outcome<ListRuntimesResult, LambdaCoreError> ListRuntimesOutcome;
typedef Aws::Utils::Outcome<RestoreRuntimeResult, LambdaCoreError> RestoreRuntimeOutcome;
typedef Aws::Utils::Outcome<UpdateNetworkConnectorResult, LambdaCoreError> UpdateNetworkConnectorOutcome;
typedef Aws::Utils::Outcome<UpdateRuntimeResult, LambdaCoreError> UpdateRuntimeOutcome;
typedef Aws::Utils::Outcome<UpdateRuntimeAliasResult, LambdaCoreError> UpdateRuntimeAliasOutcome;
typedef Aws::Utils::Outcome<UpdateRuntimeVersionResult, LambdaCoreError> UpdateRuntimeVersionOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateNetworkConnectorOutcome> CreateNetworkConnectorOutcomeCallable;
typedef std::future<CreateRuntimeOutcome> CreateRuntimeOutcomeCallable;
typedef std::future<CreateRuntimeAliasOutcome> CreateRuntimeAliasOutcomeCallable;
typedef std::future<CreateRuntimeVersionOutcome> CreateRuntimeVersionOutcomeCallable;
typedef std::future<DeleteNetworkConnectorOutcome> DeleteNetworkConnectorOutcomeCallable;
typedef std::future<DeleteRuntimeOutcome> DeleteRuntimeOutcomeCallable;
typedef std::future<DeleteRuntimeAliasOutcome> DeleteRuntimeAliasOutcomeCallable;
typedef std::future<DeleteRuntimeVersionOutcome> DeleteRuntimeVersionOutcomeCallable;
typedef std::future<GetNetworkConnectorOutcome> GetNetworkConnectorOutcomeCallable;
typedef std::future<GetRuntimeOutcome> GetRuntimeOutcomeCallable;
typedef std::future<GetRuntimeAliasOutcome> GetRuntimeAliasOutcomeCallable;
typedef std::future<GetRuntimeVersionOutcome> GetRuntimeVersionOutcomeCallable;
typedef std::future<ListNetworkConnectorVersionsOutcome> ListNetworkConnectorVersionsOutcomeCallable;
typedef std::future<ListNetworkConnectorsOutcome> ListNetworkConnectorsOutcomeCallable;
typedef std::future<ListRuntimeAliasesOutcome> ListRuntimeAliasesOutcomeCallable;
typedef std::future<ListRuntimeVersionsOutcome> ListRuntimeVersionsOutcomeCallable;
typedef std::future<ListRuntimesOutcome> ListRuntimesOutcomeCallable;
typedef std::future<RestoreRuntimeOutcome> RestoreRuntimeOutcomeCallable;
typedef std::future<UpdateNetworkConnectorOutcome> UpdateNetworkConnectorOutcomeCallable;
typedef std::future<UpdateRuntimeOutcome> UpdateRuntimeOutcomeCallable;
typedef std::future<UpdateRuntimeAliasOutcome> UpdateRuntimeAliasOutcomeCallable;
typedef std::future<UpdateRuntimeVersionOutcome> UpdateRuntimeVersionOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class LambdaCoreClient;

/* Service model async handlers definitions */
typedef std::function<void(const LambdaCoreClient*, const Model::CreateNetworkConnectorRequest&,
                           const Model::CreateNetworkConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateNetworkConnectorResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::CreateRuntimeRequest&, const Model::CreateRuntimeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRuntimeResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::CreateRuntimeAliasRequest&, const Model::CreateRuntimeAliasOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRuntimeAliasResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::CreateRuntimeVersionRequest&, const Model::CreateRuntimeVersionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRuntimeVersionResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::DeleteNetworkConnectorRequest&,
                           const Model::DeleteNetworkConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteNetworkConnectorResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::DeleteRuntimeRequest&, const Model::DeleteRuntimeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRuntimeResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::DeleteRuntimeAliasRequest&, const Model::DeleteRuntimeAliasOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRuntimeAliasResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::DeleteRuntimeVersionRequest&, const Model::DeleteRuntimeVersionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRuntimeVersionResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::GetNetworkConnectorRequest&, const Model::GetNetworkConnectorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetNetworkConnectorResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::GetRuntimeRequest&, const Model::GetRuntimeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRuntimeResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::GetRuntimeAliasRequest&, const Model::GetRuntimeAliasOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRuntimeAliasResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::GetRuntimeVersionRequest&, const Model::GetRuntimeVersionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRuntimeVersionResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::ListNetworkConnectorVersionsRequest&,
                           const Model::ListNetworkConnectorVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListNetworkConnectorVersionsResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::ListNetworkConnectorsRequest&, const Model::ListNetworkConnectorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListNetworkConnectorsResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::ListRuntimeAliasesRequest&, const Model::ListRuntimeAliasesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRuntimeAliasesResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::ListRuntimeVersionsRequest&, const Model::ListRuntimeVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRuntimeVersionsResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::ListRuntimesRequest&, const Model::ListRuntimesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRuntimesResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::RestoreRuntimeRequest&, const Model::RestoreRuntimeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RestoreRuntimeResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::UpdateNetworkConnectorRequest&,
                           const Model::UpdateNetworkConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateNetworkConnectorResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::UpdateRuntimeRequest&, const Model::UpdateRuntimeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRuntimeResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::UpdateRuntimeAliasRequest&, const Model::UpdateRuntimeAliasOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRuntimeAliasResponseReceivedHandler;
typedef std::function<void(const LambdaCoreClient*, const Model::UpdateRuntimeVersionRequest&, const Model::UpdateRuntimeVersionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRuntimeVersionResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace LambdaCore
}  // namespace Aws
