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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appsync/model/CreateApiKeyResult.h>
#include <aws/appsync/model/CreateDataSourceResult.h>
#include <aws/appsync/model/CreateFunctionResult.h>
#include <aws/appsync/model/CreateGraphqlApiResult.h>
#include <aws/appsync/model/CreateResolverResult.h>
#include <aws/appsync/model/CreateTypeResult.h>
#include <aws/appsync/model/DeleteApiKeyResult.h>
#include <aws/appsync/model/DeleteDataSourceResult.h>
#include <aws/appsync/model/DeleteFunctionResult.h>
#include <aws/appsync/model/DeleteGraphqlApiResult.h>
#include <aws/appsync/model/DeleteResolverResult.h>
#include <aws/appsync/model/DeleteTypeResult.h>
#include <aws/appsync/model/GetDataSourceResult.h>
#include <aws/appsync/model/GetFunctionResult.h>
#include <aws/appsync/model/GetGraphqlApiResult.h>
#include <aws/appsync/model/GetIntrospectionSchemaResult.h>
#include <aws/appsync/model/GetResolverResult.h>
#include <aws/appsync/model/GetSchemaCreationStatusResult.h>
#include <aws/appsync/model/GetTypeResult.h>
#include <aws/appsync/model/ListApiKeysResult.h>
#include <aws/appsync/model/ListDataSourcesResult.h>
#include <aws/appsync/model/ListFunctionsResult.h>
#include <aws/appsync/model/ListGraphqlApisResult.h>
#include <aws/appsync/model/ListResolversResult.h>
#include <aws/appsync/model/ListResolversByFunctionResult.h>
#include <aws/appsync/model/ListTagsForResourceResult.h>
#include <aws/appsync/model/ListTypesResult.h>
#include <aws/appsync/model/StartSchemaCreationResult.h>
#include <aws/appsync/model/TagResourceResult.h>
#include <aws/appsync/model/UntagResourceResult.h>
#include <aws/appsync/model/UpdateApiKeyResult.h>
#include <aws/appsync/model/UpdateDataSourceResult.h>
#include <aws/appsync/model/UpdateFunctionResult.h>
#include <aws/appsync/model/UpdateGraphqlApiResult.h>
#include <aws/appsync/model/UpdateResolverResult.h>
#include <aws/appsync/model/UpdateTypeResult.h>
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

namespace AppSync
{

namespace Model
{
        class CreateApiKeyRequest;
        class CreateDataSourceRequest;
        class CreateFunctionRequest;
        class CreateGraphqlApiRequest;
        class CreateResolverRequest;
        class CreateTypeRequest;
        class DeleteApiKeyRequest;
        class DeleteDataSourceRequest;
        class DeleteFunctionRequest;
        class DeleteGraphqlApiRequest;
        class DeleteResolverRequest;
        class DeleteTypeRequest;
        class GetDataSourceRequest;
        class GetFunctionRequest;
        class GetGraphqlApiRequest;
        class GetIntrospectionSchemaRequest;
        class GetResolverRequest;
        class GetSchemaCreationStatusRequest;
        class GetTypeRequest;
        class ListApiKeysRequest;
        class ListDataSourcesRequest;
        class ListFunctionsRequest;
        class ListGraphqlApisRequest;
        class ListResolversRequest;
        class ListResolversByFunctionRequest;
        class ListTagsForResourceRequest;
        class ListTypesRequest;
        class StartSchemaCreationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApiKeyRequest;
        class UpdateDataSourceRequest;
        class UpdateFunctionRequest;
        class UpdateGraphqlApiRequest;
        class UpdateResolverRequest;
        class UpdateTypeRequest;

