/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifybackend/AmplifyBackendServiceClientModel.h>

namespace Aws
{
namespace AmplifyBackend
{
  /**
   * <p>AWS Amplify Admin API</p>
   */
  class AWS_AMPLIFYBACKEND_API AmplifyBackendClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AmplifyBackendClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyBackendClient(const Aws::AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration = Aws::AmplifyBackend::AmplifyBackendClientConfiguration(),
                             std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyBackendClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG),
                             const Aws::AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration = Aws::AmplifyBackend::AmplifyBackendClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyBackendClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyBackendEndpointProvider>(ALLOCATION_TAG),
                             const Aws::AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration = Aws::AmplifyBackend::AmplifyBackendClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyBackendClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyBackendClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyBackendClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AmplifyBackendClient();

        /**
         * <p>This operation clones an existing backend.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CloneBackend">AWS
         * API Reference</a></p>
         */
        virtual Model::CloneBackendOutcome CloneBackend(const Model::CloneBackendRequest& request) const;

        /**
         * A Callable wrapper for CloneBackend that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloneBackendOutcomeCallable CloneBackendCallable(const Model::CloneBackendRequest& request) const;

        /**
         * An Async wrapper for CloneBackend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloneBackendAsync(const Model::CloneBackendRequest& request, const CloneBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation creates a backend for an Amplify app. Backends are
         * automatically created at the time of app creation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackend">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendOutcome CreateBackend(const Model::CreateBackendRequest& request) const;

        /**
         * A Callable wrapper for CreateBackend that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackendOutcomeCallable CreateBackendCallable(const Model::CreateBackendRequest& request) const;

        /**
         * An Async wrapper for CreateBackend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackendAsync(const Model::CreateBackendRequest& request, const CreateBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendAPIOutcome CreateBackendAPI(const Model::CreateBackendAPIRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendAPI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackendAPIOutcomeCallable CreateBackendAPICallable(const Model::CreateBackendAPIRequest& request) const;

        /**
         * An Async wrapper for CreateBackendAPI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackendAPIAsync(const Model::CreateBackendAPIRequest& request, const CreateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new backend authentication resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendAuthOutcome CreateBackendAuth(const Model::CreateBackendAuthRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackendAuthOutcomeCallable CreateBackendAuthCallable(const Model::CreateBackendAuthRequest& request) const;

        /**
         * An Async wrapper for CreateBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackendAuthAsync(const Model::CreateBackendAuthRequest& request, const CreateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a config object for a backend.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendConfigOutcome CreateBackendConfig(const Model::CreateBackendConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackendConfigOutcomeCallable CreateBackendConfigCallable(const Model::CreateBackendConfigRequest& request) const;

        /**
         * An Async wrapper for CreateBackendConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackendConfigAsync(const Model::CreateBackendConfigRequest& request, const CreateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendStorageOutcome CreateBackendStorage(const Model::CreateBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackendStorageOutcomeCallable CreateBackendStorageCallable(const Model::CreateBackendStorageRequest& request) const;

        /**
         * An Async wrapper for CreateBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackendStorageAsync(const Model::CreateBackendStorageRequest& request, const CreateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a one-time challenge code to authenticate a user into your Amplify
         * Admin UI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTokenOutcome CreateToken(const Model::CreateTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTokenOutcomeCallable CreateTokenCallable(const Model::CreateTokenRequest& request) const;

        /**
         * An Async wrapper for CreateToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTokenAsync(const Model::CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an existing environment from your Amplify project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackend">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendOutcome DeleteBackend(const Model::DeleteBackendRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackend that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackendOutcomeCallable DeleteBackendCallable(const Model::DeleteBackendRequest& request) const;

        /**
         * An Async wrapper for DeleteBackend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackendAsync(const Model::DeleteBackendRequest& request, const DeleteBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendAPIOutcome DeleteBackendAPI(const Model::DeleteBackendAPIRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackendAPI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackendAPIOutcomeCallable DeleteBackendAPICallable(const Model::DeleteBackendAPIRequest& request) const;

        /**
         * An Async wrapper for DeleteBackendAPI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackendAPIAsync(const Model::DeleteBackendAPIRequest& request, const DeleteBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing backend authentication resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendAuthOutcome DeleteBackendAuth(const Model::DeleteBackendAuthRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackendAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackendAuthOutcomeCallable DeleteBackendAuthCallable(const Model::DeleteBackendAuthRequest& request) const;

        /**
         * An Async wrapper for DeleteBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackendAuthAsync(const Model::DeleteBackendAuthRequest& request, const DeleteBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendStorageOutcome DeleteBackendStorage(const Model::DeleteBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackendStorageOutcomeCallable DeleteBackendStorageCallable(const Model::DeleteBackendStorageRequest& request) const;

        /**
         * An Async wrapper for DeleteBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackendStorageAsync(const Model::DeleteBackendStorageRequest& request, const DeleteBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the challenge token based on the given appId and
         * sessionId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteToken">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTokenOutcome DeleteToken(const Model::DeleteTokenRequest& request) const;

        /**
         * A Callable wrapper for DeleteToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTokenOutcomeCallable DeleteTokenCallable(const Model::DeleteTokenRequest& request) const;

        /**
         * An Async wrapper for DeleteToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTokenAsync(const Model::DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a model schema for an existing backend API resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GenerateBackendAPIModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateBackendAPIModelsOutcome GenerateBackendAPIModels(const Model::GenerateBackendAPIModelsRequest& request) const;

        /**
         * A Callable wrapper for GenerateBackendAPIModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateBackendAPIModelsOutcomeCallable GenerateBackendAPIModelsCallable(const Model::GenerateBackendAPIModelsRequest& request) const;

        /**
         * An Async wrapper for GenerateBackendAPIModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateBackendAPIModelsAsync(const Model::GenerateBackendAPIModelsRequest& request, const GenerateBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides project-level details for your Amplify UI project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackend">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendOutcome GetBackend(const Model::GetBackendRequest& request) const;

        /**
         * A Callable wrapper for GetBackend that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackendOutcomeCallable GetBackendCallable(const Model::GetBackendRequest& request) const;

        /**
         * An Async wrapper for GetBackend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackendAsync(const Model::GetBackendRequest& request, const GetBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details for a backend API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAPIOutcome GetBackendAPI(const Model::GetBackendAPIRequest& request) const;

        /**
         * A Callable wrapper for GetBackendAPI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackendAPIOutcomeCallable GetBackendAPICallable(const Model::GetBackendAPIRequest& request) const;

        /**
         * An Async wrapper for GetBackendAPI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackendAPIAsync(const Model::GetBackendAPIRequest& request, const GetBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a model schema for existing backend API resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAPIModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAPIModelsOutcome GetBackendAPIModels(const Model::GetBackendAPIModelsRequest& request) const;

        /**
         * A Callable wrapper for GetBackendAPIModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackendAPIModelsOutcomeCallable GetBackendAPIModelsCallable(const Model::GetBackendAPIModelsRequest& request) const;

        /**
         * An Async wrapper for GetBackendAPIModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackendAPIModelsAsync(const Model::GetBackendAPIModelsRequest& request, const GetBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a backend auth details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAuthOutcome GetBackendAuth(const Model::GetBackendAuthRequest& request) const;

        /**
         * A Callable wrapper for GetBackendAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackendAuthOutcomeCallable GetBackendAuthCallable(const Model::GetBackendAuthRequest& request) const;

        /**
         * An Async wrapper for GetBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackendAuthAsync(const Model::GetBackendAuthRequest& request, const GetBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendJobOutcome GetBackendJob(const Model::GetBackendJobRequest& request) const;

        /**
         * A Callable wrapper for GetBackendJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackendJobOutcomeCallable GetBackendJobCallable(const Model::GetBackendJobRequest& request) const;

        /**
         * An Async wrapper for GetBackendJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackendJobAsync(const Model::GetBackendJobRequest& request, const GetBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details for a backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendStorageOutcome GetBackendStorage(const Model::GetBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for GetBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackendStorageOutcomeCallable GetBackendStorageCallable(const Model::GetBackendStorageRequest& request) const;

        /**
         * An Async wrapper for GetBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackendStorageAsync(const Model::GetBackendStorageRequest& request, const GetBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the challenge token based on the given appId and
         * sessionId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTokenOutcome GetToken(const Model::GetTokenRequest& request) const;

        /**
         * A Callable wrapper for GetToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTokenOutcomeCallable GetTokenCallable(const Model::GetTokenRequest& request) const;

        /**
         * An Async wrapper for GetToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTokenAsync(const Model::GetTokenRequest& request, const GetTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports an existing backend authentication resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ImportBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportBackendAuthOutcome ImportBackendAuth(const Model::ImportBackendAuthRequest& request) const;

        /**
         * A Callable wrapper for ImportBackendAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportBackendAuthOutcomeCallable ImportBackendAuthCallable(const Model::ImportBackendAuthRequest& request) const;

        /**
         * An Async wrapper for ImportBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportBackendAuthAsync(const Model::ImportBackendAuthRequest& request, const ImportBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports an existing backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ImportBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportBackendStorageOutcome ImportBackendStorage(const Model::ImportBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for ImportBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportBackendStorageOutcomeCallable ImportBackendStorageCallable(const Model::ImportBackendStorageRequest& request) const;

        /**
         * An Async wrapper for ImportBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportBackendStorageAsync(const Model::ImportBackendStorageRequest& request, const ImportBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the jobs for the backend of an Amplify app.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ListBackendJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackendJobsOutcome ListBackendJobs(const Model::ListBackendJobsRequest& request) const;

        /**
         * A Callable wrapper for ListBackendJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackendJobsOutcomeCallable ListBackendJobsCallable(const Model::ListBackendJobsRequest& request) const;

        /**
         * An Async wrapper for ListBackendJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackendJobsAsync(const Model::ListBackendJobsRequest& request, const ListBackendJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The list of S3 buckets in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ListS3Buckets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListS3BucketsOutcome ListS3Buckets(const Model::ListS3BucketsRequest& request) const;

        /**
         * A Callable wrapper for ListS3Buckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListS3BucketsOutcomeCallable ListS3BucketsCallable(const Model::ListS3BucketsRequest& request) const;

        /**
         * An Async wrapper for ListS3Buckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListS3BucketsAsync(const Model::ListS3BucketsRequest& request, const ListS3BucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes all backend environments from your Amplify project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/RemoveAllBackends">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAllBackendsOutcome RemoveAllBackends(const Model::RemoveAllBackendsRequest& request) const;

        /**
         * A Callable wrapper for RemoveAllBackends that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAllBackendsOutcomeCallable RemoveAllBackendsCallable(const Model::RemoveAllBackendsRequest& request) const;

        /**
         * An Async wrapper for RemoveAllBackends that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAllBackendsAsync(const Model::RemoveAllBackendsRequest& request, const RemoveAllBackendsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the AWS resources required to access the Amplify Admin
         * UI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/RemoveBackendConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveBackendConfigOutcome RemoveBackendConfig(const Model::RemoveBackendConfigRequest& request) const;

        /**
         * A Callable wrapper for RemoveBackendConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveBackendConfigOutcomeCallable RemoveBackendConfigCallable(const Model::RemoveBackendConfigRequest& request) const;

        /**
         * An Async wrapper for RemoveBackendConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveBackendConfigAsync(const Model::RemoveBackendConfigRequest& request, const RemoveBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendAPIOutcome UpdateBackendAPI(const Model::UpdateBackendAPIRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackendAPI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBackendAPIOutcomeCallable UpdateBackendAPICallable(const Model::UpdateBackendAPIRequest& request) const;

        /**
         * An Async wrapper for UpdateBackendAPI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBackendAPIAsync(const Model::UpdateBackendAPIRequest& request, const UpdateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing backend authentication resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendAuthOutcome UpdateBackendAuth(const Model::UpdateBackendAuthRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackendAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBackendAuthOutcomeCallable UpdateBackendAuthCallable(const Model::UpdateBackendAuthRequest& request) const;

        /**
         * An Async wrapper for UpdateBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBackendAuthAsync(const Model::UpdateBackendAuthRequest& request, const UpdateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the AWS resources required to access the Amplify Admin
         * UI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendConfigOutcome UpdateBackendConfig(const Model::UpdateBackendConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackendConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBackendConfigOutcomeCallable UpdateBackendConfigCallable(const Model::UpdateBackendConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateBackendConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBackendConfigAsync(const Model::UpdateBackendConfigRequest& request, const UpdateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specific job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendJobOutcome UpdateBackendJob(const Model::UpdateBackendJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackendJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBackendJobOutcomeCallable UpdateBackendJobCallable(const Model::UpdateBackendJobRequest& request) const;

        /**
         * An Async wrapper for UpdateBackendJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBackendJobAsync(const Model::UpdateBackendJobRequest& request, const UpdateBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendStorageOutcome UpdateBackendStorage(const Model::UpdateBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBackendStorageOutcomeCallable UpdateBackendStorageCallable(const Model::UpdateBackendStorageRequest& request) const;

        /**
         * An Async wrapper for UpdateBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBackendStorageAsync(const Model::UpdateBackendStorageRequest& request, const UpdateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AmplifyBackendEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AmplifyBackendClient>;
      void init(const AmplifyBackendClientConfiguration& clientConfiguration);

      AmplifyBackendClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AmplifyBackendEndpointProviderBase> m_endpointProvider;
  };

} // namespace AmplifyBackend
} // namespace Aws
