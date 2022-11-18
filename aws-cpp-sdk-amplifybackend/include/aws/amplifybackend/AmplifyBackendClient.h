/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifybackend/AmplifyBackendServiceClientModel.h>
#include <aws/amplifybackend/AmplifyBackendLegacyAsyncMacros.h>

namespace Aws
{
namespace AmplifyBackend
{
  /**
   * <p>AWS Amplify Admin API</p>
   */
  class AWS_AMPLIFYBACKEND_API AmplifyBackendClient : public Aws::Client::AWSJsonClient
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
         * <p>This operation clones an existing backend.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CloneBackend">AWS
         * API Reference</a></p>
         */
        virtual Model::CloneBackendOutcome CloneBackend(const Model::CloneBackendRequest& request) const;


        /**
         * <p>This operation creates a backend for an Amplify app. Backends are
         * automatically created at the time of app creation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackend">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendOutcome CreateBackend(const Model::CreateBackendRequest& request) const;


        /**
         * <p>Creates a new backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendAPIOutcome CreateBackendAPI(const Model::CreateBackendAPIRequest& request) const;


        /**
         * <p>Creates a new backend authentication resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendAuthOutcome CreateBackendAuth(const Model::CreateBackendAuthRequest& request) const;


        /**
         * <p>Creates a config object for a backend.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendConfigOutcome CreateBackendConfig(const Model::CreateBackendConfigRequest& request) const;


        /**
         * <p>Creates a backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackendStorageOutcome CreateBackendStorage(const Model::CreateBackendStorageRequest& request) const;


        /**
         * <p>Generates a one-time challenge code to authenticate a user into your Amplify
         * Admin UI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTokenOutcome CreateToken(const Model::CreateTokenRequest& request) const;


        /**
         * <p>Removes an existing environment from your Amplify project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackend">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendOutcome DeleteBackend(const Model::DeleteBackendRequest& request) const;


        /**
         * <p>Deletes an existing backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendAPIOutcome DeleteBackendAPI(const Model::DeleteBackendAPIRequest& request) const;


        /**
         * <p>Deletes an existing backend authentication resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendAuthOutcome DeleteBackendAuth(const Model::DeleteBackendAuthRequest& request) const;


        /**
         * <p>Removes the specified backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackendStorageOutcome DeleteBackendStorage(const Model::DeleteBackendStorageRequest& request) const;


        /**
         * <p>Deletes the challenge token based on the given appId and
         * sessionId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/DeleteToken">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTokenOutcome DeleteToken(const Model::DeleteTokenRequest& request) const;


        /**
         * <p>Generates a model schema for an existing backend API resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GenerateBackendAPIModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateBackendAPIModelsOutcome GenerateBackendAPIModels(const Model::GenerateBackendAPIModelsRequest& request) const;


        /**
         * <p>Provides project-level details for your Amplify UI project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackend">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendOutcome GetBackend(const Model::GetBackendRequest& request) const;


        /**
         * <p>Gets the details for a backend API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAPIOutcome GetBackendAPI(const Model::GetBackendAPIRequest& request) const;


        /**
         * <p>Generates a model schema for existing backend API resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAPIModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAPIModelsOutcome GetBackendAPIModels(const Model::GetBackendAPIModelsRequest& request) const;


        /**
         * <p>Gets a backend auth details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendAuthOutcome GetBackendAuth(const Model::GetBackendAuthRequest& request) const;


        /**
         * <p>Returns information about a specific job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendJobOutcome GetBackendJob(const Model::GetBackendJobRequest& request) const;


        /**
         * <p>Gets details for a backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackendStorageOutcome GetBackendStorage(const Model::GetBackendStorageRequest& request) const;


        /**
         * <p>Gets the challenge token based on the given appId and
         * sessionId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTokenOutcome GetToken(const Model::GetTokenRequest& request) const;


        /**
         * <p>Imports an existing backend authentication resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ImportBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportBackendAuthOutcome ImportBackendAuth(const Model::ImportBackendAuthRequest& request) const;


        /**
         * <p>Imports an existing backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ImportBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportBackendStorageOutcome ImportBackendStorage(const Model::ImportBackendStorageRequest& request) const;


        /**
         * <p>Lists the jobs for the backend of an Amplify app.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ListBackendJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackendJobsOutcome ListBackendJobs(const Model::ListBackendJobsRequest& request) const;


        /**
         * <p>The list of S3 buckets in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/ListS3Buckets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListS3BucketsOutcome ListS3Buckets(const Model::ListS3BucketsRequest& request) const;


        /**
         * <p>Removes all backend environments from your Amplify project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/RemoveAllBackends">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAllBackendsOutcome RemoveAllBackends(const Model::RemoveAllBackendsRequest& request) const;


        /**
         * <p>Removes the AWS resources required to access the Amplify Admin
         * UI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/RemoveBackendConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveBackendConfigOutcome RemoveBackendConfig(const Model::RemoveBackendConfigRequest& request) const;


        /**
         * <p>Updates an existing backend API resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAPI">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendAPIOutcome UpdateBackendAPI(const Model::UpdateBackendAPIRequest& request) const;


        /**
         * <p>Updates an existing backend authentication resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuth">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendAuthOutcome UpdateBackendAuth(const Model::UpdateBackendAuthRequest& request) const;


        /**
         * <p>Updates the AWS resources required to access the Amplify Admin
         * UI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendConfigOutcome UpdateBackendConfig(const Model::UpdateBackendConfigRequest& request) const;


        /**
         * <p>Updates a specific job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendJobOutcome UpdateBackendJob(const Model::UpdateBackendJobRequest& request) const;


        /**
         * <p>Updates an existing backend storage resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackendStorageOutcome UpdateBackendStorage(const Model::UpdateBackendStorageRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AmplifyBackendEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AmplifyBackendClientConfiguration& clientConfiguration);

      AmplifyBackendClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AmplifyBackendEndpointProviderBase> m_endpointProvider;
  };

} // namespace AmplifyBackend
} // namespace Aws
