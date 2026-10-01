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
#include <aws/lambda-web/LambdaWebEndpointProvider.h>
#include <aws/lambda-web/LambdaWebErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in LambdaWebClient header */
#include <aws/core/NoResult.h>
#include <aws/lambda-web/model/CreateWebFunctionEndpointResult.h>
#include <aws/lambda-web/model/CreateWebFunctionResult.h>
#include <aws/lambda-web/model/CreateWebFunctionRevisionResult.h>
#include <aws/lambda-web/model/GetResourcePolicyResult.h>
#include <aws/lambda-web/model/GetWebAccountSettingsRequest.h>
#include <aws/lambda-web/model/GetWebAccountSettingsResult.h>
#include <aws/lambda-web/model/GetWebFunctionEndpointResult.h>
#include <aws/lambda-web/model/GetWebFunctionResult.h>
#include <aws/lambda-web/model/GetWebFunctionRevisionResult.h>
#include <aws/lambda-web/model/ListTagsResult.h>
#include <aws/lambda-web/model/ListWebFunctionEndpointsResult.h>
#include <aws/lambda-web/model/ListWebFunctionRevisionsResult.h>
#include <aws/lambda-web/model/ListWebFunctionsRequest.h>
#include <aws/lambda-web/model/ListWebFunctionsResult.h>
#include <aws/lambda-web/model/PutResourcePolicyResult.h>
#include <aws/lambda-web/model/UpdateWebFunctionEndpointResult.h>
/* End of service model headers required in LambdaWebClient header */

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

