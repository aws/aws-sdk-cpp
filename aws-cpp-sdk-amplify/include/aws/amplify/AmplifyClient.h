/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplify/AmplifyServiceClientModel.h>
#include <aws/amplify/AmplifyLegacyAsyncMacros.h>

namespace Aws
{
namespace Amplify
{
  /**
   * <p>Amplify enables developers to develop and deploy cloud-powered mobile and web
   * apps. The Amplify Console provides a continuous delivery and hosting service for
   * web applications. For more information, see the <a
   * href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify
   * Console User Guide</a>. The Amplify Framework is a comprehensive set of SDKs,
   * libraries, tools, and documentation for client app development. For more
   * information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
   * </p>
   */
  class AWS_AMPLIFY_API AmplifyClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyClient(const Aws::Amplify::AmplifyClientConfiguration& clientConfiguration = Aws::Amplify::AmplifyClientConfiguration(),
                      std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Amplify::AmplifyClientConfiguration& clientConfiguration = Aws::Amplify::AmplifyClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Amplify::AmplifyClientConfiguration& clientConfiguration = Aws::Amplify::AmplifyClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AmplifyClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p> Creates a new Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;


        /**
         * <p> Creates a new backend environment for an Amplify app. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendEnvironmentOutcome CreateBackendEnvironment(const Model::CreateBackendEnvironmentRequest& request) const;


        /**
         * <p> Creates a new branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBranchOutcome CreateBranch(const Model::CreateBranchRequest& request) const;


        /**
         * <p> Creates a deployment for a manually deployed Amplify app. Manually deployed
         * apps are not connected to a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;


        /**
         * <p> Creates a new domain association for an Amplify app. This action associates
         * a custom domain with the Amplify app </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainAssociationOutcome CreateDomainAssociation(const Model::CreateDomainAssociationRequest& request) const;


        /**
         * <p> Creates a new webhook on an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebhookOutcome CreateWebhook(const Model::CreateWebhookRequest& request) const;


        /**
         * <p> Deletes an existing Amplify app specified by an app ID. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;


        /**
         * <p> Deletes a backend environment for an Amplify app. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendEnvironmentOutcome DeleteBackendEnvironment(const Model::DeleteBackendEnvironmentRequest& request) const;


        /**
         * <p> Deletes a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBranchOutcome DeleteBranch(const Model::DeleteBranchRequest& request) const;


        /**
         * <p> Deletes a domain association for an Amplify app. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainAssociationOutcome DeleteDomainAssociation(const Model::DeleteDomainAssociationRequest& request) const;


        /**
         * <p> Deletes a job for a branch of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;


        /**
         * <p> Deletes a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebhookOutcome DeleteWebhook(const Model::DeleteWebhookRequest& request) const;


        /**
         * <p> Returns the website access logs for a specific time range using a presigned
         * URL. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GenerateAccessLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateAccessLogsOutcome GenerateAccessLogs(const Model::GenerateAccessLogsRequest& request) const;


        /**
         * <p> Returns an existing Amplify app by appID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;


        /**
         * <p> Returns the artifact info that corresponds to an artifact id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetArtifactUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArtifactUrlOutcome GetArtifactUrl(const Model::GetArtifactUrlRequest& request) const;


        /**
         * <p> Returns a backend environment for an Amplify app. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendEnvironmentOutcome GetBackendEnvironment(const Model::GetBackendEnvironmentRequest& request) const;


        /**
         * <p> Returns a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBranchOutcome GetBranch(const Model::GetBranchRequest& request) const;


        /**
         * <p> Returns the domain information for an Amplify app. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainAssociationOutcome GetDomainAssociation(const Model::GetDomainAssociationRequest& request) const;


        /**
         * <p> Returns a job for a branch of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;


        /**
         * <p> Returns the webhook information that corresponds to a specified webhook ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebhookOutcome GetWebhook(const Model::GetWebhookRequest& request) const;


        /**
         * <p> Returns a list of the existing Amplify apps. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;


        /**
         * <p> Returns a list of artifacts for a specified app, branch, and job.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;


        /**
         * <p> Lists the backend environments for an Amplify app. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBackendEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackendEnvironmentsOutcome ListBackendEnvironments(const Model::ListBackendEnvironmentsRequest& request) const;


        /**
         * <p> Lists the branches of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBranchesOutcome ListBranches(const Model::ListBranchesRequest& request) const;


        /**
         * <p> Returns the domain associations for an Amplify app. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainAssociationsOutcome ListDomainAssociations(const Model::ListDomainAssociationsRequest& request) const;


        /**
         * <p> Lists the jobs for a branch of an Amplify app. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;


        /**
         * <p> Returns a list of tags for a specified Amazon Resource Name (ARN).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p> Returns a list of webhooks for an Amplify app. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebhooksOutcome ListWebhooks(const Model::ListWebhooksRequest& request) const;


        /**
         * <p> Starts a deployment for a manually deployed app. Manually deployed apps are
         * not connected to a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeploymentOutcome StartDeployment(const Model::StartDeploymentRequest& request) const;


        /**
         * <p> Starts a new job for a branch of an Amplify app. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobOutcome StartJob(const Model::StartJobRequest& request) const;


        /**
         * <p> Stops a job that is in progress for a branch of an Amplify app.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StopJob">AWS API
         * Reference</a></p>
         */
        virtual Model::StopJobOutcome StopJob(const Model::StopJobRequest& request) const;


        /**
         * <p> Tags the resource with a tag key and value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p> Untags a resource with a specified Amazon Resource Name (ARN).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p> Updates an existing Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;


        /**
         * <p> Updates a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBranchOutcome UpdateBranch(const Model::UpdateBranchRequest& request) const;


        /**
         * <p> Creates a new domain association for an Amplify app.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainAssociationOutcome UpdateDomainAssociation(const Model::UpdateDomainAssociationRequest& request) const;


        /**
         * <p> Updates a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebhookOutcome UpdateWebhook(const Model::UpdateWebhookRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AmplifyEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AmplifyClientConfiguration& clientConfiguration);

      AmplifyClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AmplifyEndpointProviderBase> m_endpointProvider;
  };

} // namespace Amplify
} // namespace Aws
