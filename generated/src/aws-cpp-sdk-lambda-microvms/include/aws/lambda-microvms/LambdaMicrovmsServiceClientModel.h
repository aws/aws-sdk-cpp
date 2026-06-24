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
#include <aws/lambda-microvms/LambdaMicrovmsEndpointProvider.h>
#include <aws/lambda-microvms/LambdaMicrovmsErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in LambdaMicrovmsClient header */
#include <aws/core/NoResult.h>
#include <aws/lambda-microvms/model/CreateMicrovmAuthTokenResult.h>
#include <aws/lambda-microvms/model/CreateMicrovmImageResult.h>
#include <aws/lambda-microvms/model/CreateMicrovmShellAuthTokenResult.h>
#include <aws/lambda-microvms/model/DeleteMicrovmImageResult.h>
#include <aws/lambda-microvms/model/DeleteMicrovmImageVersionResult.h>
#include <aws/lambda-microvms/model/GetMicrovmImageBuildResult.h>
#include <aws/lambda-microvms/model/GetMicrovmImageResult.h>
#include <aws/lambda-microvms/model/GetMicrovmImageVersionResult.h>
#include <aws/lambda-microvms/model/GetMicrovmResult.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsResult.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImagesRequest.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImagesResult.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsResult.h>
#include <aws/lambda-microvms/model/ListMicrovmImageVersionsResult.h>
#include <aws/lambda-microvms/model/ListMicrovmImagesRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmImagesResult.h>
#include <aws/lambda-microvms/model/ListMicrovmsRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmsResult.h>
#include <aws/lambda-microvms/model/ListTagsResult.h>
#include <aws/lambda-microvms/model/ResumeMicrovmResult.h>
#include <aws/lambda-microvms/model/RunMicrovmResult.h>
#include <aws/lambda-microvms/model/SuspendMicrovmResult.h>
#include <aws/lambda-microvms/model/TerminateMicrovmResult.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageResult.h>
#include <aws/lambda-microvms/model/UpdateMicrovmImageVersionResult.h>
/* End of service model headers required in LambdaMicrovmsClient header */

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

