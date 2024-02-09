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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AmplifyBackendClientConfiguration ClientConfigurationType;
      typedef AmplifyBackendEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyBackendClient(const Aws::AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration = Aws::AmplifyBackend::AmplifyBackendClientConfiguration(),
                             std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyBackendClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::AmplifyBackend::AmplifyBackendClientConfiguration& clientConfiguration = Aws::AmplifyBackend::AmplifyBackendClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyBackendClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AmplifyBackendEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename CloneBackendRequestT = Model::CloneBackendRequest>
        Model::CloneBackendOutcomeCallable CloneBackendCallable(const CloneBackendRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::CloneBackend, request);
        }

        /**
         * An Async wrapper for CloneBackend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CloneBackendRequestT = Model::CloneBackendRequest>
        void CloneBackendAsync(const CloneBackendRequestT& request, const CloneBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::CloneBackend, request, handler, context);
        }

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
        template<typename CreateBackendRequestT = Model::CreateBackendRequest>
        Model::CreateBackendOutcomeCallable CreateBackendCallable(const CreateBackendRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::CreateBackend, request);
        }

        /**
         * An Async wrapper for CreateBackend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackendRequestT = Model::CreateBackendRequest>
        void CreateBackendAsync(const CreateBackendRequestT& request, const CreateBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::CreateBackend, request, handler, context);
        }

        /**
         * <p>Creates a new backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendAPIOutcome CreateBackendAPI(const Model::CreateBackendAPIRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendAPI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBackendAPIRequestT = Model::CreateBackendAPIRequest>
        Model::CreateBackendAPIOutcomeCallable CreateBackendAPICallable(const CreateBackendAPIRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::CreateBackendAPI, request);
        }

        /**
         * An Async wrapper for CreateBackendAPI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackendAPIRequestT = Model::CreateBackendAPIRequest>
        void CreateBackendAPIAsync(const CreateBackendAPIRequestT& request, const CreateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::CreateBackendAPI, request, handler, context);
        }

        /**
         * <p>Creates a new backend authentication resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendAuthOutcome CreateBackendAuth(const Model::CreateBackendAuthRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBackendAuthRequestT = Model::CreateBackendAuthRequest>
        Model::CreateBackendAuthOutcomeCallable CreateBackendAuthCallable(const CreateBackendAuthRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::CreateBackendAuth, request);
        }

        /**
         * An Async wrapper for CreateBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackendAuthRequestT = Model::CreateBackendAuthRequest>
        void CreateBackendAuthAsync(const CreateBackendAuthRequestT& request, const CreateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::CreateBackendAuth, request, handler, context);
        }

        /**
         * <p>Creates a config object for a backend.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendConfigOutcome CreateBackendConfig(const Model::CreateBackendConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBackendConfigRequestT = Model::CreateBackendConfigRequest>
        Model::CreateBackendConfigOutcomeCallable CreateBackendConfigCallable(const CreateBackendConfigRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::CreateBackendConfig, request);
        }

        /**
         * An Async wrapper for CreateBackendConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackendConfigRequestT = Model::CreateBackendConfigRequest>
        void CreateBackendConfigAsync(const CreateBackendConfigRequestT& request, const CreateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::CreateBackendConfig, request, handler, context);
        }

        /**
         * <p>Creates a backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendStorageOutcome CreateBackendStorage(const Model::CreateBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for CreateBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBackendStorageRequestT = Model::CreateBackendStorageRequest>
        Model::CreateBackendStorageOutcomeCallable CreateBackendStorageCallable(const CreateBackendStorageRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::CreateBackendStorage, request);
        }

        /**
         * An Async wrapper for CreateBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackendStorageRequestT = Model::CreateBackendStorageRequest>
        void CreateBackendStorageAsync(const CreateBackendStorageRequestT& request, const CreateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::CreateBackendStorage, request, handler, context);
        }

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
        template<typename CreateTokenRequestT = Model::CreateTokenRequest>
        Model::CreateTokenOutcomeCallable CreateTokenCallable(const CreateTokenRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::CreateToken, request);
        }

        /**
         * An Async wrapper for CreateToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTokenRequestT = Model::CreateTokenRequest>
        void CreateTokenAsync(const CreateTokenRequestT& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::CreateToken, request, handler, context);
        }

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
        template<typename DeleteBackendRequestT = Model::DeleteBackendRequest>
        Model::DeleteBackendOutcomeCallable DeleteBackendCallable(const DeleteBackendRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::DeleteBackend, request);
        }

        /**
         * An Async wrapper for DeleteBackend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackendRequestT = Model::DeleteBackendRequest>
        void DeleteBackendAsync(const DeleteBackendRequestT& request, const DeleteBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::DeleteBackend, request, handler, context);
        }

        /**
         * <p>Deletes an existing backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendAPIOutcome DeleteBackendAPI(const Model::DeleteBackendAPIRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackendAPI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBackendAPIRequestT = Model::DeleteBackendAPIRequest>
        Model::DeleteBackendAPIOutcomeCallable DeleteBackendAPICallable(const DeleteBackendAPIRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::DeleteBackendAPI, request);
        }

        /**
         * An Async wrapper for DeleteBackendAPI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackendAPIRequestT = Model::DeleteBackendAPIRequest>
        void DeleteBackendAPIAsync(const DeleteBackendAPIRequestT& request, const DeleteBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::DeleteBackendAPI, request, handler, context);
        }

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
        template<typename DeleteBackendAuthRequestT = Model::DeleteBackendAuthRequest>
        Model::DeleteBackendAuthOutcomeCallable DeleteBackendAuthCallable(const DeleteBackendAuthRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::DeleteBackendAuth, request);
        }

        /**
         * An Async wrapper for DeleteBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackendAuthRequestT = Model::DeleteBackendAuthRequest>
        void DeleteBackendAuthAsync(const DeleteBackendAuthRequestT& request, const DeleteBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::DeleteBackendAuth, request, handler, context);
        }

        /**
         * <p>Removes the specified backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendStorageOutcome DeleteBackendStorage(const Model::DeleteBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBackendStorageRequestT = Model::DeleteBackendStorageRequest>
        Model::DeleteBackendStorageOutcomeCallable DeleteBackendStorageCallable(const DeleteBackendStorageRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::DeleteBackendStorage, request);
        }

        /**
         * An Async wrapper for DeleteBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackendStorageRequestT = Model::DeleteBackendStorageRequest>
        void DeleteBackendStorageAsync(const DeleteBackendStorageRequestT& request, const DeleteBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::DeleteBackendStorage, request, handler, context);
        }

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
        template<typename DeleteTokenRequestT = Model::DeleteTokenRequest>
        Model::DeleteTokenOutcomeCallable DeleteTokenCallable(const DeleteTokenRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::DeleteToken, request);
        }

        /**
         * An Async wrapper for DeleteToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTokenRequestT = Model::DeleteTokenRequest>
        void DeleteTokenAsync(const DeleteTokenRequestT& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::DeleteToken, request, handler, context);
        }

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
        template<typename GenerateBackendAPIModelsRequestT = Model::GenerateBackendAPIModelsRequest>
        Model::GenerateBackendAPIModelsOutcomeCallable GenerateBackendAPIModelsCallable(const GenerateBackendAPIModelsRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::GenerateBackendAPIModels, request);
        }

        /**
         * An Async wrapper for GenerateBackendAPIModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateBackendAPIModelsRequestT = Model::GenerateBackendAPIModelsRequest>
        void GenerateBackendAPIModelsAsync(const GenerateBackendAPIModelsRequestT& request, const GenerateBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::GenerateBackendAPIModels, request, handler, context);
        }

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
        template<typename GetBackendRequestT = Model::GetBackendRequest>
        Model::GetBackendOutcomeCallable GetBackendCallable(const GetBackendRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::GetBackend, request);
        }

        /**
         * An Async wrapper for GetBackend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackendRequestT = Model::GetBackendRequest>
        void GetBackendAsync(const GetBackendRequestT& request, const GetBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::GetBackend, request, handler, context);
        }

        /**
         * <p>Gets the details for a backend API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAPIOutcome GetBackendAPI(const Model::GetBackendAPIRequest& request) const;

        /**
         * A Callable wrapper for GetBackendAPI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBackendAPIRequestT = Model::GetBackendAPIRequest>
        Model::GetBackendAPIOutcomeCallable GetBackendAPICallable(const GetBackendAPIRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::GetBackendAPI, request);
        }

        /**
         * An Async wrapper for GetBackendAPI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackendAPIRequestT = Model::GetBackendAPIRequest>
        void GetBackendAPIAsync(const GetBackendAPIRequestT& request, const GetBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::GetBackendAPI, request, handler, context);
        }

        /**
         * <p>Gets a model introspection schema for an existing backend API
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAPIModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAPIModelsOutcome GetBackendAPIModels(const Model::GetBackendAPIModelsRequest& request) const;

        /**
         * A Callable wrapper for GetBackendAPIModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBackendAPIModelsRequestT = Model::GetBackendAPIModelsRequest>
        Model::GetBackendAPIModelsOutcomeCallable GetBackendAPIModelsCallable(const GetBackendAPIModelsRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::GetBackendAPIModels, request);
        }

        /**
         * An Async wrapper for GetBackendAPIModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackendAPIModelsRequestT = Model::GetBackendAPIModelsRequest>
        void GetBackendAPIModelsAsync(const GetBackendAPIModelsRequestT& request, const GetBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::GetBackendAPIModels, request, handler, context);
        }

        /**
         * <p>Gets a backend auth details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAuthOutcome GetBackendAuth(const Model::GetBackendAuthRequest& request) const;

        /**
         * A Callable wrapper for GetBackendAuth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBackendAuthRequestT = Model::GetBackendAuthRequest>
        Model::GetBackendAuthOutcomeCallable GetBackendAuthCallable(const GetBackendAuthRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::GetBackendAuth, request);
        }

        /**
         * An Async wrapper for GetBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackendAuthRequestT = Model::GetBackendAuthRequest>
        void GetBackendAuthAsync(const GetBackendAuthRequestT& request, const GetBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::GetBackendAuth, request, handler, context);
        }

        /**
         * <p>Returns information about a specific job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendJobOutcome GetBackendJob(const Model::GetBackendJobRequest& request) const;

        /**
         * A Callable wrapper for GetBackendJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBackendJobRequestT = Model::GetBackendJobRequest>
        Model::GetBackendJobOutcomeCallable GetBackendJobCallable(const GetBackendJobRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::GetBackendJob, request);
        }

        /**
         * An Async wrapper for GetBackendJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackendJobRequestT = Model::GetBackendJobRequest>
        void GetBackendJobAsync(const GetBackendJobRequestT& request, const GetBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::GetBackendJob, request, handler, context);
        }

        /**
         * <p>Gets details for a backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendStorageOutcome GetBackendStorage(const Model::GetBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for GetBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBackendStorageRequestT = Model::GetBackendStorageRequest>
        Model::GetBackendStorageOutcomeCallable GetBackendStorageCallable(const GetBackendStorageRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::GetBackendStorage, request);
        }

        /**
         * An Async wrapper for GetBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackendStorageRequestT = Model::GetBackendStorageRequest>
        void GetBackendStorageAsync(const GetBackendStorageRequestT& request, const GetBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::GetBackendStorage, request, handler, context);
        }

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
        template<typename GetTokenRequestT = Model::GetTokenRequest>
        Model::GetTokenOutcomeCallable GetTokenCallable(const GetTokenRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::GetToken, request);
        }

        /**
         * An Async wrapper for GetToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTokenRequestT = Model::GetTokenRequest>
        void GetTokenAsync(const GetTokenRequestT& request, const GetTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::GetToken, request, handler, context);
        }

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
        template<typename ImportBackendAuthRequestT = Model::ImportBackendAuthRequest>
        Model::ImportBackendAuthOutcomeCallable ImportBackendAuthCallable(const ImportBackendAuthRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::ImportBackendAuth, request);
        }

        /**
         * An Async wrapper for ImportBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportBackendAuthRequestT = Model::ImportBackendAuthRequest>
        void ImportBackendAuthAsync(const ImportBackendAuthRequestT& request, const ImportBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::ImportBackendAuth, request, handler, context);
        }

        /**
         * <p>Imports an existing backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ImportBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportBackendStorageOutcome ImportBackendStorage(const Model::ImportBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for ImportBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportBackendStorageRequestT = Model::ImportBackendStorageRequest>
        Model::ImportBackendStorageOutcomeCallable ImportBackendStorageCallable(const ImportBackendStorageRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::ImportBackendStorage, request);
        }

        /**
         * An Async wrapper for ImportBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportBackendStorageRequestT = Model::ImportBackendStorageRequest>
        void ImportBackendStorageAsync(const ImportBackendStorageRequestT& request, const ImportBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::ImportBackendStorage, request, handler, context);
        }

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
        template<typename ListBackendJobsRequestT = Model::ListBackendJobsRequest>
        Model::ListBackendJobsOutcomeCallable ListBackendJobsCallable(const ListBackendJobsRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::ListBackendJobs, request);
        }

        /**
         * An Async wrapper for ListBackendJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackendJobsRequestT = Model::ListBackendJobsRequest>
        void ListBackendJobsAsync(const ListBackendJobsRequestT& request, const ListBackendJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::ListBackendJobs, request, handler, context);
        }

        /**
         * <p>The list of S3 buckets in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ListS3Buckets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListS3BucketsOutcome ListS3Buckets(const Model::ListS3BucketsRequest& request) const;

        /**
         * A Callable wrapper for ListS3Buckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListS3BucketsRequestT = Model::ListS3BucketsRequest>
        Model::ListS3BucketsOutcomeCallable ListS3BucketsCallable(const ListS3BucketsRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::ListS3Buckets, request);
        }

        /**
         * An Async wrapper for ListS3Buckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListS3BucketsRequestT = Model::ListS3BucketsRequest>
        void ListS3BucketsAsync(const ListS3BucketsRequestT& request, const ListS3BucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::ListS3Buckets, request, handler, context);
        }

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
        template<typename RemoveAllBackendsRequestT = Model::RemoveAllBackendsRequest>
        Model::RemoveAllBackendsOutcomeCallable RemoveAllBackendsCallable(const RemoveAllBackendsRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::RemoveAllBackends, request);
        }

        /**
         * An Async wrapper for RemoveAllBackends that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveAllBackendsRequestT = Model::RemoveAllBackendsRequest>
        void RemoveAllBackendsAsync(const RemoveAllBackendsRequestT& request, const RemoveAllBackendsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::RemoveAllBackends, request, handler, context);
        }

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
        template<typename RemoveBackendConfigRequestT = Model::RemoveBackendConfigRequest>
        Model::RemoveBackendConfigOutcomeCallable RemoveBackendConfigCallable(const RemoveBackendConfigRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::RemoveBackendConfig, request);
        }

        /**
         * An Async wrapper for RemoveBackendConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveBackendConfigRequestT = Model::RemoveBackendConfigRequest>
        void RemoveBackendConfigAsync(const RemoveBackendConfigRequestT& request, const RemoveBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::RemoveBackendConfig, request, handler, context);
        }

        /**
         * <p>Updates an existing backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendAPIOutcome UpdateBackendAPI(const Model::UpdateBackendAPIRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackendAPI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBackendAPIRequestT = Model::UpdateBackendAPIRequest>
        Model::UpdateBackendAPIOutcomeCallable UpdateBackendAPICallable(const UpdateBackendAPIRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::UpdateBackendAPI, request);
        }

        /**
         * An Async wrapper for UpdateBackendAPI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBackendAPIRequestT = Model::UpdateBackendAPIRequest>
        void UpdateBackendAPIAsync(const UpdateBackendAPIRequestT& request, const UpdateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::UpdateBackendAPI, request, handler, context);
        }

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
        template<typename UpdateBackendAuthRequestT = Model::UpdateBackendAuthRequest>
        Model::UpdateBackendAuthOutcomeCallable UpdateBackendAuthCallable(const UpdateBackendAuthRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::UpdateBackendAuth, request);
        }

        /**
         * An Async wrapper for UpdateBackendAuth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBackendAuthRequestT = Model::UpdateBackendAuthRequest>
        void UpdateBackendAuthAsync(const UpdateBackendAuthRequestT& request, const UpdateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::UpdateBackendAuth, request, handler, context);
        }

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
        template<typename UpdateBackendConfigRequestT = Model::UpdateBackendConfigRequest>
        Model::UpdateBackendConfigOutcomeCallable UpdateBackendConfigCallable(const UpdateBackendConfigRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::UpdateBackendConfig, request);
        }

        /**
         * An Async wrapper for UpdateBackendConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBackendConfigRequestT = Model::UpdateBackendConfigRequest>
        void UpdateBackendConfigAsync(const UpdateBackendConfigRequestT& request, const UpdateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::UpdateBackendConfig, request, handler, context);
        }

        /**
         * <p>Updates a specific job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendJobOutcome UpdateBackendJob(const Model::UpdateBackendJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackendJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBackendJobRequestT = Model::UpdateBackendJobRequest>
        Model::UpdateBackendJobOutcomeCallable UpdateBackendJobCallable(const UpdateBackendJobRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::UpdateBackendJob, request);
        }

        /**
         * An Async wrapper for UpdateBackendJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBackendJobRequestT = Model::UpdateBackendJobRequest>
        void UpdateBackendJobAsync(const UpdateBackendJobRequestT& request, const UpdateBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::UpdateBackendJob, request, handler, context);
        }

        /**
         * <p>Updates an existing backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendStorageOutcome UpdateBackendStorage(const Model::UpdateBackendStorageRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackendStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBackendStorageRequestT = Model::UpdateBackendStorageRequest>
        Model::UpdateBackendStorageOutcomeCallable UpdateBackendStorageCallable(const UpdateBackendStorageRequestT& request) const
        {
            return SubmitCallable(&AmplifyBackendClient::UpdateBackendStorage, request);
        }

        /**
         * An Async wrapper for UpdateBackendStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBackendStorageRequestT = Model::UpdateBackendStorageRequest>
        void UpdateBackendStorageAsync(const UpdateBackendStorageRequestT& request, const UpdateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyBackendClient::UpdateBackendStorage, request, handler, context);
        }


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