namespace LambdaWeb {
using LambdaWebClientConfiguration = Aws::Client::GenericClientConfiguration;
using LambdaWebEndpointProviderBase = Aws::LambdaWeb::Endpoint::LambdaWebEndpointProviderBase;
using LambdaWebEndpointProvider = Aws::LambdaWeb::Endpoint::LambdaWebEndpointProvider;

namespace Model {
/* Service model forward declarations required in LambdaWebClient header */
class CreateWebFunctionRequest;
class CreateWebFunctionEndpointRequest;
class CreateWebFunctionRevisionRequest;
class DeleteResourcePolicyRequest;
class DeleteWebFunctionRequest;
class DeleteWebFunctionEndpointRequest;
class DeleteWebFunctionRevisionRequest;
class GetResourcePolicyRequest;
class GetWebAccountSettingsRequest;
class GetWebFunctionRequest;
class GetWebFunctionEndpointRequest;
class GetWebFunctionRevisionRequest;
class ListTagsRequest;
class ListWebFunctionEndpointsRequest;
class ListWebFunctionRevisionsRequest;
class ListWebFunctionsRequest;
class PutResourcePolicyRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateWebFunctionEndpointRequest;
/* End of service model forward declarations required in LambdaWebClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateWebFunctionResult, LambdaWebError> CreateWebFunctionOutcome;
typedef Aws::Utils::Outcome<CreateWebFunctionEndpointResult, LambdaWebError> CreateWebFunctionEndpointOutcome;
typedef Aws::Utils::Outcome<CreateWebFunctionRevisionResult, LambdaWebError> CreateWebFunctionRevisionOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, LambdaWebError> DeleteResourcePolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, LambdaWebError> DeleteWebFunctionOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, LambdaWebError> DeleteWebFunctionEndpointOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, LambdaWebError> DeleteWebFunctionRevisionOutcome;
typedef Aws::Utils::Outcome<GetResourcePolicyResult, LambdaWebError> GetResourcePolicyOutcome;
typedef Aws::Utils::Outcome<GetWebAccountSettingsResult, LambdaWebError> GetWebAccountSettingsOutcome;
typedef Aws::Utils::Outcome<GetWebFunctionResult, LambdaWebError> GetWebFunctionOutcome;
typedef Aws::Utils::Outcome<GetWebFunctionEndpointResult, LambdaWebError> GetWebFunctionEndpointOutcome;
typedef Aws::Utils::Outcome<GetWebFunctionRevisionResult, LambdaWebError> GetWebFunctionRevisionOutcome;
typedef Aws::Utils::Outcome<ListTagsResult, LambdaWebError> ListTagsOutcome;
typedef Aws::Utils::Outcome<ListWebFunctionEndpointsResult, LambdaWebError> ListWebFunctionEndpointsOutcome;
typedef Aws::Utils::Outcome<ListWebFunctionRevisionsResult, LambdaWebError> ListWebFunctionRevisionsOutcome;
typedef Aws::Utils::Outcome<ListWebFunctionsResult, LambdaWebError> ListWebFunctionsOutcome;
typedef Aws::Utils::Outcome<PutResourcePolicyResult, LambdaWebError> PutResourcePolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, LambdaWebError> TagResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, LambdaWebError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateWebFunctionEndpointResult, LambdaWebError> UpdateWebFunctionEndpointOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateWebFunctionOutcome> CreateWebFunctionOutcomeCallable;
typedef std::future<CreateWebFunctionEndpointOutcome> CreateWebFunctionEndpointOutcomeCallable;
typedef std::future<CreateWebFunctionRevisionOutcome> CreateWebFunctionRevisionOutcomeCallable;
typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
typedef std::future<DeleteWebFunctionOutcome> DeleteWebFunctionOutcomeCallable;
typedef std::future<DeleteWebFunctionEndpointOutcome> DeleteWebFunctionEndpointOutcomeCallable;
typedef std::future<DeleteWebFunctionRevisionOutcome> DeleteWebFunctionRevisionOutcomeCallable;
typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
typedef std::future<GetWebAccountSettingsOutcome> GetWebAccountSettingsOutcomeCallable;
typedef std::future<GetWebFunctionOutcome> GetWebFunctionOutcomeCallable;
typedef std::future<GetWebFunctionEndpointOutcome> GetWebFunctionEndpointOutcomeCallable;
typedef std::future<GetWebFunctionRevisionOutcome> GetWebFunctionRevisionOutcomeCallable;
typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
typedef std::future<ListWebFunctionEndpointsOutcome> ListWebFunctionEndpointsOutcomeCallable;
typedef std::future<ListWebFunctionRevisionsOutcome> ListWebFunctionRevisionsOutcomeCallable;
typedef std::future<ListWebFunctionsOutcome> ListWebFunctionsOutcomeCallable;
typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateWebFunctionEndpointOutcome> UpdateWebFunctionEndpointOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class LambdaWebClient;

/* Service model async handlers definitions */
typedef std::function<void(const LambdaWebClient*, const Model::CreateWebFunctionRequest&, const Model::CreateWebFunctionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWebFunctionResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::CreateWebFunctionEndpointRequest&,
                           const Model::CreateWebFunctionEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWebFunctionEndpointResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::CreateWebFunctionRevisionRequest&,
                           const Model::CreateWebFunctionRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWebFunctionRevisionResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteResourcePolicyResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::DeleteWebFunctionRequest&, const Model::DeleteWebFunctionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWebFunctionResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::DeleteWebFunctionEndpointRequest&,
                           const Model::DeleteWebFunctionEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWebFunctionEndpointResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::DeleteWebFunctionRevisionRequest&,
                           const Model::DeleteWebFunctionRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWebFunctionRevisionResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourcePolicyResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::GetWebAccountSettingsRequest&, const Model::GetWebAccountSettingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWebAccountSettingsResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::GetWebFunctionRequest&, const Model::GetWebFunctionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWebFunctionResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::GetWebFunctionEndpointRequest&, const Model::GetWebFunctionEndpointOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWebFunctionEndpointResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::GetWebFunctionRevisionRequest&, const Model::GetWebFunctionRevisionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWebFunctionRevisionResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::ListWebFunctionEndpointsRequest&,
                           const Model::ListWebFunctionEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWebFunctionEndpointsResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::ListWebFunctionRevisionsRequest&,
                           const Model::ListWebFunctionRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWebFunctionRevisionsResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::ListWebFunctionsRequest&, const Model::ListWebFunctionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWebFunctionsResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutResourcePolicyResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const LambdaWebClient*, const Model::UpdateWebFunctionEndpointRequest&,
                           const Model::UpdateWebFunctionEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateWebFunctionEndpointResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace LambdaWeb
}  // namespace Aws
