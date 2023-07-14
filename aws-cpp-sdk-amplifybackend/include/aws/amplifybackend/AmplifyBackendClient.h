/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/AmplifyBackendErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifybackend/model/CloneBackendResult.h>
#include <aws/amplifybackend/model/CreateBackendResult.h>
#include <aws/amplifybackend/model/CreateBackendAPIResult.h>
#include <aws/amplifybackend/model/CreateBackendAuthResult.h>
#include <aws/amplifybackend/model/CreateBackendConfigResult.h>
#include <aws/amplifybackend/model/CreateBackendStorageResult.h>
#include <aws/amplifybackend/model/CreateTokenResult.h>
#include <aws/amplifybackend/model/DeleteBackendResult.h>
#include <aws/amplifybackend/model/DeleteBackendAPIResult.h>
#include <aws/amplifybackend/model/DeleteBackendAuthResult.h>
#include <aws/amplifybackend/model/DeleteBackendStorageResult.h>
#include <aws/amplifybackend/model/DeleteTokenResult.h>
#include <aws/amplifybackend/model/GenerateBackendAPIModelsResult.h>
#include <aws/amplifybackend/model/GetBackendResult.h>
#include <aws/amplifybackend/model/GetBackendAPIResult.h>
#include <aws/amplifybackend/model/GetBackendAPIModelsResult.h>
#include <aws/amplifybackend/model/GetBackendAuthResult.h>
#include <aws/amplifybackend/model/GetBackendJobResult.h>
#include <aws/amplifybackend/model/GetBackendStorageResult.h>
#include <aws/amplifybackend/model/GetTokenResult.h>
#include <aws/amplifybackend/model/ImportBackendAuthResult.h>
#include <aws/amplifybackend/model/ImportBackendStorageResult.h>
#include <aws/amplifybackend/model/ListBackendJobsResult.h>
#include <aws/amplifybackend/model/ListS3BucketsResult.h>
#include <aws/amplifybackend/model/RemoveAllBackendsResult.h>
#include <aws/amplifybackend/model/RemoveBackendConfigResult.h>
#include <aws/amplifybackend/model/UpdateBackendAPIResult.h>
#include <aws/amplifybackend/model/UpdateBackendAuthResult.h>
#include <aws/amplifybackend/model/UpdateBackendConfigResult.h>
#include <aws/amplifybackend/model/UpdateBackendJobResult.h>
#include <aws/amplifybackend/model/UpdateBackendStorageResult.h>
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

namespace AmplifyBackend
{

namespace Model
{
        class CloneBackendRequest;
        class CreateBackendRequest;
        class CreateBackendAPIRequest;
        class CreateBackendAuthRequest;
        class CreateBackendConfigRequest;
        class CreateBackendStorageRequest;
        class CreateTokenRequest;
        class DeleteBackendRequest;
        class DeleteBackendAPIRequest;
        class DeleteBackendAuthRequest;
        class DeleteBackendStorageRequest;
        class DeleteTokenRequest;
        class GenerateBackendAPIModelsRequest;
        class GetBackendRequest;
        class GetBackendAPIRequest;
        class GetBackendAPIModelsRequest;
        class GetBackendAuthRequest;
        class GetBackendJobRequest;
        class GetBackendStorageRequest;
        class GetTokenRequest;
        class ImportBackendAuthRequest;
        class ImportBackendStorageRequest;
        class ListBackendJobsRequest;
        class ListS3BucketsRequest;
        class RemoveAllBackendsRequest;
        class RemoveBackendConfigRequest;
        class UpdateBackendAPIRequest;
        class UpdateBackendAuthRequest;
        class UpdateBackendConfigRequest;
        class UpdateBackendJobRequest;
        class UpdateBackendStorageRequest;

