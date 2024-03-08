/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplify/AmplifyServiceClientModel.h>

namespace Aws
{
namespace Amplify
{
  /**
   * <p>Amplify enables developers to develop and deploy cloud-powered mobile and web
   * apps. Amplify Hosting provides a continuous delivery and hosting service for web
   * applications. For more information, see the <a
   * href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify
   * Hosting User Guide</a>. The Amplify Framework is a comprehensive set of SDKs,
   * libraries, tools, and documentation for client app development. For more
   * information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
   * </p>
   */
  class AWS_AMPLIFY_API AmplifyClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AmplifyClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AmplifyClientConfiguration ClientConfigurationType;
      typedef AmplifyEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyClient(const Aws::Amplify::AmplifyClientConfiguration& clientConfiguration = Aws::Amplify::AmplifyClientConfiguration(),
                      std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Amplify::AmplifyClientConfiguration& clientConfiguration = Aws::Amplify::AmplifyClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider = nullptr,
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

        /**
         * <p>Creates a new Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        Model::CreateAppOutcomeCallable CreateAppCallable(const CreateAppRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::CreateApp, request);
        }

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        void CreateAppAsync(const CreateAppRequestT& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::CreateApp, request, handler, context);
        }

        /**
         * <p>Creates a new backend environment for an Amplify app. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendEnvironmentOutcome CreateBackendEnvironment(const Model::CreateBackendEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBackendEnvironmentRequestT = Model::CreateBackendEnvironmentRequest>
        Model::CreateBackendEnvironmentOutcomeCallable CreateBackendEnvironmentCallable(const CreateBackendEnvironmentRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::CreateBackendEnvironment, request);
        }

        /**
         * An Async wrapper for CreateBackendEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackendEnvironmentRequestT = Model::CreateBackendEnvironmentRequest>
        void CreateBackendEnvironmentAsync(const CreateBackendEnvironmentRequestT& request, const CreateBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::CreateBackendEnvironment, request, handler, context);
        }

        /**
         * <p> Creates a new branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBranchOutcome CreateBranch(const Model::CreateBranchRequest& request) const;

        /**
         * A Callable wrapper for CreateBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBranchRequestT = Model::CreateBranchRequest>
        Model::CreateBranchOutcomeCallable CreateBranchCallable(const CreateBranchRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::CreateBranch, request);
        }

        /**
         * An Async wrapper for CreateBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBranchRequestT = Model::CreateBranchRequest>
        void CreateBranchAsync(const CreateBranchRequestT& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::CreateBranch, request, handler, context);
        }

        /**
         * <p>Creates a deployment for a manually deployed Amplify app. Manually deployed
         * apps are not connected to a repository. </p> <p>The maximum duration between the
         * <code>CreateDeployment</code> call and the <code>StartDeployment</code> call
         * cannot exceed 8 hours. If the duration exceeds 8 hours, the
         * <code>StartDeployment</code> call and the associated <code>Job</code> will
         * fail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::CreateDeployment, request);
        }

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::CreateDeployment, request, handler, context);
        }

        /**
         * <p>Creates a new domain association for an Amplify app. This action associates a
         * custom domain with the Amplify app </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainAssociationOutcome CreateDomainAssociation(const Model::CreateDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainAssociationRequestT = Model::CreateDomainAssociationRequest>
        Model::CreateDomainAssociationOutcomeCallable CreateDomainAssociationCallable(const CreateDomainAssociationRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::CreateDomainAssociation, request);
        }

        /**
         * An Async wrapper for CreateDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainAssociationRequestT = Model::CreateDomainAssociationRequest>
        void CreateDomainAssociationAsync(const CreateDomainAssociationRequestT& request, const CreateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::CreateDomainAssociation, request, handler, context);
        }

        /**
         * <p>Creates a new webhook on an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebhookOutcome CreateWebhook(const Model::CreateWebhookRequest& request) const;

        /**
         * A Callable wrapper for CreateWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWebhookRequestT = Model::CreateWebhookRequest>
        Model::CreateWebhookOutcomeCallable CreateWebhookCallable(const CreateWebhookRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::CreateWebhook, request);
        }

        /**
         * An Async wrapper for CreateWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWebhookRequestT = Model::CreateWebhookRequest>
        void CreateWebhookAsync(const CreateWebhookRequestT& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::CreateWebhook, request, handler, context);
        }

        /**
         * <p>Deletes an existing Amplify app specified by an app ID. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        Model::DeleteAppOutcomeCallable DeleteAppCallable(const DeleteAppRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::DeleteApp, request);
        }

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        void DeleteAppAsync(const DeleteAppRequestT& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::DeleteApp, request, handler, context);
        }

        /**
         * <p>Deletes a backend environment for an Amplify app. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendEnvironmentOutcome DeleteBackendEnvironment(const Model::DeleteBackendEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackendEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBackendEnvironmentRequestT = Model::DeleteBackendEnvironmentRequest>
        Model::DeleteBackendEnvironmentOutcomeCallable DeleteBackendEnvironmentCallable(const DeleteBackendEnvironmentRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::DeleteBackendEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteBackendEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackendEnvironmentRequestT = Model::DeleteBackendEnvironmentRequest>
        void DeleteBackendEnvironmentAsync(const DeleteBackendEnvironmentRequestT& request, const DeleteBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::DeleteBackendEnvironment, request, handler, context);
        }

        /**
         * <p> Deletes a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBranchOutcome DeleteBranch(const Model::DeleteBranchRequest& request) const;

        /**
         * A Callable wrapper for DeleteBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBranchRequestT = Model::DeleteBranchRequest>
        Model::DeleteBranchOutcomeCallable DeleteBranchCallable(const DeleteBranchRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::DeleteBranch, request);
        }

        /**
         * An Async wrapper for DeleteBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBranchRequestT = Model::DeleteBranchRequest>
        void DeleteBranchAsync(const DeleteBranchRequestT& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::DeleteBranch, request, handler, context);
        }

        /**
         * <p>Deletes a domain association for an Amplify app. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainAssociationOutcome DeleteDomainAssociation(const Model::DeleteDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainAssociationRequestT = Model::DeleteDomainAssociationRequest>
        Model::DeleteDomainAssociationOutcomeCallable DeleteDomainAssociationCallable(const DeleteDomainAssociationRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::DeleteDomainAssociation, request);
        }

        /**
         * An Async wrapper for DeleteDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainAssociationRequestT = Model::DeleteDomainAssociationRequest>
        void DeleteDomainAssociationAsync(const DeleteDomainAssociationRequestT& request, const DeleteDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::DeleteDomainAssociation, request, handler, context);
        }

        /**
         * <p> Deletes a job for a branch of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        Model::DeleteJobOutcomeCallable DeleteJobCallable(const DeleteJobRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::DeleteJob, request);
        }

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        void DeleteJobAsync(const DeleteJobRequestT& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::DeleteJob, request, handler, context);
        }

        /**
         * <p>Deletes a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebhookOutcome DeleteWebhook(const Model::DeleteWebhookRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWebhookRequestT = Model::DeleteWebhookRequest>
        Model::DeleteWebhookOutcomeCallable DeleteWebhookCallable(const DeleteWebhookRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::DeleteWebhook, request);
        }

        /**
         * An Async wrapper for DeleteWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWebhookRequestT = Model::DeleteWebhookRequest>
        void DeleteWebhookAsync(const DeleteWebhookRequestT& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::DeleteWebhook, request, handler, context);
        }

        /**
         * <p>Returns the website access logs for a specific time range using a presigned
         * URL. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GenerateAccessLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateAccessLogsOutcome GenerateAccessLogs(const Model::GenerateAccessLogsRequest& request) const;

        /**
         * A Callable wrapper for GenerateAccessLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateAccessLogsRequestT = Model::GenerateAccessLogsRequest>
        Model::GenerateAccessLogsOutcomeCallable GenerateAccessLogsCallable(const GenerateAccessLogsRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::GenerateAccessLogs, request);
        }

        /**
         * An Async wrapper for GenerateAccessLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateAccessLogsRequestT = Model::GenerateAccessLogsRequest>
        void GenerateAccessLogsAsync(const GenerateAccessLogsRequestT& request, const GenerateAccessLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::GenerateAccessLogs, request, handler, context);
        }

        /**
         * <p>Returns an existing Amplify app specified by an app ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * A Callable wrapper for GetApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppRequestT = Model::GetAppRequest>
        Model::GetAppOutcomeCallable GetAppCallable(const GetAppRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::GetApp, request);
        }

        /**
         * An Async wrapper for GetApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppRequestT = Model::GetAppRequest>
        void GetAppAsync(const GetAppRequestT& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::GetApp, request, handler, context);
        }

        /**
         * <p>Returns the artifact info that corresponds to an artifact id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetArtifactUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArtifactUrlOutcome GetArtifactUrl(const Model::GetArtifactUrlRequest& request) const;

        /**
         * A Callable wrapper for GetArtifactUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArtifactUrlRequestT = Model::GetArtifactUrlRequest>
        Model::GetArtifactUrlOutcomeCallable GetArtifactUrlCallable(const GetArtifactUrlRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::GetArtifactUrl, request);
        }

        /**
         * An Async wrapper for GetArtifactUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArtifactUrlRequestT = Model::GetArtifactUrlRequest>
        void GetArtifactUrlAsync(const GetArtifactUrlRequestT& request, const GetArtifactUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::GetArtifactUrl, request, handler, context);
        }

        /**
         * <p>Returns a backend environment for an Amplify app. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendEnvironmentOutcome GetBackendEnvironment(const Model::GetBackendEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetBackendEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBackendEnvironmentRequestT = Model::GetBackendEnvironmentRequest>
        Model::GetBackendEnvironmentOutcomeCallable GetBackendEnvironmentCallable(const GetBackendEnvironmentRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::GetBackendEnvironment, request);
        }

        /**
         * An Async wrapper for GetBackendEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackendEnvironmentRequestT = Model::GetBackendEnvironmentRequest>
        void GetBackendEnvironmentAsync(const GetBackendEnvironmentRequestT& request, const GetBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::GetBackendEnvironment, request, handler, context);
        }

        /**
         * <p> Returns a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBranchOutcome GetBranch(const Model::GetBranchRequest& request) const;

        /**
         * A Callable wrapper for GetBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBranchRequestT = Model::GetBranchRequest>
        Model::GetBranchOutcomeCallable GetBranchCallable(const GetBranchRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::GetBranch, request);
        }

        /**
         * An Async wrapper for GetBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBranchRequestT = Model::GetBranchRequest>
        void GetBranchAsync(const GetBranchRequestT& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::GetBranch, request, handler, context);
        }

        /**
         * <p>Returns the domain information for an Amplify app. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainAssociationOutcome GetDomainAssociation(const Model::GetDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainAssociationRequestT = Model::GetDomainAssociationRequest>
        Model::GetDomainAssociationOutcomeCallable GetDomainAssociationCallable(const GetDomainAssociationRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::GetDomainAssociation, request);
        }

        /**
         * An Async wrapper for GetDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainAssociationRequestT = Model::GetDomainAssociationRequest>
        void GetDomainAssociationAsync(const GetDomainAssociationRequestT& request, const GetDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::GetDomainAssociation, request, handler, context);
        }

        /**
         * <p> Returns a job for a branch of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        Model::GetJobOutcomeCallable GetJobCallable(const GetJobRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::GetJob, request);
        }

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        void GetJobAsync(const GetJobRequestT& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::GetJob, request, handler, context);
        }

        /**
         * <p>Returns the webhook information that corresponds to a specified webhook ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebhookOutcome GetWebhook(const Model::GetWebhookRequest& request) const;

        /**
         * A Callable wrapper for GetWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWebhookRequestT = Model::GetWebhookRequest>
        Model::GetWebhookOutcomeCallable GetWebhookCallable(const GetWebhookRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::GetWebhook, request);
        }

        /**
         * An Async wrapper for GetWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWebhookRequestT = Model::GetWebhookRequest>
        void GetWebhookAsync(const GetWebhookRequestT& request, const GetWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::GetWebhook, request, handler, context);
        }

        /**
         * <p>Returns a list of the existing Amplify apps. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        Model::ListAppsOutcomeCallable ListAppsCallable(const ListAppsRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::ListApps, request);
        }

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        void ListAppsAsync(const ListAppsRequestT& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::ListApps, request, handler, context);
        }

        /**
         * <p>Returns a list of artifacts for a specified app, branch, and job.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListArtifactsRequestT = Model::ListArtifactsRequest>
        Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const ListArtifactsRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::ListArtifacts, request);
        }

        /**
         * An Async wrapper for ListArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListArtifactsRequestT = Model::ListArtifactsRequest>
        void ListArtifactsAsync(const ListArtifactsRequestT& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::ListArtifacts, request, handler, context);
        }

        /**
         * <p>Lists the backend environments for an Amplify app. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBackendEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackendEnvironmentsOutcome ListBackendEnvironments(const Model::ListBackendEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListBackendEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBackendEnvironmentsRequestT = Model::ListBackendEnvironmentsRequest>
        Model::ListBackendEnvironmentsOutcomeCallable ListBackendEnvironmentsCallable(const ListBackendEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::ListBackendEnvironments, request);
        }

        /**
         * An Async wrapper for ListBackendEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackendEnvironmentsRequestT = Model::ListBackendEnvironmentsRequest>
        void ListBackendEnvironmentsAsync(const ListBackendEnvironmentsRequestT& request, const ListBackendEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::ListBackendEnvironments, request, handler, context);
        }

        /**
         * <p> Lists the branches of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBranchesOutcome ListBranches(const Model::ListBranchesRequest& request) const;

        /**
         * A Callable wrapper for ListBranches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBranchesRequestT = Model::ListBranchesRequest>
        Model::ListBranchesOutcomeCallable ListBranchesCallable(const ListBranchesRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::ListBranches, request);
        }

        /**
         * An Async wrapper for ListBranches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBranchesRequestT = Model::ListBranchesRequest>
        void ListBranchesAsync(const ListBranchesRequestT& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::ListBranches, request, handler, context);
        }

        /**
         * <p>Returns the domain associations for an Amplify app. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainAssociationsOutcome ListDomainAssociations(const Model::ListDomainAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListDomainAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainAssociationsRequestT = Model::ListDomainAssociationsRequest>
        Model::ListDomainAssociationsOutcomeCallable ListDomainAssociationsCallable(const ListDomainAssociationsRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::ListDomainAssociations, request);
        }

        /**
         * An Async wrapper for ListDomainAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainAssociationsRequestT = Model::ListDomainAssociationsRequest>
        void ListDomainAssociationsAsync(const ListDomainAssociationsRequestT& request, const ListDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::ListDomainAssociations, request, handler, context);
        }

        /**
         * <p> Lists the jobs for a branch of an Amplify app. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::ListJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a specified Amazon Resource Name
         * (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of webhooks for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebhooksOutcome ListWebhooks(const Model::ListWebhooksRequest& request) const;

        /**
         * A Callable wrapper for ListWebhooks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWebhooksRequestT = Model::ListWebhooksRequest>
        Model::ListWebhooksOutcomeCallable ListWebhooksCallable(const ListWebhooksRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::ListWebhooks, request);
        }

        /**
         * An Async wrapper for ListWebhooks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWebhooksRequestT = Model::ListWebhooksRequest>
        void ListWebhooksAsync(const ListWebhooksRequestT& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::ListWebhooks, request, handler, context);
        }

        /**
         * <p>Starts a deployment for a manually deployed app. Manually deployed apps are
         * not connected to a repository. </p> <p>The maximum duration between the
         * <code>CreateDeployment</code> call and the <code>StartDeployment</code> call
         * cannot exceed 8 hours. If the duration exceeds 8 hours, the
         * <code>StartDeployment</code> call and the associated <code>Job</code> will
         * fail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeploymentOutcome StartDeployment(const Model::StartDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StartDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDeploymentRequestT = Model::StartDeploymentRequest>
        Model::StartDeploymentOutcomeCallable StartDeploymentCallable(const StartDeploymentRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::StartDeployment, request);
        }

        /**
         * An Async wrapper for StartDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDeploymentRequestT = Model::StartDeploymentRequest>
        void StartDeploymentAsync(const StartDeploymentRequestT& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::StartDeployment, request, handler, context);
        }

        /**
         * <p> Starts a new job for a branch of an Amplify app. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobOutcome StartJob(const Model::StartJobRequest& request) const;

        /**
         * A Callable wrapper for StartJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartJobRequestT = Model::StartJobRequest>
        Model::StartJobOutcomeCallable StartJobCallable(const StartJobRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::StartJob, request);
        }

        /**
         * An Async wrapper for StartJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartJobRequestT = Model::StartJobRequest>
        void StartJobAsync(const StartJobRequestT& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::StartJob, request, handler, context);
        }

        /**
         * <p> Stops a job that is in progress for a branch of an Amplify app.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StopJob">AWS API
         * Reference</a></p>
         */
        virtual Model::StopJobOutcome StopJob(const Model::StopJobRequest& request) const;

        /**
         * A Callable wrapper for StopJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopJobRequestT = Model::StopJobRequest>
        Model::StopJobOutcomeCallable StopJobCallable(const StopJobRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::StopJob, request);
        }

        /**
         * An Async wrapper for StopJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopJobRequestT = Model::StopJobRequest>
        void StopJobAsync(const StopJobRequestT& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::StopJob, request, handler, context);
        }

        /**
         * <p>Tags the resource with a tag key and value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untags a resource with a specified Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * A Callable wrapper for UpdateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppRequestT = Model::UpdateAppRequest>
        Model::UpdateAppOutcomeCallable UpdateAppCallable(const UpdateAppRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::UpdateApp, request);
        }

        /**
         * An Async wrapper for UpdateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppRequestT = Model::UpdateAppRequest>
        void UpdateAppAsync(const UpdateAppRequestT& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::UpdateApp, request, handler, context);
        }

        /**
         * <p> Updates a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBranchOutcome UpdateBranch(const Model::UpdateBranchRequest& request) const;

        /**
         * A Callable wrapper for UpdateBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBranchRequestT = Model::UpdateBranchRequest>
        Model::UpdateBranchOutcomeCallable UpdateBranchCallable(const UpdateBranchRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::UpdateBranch, request);
        }

        /**
         * An Async wrapper for UpdateBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBranchRequestT = Model::UpdateBranchRequest>
        void UpdateBranchAsync(const UpdateBranchRequestT& request, const UpdateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::UpdateBranch, request, handler, context);
        }

        /**
         * <p>Creates a new domain association for an Amplify app.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainAssociationOutcome UpdateDomainAssociation(const Model::UpdateDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainAssociationRequestT = Model::UpdateDomainAssociationRequest>
        Model::UpdateDomainAssociationOutcomeCallable UpdateDomainAssociationCallable(const UpdateDomainAssociationRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::UpdateDomainAssociation, request);
        }

        /**
         * An Async wrapper for UpdateDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainAssociationRequestT = Model::UpdateDomainAssociationRequest>
        void UpdateDomainAssociationAsync(const UpdateDomainAssociationRequestT& request, const UpdateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::UpdateDomainAssociation, request, handler, context);
        }

        /**
         * <p>Updates a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebhookOutcome UpdateWebhook(const Model::UpdateWebhookRequest& request) const;

        /**
         * A Callable wrapper for UpdateWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWebhookRequestT = Model::UpdateWebhookRequest>
        Model::UpdateWebhookOutcomeCallable UpdateWebhookCallable(const UpdateWebhookRequestT& request) const
        {
            return SubmitCallable(&AmplifyClient::UpdateWebhook, request);
        }

        /**
         * An Async wrapper for UpdateWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWebhookRequestT = Model::UpdateWebhookRequest>
        void UpdateWebhookAsync(const UpdateWebhookRequestT& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyClient::UpdateWebhook, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AmplifyEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AmplifyClient>;
      void init(const AmplifyClientConfiguration& clientConfiguration);

      AmplifyClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AmplifyEndpointProviderBase> m_endpointProvider;
  };

} // namespace Amplify
} // namespace Aws
