/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplify/model/CreateAppResult.h>
#include <aws/amplify/model/CreateBranchResult.h>
#include <aws/amplify/model/CreateDeploymentResult.h>
#include <aws/amplify/model/CreateDomainAssociationResult.h>
#include <aws/amplify/model/CreateWebhookResult.h>
#include <aws/amplify/model/DeleteAppResult.h>
#include <aws/amplify/model/DeleteBranchResult.h>
#include <aws/amplify/model/DeleteDomainAssociationResult.h>
#include <aws/amplify/model/DeleteJobResult.h>
#include <aws/amplify/model/DeleteWebhookResult.h>
#include <aws/amplify/model/GetAppResult.h>
#include <aws/amplify/model/GetBranchResult.h>
#include <aws/amplify/model/GetDomainAssociationResult.h>
#include <aws/amplify/model/GetJobResult.h>
#include <aws/amplify/model/GetWebhookResult.h>
#include <aws/amplify/model/ListAppsResult.h>
#include <aws/amplify/model/ListBranchesResult.h>
#include <aws/amplify/model/ListDomainAssociationsResult.h>
#include <aws/amplify/model/ListJobsResult.h>
#include <aws/amplify/model/ListTagsForResourceResult.h>
#include <aws/amplify/model/ListWebhooksResult.h>
#include <aws/amplify/model/StartDeploymentResult.h>
#include <aws/amplify/model/StartJobResult.h>
#include <aws/amplify/model/StopJobResult.h>
#include <aws/amplify/model/TagResourceResult.h>
#include <aws/amplify/model/UntagResourceResult.h>
#include <aws/amplify/model/UpdateAppResult.h>
#include <aws/amplify/model/UpdateBranchResult.h>
#include <aws/amplify/model/UpdateDomainAssociationResult.h>
#include <aws/amplify/model/UpdateWebhookResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Amplify
{

namespace Model
{
        class CreateAppRequest;
        class CreateBranchRequest;
        class CreateDeploymentRequest;
        class CreateDomainAssociationRequest;
        class CreateWebhookRequest;
        class DeleteAppRequest;
        class DeleteBranchRequest;
        class DeleteDomainAssociationRequest;
        class DeleteJobRequest;
        class DeleteWebhookRequest;
        class GetAppRequest;
        class GetBranchRequest;
        class GetDomainAssociationRequest;
        class GetJobRequest;
        class GetWebhookRequest;
        class ListAppsRequest;
        class ListBranchesRequest;
        class ListDomainAssociationsRequest;
        class ListJobsRequest;
        class ListTagsForResourceRequest;
        class ListWebhooksRequest;
        class StartDeploymentRequest;
        class StartJobRequest;
        class StopJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAppRequest;
        class UpdateBranchRequest;
        class UpdateDomainAssociationRequest;
        class UpdateWebhookRequest;

        typedef Aws::Utils::Outcome<CreateAppResult, Aws::Client::AWSError<AmplifyErrors>> CreateAppOutcome;
        typedef Aws::Utils::Outcome<CreateBranchResult, Aws::Client::AWSError<AmplifyErrors>> CreateBranchOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, Aws::Client::AWSError<AmplifyErrors>> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateDomainAssociationResult, Aws::Client::AWSError<AmplifyErrors>> CreateDomainAssociationOutcome;
        typedef Aws::Utils::Outcome<CreateWebhookResult, Aws::Client::AWSError<AmplifyErrors>> CreateWebhookOutcome;
        typedef Aws::Utils::Outcome<DeleteAppResult, Aws::Client::AWSError<AmplifyErrors>> DeleteAppOutcome;
        typedef Aws::Utils::Outcome<DeleteBranchResult, Aws::Client::AWSError<AmplifyErrors>> DeleteBranchOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainAssociationResult, Aws::Client::AWSError<AmplifyErrors>> DeleteDomainAssociationOutcome;
        typedef Aws::Utils::Outcome<DeleteJobResult, Aws::Client::AWSError<AmplifyErrors>> DeleteJobOutcome;
        typedef Aws::Utils::Outcome<DeleteWebhookResult, Aws::Client::AWSError<AmplifyErrors>> DeleteWebhookOutcome;
        typedef Aws::Utils::Outcome<GetAppResult, Aws::Client::AWSError<AmplifyErrors>> GetAppOutcome;
        typedef Aws::Utils::Outcome<GetBranchResult, Aws::Client::AWSError<AmplifyErrors>> GetBranchOutcome;
        typedef Aws::Utils::Outcome<GetDomainAssociationResult, Aws::Client::AWSError<AmplifyErrors>> GetDomainAssociationOutcome;
        typedef Aws::Utils::Outcome<GetJobResult, Aws::Client::AWSError<AmplifyErrors>> GetJobOutcome;
        typedef Aws::Utils::Outcome<GetWebhookResult, Aws::Client::AWSError<AmplifyErrors>> GetWebhookOutcome;
        typedef Aws::Utils::Outcome<ListAppsResult, Aws::Client::AWSError<AmplifyErrors>> ListAppsOutcome;
        typedef Aws::Utils::Outcome<ListBranchesResult, Aws::Client::AWSError<AmplifyErrors>> ListBranchesOutcome;
        typedef Aws::Utils::Outcome<ListDomainAssociationsResult, Aws::Client::AWSError<AmplifyErrors>> ListDomainAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, Aws::Client::AWSError<AmplifyErrors>> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<AmplifyErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWebhooksResult, Aws::Client::AWSError<AmplifyErrors>> ListWebhooksOutcome;
        typedef Aws::Utils::Outcome<StartDeploymentResult, Aws::Client::AWSError<AmplifyErrors>> StartDeploymentOutcome;
        typedef Aws::Utils::Outcome<StartJobResult, Aws::Client::AWSError<AmplifyErrors>> StartJobOutcome;
        typedef Aws::Utils::Outcome<StopJobResult, Aws::Client::AWSError<AmplifyErrors>> StopJobOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<AmplifyErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<AmplifyErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAppResult, Aws::Client::AWSError<AmplifyErrors>> UpdateAppOutcome;
        typedef Aws::Utils::Outcome<UpdateBranchResult, Aws::Client::AWSError<AmplifyErrors>> UpdateBranchOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainAssociationResult, Aws::Client::AWSError<AmplifyErrors>> UpdateDomainAssociationOutcome;
        typedef Aws::Utils::Outcome<UpdateWebhookResult, Aws::Client::AWSError<AmplifyErrors>> UpdateWebhookOutcome;

        typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
        typedef std::future<CreateBranchOutcome> CreateBranchOutcomeCallable;
        typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
        typedef std::future<CreateDomainAssociationOutcome> CreateDomainAssociationOutcomeCallable;
        typedef std::future<CreateWebhookOutcome> CreateWebhookOutcomeCallable;
        typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
        typedef std::future<DeleteBranchOutcome> DeleteBranchOutcomeCallable;
        typedef std::future<DeleteDomainAssociationOutcome> DeleteDomainAssociationOutcomeCallable;
        typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
        typedef std::future<DeleteWebhookOutcome> DeleteWebhookOutcomeCallable;
        typedef std::future<GetAppOutcome> GetAppOutcomeCallable;
        typedef std::future<GetBranchOutcome> GetBranchOutcomeCallable;
        typedef std::future<GetDomainAssociationOutcome> GetDomainAssociationOutcomeCallable;
        typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
        typedef std::future<GetWebhookOutcome> GetWebhookOutcomeCallable;
        typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
        typedef std::future<ListBranchesOutcome> ListBranchesOutcomeCallable;
        typedef std::future<ListDomainAssociationsOutcome> ListDomainAssociationsOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWebhooksOutcome> ListWebhooksOutcomeCallable;
        typedef std::future<StartDeploymentOutcome> StartDeploymentOutcomeCallable;
        typedef std::future<StartJobOutcome> StartJobOutcomeCallable;
        typedef std::future<StopJobOutcome> StopJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
        typedef std::future<UpdateBranchOutcome> UpdateBranchOutcomeCallable;
        typedef std::future<UpdateDomainAssociationOutcome> UpdateDomainAssociationOutcomeCallable;
        typedef std::future<UpdateWebhookOutcome> UpdateWebhookOutcomeCallable;
} // namespace Model

  class AmplifyClient;

    typedef std::function<void(const AmplifyClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateBranchRequest&, const Model::CreateBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBranchResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateDomainAssociationRequest&, const Model::CreateDomainAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainAssociationResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateWebhookRequest&, const Model::CreateWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebhookResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteBranchRequest&, const Model::DeleteBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBranchResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteDomainAssociationRequest&, const Model::DeleteDomainAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainAssociationResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteWebhookRequest&, const Model::DeleteWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebhookResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetAppRequest&, const Model::GetAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetBranchRequest&, const Model::GetBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBranchResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetDomainAssociationRequest&, const Model::GetDomainAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainAssociationResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetWebhookRequest&, const Model::GetWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebhookResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListAppsRequest&, const Model::ListAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListBranchesRequest&, const Model::ListBranchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBranchesResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListDomainAssociationsRequest&, const Model::ListDomainAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainAssociationsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListWebhooksRequest&, const Model::ListWebhooksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebhooksResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::StartDeploymentRequest&, const Model::StartDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeploymentResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::StartJobRequest&, const Model::StartJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::StopJobRequest&, const Model::StopJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UpdateAppRequest&, const Model::UpdateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UpdateBranchRequest&, const Model::UpdateBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBranchResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UpdateDomainAssociationRequest&, const Model::UpdateDomainAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainAssociationResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UpdateWebhookRequest&, const Model::UpdateWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebhookResponseReceivedHandler;

  /**
   * <p> Amplify is a fully managed continuous deployment and hosting service for
   * modern web apps. </p>
   */
  class AWS_AMPLIFY_API AmplifyClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AmplifyClient();

        inline virtual const char* GetServiceClientName() const override { return "Amplify"; }


        /**
         * <p> Creates a new Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * <p> Creates a new Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * <p> Creates a new Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new Branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBranchOutcome CreateBranch(const Model::CreateBranchRequest& request) const;

        /**
         * <p> Creates a new Branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBranchOutcomeCallable CreateBranchCallable(const Model::CreateBranchRequest& request) const;

        /**
         * <p> Creates a new Branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBranchAsync(const Model::CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Create a deployment for manual deploy apps. (Apps are not connected to
         * repository) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p> Create a deployment for manual deploy apps. (Apps are not connected to
         * repository) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p> Create a deployment for manual deploy apps. (Apps are not connected to
         * repository) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Create a new DomainAssociation on an App </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainAssociationOutcome CreateDomainAssociation(const Model::CreateDomainAssociationRequest& request) const;

        /**
         * <p> Create a new DomainAssociation on an App </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDomainAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainAssociationOutcomeCallable CreateDomainAssociationCallable(const Model::CreateDomainAssociationRequest& request) const;

        /**
         * <p> Create a new DomainAssociation on an App </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDomainAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAssociationAsync(const Model::CreateDomainAssociationRequest& request, const CreateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Create a new webhook on an App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebhookOutcome CreateWebhook(const Model::CreateWebhookRequest& request) const;

        /**
         * <p> Create a new webhook on an App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebhookOutcomeCallable CreateWebhookCallable(const Model::CreateWebhookRequest& request) const;

        /**
         * <p> Create a new webhook on an App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebhookAsync(const Model::CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Delete an existing Amplify App by appId. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * <p> Delete an existing Amplify App by appId. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * <p> Delete an existing Amplify App by appId. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBranchOutcome DeleteBranch(const Model::DeleteBranchRequest& request) const;

        /**
         * <p> Deletes a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBranchOutcomeCallable DeleteBranchCallable(const Model::DeleteBranchRequest& request) const;

        /**
         * <p> Deletes a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBranchAsync(const Model::DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a DomainAssociation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainAssociationOutcome DeleteDomainAssociation(const Model::DeleteDomainAssociationRequest& request) const;

        /**
         * <p> Deletes a DomainAssociation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteDomainAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainAssociationOutcomeCallable DeleteDomainAssociationCallable(const Model::DeleteDomainAssociationRequest& request) const;

        /**
         * <p> Deletes a DomainAssociation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteDomainAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAssociationAsync(const Model::DeleteDomainAssociationRequest& request, const DeleteDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Delete a job, for an Amplify branch, part of Amplify App. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * <p> Delete a job, for an Amplify branch, part of Amplify App. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * <p> Delete a job, for an Amplify branch, part of Amplify App. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebhookOutcome DeleteWebhook(const Model::DeleteWebhookRequest& request) const;

        /**
         * <p> Deletes a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebhookOutcomeCallable DeleteWebhookCallable(const Model::DeleteWebhookRequest& request) const;

        /**
         * <p> Deletes a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWebhookAsync(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves an existing Amplify App by appId. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * <p> Retrieves an existing Amplify App by appId. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetApp">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppOutcomeCallable GetAppCallable(const Model::GetAppRequest& request) const;

        /**
         * <p> Retrieves an existing Amplify App by appId. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetApp">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppAsync(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBranchOutcome GetBranch(const Model::GetBranchRequest& request) const;

        /**
         * <p> Retrieves a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBranchOutcomeCallable GetBranchCallable(const Model::GetBranchRequest& request) const;

        /**
         * <p> Retrieves a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBranchAsync(const Model::GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves domain info that corresponds to an appId and domainName.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainAssociationOutcome GetDomainAssociation(const Model::GetDomainAssociationRequest& request) const;

        /**
         * <p> Retrieves domain info that corresponds to an appId and domainName.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetDomainAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainAssociationOutcomeCallable GetDomainAssociationCallable(const Model::GetDomainAssociationRequest& request) const;

        /**
         * <p> Retrieves domain info that corresponds to an appId and domainName.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetDomainAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainAssociationAsync(const Model::GetDomainAssociationRequest& request, const GetDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Get a job for a branch, part of an Amplify App. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * <p> Get a job for a branch, part of an Amplify App. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * <p> Get a job for a branch, part of an Amplify App. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves webhook info that corresponds to a webhookId. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebhookOutcome GetWebhook(const Model::GetWebhookRequest& request) const;

        /**
         * <p> Retrieves webhook info that corresponds to a webhookId. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebhookOutcomeCallable GetWebhookCallable(const Model::GetWebhookRequest& request) const;

        /**
         * <p> Retrieves webhook info that corresponds to a webhookId. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebhookAsync(const Model::GetWebhookRequest& request, const GetWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists existing Amplify Apps. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * <p> Lists existing Amplify Apps. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListApps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsOutcomeCallable ListAppsCallable(const Model::ListAppsRequest& request) const;

        /**
         * <p> Lists existing Amplify Apps. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListApps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsAsync(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists branches for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBranchesOutcome ListBranches(const Model::ListBranchesRequest& request) const;

        /**
         * <p> Lists branches for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBranches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBranchesOutcomeCallable ListBranchesCallable(const Model::ListBranchesRequest& request) const;

        /**
         * <p> Lists branches for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBranches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBranchesAsync(const Model::ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List domains with an app </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainAssociationsOutcome ListDomainAssociations(const Model::ListDomainAssociationsRequest& request) const;

        /**
         * <p> List domains with an app </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListDomainAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainAssociationsOutcomeCallable ListDomainAssociationsCallable(const Model::ListDomainAssociationsRequest& request) const;

        /**
         * <p> List domains with an app </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListDomainAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainAssociationsAsync(const Model::ListDomainAssociationsRequest& request, const ListDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List Jobs for a branch, part of an Amplify App. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p> List Jobs for a branch, part of an Amplify App. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p> List Jobs for a branch, part of an Amplify App. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List tags for resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> List tags for resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> List tags for resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List webhooks with an app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebhooksOutcome ListWebhooks(const Model::ListWebhooksRequest& request) const;

        /**
         * <p> List webhooks with an app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebhooksOutcomeCallable ListWebhooksCallable(const Model::ListWebhooksRequest& request) const;

        /**
         * <p> List webhooks with an app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebhooksAsync(const Model::ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Start a deployment for manual deploy apps. (Apps are not connected to
         * repository) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeploymentOutcome StartDeployment(const Model::StartDeploymentRequest& request) const;

        /**
         * <p> Start a deployment for manual deploy apps. (Apps are not connected to
         * repository) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeploymentOutcomeCallable StartDeploymentCallable(const Model::StartDeploymentRequest& request) const;

        /**
         * <p> Start a deployment for manual deploy apps. (Apps are not connected to
         * repository) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeploymentAsync(const Model::StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts a new job for a branch, part of an Amplify App. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobOutcome StartJob(const Model::StartJobRequest& request) const;

        /**
         * <p> Starts a new job for a branch, part of an Amplify App. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartJobOutcomeCallable StartJobCallable(const Model::StartJobRequest& request) const;

        /**
         * <p> Starts a new job for a branch, part of an Amplify App. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartJobAsync(const Model::StartJobRequest& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stop a job that is in progress, for an Amplify branch, part of Amplify App.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StopJob">AWS API
         * Reference</a></p>
         */
        virtual Model::StopJobOutcome StopJob(const Model::StopJobRequest& request) const;

        /**
         * <p> Stop a job that is in progress, for an Amplify branch, part of Amplify App.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StopJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopJobOutcomeCallable StopJobCallable(const Model::StopJobRequest& request) const;

        /**
         * <p> Stop a job that is in progress, for an Amplify branch, part of Amplify App.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StopJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopJobAsync(const Model::StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Tag resource with tag key and value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p> Tag resource with tag key and value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p> Tag resource with tag key and value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Untag resource with resourceArn. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Untag resource with resourceArn. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Untag resource with resourceArn. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates an existing Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * <p> Updates an existing Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppOutcomeCallable UpdateAppCallable(const Model::UpdateAppRequest& request) const;

        /**
         * <p> Updates an existing Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBranchOutcome UpdateBranch(const Model::UpdateBranchRequest& request) const;

        /**
         * <p> Updates a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBranchOutcomeCallable UpdateBranchCallable(const Model::UpdateBranchRequest& request) const;

        /**
         * <p> Updates a branch for an Amplify App. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBranchAsync(const Model::UpdateBranchRequest& request, const UpdateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Create a new DomainAssociation on an App </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainAssociationOutcome UpdateDomainAssociation(const Model::UpdateDomainAssociationRequest& request) const;

        /**
         * <p> Create a new DomainAssociation on an App </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainAssociationOutcomeCallable UpdateDomainAssociationCallable(const Model::UpdateDomainAssociationRequest& request) const;

        /**
         * <p> Create a new DomainAssociation on an App </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainAssociationAsync(const Model::UpdateDomainAssociationRequest& request, const UpdateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Update a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebhookOutcome UpdateWebhook(const Model::UpdateWebhookRequest& request) const;

        /**
         * <p> Update a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebhookOutcomeCallable UpdateWebhookCallable(const Model::UpdateWebhookRequest& request) const;

        /**
         * <p> Update a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWebhookAsync(const Model::UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateAppAsyncHelper(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBranchAsyncHelper(const Model::CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainAssociationAsyncHelper(const Model::CreateDomainAssociationRequest& request, const CreateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWebhookAsyncHelper(const Model::CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppAsyncHelper(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBranchAsyncHelper(const Model::DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainAssociationAsyncHelper(const Model::DeleteDomainAssociationRequest& request, const DeleteDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobAsyncHelper(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWebhookAsyncHelper(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppAsyncHelper(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBranchAsyncHelper(const Model::GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainAssociationAsyncHelper(const Model::GetDomainAssociationRequest& request, const GetDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobAsyncHelper(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWebhookAsyncHelper(const Model::GetWebhookRequest& request, const GetWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppsAsyncHelper(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBranchesAsyncHelper(const Model::ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainAssociationsAsyncHelper(const Model::ListDomainAssociationsRequest& request, const ListDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWebhooksAsyncHelper(const Model::ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDeploymentAsyncHelper(const Model::StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartJobAsyncHelper(const Model::StartJobRequest& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopJobAsyncHelper(const Model::StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppAsyncHelper(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBranchAsyncHelper(const Model::UpdateBranchRequest& request, const UpdateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainAssociationAsyncHelper(const Model::UpdateDomainAssociationRequest& request, const UpdateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWebhookAsyncHelper(const Model::UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Amplify
} // namespace Aws