        typedef Aws::Utils::Outcome<CloneBackendResult, AmplifyBackendError> CloneBackendOutcome;
        typedef Aws::Utils::Outcome<CreateBackendResult, AmplifyBackendError> CreateBackendOutcome;
        typedef Aws::Utils::Outcome<CreateBackendAPIResult, AmplifyBackendError> CreateBackendAPIOutcome;
        typedef Aws::Utils::Outcome<CreateBackendAuthResult, AmplifyBackendError> CreateBackendAuthOutcome;
        typedef Aws::Utils::Outcome<CreateBackendConfigResult, AmplifyBackendError> CreateBackendConfigOutcome;
        typedef Aws::Utils::Outcome<CreateBackendStorageResult, AmplifyBackendError> CreateBackendStorageOutcome;
        typedef Aws::Utils::Outcome<CreateTokenResult, AmplifyBackendError> CreateTokenOutcome;
        typedef Aws::Utils::Outcome<DeleteBackendResult, AmplifyBackendError> DeleteBackendOutcome;
        typedef Aws::Utils::Outcome<DeleteBackendAPIResult, AmplifyBackendError> DeleteBackendAPIOutcome;
        typedef Aws::Utils::Outcome<DeleteBackendAuthResult, AmplifyBackendError> DeleteBackendAuthOutcome;
        typedef Aws::Utils::Outcome<DeleteBackendStorageResult, AmplifyBackendError> DeleteBackendStorageOutcome;
        typedef Aws::Utils::Outcome<DeleteTokenResult, AmplifyBackendError> DeleteTokenOutcome;
        typedef Aws::Utils::Outcome<GenerateBackendAPIModelsResult, AmplifyBackendError> GenerateBackendAPIModelsOutcome;
        typedef Aws::Utils::Outcome<GetBackendResult, AmplifyBackendError> GetBackendOutcome;
        typedef Aws::Utils::Outcome<GetBackendAPIResult, AmplifyBackendError> GetBackendAPIOutcome;
        typedef Aws::Utils::Outcome<GetBackendAPIModelsResult, AmplifyBackendError> GetBackendAPIModelsOutcome;
        typedef Aws::Utils::Outcome<GetBackendAuthResult, AmplifyBackendError> GetBackendAuthOutcome;
        typedef Aws::Utils::Outcome<GetBackendJobResult, AmplifyBackendError> GetBackendJobOutcome;
        typedef Aws::Utils::Outcome<GetBackendStorageResult, AmplifyBackendError> GetBackendStorageOutcome;
        typedef Aws::Utils::Outcome<GetTokenResult, AmplifyBackendError> GetTokenOutcome;
        typedef Aws::Utils::Outcome<ImportBackendAuthResult, AmplifyBackendError> ImportBackendAuthOutcome;
        typedef Aws::Utils::Outcome<ImportBackendStorageResult, AmplifyBackendError> ImportBackendStorageOutcome;
        typedef Aws::Utils::Outcome<ListBackendJobsResult, AmplifyBackendError> ListBackendJobsOutcome;
        typedef Aws::Utils::Outcome<ListS3BucketsResult, AmplifyBackendError> ListS3BucketsOutcome;
        typedef Aws::Utils::Outcome<RemoveAllBackendsResult, AmplifyBackendError> RemoveAllBackendsOutcome;
        typedef Aws::Utils::Outcome<RemoveBackendConfigResult, AmplifyBackendError> RemoveBackendConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateBackendAPIResult, AmplifyBackendError> UpdateBackendAPIOutcome;
        typedef Aws::Utils::Outcome<UpdateBackendAuthResult, AmplifyBackendError> UpdateBackendAuthOutcome;
        typedef Aws::Utils::Outcome<UpdateBackendConfigResult, AmplifyBackendError> UpdateBackendConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateBackendJobResult, AmplifyBackendError> UpdateBackendJobOutcome;
        typedef Aws::Utils::Outcome<UpdateBackendStorageResult, AmplifyBackendError> UpdateBackendStorageOutcome;

