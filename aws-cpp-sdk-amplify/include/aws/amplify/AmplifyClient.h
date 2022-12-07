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
   * apps. The Amplify Console provides a continuous delivery and hosting service for
   * web applications. For more information, see the <a
   * href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify
   * Console User Guide</a>. The Amplify Framework is a comprehensive set of SDKs,
   * libraries, tools, and documentation for client app development. For more
   * information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
   * </p>
   */
  class AWS_AMPLIFY_API AmplifyClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AmplifyClient>
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

        /**
         * <p> Creates a new Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new backend environment for an Amplify app. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendEnvironmentOutcome CreateBackendEnvironment(const Model::CreateBackendEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackendEnvironmentOutcomeCallable CreateBackendEnvironmentCallable(const Model::CreateBackendEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateBackendEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackendEnvironmentAsync(const Model::CreateBackendEnvironmentRequest& request, const CreateBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBranchOutcome CreateBranch(const Model::CreateBranchRequest& request) const;

        /**
         * A Callable wrapper for CreateBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBranchOutcomeCallable CreateBranchCallable(const Model::CreateBranchRequest& request) const;

        /**
         * An Async wrapper for CreateBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBranchAsync(const Model::CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a deployment for a manually deployed Amplify app. Manually deployed
         * apps are not connected to a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new domain association for an Amplify app. This action associates
         * a custom domain with the Amplify app </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainAssociationOutcome CreateDomainAssociation(const Model::CreateDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainAssociationOutcomeCallable CreateDomainAssociationCallable(const Model::CreateDomainAssociationRequest& request) const;

        /**
         * An Async wrapper for CreateDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAssociationAsync(const Model::CreateDomainAssociationRequest& request, const CreateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new webhook on an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebhookOutcome CreateWebhook(const Model::CreateWebhookRequest& request) const;

        /**
         * A Callable wrapper for CreateWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebhookOutcomeCallable CreateWebhookCallable(const Model::CreateWebhookRequest& request) const;

        /**
         * An Async wrapper for CreateWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebhookAsync(const Model::CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an existing Amplify app specified by an app ID. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a backend environment for an Amplify app. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendEnvironmentOutcome DeleteBackendEnvironment(const Model::DeleteBackendEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackendEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackendEnvironmentOutcomeCallable DeleteBackendEnvironmentCallable(const Model::DeleteBackendEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteBackendEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackendEnvironmentAsync(const Model::DeleteBackendEnvironmentRequest& request, const DeleteBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBranchOutcome DeleteBranch(const Model::DeleteBranchRequest& request) const;

        /**
         * A Callable wrapper for DeleteBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBranchOutcomeCallable DeleteBranchCallable(const Model::DeleteBranchRequest& request) const;

        /**
         * An Async wrapper for DeleteBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBranchAsync(const Model::DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a domain association for an Amplify app. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainAssociationOutcome DeleteDomainAssociation(const Model::DeleteDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainAssociationOutcomeCallable DeleteDomainAssociationCallable(const Model::DeleteDomainAssociationRequest& request) const;

        /**
         * An Async wrapper for DeleteDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAssociationAsync(const Model::DeleteDomainAssociationRequest& request, const DeleteDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a job for a branch of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebhookOutcome DeleteWebhook(const Model::DeleteWebhookRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebhookOutcomeCallable DeleteWebhookCallable(const Model::DeleteWebhookRequest& request) const;

        /**
         * An Async wrapper for DeleteWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWebhookAsync(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the website access logs for a specific time range using a presigned
         * URL. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GenerateAccessLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateAccessLogsOutcome GenerateAccessLogs(const Model::GenerateAccessLogsRequest& request) const;

        /**
         * A Callable wrapper for GenerateAccessLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateAccessLogsOutcomeCallable GenerateAccessLogsCallable(const Model::GenerateAccessLogsRequest& request) const;

        /**
         * An Async wrapper for GenerateAccessLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateAccessLogsAsync(const Model::GenerateAccessLogsRequest& request, const GenerateAccessLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an existing Amplify app by appID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * A Callable wrapper for GetApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppOutcomeCallable GetAppCallable(const Model::GetAppRequest& request) const;

        /**
         * An Async wrapper for GetApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppAsync(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the artifact info that corresponds to an artifact id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetArtifactUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArtifactUrlOutcome GetArtifactUrl(const Model::GetArtifactUrlRequest& request) const;

        /**
         * A Callable wrapper for GetArtifactUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetArtifactUrlOutcomeCallable GetArtifactUrlCallable(const Model::GetArtifactUrlRequest& request) const;

        /**
         * An Async wrapper for GetArtifactUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetArtifactUrlAsync(const Model::GetArtifactUrlRequest& request, const GetArtifactUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a backend environment for an Amplify app. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBackendEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendEnvironmentOutcome GetBackendEnvironment(const Model::GetBackendEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetBackendEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackendEnvironmentOutcomeCallable GetBackendEnvironmentCallable(const Model::GetBackendEnvironmentRequest& request) const;

        /**
         * An Async wrapper for GetBackendEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackendEnvironmentAsync(const Model::GetBackendEnvironmentRequest& request, const GetBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBranchOutcome GetBranch(const Model::GetBranchRequest& request) const;

        /**
         * A Callable wrapper for GetBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBranchOutcomeCallable GetBranchCallable(const Model::GetBranchRequest& request) const;

        /**
         * An Async wrapper for GetBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBranchAsync(const Model::GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the domain information for an Amplify app. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainAssociationOutcome GetDomainAssociation(const Model::GetDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainAssociationOutcomeCallable GetDomainAssociationCallable(const Model::GetDomainAssociationRequest& request) const;

        /**
         * An Async wrapper for GetDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainAssociationAsync(const Model::GetDomainAssociationRequest& request, const GetDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a job for a branch of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the webhook information that corresponds to a specified webhook ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebhookOutcome GetWebhook(const Model::GetWebhookRequest& request) const;

        /**
         * A Callable wrapper for GetWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebhookOutcomeCallable GetWebhookCallable(const Model::GetWebhookRequest& request) const;

        /**
         * An Async wrapper for GetWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebhookAsync(const Model::GetWebhookRequest& request, const GetWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of the existing Amplify apps. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsOutcomeCallable ListAppsCallable(const Model::ListAppsRequest& request) const;

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsAsync(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of artifacts for a specified app, branch, and job.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const Model::ListArtifactsRequest& request) const;

        /**
         * An Async wrapper for ListArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListArtifactsAsync(const Model::ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the backend environments for an Amplify app. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBackendEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackendEnvironmentsOutcome ListBackendEnvironments(const Model::ListBackendEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListBackendEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackendEnvironmentsOutcomeCallable ListBackendEnvironmentsCallable(const Model::ListBackendEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for ListBackendEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackendEnvironmentsAsync(const Model::ListBackendEnvironmentsRequest& request, const ListBackendEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the branches of an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBranchesOutcome ListBranches(const Model::ListBranchesRequest& request) const;

        /**
         * A Callable wrapper for ListBranches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBranchesOutcomeCallable ListBranchesCallable(const Model::ListBranchesRequest& request) const;

        /**
         * An Async wrapper for ListBranches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBranchesAsync(const Model::ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the domain associations for an Amplify app. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainAssociationsOutcome ListDomainAssociations(const Model::ListDomainAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListDomainAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainAssociationsOutcomeCallable ListDomainAssociationsCallable(const Model::ListDomainAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListDomainAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainAssociationsAsync(const Model::ListDomainAssociationsRequest& request, const ListDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the jobs for a branch of an Amplify app. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of tags for a specified Amazon Resource Name (ARN).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of webhooks for an Amplify app. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebhooksOutcome ListWebhooks(const Model::ListWebhooksRequest& request) const;

        /**
         * A Callable wrapper for ListWebhooks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebhooksOutcomeCallable ListWebhooksCallable(const Model::ListWebhooksRequest& request) const;

        /**
         * An Async wrapper for ListWebhooks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebhooksAsync(const Model::ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts a deployment for a manually deployed app. Manually deployed apps are
         * not connected to a repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeploymentOutcome StartDeployment(const Model::StartDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StartDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeploymentOutcomeCallable StartDeploymentCallable(const Model::StartDeploymentRequest& request) const;

        /**
         * An Async wrapper for StartDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeploymentAsync(const Model::StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts a new job for a branch of an Amplify app. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobOutcome StartJob(const Model::StartJobRequest& request) const;

        /**
         * A Callable wrapper for StartJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartJobOutcomeCallable StartJobCallable(const Model::StartJobRequest& request) const;

        /**
         * An Async wrapper for StartJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartJobAsync(const Model::StartJobRequest& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopJobOutcomeCallable StopJobCallable(const Model::StopJobRequest& request) const;

        /**
         * An Async wrapper for StopJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopJobAsync(const Model::StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Tags the resource with a tag key and value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Untags a resource with a specified Amazon Resource Name (ARN).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates an existing Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * A Callable wrapper for UpdateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppOutcomeCallable UpdateAppCallable(const Model::UpdateAppRequest& request) const;

        /**
         * An Async wrapper for UpdateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a branch for an Amplify app. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBranchOutcome UpdateBranch(const Model::UpdateBranchRequest& request) const;

        /**
         * A Callable wrapper for UpdateBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBranchOutcomeCallable UpdateBranchCallable(const Model::UpdateBranchRequest& request) const;

        /**
         * An Async wrapper for UpdateBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBranchAsync(const Model::UpdateBranchRequest& request, const UpdateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new domain association for an Amplify app.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainAssociationOutcome UpdateDomainAssociation(const Model::UpdateDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainAssociationOutcomeCallable UpdateDomainAssociationCallable(const Model::UpdateDomainAssociationRequest& request) const;

        /**
         * An Async wrapper for UpdateDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainAssociationAsync(const Model::UpdateDomainAssociationRequest& request, const UpdateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a webhook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebhookOutcome UpdateWebhook(const Model::UpdateWebhookRequest& request) const;

        /**
         * A Callable wrapper for UpdateWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebhookOutcomeCallable UpdateWebhookCallable(const Model::UpdateWebhookRequest& request) const;

        /**
         * An Async wrapper for UpdateWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWebhookAsync(const Model::UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