namespace LambdaMicrovms {
using LambdaMicrovmsClientConfiguration = Aws::Client::GenericClientConfiguration;
using LambdaMicrovmsEndpointProviderBase = Aws::LambdaMicrovms::Endpoint::LambdaMicrovmsEndpointProviderBase;
using LambdaMicrovmsEndpointProvider = Aws::LambdaMicrovms::Endpoint::LambdaMicrovmsEndpointProvider;

namespace Model {
/* Service model forward declarations required in LambdaMicrovmsClient header */
class CreateMicrovmAuthTokenRequest;
class CreateMicrovmImageRequest;
class CreateMicrovmShellAuthTokenRequest;
class DeleteMicrovmImageRequest;
class DeleteMicrovmImageVersionRequest;
class GetMicrovmRequest;
class GetMicrovmImageRequest;
class GetMicrovmImageBuildRequest;
class GetMicrovmImageVersionRequest;
class ListManagedMicrovmImageVersionsRequest;
class ListManagedMicrovmImagesRequest;
class ListMicrovmImageBuildsRequest;
class ListMicrovmImageVersionsRequest;
class ListMicrovmImagesRequest;
class ListMicrovmsRequest;
class ListTagsRequest;
class ResumeMicrovmRequest;
class RunMicrovmRequest;
class SuspendMicrovmRequest;
class TagResourceRequest;
class TerminateMicrovmRequest;
class UntagResourceRequest;
class UpdateMicrovmImageRequest;
class UpdateMicrovmImageVersionRequest;
/* End of service model forward declarations required in LambdaMicrovmsClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateMicrovmAuthTokenResult, LambdaMicrovmsError> CreateMicrovmAuthTokenOutcome;
typedef Aws::Utils::Outcome<CreateMicrovmImageResult, LambdaMicrovmsError> CreateMicrovmImageOutcome;
typedef Aws::Utils::Outcome<CreateMicrovmShellAuthTokenResult, LambdaMicrovmsError> CreateMicrovmShellAuthTokenOutcome;
typedef Aws::Utils::Outcome<DeleteMicrovmImageResult, LambdaMicrovmsError> DeleteMicrovmImageOutcome;
typedef Aws::Utils::Outcome<DeleteMicrovmImageVersionResult, LambdaMicrovmsError> DeleteMicrovmImageVersionOutcome;
typedef Aws::Utils::Outcome<GetMicrovmResult, LambdaMicrovmsError> GetMicrovmOutcome;
typedef Aws::Utils::Outcome<GetMicrovmImageResult, LambdaMicrovmsError> GetMicrovmImageOutcome;
typedef Aws::Utils::Outcome<GetMicrovmImageBuildResult, LambdaMicrovmsError> GetMicrovmImageBuildOutcome;
typedef Aws::Utils::Outcome<GetMicrovmImageVersionResult, LambdaMicrovmsError> GetMicrovmImageVersionOutcome;
typedef Aws::Utils::Outcome<ListManagedMicrovmImageVersionsResult, LambdaMicrovmsError> ListManagedMicrovmImageVersionsOutcome;
typedef Aws::Utils::Outcome<ListManagedMicrovmImagesResult, LambdaMicrovmsError> ListManagedMicrovmImagesOutcome;
typedef Aws::Utils::Outcome<ListMicrovmImageBuildsResult, LambdaMicrovmsError> ListMicrovmImageBuildsOutcome;
typedef Aws::Utils::Outcome<ListMicrovmImageVersionsResult, LambdaMicrovmsError> ListMicrovmImageVersionsOutcome;
typedef Aws::Utils::Outcome<ListMicrovmImagesResult, LambdaMicrovmsError> ListMicrovmImagesOutcome;
typedef Aws::Utils::Outcome<ListMicrovmsResult, LambdaMicrovmsError> ListMicrovmsOutcome;
typedef Aws::Utils::Outcome<ListTagsResult, LambdaMicrovmsError> ListTagsOutcome;
typedef Aws::Utils::Outcome<ResumeMicrovmResult, LambdaMicrovmsError> ResumeMicrovmOutcome;
typedef Aws::Utils::Outcome<RunMicrovmResult, LambdaMicrovmsError> RunMicrovmOutcome;
typedef Aws::Utils::Outcome<SuspendMicrovmResult, LambdaMicrovmsError> SuspendMicrovmOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, LambdaMicrovmsError> TagResourceOutcome;
typedef Aws::Utils::Outcome<TerminateMicrovmResult, LambdaMicrovmsError> TerminateMicrovmOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, LambdaMicrovmsError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateMicrovmImageResult, LambdaMicrovmsError> UpdateMicrovmImageOutcome;
typedef Aws::Utils::Outcome<UpdateMicrovmImageVersionResult, LambdaMicrovmsError> UpdateMicrovmImageVersionOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateMicrovmAuthTokenOutcome> CreateMicrovmAuthTokenOutcomeCallable;
typedef std::future<CreateMicrovmImageOutcome> CreateMicrovmImageOutcomeCallable;
typedef std::future<CreateMicrovmShellAuthTokenOutcome> CreateMicrovmShellAuthTokenOutcomeCallable;
typedef std::future<DeleteMicrovmImageOutcome> DeleteMicrovmImageOutcomeCallable;
typedef std::future<DeleteMicrovmImageVersionOutcome> DeleteMicrovmImageVersionOutcomeCallable;
typedef std::future<GetMicrovmOutcome> GetMicrovmOutcomeCallable;
typedef std::future<GetMicrovmImageOutcome> GetMicrovmImageOutcomeCallable;
typedef std::future<GetMicrovmImageBuildOutcome> GetMicrovmImageBuildOutcomeCallable;
typedef std::future<GetMicrovmImageVersionOutcome> GetMicrovmImageVersionOutcomeCallable;
typedef std::future<ListManagedMicrovmImageVersionsOutcome> ListManagedMicrovmImageVersionsOutcomeCallable;
typedef std::future<ListManagedMicrovmImagesOutcome> ListManagedMicrovmImagesOutcomeCallable;
typedef std::future<ListMicrovmImageBuildsOutcome> ListMicrovmImageBuildsOutcomeCallable;
typedef std::future<ListMicrovmImageVersionsOutcome> ListMicrovmImageVersionsOutcomeCallable;
typedef std::future<ListMicrovmImagesOutcome> ListMicrovmImagesOutcomeCallable;
typedef std::future<ListMicrovmsOutcome> ListMicrovmsOutcomeCallable;
typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
typedef std::future<ResumeMicrovmOutcome> ResumeMicrovmOutcomeCallable;
typedef std::future<RunMicrovmOutcome> RunMicrovmOutcomeCallable;
typedef std::future<SuspendMicrovmOutcome> SuspendMicrovmOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<TerminateMicrovmOutcome> TerminateMicrovmOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateMicrovmImageOutcome> UpdateMicrovmImageOutcomeCallable;
typedef std::future<UpdateMicrovmImageVersionOutcome> UpdateMicrovmImageVersionOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class LambdaMicrovmsClient;

/* Service model async handlers definitions */
typedef std::function<void(const LambdaMicrovmsClient*, const Model::CreateMicrovmAuthTokenRequest&,
                           const Model::CreateMicrovmAuthTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMicrovmAuthTokenResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::CreateMicrovmImageRequest&, const Model::CreateMicrovmImageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMicrovmImageResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::CreateMicrovmShellAuthTokenRequest&,
                           const Model::CreateMicrovmShellAuthTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMicrovmShellAuthTokenResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::DeleteMicrovmImageRequest&, const Model::DeleteMicrovmImageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteMicrovmImageResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::DeleteMicrovmImageVersionRequest&,
                           const Model::DeleteMicrovmImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteMicrovmImageVersionResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::GetMicrovmRequest&, const Model::GetMicrovmOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMicrovmResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::GetMicrovmImageRequest&, const Model::GetMicrovmImageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMicrovmImageResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::GetMicrovmImageBuildRequest&,
                           const Model::GetMicrovmImageBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMicrovmImageBuildResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::GetMicrovmImageVersionRequest&,
                           const Model::GetMicrovmImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMicrovmImageVersionResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::ListManagedMicrovmImageVersionsRequest&,
                           const Model::ListManagedMicrovmImageVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListManagedMicrovmImageVersionsResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::ListManagedMicrovmImagesRequest&,
                           const Model::ListManagedMicrovmImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListManagedMicrovmImagesResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::ListMicrovmImageBuildsRequest&,
                           const Model::ListMicrovmImageBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMicrovmImageBuildsResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::ListMicrovmImageVersionsRequest&,
                           const Model::ListMicrovmImageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMicrovmImageVersionsResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::ListMicrovmImagesRequest&, const Model::ListMicrovmImagesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMicrovmImagesResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::ListMicrovmsRequest&, const Model::ListMicrovmsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMicrovmsResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::ResumeMicrovmRequest&, const Model::ResumeMicrovmOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ResumeMicrovmResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::RunMicrovmRequest&, const Model::RunMicrovmOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RunMicrovmResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::SuspendMicrovmRequest&, const Model::SuspendMicrovmOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SuspendMicrovmResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::TerminateMicrovmRequest&, const Model::TerminateMicrovmOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TerminateMicrovmResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::UpdateMicrovmImageRequest&, const Model::UpdateMicrovmImageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateMicrovmImageResponseReceivedHandler;
typedef std::function<void(const LambdaMicrovmsClient*, const Model::UpdateMicrovmImageVersionRequest&,
                           const Model::UpdateMicrovmImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateMicrovmImageVersionResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace LambdaMicrovms
}  // namespace Aws