        typedef Aws::Utils::Outcome<CreateApiKeyResult, Aws::Client::AWSError<AppSyncErrors>> CreateApiKeyOutcome;
        typedef Aws::Utils::Outcome<CreateDataSourceResult, Aws::Client::AWSError<AppSyncErrors>> CreateDataSourceOutcome;
        typedef Aws::Utils::Outcome<CreateFunctionResult, Aws::Client::AWSError<AppSyncErrors>> CreateFunctionOutcome;
        typedef Aws::Utils::Outcome<CreateGraphqlApiResult, Aws::Client::AWSError<AppSyncErrors>> CreateGraphqlApiOutcome;
        typedef Aws::Utils::Outcome<CreateResolverResult, Aws::Client::AWSError<AppSyncErrors>> CreateResolverOutcome;
        typedef Aws::Utils::Outcome<CreateTypeResult, Aws::Client::AWSError<AppSyncErrors>> CreateTypeOutcome;
        typedef Aws::Utils::Outcome<DeleteApiKeyResult, Aws::Client::AWSError<AppSyncErrors>> DeleteApiKeyOutcome;
        typedef Aws::Utils::Outcome<DeleteDataSourceResult, Aws::Client::AWSError<AppSyncErrors>> DeleteDataSourceOutcome;
        typedef Aws::Utils::Outcome<DeleteFunctionResult, Aws::Client::AWSError<AppSyncErrors>> DeleteFunctionOutcome;
        typedef Aws::Utils::Outcome<DeleteGraphqlApiResult, Aws::Client::AWSError<AppSyncErrors>> DeleteGraphqlApiOutcome;
        typedef Aws::Utils::Outcome<DeleteResolverResult, Aws::Client::AWSError<AppSyncErrors>> DeleteResolverOutcome;
        typedef Aws::Utils::Outcome<DeleteTypeResult, Aws::Client::AWSError<AppSyncErrors>> DeleteTypeOutcome;
        typedef Aws::Utils::Outcome<GetDataSourceResult, Aws::Client::AWSError<AppSyncErrors>> GetDataSourceOutcome;
        typedef Aws::Utils::Outcome<GetFunctionResult, Aws::Client::AWSError<AppSyncErrors>> GetFunctionOutcome;
        typedef Aws::Utils::Outcome<GetGraphqlApiResult, Aws::Client::AWSError<AppSyncErrors>> GetGraphqlApiOutcome;
        typedef Aws::Utils::Outcome<GetIntrospectionSchemaResult, Aws::Client::AWSError<AppSyncErrors>> GetIntrospectionSchemaOutcome;
        typedef Aws::Utils::Outcome<GetResolverResult, Aws::Client::AWSError<AppSyncErrors>> GetResolverOutcome;
        typedef Aws::Utils::Outcome<GetSchemaCreationStatusResult, Aws::Client::AWSError<AppSyncErrors>> GetSchemaCreationStatusOutcome;
        typedef Aws::Utils::Outcome<GetTypeResult, Aws::Client::AWSError<AppSyncErrors>> GetTypeOutcome;
        typedef Aws::Utils::Outcome<ListApiKeysResult, Aws::Client::AWSError<AppSyncErrors>> ListApiKeysOutcome;
        typedef Aws::Utils::Outcome<ListDataSourcesResult, Aws::Client::AWSError<AppSyncErrors>> ListDataSourcesOutcome;
        typedef Aws::Utils::Outcome<ListFunctionsResult, Aws::Client::AWSError<AppSyncErrors>> ListFunctionsOutcome;
        typedef Aws::Utils::Outcome<ListGraphqlApisResult, Aws::Client::AWSError<AppSyncErrors>> ListGraphqlApisOutcome;
        typedef Aws::Utils::Outcome<ListResolversResult, Aws::Client::AWSError<AppSyncErrors>> ListResolversOutcome;
        typedef Aws::Utils::Outcome<ListResolversByFunctionResult, Aws::Client::AWSError<AppSyncErrors>> ListResolversByFunctionOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<AppSyncErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTypesResult, Aws::Client::AWSError<AppSyncErrors>> ListTypesOutcome;
        typedef Aws::Utils::Outcome<StartSchemaCreationResult, Aws::Client::AWSError<AppSyncErrors>> StartSchemaCreationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<AppSyncErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<AppSyncErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApiKeyResult, Aws::Client::AWSError<AppSyncErrors>> UpdateApiKeyOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSourceResult, Aws::Client::AWSError<AppSyncErrors>> UpdateDataSourceOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionResult, Aws::Client::AWSError<AppSyncErrors>> UpdateFunctionOutcome;
        typedef Aws::Utils::Outcome<UpdateGraphqlApiResult, Aws::Client::AWSError<AppSyncErrors>> UpdateGraphqlApiOutcome;
        typedef Aws::Utils::Outcome<UpdateResolverResult, Aws::Client::AWSError<AppSyncErrors>> UpdateResolverOutcome;
        typedef Aws::Utils::Outcome<UpdateTypeResult, Aws::Client::AWSError<AppSyncErrors>> UpdateTypeOutcome;