        typedef std::future<CloneBackendOutcome> CloneBackendOutcomeCallable;
        typedef std::future<CreateBackendOutcome> CreateBackendOutcomeCallable;
        typedef std::future<CreateBackendAPIOutcome> CreateBackendAPIOutcomeCallable;
        typedef std::future<CreateBackendAuthOutcome> CreateBackendAuthOutcomeCallable;
        typedef std::future<CreateBackendConfigOutcome> CreateBackendConfigOutcomeCallable;
        typedef std::future<CreateBackendStorageOutcome> CreateBackendStorageOutcomeCallable;
        typedef std::future<CreateTokenOutcome> CreateTokenOutcomeCallable;
        typedef std::future<DeleteBackendOutcome> DeleteBackendOutcomeCallable;
        typedef std::future<DeleteBackendAPIOutcome> DeleteBackendAPIOutcomeCallable;
        typedef std::future<DeleteBackendAuthOutcome> DeleteBackendAuthOutcomeCallable;
        typedef std::future<DeleteBackendStorageOutcome> DeleteBackendStorageOutcomeCallable;
        typedef std::future<DeleteTokenOutcome> DeleteTokenOutcomeCallable;
        typedef std::future<GenerateBackendAPIModelsOutcome> GenerateBackendAPIModelsOutcomeCallable;
        typedef std::future<GetBackendOutcome> GetBackendOutcomeCallable;
        typedef std::future<GetBackendAPIOutcome> GetBackendAPIOutcomeCallable;
        typedef std::future<GetBackendAPIModelsOutcome> GetBackendAPIModelsOutcomeCallable;
        typedef std::future<GetBackendAuthOutcome> GetBackendAuthOutcomeCallable;
        typedef std::future<GetBackendJobOutcome> GetBackendJobOutcomeCallable;
        typedef std::future<GetBackendStorageOutcome> GetBackendStorageOutcomeCallable;
        typedef std::future<GetTokenOutcome> GetTokenOutcomeCallable;
        typedef std::future<ImportBackendAuthOutcome> ImportBackendAuthOutcomeCallable;
        typedef std::future<ImportBackendStorageOutcome> ImportBackendStorageOutcomeCallable;
        typedef std::future<ListBackendJobsOutcome> ListBackendJobsOutcomeCallable;
        typedef std::future<ListS3BucketsOutcome> ListS3BucketsOutcomeCallable;
        typedef std::future<RemoveAllBackendsOutcome> RemoveAllBackendsOutcomeCallable;
        typedef std::future<RemoveBackendConfigOutcome> RemoveBackendConfigOutcomeCallable;
        typedef std::future<UpdateBackendAPIOutcome> UpdateBackendAPIOutcomeCallable;
        typedef std::future<UpdateBackendAuthOutcome> UpdateBackendAuthOutcomeCallable;
        typedef std::future<UpdateBackendConfigOutcome> UpdateBackendConfigOutcomeCallable;
        typedef std::future<UpdateBackendJobOutcome> UpdateBackendJobOutcomeCallable;
        typedef std::future<UpdateBackendStorageOutcome> UpdateBackendStorageOutcomeCallable;
} // namespace Model

  class AmplifyBackendClient;