        typedef std::future<CreateApiKeyOutcome> CreateApiKeyOutcomeCallable;
        typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
        typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
        typedef std::future<CreateGraphqlApiOutcome> CreateGraphqlApiOutcomeCallable;
        typedef std::future<CreateResolverOutcome> CreateResolverOutcomeCallable;
        typedef std::future<CreateTypeOutcome> CreateTypeOutcomeCallable;
        typedef std::future<DeleteApiKeyOutcome> DeleteApiKeyOutcomeCallable;
        typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
        typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
        typedef std::future<DeleteGraphqlApiOutcome> DeleteGraphqlApiOutcomeCallable;
        typedef std::future<DeleteResolverOutcome> DeleteResolverOutcomeCallable;
        typedef std::future<DeleteTypeOutcome> DeleteTypeOutcomeCallable;
        typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
        typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
        typedef std::future<GetGraphqlApiOutcome> GetGraphqlApiOutcomeCallable;
        typedef std::future<GetIntrospectionSchemaOutcome> GetIntrospectionSchemaOutcomeCallable;
        typedef std::future<GetResolverOutcome> GetResolverOutcomeCallable;
        typedef std::future<GetSchemaCreationStatusOutcome> GetSchemaCreationStatusOutcomeCallable;
        typedef std::future<GetTypeOutcome> GetTypeOutcomeCallable;
        typedef std::future<ListApiKeysOutcome> ListApiKeysOutcomeCallable;
        typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
        typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
        typedef std::future<ListGraphqlApisOutcome> ListGraphqlApisOutcomeCallable;
        typedef std::future<ListResolversOutcome> ListResolversOutcomeCallable;
        typedef std::future<ListResolversByFunctionOutcome> ListResolversByFunctionOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTypesOutcome> ListTypesOutcomeCallable;
        typedef std::future<StartSchemaCreationOutcome> StartSchemaCreationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApiKeyOutcome> UpdateApiKeyOutcomeCallable;
        typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
        typedef std::future<UpdateFunctionOutcome> UpdateFunctionOutcomeCallable;
        typedef std::future<UpdateGraphqlApiOutcome> UpdateGraphqlApiOutcomeCallable;
        typedef std::future<UpdateResolverOutcome> UpdateResolverOutcomeCallable;
        typedef std::future<UpdateTypeOutcome> UpdateTypeOutcomeCallable;
} // namespace Model

  class AppSyncClient;