    typedef std::function<void(const AmplifyBackendClient*, const Model::CloneBackendRequest&, const Model::CloneBackendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloneBackendResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendRequest&, const Model::CreateBackendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendAPIRequest&, const Model::CreateBackendAPIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendAPIResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendAuthRequest&, const Model::CreateBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendConfigRequest&, const Model::CreateBackendConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendConfigResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendStorageRequest&, const Model::CreateBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendStorageResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateTokenRequest&, const Model::CreateTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteBackendRequest&, const Model::DeleteBackendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteBackendAPIRequest&, const Model::DeleteBackendAPIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendAPIResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteBackendAuthRequest&, const Model::DeleteBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteBackendStorageRequest&, const Model::DeleteBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendStorageResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteTokenRequest&, const Model::DeleteTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GenerateBackendAPIModelsRequest&, const Model::GenerateBackendAPIModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateBackendAPIModelsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendRequest&, const Model::GetBackendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendAPIRequest&, const Model::GetBackendAPIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendAPIResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendAPIModelsRequest&, const Model::GetBackendAPIModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendAPIModelsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendAuthRequest&, const Model::GetBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendJobRequest&, const Model::GetBackendJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendStorageRequest&, const Model::GetBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendStorageResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetTokenRequest&, const Model::GetTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::ImportBackendAuthRequest&, const Model::ImportBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::ImportBackendStorageRequest&, const Model::ImportBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportBackendStorageResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::ListBackendJobsRequest&, const Model::ListBackendJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackendJobsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::ListS3BucketsRequest&, const Model::ListS3BucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListS3BucketsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::RemoveAllBackendsRequest&, const Model::RemoveAllBackendsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAllBackendsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::RemoveBackendConfigRequest&, const Model::RemoveBackendConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveBackendConfigResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendAPIRequest&, const Model::UpdateBackendAPIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendAPIResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendAuthRequest&, const Model::UpdateBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendConfigRequest&, const Model::UpdateBackendConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendConfigResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendJobRequest&, const Model::UpdateBackendJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendStorageRequest&, const Model::UpdateBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendStorageResponseReceivedHandler;

  /**
   * <p>AWS Amplify Admin API</p>
   */
  class AWS_AMPLIFYBACKEND_API AmplifyBackendClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyBackendClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyBackendClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyBackendClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CloneBackendAsyncHelper(const Model::CloneBackendRequest& request, const CloneBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackendAsyncHelper(const Model::CreateBackendRequest& request, const CreateBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackendAPIAsyncHelper(const Model::CreateBackendAPIRequest& request, const CreateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackendAuthAsyncHelper(const Model::CreateBackendAuthRequest& request, const CreateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackendConfigAsyncHelper(const Model::CreateBackendConfigRequest& request, const CreateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackendStorageAsyncHelper(const Model::CreateBackendStorageRequest& request, const CreateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTokenAsyncHelper(const Model::CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackendAsyncHelper(const Model::DeleteBackendRequest& request, const DeleteBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackendAPIAsyncHelper(const Model::DeleteBackendAPIRequest& request, const DeleteBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackendAuthAsyncHelper(const Model::DeleteBackendAuthRequest& request, const DeleteBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackendStorageAsyncHelper(const Model::DeleteBackendStorageRequest& request, const DeleteBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTokenAsyncHelper(const Model::DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateBackendAPIModelsAsyncHelper(const Model::GenerateBackendAPIModelsRequest& request, const GenerateBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackendAsyncHelper(const Model::GetBackendRequest& request, const GetBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackendAPIAsyncHelper(const Model::GetBackendAPIRequest& request, const GetBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackendAPIModelsAsyncHelper(const Model::GetBackendAPIModelsRequest& request, const GetBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackendAuthAsyncHelper(const Model::GetBackendAuthRequest& request, const GetBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackendJobAsyncHelper(const Model::GetBackendJobRequest& request, const GetBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackendStorageAsyncHelper(const Model::GetBackendStorageRequest& request, const GetBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTokenAsyncHelper(const Model::GetTokenRequest& request, const GetTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportBackendAuthAsyncHelper(const Model::ImportBackendAuthRequest& request, const ImportBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportBackendStorageAsyncHelper(const Model::ImportBackendStorageRequest& request, const ImportBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBackendJobsAsyncHelper(const Model::ListBackendJobsRequest& request, const ListBackendJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListS3BucketsAsyncHelper(const Model::ListS3BucketsRequest& request, const ListS3BucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAllBackendsAsyncHelper(const Model::RemoveAllBackendsRequest& request, const RemoveAllBackendsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveBackendConfigAsyncHelper(const Model::RemoveBackendConfigRequest& request, const RemoveBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBackendAPIAsyncHelper(const Model::UpdateBackendAPIRequest& request, const UpdateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBackendAuthAsyncHelper(const Model::UpdateBackendAuthRequest& request, const UpdateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBackendConfigAsyncHelper(const Model::UpdateBackendConfigRequest& request, const UpdateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBackendJobAsyncHelper(const Model::UpdateBackendJobRequest& request, const UpdateBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBackendStorageAsyncHelper(const Model::UpdateBackendStorageRequest& request, const UpdateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AmplifyBackend
} // namespace Aws