    typedef std::function<void(const AppSyncClient*, const Model::CreateApiKeyRequest&, const Model::CreateApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiKeyResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateFunctionRequest&, const Model::CreateFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateGraphqlApiRequest&, const Model::CreateGraphqlApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGraphqlApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateResolverRequest&, const Model::CreateResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateTypeRequest&, const Model::CreateTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTypeResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteApiKeyRequest&, const Model::DeleteApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiKeyResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteFunctionRequest&, const Model::DeleteFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteGraphqlApiRequest&, const Model::DeleteGraphqlApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGraphqlApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteResolverRequest&, const Model::DeleteResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteTypeRequest&, const Model::DeleteTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTypeResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetFunctionRequest&, const Model::GetFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetGraphqlApiRequest&, const Model::GetGraphqlApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGraphqlApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetIntrospectionSchemaRequest&, const Model::GetIntrospectionSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntrospectionSchemaResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetResolverRequest&, const Model::GetResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetSchemaCreationStatusRequest&, const Model::GetSchemaCreationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaCreationStatusResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetTypeRequest&, const Model::GetTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTypeResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListApiKeysRequest&, const Model::ListApiKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApiKeysResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListFunctionsRequest&, const Model::ListFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionsResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListGraphqlApisRequest&, const Model::ListGraphqlApisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGraphqlApisResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListResolversRequest&, const Model::ListResolversOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolversResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListResolversByFunctionRequest&, const Model::ListResolversByFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolversByFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListTypesRequest&, const Model::ListTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTypesResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::StartSchemaCreationRequest&, const Model::StartSchemaCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSchemaCreationResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateApiKeyRequest&, const Model::UpdateApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiKeyResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateFunctionRequest&, const Model::UpdateFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateGraphqlApiRequest&, const Model::UpdateGraphqlApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGraphqlApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateResolverRequest&, const Model::UpdateResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateTypeRequest&, const Model::UpdateTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTypeResponseReceivedHandler;

  /**
   * <p>AWS AppSync provides API actions for creating and interacting with data
   * sources using GraphQL from your application.</p>
   */
  class AWS_APPSYNC_API AppSyncClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppSyncClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppSyncClient();

        inline virtual const char* GetServiceClientName() const override { return "AppSync"; }


        /**
         * <p>Creates a unique key that you can distribute to clients who are executing
         * your API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest& request) const;

        /**
         * <p>Creates a unique key that you can distribute to clients who are executing
         * your API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateApiKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApiKeyOutcomeCallable CreateApiKeyCallable(const Model::CreateApiKeyRequest& request) const;

        /**
         * <p>Creates a unique key that you can distribute to clients who are executing
         * your API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateApiKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApiKeyAsync(const Model::CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * <p>Creates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request) const;

        /**
         * <p>Creates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Function</code> object.</p> <p>A function is a reusable
         * entity. Multiple functions can be used to compose the resolver
         * logic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a <code>Function</code> object.</p> <p>A function is a reusable
         * entity. Multiple functions can be used to compose the resolver
         * logic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a <code>Function</code> object.</p> <p>A function is a reusable
         * entity. Multiple functions can be used to compose the resolver
         * logic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphqlApiOutcome CreateGraphqlApi(const Model::CreateGraphqlApiRequest& request) const;

        /**
         * <p>Creates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateGraphqlApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGraphqlApiOutcomeCallable CreateGraphqlApiCallable(const Model::CreateGraphqlApiRequest& request) const;

        /**
         * <p>Creates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateGraphqlApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGraphqlApiAsync(const Model::CreateGraphqlApiRequest& request, const CreateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Resolver</code> object.</p> <p>A resolver converts incoming
         * requests into a format that a data source can understand and converts the data
         * source's responses into GraphQL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverOutcome CreateResolver(const Model::CreateResolverRequest& request) const;

        /**
         * <p>Creates a <code>Resolver</code> object.</p> <p>A resolver converts incoming
         * requests into a format that a data source can understand and converts the data
         * source's responses into GraphQL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateResolver">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResolverOutcomeCallable CreateResolverCallable(const Model::CreateResolverRequest& request) const;

        /**
         * <p>Creates a <code>Resolver</code> object.</p> <p>A resolver converts incoming
         * requests into a format that a data source can understand and converts the data
         * source's responses into GraphQL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateResolver">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResolverAsync(const Model::CreateResolverRequest& request, const CreateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTypeOutcome CreateType(const Model::CreateTypeRequest& request) const;

        /**
         * <p>Creates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTypeOutcomeCallable CreateTypeCallable(const Model::CreateTypeRequest& request) const;

        /**
         * <p>Creates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTypeAsync(const Model::CreateTypeRequest& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest& request) const;

        /**
         * <p>Deletes an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const Model::DeleteApiKeyRequest& request) const;

        /**
         * <p>Deletes an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApiKeyAsync(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * <p>Deletes a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;

        /**
         * <p>Deletes a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

        /**
         * <p>Deletes a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request) const;

        /**
         * <p>Deletes a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGraphqlApiOutcome DeleteGraphqlApi(const Model::DeleteGraphqlApiRequest& request) const;

        /**
         * <p>Deletes a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteGraphqlApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGraphqlApiOutcomeCallable DeleteGraphqlApiCallable(const Model::DeleteGraphqlApiRequest& request) const;

        /**
         * <p>Deletes a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteGraphqlApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGraphqlApiAsync(const Model::DeleteGraphqlApiRequest& request, const DeleteGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverOutcome DeleteResolver(const Model::DeleteResolverRequest& request) const;

        /**
         * <p>Deletes a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteResolver">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverOutcomeCallable DeleteResolverCallable(const Model::DeleteResolverRequest& request) const;

        /**
         * <p>Deletes a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteResolver">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResolverAsync(const Model::DeleteResolverRequest& request, const DeleteResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTypeOutcome DeleteType(const Model::DeleteTypeRequest& request) const;

        /**
         * <p>Deletes a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTypeOutcomeCallable DeleteTypeCallable(const Model::DeleteTypeRequest& request) const;

        /**
         * <p>Deletes a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTypeAsync(const Model::DeleteTypeRequest& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * <p>Retrieves a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const Model::GetDataSourceRequest& request) const;

        /**
         * <p>Retrieves a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataSourceAsync(const Model::GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

        /**
         * <p>Get a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request) const;

        /**
         * <p>Get a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGraphqlApiOutcome GetGraphqlApi(const Model::GetGraphqlApiRequest& request) const;

        /**
         * <p>Retrieves a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetGraphqlApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGraphqlApiOutcomeCallable GetGraphqlApiCallable(const Model::GetGraphqlApiRequest& request) const;

        /**
         * <p>Retrieves a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetGraphqlApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGraphqlApiAsync(const Model::GetGraphqlApiRequest& request, const GetGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the introspection schema for a GraphQL API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetIntrospectionSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntrospectionSchemaOutcome GetIntrospectionSchema(const Model::GetIntrospectionSchemaRequest& request) const;

        /**
         * <p>Retrieves the introspection schema for a GraphQL API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetIntrospectionSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntrospectionSchemaOutcomeCallable GetIntrospectionSchemaCallable(const Model::GetIntrospectionSchemaRequest& request) const;

        /**
         * <p>Retrieves the introspection schema for a GraphQL API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetIntrospectionSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntrospectionSchemaAsync(const Model::GetIntrospectionSchemaRequest& request, const GetIntrospectionSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverOutcome GetResolver(const Model::GetResolverRequest& request) const;

        /**
         * <p>Retrieves a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetResolver">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverOutcomeCallable GetResolverCallable(const Model::GetResolverRequest& request) const;

        /**
         * <p>Retrieves a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetResolver">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverAsync(const Model::GetResolverRequest& request, const GetResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current status of a schema creation operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetSchemaCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaCreationStatusOutcome GetSchemaCreationStatus(const Model::GetSchemaCreationStatusRequest& request) const;

        /**
         * <p>Retrieves the current status of a schema creation operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetSchemaCreationStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaCreationStatusOutcomeCallable GetSchemaCreationStatusCallable(const Model::GetSchemaCreationStatusRequest& request) const;

        /**
         * <p>Retrieves the current status of a schema creation operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetSchemaCreationStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaCreationStatusAsync(const Model::GetSchemaCreationStatusRequest& request, const GetSchemaCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetType">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTypeOutcome GetType(const Model::GetTypeRequest& request) const;

        /**
         * <p>Retrieves a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetType">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTypeOutcomeCallable GetTypeCallable(const Model::GetTypeRequest& request) const;

        /**
         * <p>Retrieves a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetType">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTypeAsync(const Model::GetTypeRequest& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the API keys for a given API.</p> <note> <p>API keys are deleted
         * automatically sometime after they expire. However, they may still be included in
         * the response until they have actually been deleted. You can safely call
         * <code>DeleteApiKey</code> to manually delete a key before it's automatically
         * deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListApiKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApiKeysOutcome ListApiKeys(const Model::ListApiKeysRequest& request) const;

        /**
         * <p>Lists the API keys for a given API.</p> <note> <p>API keys are deleted
         * automatically sometime after they expire. However, they may still be included in
         * the response until they have actually been deleted. You can safely call
         * <code>DeleteApiKey</code> to manually delete a key before it's automatically
         * deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListApiKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApiKeysOutcomeCallable ListApiKeysCallable(const Model::ListApiKeysRequest& request) const;

        /**
         * <p>Lists the API keys for a given API.</p> <note> <p>API keys are deleted
         * automatically sometime after they expire. However, they may still be included in
         * the response until they have actually been deleted. You can safely call
         * <code>DeleteApiKey</code> to manually delete a key before it's automatically
         * deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListApiKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApiKeysAsync(const Model::ListApiKeysRequest& request, const ListApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the data sources for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * <p>Lists the data sources for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDataSources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const Model::ListDataSourcesRequest& request) const;

        /**
         * <p>Lists the data sources for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDataSources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSourcesAsync(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List multiple functions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>List multiple functions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListFunctions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>List multiple functions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListFunctions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your GraphQL APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListGraphqlApis">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGraphqlApisOutcome ListGraphqlApis(const Model::ListGraphqlApisRequest& request) const;

        /**
         * <p>Lists your GraphQL APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListGraphqlApis">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGraphqlApisOutcomeCallable ListGraphqlApisCallable(const Model::ListGraphqlApisRequest& request) const;

        /**
         * <p>Lists your GraphQL APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListGraphqlApis">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGraphqlApisAsync(const Model::ListGraphqlApisRequest& request, const ListGraphqlApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resolvers for a given API and type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolvers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolversOutcome ListResolvers(const Model::ListResolversRequest& request) const;

        /**
         * <p>Lists the resolvers for a given API and type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolvers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolversOutcomeCallable ListResolversCallable(const Model::ListResolversRequest& request) const;

        /**
         * <p>Lists the resolvers for a given API and type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolvers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolversAsync(const Model::ListResolversRequest& request, const ListResolversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the resolvers that are associated with a specific
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolversByFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolversByFunctionOutcome ListResolversByFunction(const Model::ListResolversByFunctionRequest& request) const;

        /**
         * <p>List the resolvers that are associated with a specific
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolversByFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolversByFunctionOutcomeCallable ListResolversByFunctionCallable(const Model::ListResolversByFunctionRequest& request) const;

        /**
         * <p>List the resolvers that are associated with a specific
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolversByFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolversByFunctionAsync(const Model::ListResolversByFunctionRequest& request, const ListResolversByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the types for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypesOutcome ListTypes(const Model::ListTypesRequest& request) const;

        /**
         * <p>Lists the types for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTypesOutcomeCallable ListTypesCallable(const Model::ListTypesRequest& request) const;

        /**
         * <p>Lists the types for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTypesAsync(const Model::ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new schema to your GraphQL API.</p> <p>This operation is asynchronous.
         * Use to determine when it has completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/StartSchemaCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSchemaCreationOutcome StartSchemaCreation(const Model::StartSchemaCreationRequest& request) const;

        /**
         * <p>Adds a new schema to your GraphQL API.</p> <p>This operation is asynchronous.
         * Use to determine when it has completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/StartSchemaCreation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSchemaCreationOutcomeCallable StartSchemaCreationCallable(const Model::StartSchemaCreationRequest& request) const;

        /**
         * <p>Adds a new schema to your GraphQL API.</p> <p>This operation is asynchronous.
         * Use to determine when it has completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/StartSchemaCreation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSchemaCreationAsync(const Model::StartSchemaCreationRequest& request, const StartSchemaCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags a resource with user-supplied tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tags a resource with user-supplied tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tags a resource with user-supplied tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest& request) const;

        /**
         * <p>Updates an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApiKeyOutcomeCallable UpdateApiKeyCallable(const Model::UpdateApiKeyRequest& request) const;

        /**
         * <p>Updates an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApiKeyAsync(const Model::UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * <p>Updates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateDataSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;

        /**
         * <p>Updates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateDataSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>Function</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionOutcome UpdateFunction(const Model::UpdateFunctionRequest& request) const;

        /**
         * <p>Updates a <code>Function</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionOutcomeCallable UpdateFunctionCallable(const Model::UpdateFunctionRequest& request) const;

        /**
         * <p>Updates a <code>Function</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionAsync(const Model::UpdateFunctionRequest& request, const UpdateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGraphqlApiOutcome UpdateGraphqlApi(const Model::UpdateGraphqlApiRequest& request) const;

        /**
         * <p>Updates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateGraphqlApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGraphqlApiOutcomeCallable UpdateGraphqlApiCallable(const Model::UpdateGraphqlApiRequest& request) const;

        /**
         * <p>Updates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateGraphqlApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGraphqlApiAsync(const Model::UpdateGraphqlApiRequest& request, const UpdateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverOutcome UpdateResolver(const Model::UpdateResolverRequest& request) const;

        /**
         * <p>Updates a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateResolver">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverOutcomeCallable UpdateResolverCallable(const Model::UpdateResolverRequest& request) const;

        /**
         * <p>Updates a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateResolver">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResolverAsync(const Model::UpdateResolverRequest& request, const UpdateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTypeOutcome UpdateType(const Model::UpdateTypeRequest& request) const;

        /**
         * <p>Updates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTypeOutcomeCallable UpdateTypeCallable(const Model::UpdateTypeRequest& request) const;

        /**
         * <p>Updates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTypeAsync(const Model::UpdateTypeRequest& request, const UpdateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateApiKeyAsyncHelper(const Model::CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSourceAsyncHelper(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFunctionAsyncHelper(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGraphqlApiAsyncHelper(const Model::CreateGraphqlApiRequest& request, const CreateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverAsyncHelper(const Model::CreateResolverRequest& request, const CreateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTypeAsyncHelper(const Model::CreateTypeRequest& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApiKeyAsyncHelper(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataSourceAsyncHelper(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionAsyncHelper(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGraphqlApiAsyncHelper(const Model::DeleteGraphqlApiRequest& request, const DeleteGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverAsyncHelper(const Model::DeleteResolverRequest& request, const DeleteResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTypeAsyncHelper(const Model::DeleteTypeRequest& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataSourceAsyncHelper(const Model::GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionAsyncHelper(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGraphqlApiAsyncHelper(const Model::GetGraphqlApiRequest& request, const GetGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntrospectionSchemaAsyncHelper(const Model::GetIntrospectionSchemaRequest& request, const GetIntrospectionSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverAsyncHelper(const Model::GetResolverRequest& request, const GetResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSchemaCreationStatusAsyncHelper(const Model::GetSchemaCreationStatusRequest& request, const GetSchemaCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTypeAsyncHelper(const Model::GetTypeRequest& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApiKeysAsyncHelper(const Model::ListApiKeysRequest& request, const ListApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataSourcesAsyncHelper(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionsAsyncHelper(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGraphqlApisAsyncHelper(const Model::ListGraphqlApisRequest& request, const ListGraphqlApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolversAsyncHelper(const Model::ListResolversRequest& request, const ListResolversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolversByFunctionAsyncHelper(const Model::ListResolversByFunctionRequest& request, const ListResolversByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTypesAsyncHelper(const Model::ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSchemaCreationAsyncHelper(const Model::StartSchemaCreationRequest& request, const StartSchemaCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApiKeyAsyncHelper(const Model::UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSourceAsyncHelper(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionAsyncHelper(const Model::UpdateFunctionRequest& request, const UpdateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGraphqlApiAsyncHelper(const Model::UpdateGraphqlApiRequest& request, const UpdateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResolverAsyncHelper(const Model::UpdateResolverRequest& request, const UpdateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTypeAsyncHelper(const Model::UpdateTypeRequest& request, const UpdateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppSync
} // namespace Aws
