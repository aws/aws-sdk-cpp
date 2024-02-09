/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appsync/AppSyncServiceClientModel.h>

namespace Aws
{
namespace AppSync
{
  /**
   * <p>AppSync provides API actions for creating and interacting with data sources
   * using GraphQL from your application.</p>
   */
  class AWS_APPSYNC_API AppSyncClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppSyncClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppSyncClientConfiguration ClientConfigurationType;
      typedef AppSyncEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppSyncClient(const Aws::AppSync::AppSyncClientConfiguration& clientConfiguration = Aws::AppSync::AppSyncClientConfiguration(),
                      std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppSyncClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AppSync::AppSyncClientConfiguration& clientConfiguration = Aws::AppSync::AppSyncClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AppSync::AppSyncClientConfiguration& clientConfiguration = Aws::AppSync::AppSyncClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppSyncClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppSyncClient();

        /**
         * <p>Maps an endpoint to your custom domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AssociateApi">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApiOutcome AssociateApi(const Model::AssociateApiRequest& request) const;

        /**
         * A Callable wrapper for AssociateApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateApiRequestT = Model::AssociateApiRequest>
        Model::AssociateApiOutcomeCallable AssociateApiCallable(const AssociateApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::AssociateApi, request);
        }

        /**
         * An Async wrapper for AssociateApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateApiRequestT = Model::AssociateApiRequest>
        void AssociateApiAsync(const AssociateApiRequestT& request, const AssociateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::AssociateApi, request, handler, context);
        }

        /**
         * <p>Creates an association between a Merged API and source API using the source
         * API's identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AssociateMergedGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMergedGraphqlApiOutcome AssociateMergedGraphqlApi(const Model::AssociateMergedGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for AssociateMergedGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMergedGraphqlApiRequestT = Model::AssociateMergedGraphqlApiRequest>
        Model::AssociateMergedGraphqlApiOutcomeCallable AssociateMergedGraphqlApiCallable(const AssociateMergedGraphqlApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::AssociateMergedGraphqlApi, request);
        }

        /**
         * An Async wrapper for AssociateMergedGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMergedGraphqlApiRequestT = Model::AssociateMergedGraphqlApiRequest>
        void AssociateMergedGraphqlApiAsync(const AssociateMergedGraphqlApiRequestT& request, const AssociateMergedGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::AssociateMergedGraphqlApi, request, handler, context);
        }

        /**
         * <p>Creates an association between a Merged API and source API using the Merged
         * API's identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AssociateSourceGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSourceGraphqlApiOutcome AssociateSourceGraphqlApi(const Model::AssociateSourceGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for AssociateSourceGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateSourceGraphqlApiRequestT = Model::AssociateSourceGraphqlApiRequest>
        Model::AssociateSourceGraphqlApiOutcomeCallable AssociateSourceGraphqlApiCallable(const AssociateSourceGraphqlApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::AssociateSourceGraphqlApi, request);
        }

        /**
         * An Async wrapper for AssociateSourceGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSourceGraphqlApiRequestT = Model::AssociateSourceGraphqlApiRequest>
        void AssociateSourceGraphqlApiAsync(const AssociateSourceGraphqlApiRequestT& request, const AssociateSourceGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::AssociateSourceGraphqlApi, request, handler, context);
        }

        /**
         * <p>Creates a cache for the GraphQL API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiCacheOutcome CreateApiCache(const Model::CreateApiCacheRequest& request) const;

        /**
         * A Callable wrapper for CreateApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApiCacheRequestT = Model::CreateApiCacheRequest>
        Model::CreateApiCacheOutcomeCallable CreateApiCacheCallable(const CreateApiCacheRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::CreateApiCache, request);
        }

        /**
         * An Async wrapper for CreateApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApiCacheRequestT = Model::CreateApiCacheRequest>
        void CreateApiCacheAsync(const CreateApiCacheRequestT& request, const CreateApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::CreateApiCache, request, handler, context);
        }

        /**
         * <p>Creates a unique key that you can distribute to clients who invoke your
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApiKeyRequestT = Model::CreateApiKeyRequest>
        Model::CreateApiKeyOutcomeCallable CreateApiKeyCallable(const CreateApiKeyRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::CreateApiKey, request);
        }

        /**
         * An Async wrapper for CreateApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApiKeyRequestT = Model::CreateApiKeyRequest>
        void CreateApiKeyAsync(const CreateApiKeyRequestT& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::CreateApiKey, request, handler, context);
        }

        /**
         * <p>Creates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const CreateDataSourceRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::CreateDataSource, request);
        }

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        void CreateDataSourceAsync(const CreateDataSourceRequestT& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::CreateDataSource, request, handler, context);
        }

        /**
         * <p>Creates a custom <code>DomainName</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainNameOutcome CreateDomainName(const Model::CreateDomainNameRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainNameRequestT = Model::CreateDomainNameRequest>
        Model::CreateDomainNameOutcomeCallable CreateDomainNameCallable(const CreateDomainNameRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::CreateDomainName, request);
        }

        /**
         * An Async wrapper for CreateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainNameRequestT = Model::CreateDomainNameRequest>
        void CreateDomainNameAsync(const CreateDomainNameRequestT& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::CreateDomainName, request, handler, context);
        }

        /**
         * <p>Creates a <code>Function</code> object.</p> <p>A function is a reusable
         * entity. You can use multiple functions to compose the resolver
         * logic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

        /**
         * A Callable wrapper for CreateFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFunctionRequestT = Model::CreateFunctionRequest>
        Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const CreateFunctionRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::CreateFunction, request);
        }

        /**
         * An Async wrapper for CreateFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFunctionRequestT = Model::CreateFunctionRequest>
        void CreateFunctionAsync(const CreateFunctionRequestT& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::CreateFunction, request, handler, context);
        }

        /**
         * <p>Creates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphqlApiOutcome CreateGraphqlApi(const Model::CreateGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for CreateGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGraphqlApiRequestT = Model::CreateGraphqlApiRequest>
        Model::CreateGraphqlApiOutcomeCallable CreateGraphqlApiCallable(const CreateGraphqlApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::CreateGraphqlApi, request);
        }

        /**
         * An Async wrapper for CreateGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGraphqlApiRequestT = Model::CreateGraphqlApiRequest>
        void CreateGraphqlApiAsync(const CreateGraphqlApiRequestT& request, const CreateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::CreateGraphqlApi, request, handler, context);
        }

        /**
         * <p>Creates a <code>Resolver</code> object.</p> <p>A resolver converts incoming
         * requests into a format that a data source can understand, and converts the data
         * source's responses into GraphQL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverOutcome CreateResolver(const Model::CreateResolverRequest& request) const;

        /**
         * A Callable wrapper for CreateResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResolverRequestT = Model::CreateResolverRequest>
        Model::CreateResolverOutcomeCallable CreateResolverCallable(const CreateResolverRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::CreateResolver, request);
        }

        /**
         * An Async wrapper for CreateResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResolverRequestT = Model::CreateResolverRequest>
        void CreateResolverAsync(const CreateResolverRequestT& request, const CreateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::CreateResolver, request, handler, context);
        }

        /**
         * <p>Creates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTypeOutcome CreateType(const Model::CreateTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTypeRequestT = Model::CreateTypeRequest>
        Model::CreateTypeOutcomeCallable CreateTypeCallable(const CreateTypeRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::CreateType, request);
        }

        /**
         * An Async wrapper for CreateType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTypeRequestT = Model::CreateTypeRequest>
        void CreateTypeAsync(const CreateTypeRequestT& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::CreateType, request, handler, context);
        }

        /**
         * <p>Deletes an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiCacheOutcome DeleteApiCache(const Model::DeleteApiCacheRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApiCacheRequestT = Model::DeleteApiCacheRequest>
        Model::DeleteApiCacheOutcomeCallable DeleteApiCacheCallable(const DeleteApiCacheRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DeleteApiCache, request);
        }

        /**
         * An Async wrapper for DeleteApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApiCacheRequestT = Model::DeleteApiCacheRequest>
        void DeleteApiCacheAsync(const DeleteApiCacheRequestT& request, const DeleteApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DeleteApiCache, request, handler, context);
        }

        /**
         * <p>Deletes an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApiKeyRequestT = Model::DeleteApiKeyRequest>
        Model::DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const DeleteApiKeyRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DeleteApiKey, request);
        }

        /**
         * An Async wrapper for DeleteApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApiKeyRequestT = Model::DeleteApiKeyRequest>
        void DeleteApiKeyAsync(const DeleteApiKeyRequestT& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DeleteApiKey, request, handler, context);
        }

        /**
         * <p>Deletes a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DeleteDataSource, request, handler, context);
        }

        /**
         * <p>Deletes a custom <code>DomainName</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainNameOutcome DeleteDomainName(const Model::DeleteDomainNameRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainNameRequestT = Model::DeleteDomainNameRequest>
        Model::DeleteDomainNameOutcomeCallable DeleteDomainNameCallable(const DeleteDomainNameRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DeleteDomainName, request);
        }

        /**
         * An Async wrapper for DeleteDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainNameRequestT = Model::DeleteDomainNameRequest>
        void DeleteDomainNameAsync(const DeleteDomainNameRequestT& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DeleteDomainName, request, handler, context);
        }

        /**
         * <p>Deletes a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFunctionRequestT = Model::DeleteFunctionRequest>
        Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const DeleteFunctionRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DeleteFunction, request);
        }

        /**
         * An Async wrapper for DeleteFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFunctionRequestT = Model::DeleteFunctionRequest>
        void DeleteFunctionAsync(const DeleteFunctionRequestT& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DeleteFunction, request, handler, context);
        }

        /**
         * <p>Deletes a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGraphqlApiOutcome DeleteGraphqlApi(const Model::DeleteGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for DeleteGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGraphqlApiRequestT = Model::DeleteGraphqlApiRequest>
        Model::DeleteGraphqlApiOutcomeCallable DeleteGraphqlApiCallable(const DeleteGraphqlApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DeleteGraphqlApi, request);
        }

        /**
         * An Async wrapper for DeleteGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGraphqlApiRequestT = Model::DeleteGraphqlApiRequest>
        void DeleteGraphqlApiAsync(const DeleteGraphqlApiRequestT& request, const DeleteGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DeleteGraphqlApi, request, handler, context);
        }

        /**
         * <p>Deletes a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverOutcome DeleteResolver(const Model::DeleteResolverRequest& request) const;

        /**
         * A Callable wrapper for DeleteResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResolverRequestT = Model::DeleteResolverRequest>
        Model::DeleteResolverOutcomeCallable DeleteResolverCallable(const DeleteResolverRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DeleteResolver, request);
        }

        /**
         * An Async wrapper for DeleteResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResolverRequestT = Model::DeleteResolverRequest>
        void DeleteResolverAsync(const DeleteResolverRequestT& request, const DeleteResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DeleteResolver, request, handler, context);
        }

        /**
         * <p>Deletes a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTypeOutcome DeleteType(const Model::DeleteTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTypeRequestT = Model::DeleteTypeRequest>
        Model::DeleteTypeOutcomeCallable DeleteTypeCallable(const DeleteTypeRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DeleteType, request);
        }

        /**
         * An Async wrapper for DeleteType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTypeRequestT = Model::DeleteTypeRequest>
        void DeleteTypeAsync(const DeleteTypeRequestT& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DeleteType, request, handler, context);
        }

        /**
         * <p>Removes an <code>ApiAssociation</code> object from a custom
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DisassociateApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApiOutcome DisassociateApi(const Model::DisassociateApiRequest& request) const;

        /**
         * A Callable wrapper for DisassociateApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateApiRequestT = Model::DisassociateApiRequest>
        Model::DisassociateApiOutcomeCallable DisassociateApiCallable(const DisassociateApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DisassociateApi, request);
        }

        /**
         * An Async wrapper for DisassociateApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateApiRequestT = Model::DisassociateApiRequest>
        void DisassociateApiAsync(const DisassociateApiRequestT& request, const DisassociateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DisassociateApi, request, handler, context);
        }

        /**
         * <p>Deletes an association between a Merged API and source API using the source
         * API's identifier and the association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DisassociateMergedGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMergedGraphqlApiOutcome DisassociateMergedGraphqlApi(const Model::DisassociateMergedGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMergedGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMergedGraphqlApiRequestT = Model::DisassociateMergedGraphqlApiRequest>
        Model::DisassociateMergedGraphqlApiOutcomeCallable DisassociateMergedGraphqlApiCallable(const DisassociateMergedGraphqlApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DisassociateMergedGraphqlApi, request);
        }

        /**
         * An Async wrapper for DisassociateMergedGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMergedGraphqlApiRequestT = Model::DisassociateMergedGraphqlApiRequest>
        void DisassociateMergedGraphqlApiAsync(const DisassociateMergedGraphqlApiRequestT& request, const DisassociateMergedGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DisassociateMergedGraphqlApi, request, handler, context);
        }

        /**
         * <p>Deletes an association between a Merged API and source API using the Merged
         * API's identifier and the association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DisassociateSourceGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSourceGraphqlApiOutcome DisassociateSourceGraphqlApi(const Model::DisassociateSourceGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSourceGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateSourceGraphqlApiRequestT = Model::DisassociateSourceGraphqlApiRequest>
        Model::DisassociateSourceGraphqlApiOutcomeCallable DisassociateSourceGraphqlApiCallable(const DisassociateSourceGraphqlApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::DisassociateSourceGraphqlApi, request);
        }

        /**
         * An Async wrapper for DisassociateSourceGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateSourceGraphqlApiRequestT = Model::DisassociateSourceGraphqlApiRequest>
        void DisassociateSourceGraphqlApiAsync(const DisassociateSourceGraphqlApiRequestT& request, const DisassociateSourceGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::DisassociateSourceGraphqlApi, request, handler, context);
        }

        /**
         * <p>Evaluates the given code and returns the response. The code definition
         * requirements depend on the specified runtime. For <code>APPSYNC_JS</code>
         * runtimes, the code defines the request and response functions. The request
         * function takes the incoming request after a GraphQL operation is parsed and
         * converts it into a request configuration for the selected data source operation.
         * The response function interprets responses from the data source and maps it to
         * the shape of the GraphQL field output type. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/EvaluateCode">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateCodeOutcome EvaluateCode(const Model::EvaluateCodeRequest& request) const;

        /**
         * A Callable wrapper for EvaluateCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EvaluateCodeRequestT = Model::EvaluateCodeRequest>
        Model::EvaluateCodeOutcomeCallable EvaluateCodeCallable(const EvaluateCodeRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::EvaluateCode, request);
        }

        /**
         * An Async wrapper for EvaluateCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EvaluateCodeRequestT = Model::EvaluateCodeRequest>
        void EvaluateCodeAsync(const EvaluateCodeRequestT& request, const EvaluateCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::EvaluateCode, request, handler, context);
        }

        /**
         * <p>Evaluates a given template and returns the response. The mapping template can
         * be a request or response template.</p> <p>Request templates take the incoming
         * request after a GraphQL operation is parsed and convert it into a request
         * configuration for the selected data source operation. Response templates
         * interpret responses from the data source and map it to the shape of the GraphQL
         * field output type.</p> <p>Mapping templates are written in the Apache Velocity
         * Template Language (VTL).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/EvaluateMappingTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateMappingTemplateOutcome EvaluateMappingTemplate(const Model::EvaluateMappingTemplateRequest& request) const;

        /**
         * A Callable wrapper for EvaluateMappingTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EvaluateMappingTemplateRequestT = Model::EvaluateMappingTemplateRequest>
        Model::EvaluateMappingTemplateOutcomeCallable EvaluateMappingTemplateCallable(const EvaluateMappingTemplateRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::EvaluateMappingTemplate, request);
        }

        /**
         * An Async wrapper for EvaluateMappingTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EvaluateMappingTemplateRequestT = Model::EvaluateMappingTemplateRequest>
        void EvaluateMappingTemplateAsync(const EvaluateMappingTemplateRequestT& request, const EvaluateMappingTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::EvaluateMappingTemplate, request, handler, context);
        }

        /**
         * <p>Flushes an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/FlushApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::FlushApiCacheOutcome FlushApiCache(const Model::FlushApiCacheRequest& request) const;

        /**
         * A Callable wrapper for FlushApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FlushApiCacheRequestT = Model::FlushApiCacheRequest>
        Model::FlushApiCacheOutcomeCallable FlushApiCacheCallable(const FlushApiCacheRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::FlushApiCache, request);
        }

        /**
         * An Async wrapper for FlushApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FlushApiCacheRequestT = Model::FlushApiCacheRequest>
        void FlushApiCacheAsync(const FlushApiCacheRequestT& request, const FlushApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::FlushApiCache, request, handler, context);
        }

        /**
         * <p>Retrieves an <code>ApiAssociation</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetApiAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiAssociationOutcome GetApiAssociation(const Model::GetApiAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetApiAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApiAssociationRequestT = Model::GetApiAssociationRequest>
        Model::GetApiAssociationOutcomeCallable GetApiAssociationCallable(const GetApiAssociationRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetApiAssociation, request);
        }

        /**
         * An Async wrapper for GetApiAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApiAssociationRequestT = Model::GetApiAssociationRequest>
        void GetApiAssociationAsync(const GetApiAssociationRequestT& request, const GetApiAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetApiAssociation, request, handler, context);
        }

        /**
         * <p>Retrieves an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiCacheOutcome GetApiCache(const Model::GetApiCacheRequest& request) const;

        /**
         * A Callable wrapper for GetApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApiCacheRequestT = Model::GetApiCacheRequest>
        Model::GetApiCacheOutcomeCallable GetApiCacheCallable(const GetApiCacheRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetApiCache, request);
        }

        /**
         * An Async wrapper for GetApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApiCacheRequestT = Model::GetApiCacheRequest>
        void GetApiCacheAsync(const GetApiCacheRequestT& request, const GetApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetApiCache, request, handler, context);
        }

        /**
         * <p>Retrieves a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * A Callable wrapper for GetDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const GetDataSourceRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetDataSource, request);
        }

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        void GetDataSourceAsync(const GetDataSourceRequestT& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetDataSource, request, handler, context);
        }

        /**
         * <p>Retrieves the record of an existing introspection. If the retrieval is
         * successful, the result of the instrospection will also be returned. If the
         * retrieval fails the operation, an error message will be returned
         * instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDataSourceIntrospection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceIntrospectionOutcome GetDataSourceIntrospection(const Model::GetDataSourceIntrospectionRequest& request) const;

        /**
         * A Callable wrapper for GetDataSourceIntrospection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceIntrospectionRequestT = Model::GetDataSourceIntrospectionRequest>
        Model::GetDataSourceIntrospectionOutcomeCallable GetDataSourceIntrospectionCallable(const GetDataSourceIntrospectionRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetDataSourceIntrospection, request);
        }

        /**
         * An Async wrapper for GetDataSourceIntrospection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceIntrospectionRequestT = Model::GetDataSourceIntrospectionRequest>
        void GetDataSourceIntrospectionAsync(const GetDataSourceIntrospectionRequestT& request, const GetDataSourceIntrospectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetDataSourceIntrospection, request, handler, context);
        }

        /**
         * <p>Retrieves a custom <code>DomainName</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNameOutcome GetDomainName(const Model::GetDomainNameRequest& request) const;

        /**
         * A Callable wrapper for GetDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainNameRequestT = Model::GetDomainNameRequest>
        Model::GetDomainNameOutcomeCallable GetDomainNameCallable(const GetDomainNameRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetDomainName, request);
        }

        /**
         * An Async wrapper for GetDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainNameRequestT = Model::GetDomainNameRequest>
        void GetDomainNameAsync(const GetDomainNameRequestT& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetDomainName, request, handler, context);
        }

        /**
         * <p>Get a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

        /**
         * A Callable wrapper for GetFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFunctionRequestT = Model::GetFunctionRequest>
        Model::GetFunctionOutcomeCallable GetFunctionCallable(const GetFunctionRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetFunction, request);
        }

        /**
         * An Async wrapper for GetFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFunctionRequestT = Model::GetFunctionRequest>
        void GetFunctionAsync(const GetFunctionRequestT& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetFunction, request, handler, context);
        }

        /**
         * <p>Retrieves a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGraphqlApiOutcome GetGraphqlApi(const Model::GetGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for GetGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGraphqlApiRequestT = Model::GetGraphqlApiRequest>
        Model::GetGraphqlApiOutcomeCallable GetGraphqlApiCallable(const GetGraphqlApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetGraphqlApi, request);
        }

        /**
         * An Async wrapper for GetGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGraphqlApiRequestT = Model::GetGraphqlApiRequest>
        void GetGraphqlApiAsync(const GetGraphqlApiRequestT& request, const GetGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetGraphqlApi, request, handler, context);
        }

        /**
         * <p>Retrieves the list of environmental variable key-value pairs associated with
         * an API by its ID value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetGraphqlApiEnvironmentVariables">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGraphqlApiEnvironmentVariablesOutcome GetGraphqlApiEnvironmentVariables(const Model::GetGraphqlApiEnvironmentVariablesRequest& request) const;

        /**
         * A Callable wrapper for GetGraphqlApiEnvironmentVariables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGraphqlApiEnvironmentVariablesRequestT = Model::GetGraphqlApiEnvironmentVariablesRequest>
        Model::GetGraphqlApiEnvironmentVariablesOutcomeCallable GetGraphqlApiEnvironmentVariablesCallable(const GetGraphqlApiEnvironmentVariablesRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetGraphqlApiEnvironmentVariables, request);
        }

        /**
         * An Async wrapper for GetGraphqlApiEnvironmentVariables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGraphqlApiEnvironmentVariablesRequestT = Model::GetGraphqlApiEnvironmentVariablesRequest>
        void GetGraphqlApiEnvironmentVariablesAsync(const GetGraphqlApiEnvironmentVariablesRequestT& request, const GetGraphqlApiEnvironmentVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetGraphqlApiEnvironmentVariables, request, handler, context);
        }

        /**
         * <p>Retrieves the introspection schema for a GraphQL API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetIntrospectionSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntrospectionSchemaOutcome GetIntrospectionSchema(const Model::GetIntrospectionSchemaRequest& request) const;

        /**
         * A Callable wrapper for GetIntrospectionSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntrospectionSchemaRequestT = Model::GetIntrospectionSchemaRequest>
        Model::GetIntrospectionSchemaOutcomeCallable GetIntrospectionSchemaCallable(const GetIntrospectionSchemaRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetIntrospectionSchema, request);
        }

        /**
         * An Async wrapper for GetIntrospectionSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntrospectionSchemaRequestT = Model::GetIntrospectionSchemaRequest>
        void GetIntrospectionSchemaAsync(const GetIntrospectionSchemaRequestT& request, const GetIntrospectionSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetIntrospectionSchema, request, handler, context);
        }

        /**
         * <p>Retrieves a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverOutcome GetResolver(const Model::GetResolverRequest& request) const;

        /**
         * A Callable wrapper for GetResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverRequestT = Model::GetResolverRequest>
        Model::GetResolverOutcomeCallable GetResolverCallable(const GetResolverRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetResolver, request);
        }

        /**
         * An Async wrapper for GetResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverRequestT = Model::GetResolverRequest>
        void GetResolverAsync(const GetResolverRequestT& request, const GetResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetResolver, request, handler, context);
        }

        /**
         * <p>Retrieves the current status of a schema creation operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetSchemaCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaCreationStatusOutcome GetSchemaCreationStatus(const Model::GetSchemaCreationStatusRequest& request) const;

        /**
         * A Callable wrapper for GetSchemaCreationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaCreationStatusRequestT = Model::GetSchemaCreationStatusRequest>
        Model::GetSchemaCreationStatusOutcomeCallable GetSchemaCreationStatusCallable(const GetSchemaCreationStatusRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetSchemaCreationStatus, request);
        }

        /**
         * An Async wrapper for GetSchemaCreationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaCreationStatusRequestT = Model::GetSchemaCreationStatusRequest>
        void GetSchemaCreationStatusAsync(const GetSchemaCreationStatusRequestT& request, const GetSchemaCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetSchemaCreationStatus, request, handler, context);
        }

        /**
         * <p>Retrieves a <code>SourceApiAssociation</code> object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetSourceApiAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSourceApiAssociationOutcome GetSourceApiAssociation(const Model::GetSourceApiAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetSourceApiAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSourceApiAssociationRequestT = Model::GetSourceApiAssociationRequest>
        Model::GetSourceApiAssociationOutcomeCallable GetSourceApiAssociationCallable(const GetSourceApiAssociationRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetSourceApiAssociation, request);
        }

        /**
         * An Async wrapper for GetSourceApiAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSourceApiAssociationRequestT = Model::GetSourceApiAssociationRequest>
        void GetSourceApiAssociationAsync(const GetSourceApiAssociationRequestT& request, const GetSourceApiAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetSourceApiAssociation, request, handler, context);
        }

        /**
         * <p>Retrieves a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetType">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTypeOutcome GetType(const Model::GetTypeRequest& request) const;

        /**
         * A Callable wrapper for GetType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTypeRequestT = Model::GetTypeRequest>
        Model::GetTypeOutcomeCallable GetTypeCallable(const GetTypeRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::GetType, request);
        }

        /**
         * An Async wrapper for GetType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTypeRequestT = Model::GetTypeRequest>
        void GetTypeAsync(const GetTypeRequestT& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::GetType, request, handler, context);
        }

        /**
         * <p>Lists the API keys for a given API.</p>  <p>API keys are deleted
         * automatically 60 days after they expire. However, they may still be included in
         * the response until they have actually been deleted. You can safely call
         * <code>DeleteApiKey</code> to manually delete a key before it's automatically
         * deleted.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListApiKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApiKeysOutcome ListApiKeys(const Model::ListApiKeysRequest& request) const;

        /**
         * A Callable wrapper for ListApiKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApiKeysRequestT = Model::ListApiKeysRequest>
        Model::ListApiKeysOutcomeCallable ListApiKeysCallable(const ListApiKeysRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListApiKeys, request);
        }

        /**
         * An Async wrapper for ListApiKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApiKeysRequestT = Model::ListApiKeysRequest>
        void ListApiKeysAsync(const ListApiKeysRequestT& request, const ListApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListApiKeys, request, handler, context);
        }

        /**
         * <p>Lists the data sources for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const ListDataSourcesRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListDataSources, request);
        }

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        void ListDataSourcesAsync(const ListDataSourcesRequestT& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListDataSources, request, handler, context);
        }

        /**
         * <p>Lists multiple custom domain names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;

        /**
         * A Callable wrapper for ListDomainNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainNamesRequestT = Model::ListDomainNamesRequest>
        Model::ListDomainNamesOutcomeCallable ListDomainNamesCallable(const ListDomainNamesRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListDomainNames, request);
        }

        /**
         * An Async wrapper for ListDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainNamesRequestT = Model::ListDomainNamesRequest>
        void ListDomainNamesAsync(const ListDomainNamesRequestT& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListDomainNames, request, handler, context);
        }

        /**
         * <p>List multiple functions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFunctionsRequestT = Model::ListFunctionsRequest>
        Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const ListFunctionsRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListFunctions, request);
        }

        /**
         * An Async wrapper for ListFunctions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFunctionsRequestT = Model::ListFunctionsRequest>
        void ListFunctionsAsync(const ListFunctionsRequestT& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListFunctions, request, handler, context);
        }

        /**
         * <p>Lists your GraphQL APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListGraphqlApis">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGraphqlApisOutcome ListGraphqlApis(const Model::ListGraphqlApisRequest& request) const;

        /**
         * A Callable wrapper for ListGraphqlApis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGraphqlApisRequestT = Model::ListGraphqlApisRequest>
        Model::ListGraphqlApisOutcomeCallable ListGraphqlApisCallable(const ListGraphqlApisRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListGraphqlApis, request);
        }

        /**
         * An Async wrapper for ListGraphqlApis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGraphqlApisRequestT = Model::ListGraphqlApisRequest>
        void ListGraphqlApisAsync(const ListGraphqlApisRequestT& request, const ListGraphqlApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListGraphqlApis, request, handler, context);
        }

        /**
         * <p>Lists the resolvers for a given API and type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolvers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolversOutcome ListResolvers(const Model::ListResolversRequest& request) const;

        /**
         * A Callable wrapper for ListResolvers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolversRequestT = Model::ListResolversRequest>
        Model::ListResolversOutcomeCallable ListResolversCallable(const ListResolversRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListResolvers, request);
        }

        /**
         * An Async wrapper for ListResolvers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolversRequestT = Model::ListResolversRequest>
        void ListResolversAsync(const ListResolversRequestT& request, const ListResolversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListResolvers, request, handler, context);
        }

        /**
         * <p>List the resolvers that are associated with a specific
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolversByFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolversByFunctionOutcome ListResolversByFunction(const Model::ListResolversByFunctionRequest& request) const;

        /**
         * A Callable wrapper for ListResolversByFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolversByFunctionRequestT = Model::ListResolversByFunctionRequest>
        Model::ListResolversByFunctionOutcomeCallable ListResolversByFunctionCallable(const ListResolversByFunctionRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListResolversByFunction, request);
        }

        /**
         * An Async wrapper for ListResolversByFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolversByFunctionRequestT = Model::ListResolversByFunctionRequest>
        void ListResolversByFunctionAsync(const ListResolversByFunctionRequestT& request, const ListResolversByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListResolversByFunction, request, handler, context);
        }

        /**
         * <p>Lists the <code>SourceApiAssociationSummary</code> data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListSourceApiAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceApiAssociationsOutcome ListSourceApiAssociations(const Model::ListSourceApiAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListSourceApiAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSourceApiAssociationsRequestT = Model::ListSourceApiAssociationsRequest>
        Model::ListSourceApiAssociationsOutcomeCallable ListSourceApiAssociationsCallable(const ListSourceApiAssociationsRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListSourceApiAssociations, request);
        }

        /**
         * An Async wrapper for ListSourceApiAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSourceApiAssociationsRequestT = Model::ListSourceApiAssociationsRequest>
        void ListSourceApiAssociationsAsync(const ListSourceApiAssociationsRequestT& request, const ListSourceApiAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListSourceApiAssociations, request, handler, context);
        }

        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the types for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypesOutcome ListTypes(const Model::ListTypesRequest& request) const;

        /**
         * A Callable wrapper for ListTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTypesRequestT = Model::ListTypesRequest>
        Model::ListTypesOutcomeCallable ListTypesCallable(const ListTypesRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListTypes, request);
        }

        /**
         * An Async wrapper for ListTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTypesRequestT = Model::ListTypesRequest>
        void ListTypesAsync(const ListTypesRequestT& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListTypes, request, handler, context);
        }

        /**
         * <p>Lists <code>Type</code> objects by the source API association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTypesByAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypesByAssociationOutcome ListTypesByAssociation(const Model::ListTypesByAssociationRequest& request) const;

        /**
         * A Callable wrapper for ListTypesByAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTypesByAssociationRequestT = Model::ListTypesByAssociationRequest>
        Model::ListTypesByAssociationOutcomeCallable ListTypesByAssociationCallable(const ListTypesByAssociationRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::ListTypesByAssociation, request);
        }

        /**
         * An Async wrapper for ListTypesByAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTypesByAssociationRequestT = Model::ListTypesByAssociationRequest>
        void ListTypesByAssociationAsync(const ListTypesByAssociationRequestT& request, const ListTypesByAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::ListTypesByAssociation, request, handler, context);
        }

        /**
         * <p>Creates a list of environmental variables in an API by its ID value. </p>
         * <p>When creating an environmental variable, it must follow the constraints
         * below:</p> <ul> <li> <p>Both JavaScript and VTL templates support environmental
         * variables.</p> </li> <li> <p>Environmental variables are not evaluated before
         * function invocation.</p> </li> <li> <p>Environmental variables only support
         * string values.</p> </li> <li> <p>Any defined value in an environmental variable
         * is considered a string literal and not expanded.</p> </li> <li> <p>Variable
         * evaluations should ideally be performed in the function code.</p> </li> </ul>
         * <p>When creating an environmental variable key-value pair, it must follow the
         * additional constraints below:</p> <ul> <li> <p>Keys must begin with a
         * letter.</p> </li> <li> <p>Keys must be at least two characters long.</p> </li>
         * <li> <p>Keys can only contain letters, numbers, and the underscore character
         * (_).</p> </li> <li> <p>Values can be up to 512 characters long.</p> </li> <li>
         * <p>You can configure up to 50 key-value pairs in a GraphQL API.</p> </li> </ul>
         * <p>You can create a list of environmental variables by adding it to the
         * <code>environmentVariables</code> payload as a list in the format
         * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
         * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
         * overwriting of the existing environmental variable list of that API. This means
         * the existing environmental variables will be lost. To avoid this, you must
         * include all existing and new environmental variables in the list each time you
         * call this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/PutGraphqlApiEnvironmentVariables">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGraphqlApiEnvironmentVariablesOutcome PutGraphqlApiEnvironmentVariables(const Model::PutGraphqlApiEnvironmentVariablesRequest& request) const;

        /**
         * A Callable wrapper for PutGraphqlApiEnvironmentVariables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutGraphqlApiEnvironmentVariablesRequestT = Model::PutGraphqlApiEnvironmentVariablesRequest>
        Model::PutGraphqlApiEnvironmentVariablesOutcomeCallable PutGraphqlApiEnvironmentVariablesCallable(const PutGraphqlApiEnvironmentVariablesRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::PutGraphqlApiEnvironmentVariables, request);
        }

        /**
         * An Async wrapper for PutGraphqlApiEnvironmentVariables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutGraphqlApiEnvironmentVariablesRequestT = Model::PutGraphqlApiEnvironmentVariablesRequest>
        void PutGraphqlApiEnvironmentVariablesAsync(const PutGraphqlApiEnvironmentVariablesRequestT& request, const PutGraphqlApiEnvironmentVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::PutGraphqlApiEnvironmentVariables, request, handler, context);
        }

        /**
         * <p>Creates a new introspection. Returns the <code>introspectionId</code> of the
         * new introspection after its creation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/StartDataSourceIntrospection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataSourceIntrospectionOutcome StartDataSourceIntrospection(const Model::StartDataSourceIntrospectionRequest& request) const;

        /**
         * A Callable wrapper for StartDataSourceIntrospection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDataSourceIntrospectionRequestT = Model::StartDataSourceIntrospectionRequest>
        Model::StartDataSourceIntrospectionOutcomeCallable StartDataSourceIntrospectionCallable(const StartDataSourceIntrospectionRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::StartDataSourceIntrospection, request);
        }

        /**
         * An Async wrapper for StartDataSourceIntrospection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDataSourceIntrospectionRequestT = Model::StartDataSourceIntrospectionRequest>
        void StartDataSourceIntrospectionAsync(const StartDataSourceIntrospectionRequestT& request, const StartDataSourceIntrospectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::StartDataSourceIntrospection, request, handler, context);
        }

        /**
         * <p>Adds a new schema to your GraphQL API.</p> <p>This operation is asynchronous.
         * Use to determine when it has completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/StartSchemaCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSchemaCreationOutcome StartSchemaCreation(const Model::StartSchemaCreationRequest& request) const;

        /**
         * A Callable wrapper for StartSchemaCreation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSchemaCreationRequestT = Model::StartSchemaCreationRequest>
        Model::StartSchemaCreationOutcomeCallable StartSchemaCreationCallable(const StartSchemaCreationRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::StartSchemaCreation, request);
        }

        /**
         * An Async wrapper for StartSchemaCreation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSchemaCreationRequestT = Model::StartSchemaCreationRequest>
        void StartSchemaCreationAsync(const StartSchemaCreationRequestT& request, const StartSchemaCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::StartSchemaCreation, request, handler, context);
        }

        /**
         * <p>Initiates a merge operation. Returns a status that shows the result of the
         * merge operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/StartSchemaMerge">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSchemaMergeOutcome StartSchemaMerge(const Model::StartSchemaMergeRequest& request) const;

        /**
         * A Callable wrapper for StartSchemaMerge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSchemaMergeRequestT = Model::StartSchemaMergeRequest>
        Model::StartSchemaMergeOutcomeCallable StartSchemaMergeCallable(const StartSchemaMergeRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::StartSchemaMerge, request);
        }

        /**
         * An Async wrapper for StartSchemaMerge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSchemaMergeRequestT = Model::StartSchemaMergeRequest>
        void StartSchemaMergeAsync(const StartSchemaMergeRequestT& request, const StartSchemaMergeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::StartSchemaMerge, request, handler, context);
        }

        /**
         * <p>Tags a resource with user-supplied tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the cache for the GraphQL API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiCacheOutcome UpdateApiCache(const Model::UpdateApiCacheRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApiCacheRequestT = Model::UpdateApiCacheRequest>
        Model::UpdateApiCacheOutcomeCallable UpdateApiCacheCallable(const UpdateApiCacheRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateApiCache, request);
        }

        /**
         * An Async wrapper for UpdateApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApiCacheRequestT = Model::UpdateApiCacheRequest>
        void UpdateApiCacheAsync(const UpdateApiCacheRequestT& request, const UpdateApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateApiCache, request, handler, context);
        }

        /**
         * <p>Updates an API key. You can update the key as long as it's not
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApiKeyRequestT = Model::UpdateApiKeyRequest>
        Model::UpdateApiKeyOutcomeCallable UpdateApiKeyCallable(const UpdateApiKeyRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateApiKey, request);
        }

        /**
         * An Async wrapper for UpdateApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApiKeyRequestT = Model::UpdateApiKeyRequest>
        void UpdateApiKeyAsync(const UpdateApiKeyRequestT& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateApiKey, request, handler, context);
        }

        /**
         * <p>Updates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateDataSource, request, handler, context);
        }

        /**
         * <p>Updates a custom <code>DomainName</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainNameOutcome UpdateDomainName(const Model::UpdateDomainNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainNameRequestT = Model::UpdateDomainNameRequest>
        Model::UpdateDomainNameOutcomeCallable UpdateDomainNameCallable(const UpdateDomainNameRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateDomainName, request);
        }

        /**
         * An Async wrapper for UpdateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainNameRequestT = Model::UpdateDomainNameRequest>
        void UpdateDomainNameAsync(const UpdateDomainNameRequestT& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateDomainName, request, handler, context);
        }

        /**
         * <p>Updates a <code>Function</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionOutcome UpdateFunction(const Model::UpdateFunctionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFunctionRequestT = Model::UpdateFunctionRequest>
        Model::UpdateFunctionOutcomeCallable UpdateFunctionCallable(const UpdateFunctionRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateFunction, request);
        }

        /**
         * An Async wrapper for UpdateFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFunctionRequestT = Model::UpdateFunctionRequest>
        void UpdateFunctionAsync(const UpdateFunctionRequestT& request, const UpdateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateFunction, request, handler, context);
        }

        /**
         * <p>Updates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGraphqlApiOutcome UpdateGraphqlApi(const Model::UpdateGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for UpdateGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGraphqlApiRequestT = Model::UpdateGraphqlApiRequest>
        Model::UpdateGraphqlApiOutcomeCallable UpdateGraphqlApiCallable(const UpdateGraphqlApiRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateGraphqlApi, request);
        }

        /**
         * An Async wrapper for UpdateGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGraphqlApiRequestT = Model::UpdateGraphqlApiRequest>
        void UpdateGraphqlApiAsync(const UpdateGraphqlApiRequestT& request, const UpdateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateGraphqlApi, request, handler, context);
        }

        /**
         * <p>Updates a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverOutcome UpdateResolver(const Model::UpdateResolverRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResolverRequestT = Model::UpdateResolverRequest>
        Model::UpdateResolverOutcomeCallable UpdateResolverCallable(const UpdateResolverRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateResolver, request);
        }

        /**
         * An Async wrapper for UpdateResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResolverRequestT = Model::UpdateResolverRequest>
        void UpdateResolverAsync(const UpdateResolverRequestT& request, const UpdateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateResolver, request, handler, context);
        }

        /**
         * <p>Updates some of the configuration choices of a particular source API
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateSourceApiAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSourceApiAssociationOutcome UpdateSourceApiAssociation(const Model::UpdateSourceApiAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSourceApiAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSourceApiAssociationRequestT = Model::UpdateSourceApiAssociationRequest>
        Model::UpdateSourceApiAssociationOutcomeCallable UpdateSourceApiAssociationCallable(const UpdateSourceApiAssociationRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateSourceApiAssociation, request);
        }

        /**
         * An Async wrapper for UpdateSourceApiAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSourceApiAssociationRequestT = Model::UpdateSourceApiAssociationRequest>
        void UpdateSourceApiAssociationAsync(const UpdateSourceApiAssociationRequestT& request, const UpdateSourceApiAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateSourceApiAssociation, request, handler, context);
        }

        /**
         * <p>Updates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTypeOutcome UpdateType(const Model::UpdateTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTypeRequestT = Model::UpdateTypeRequest>
        Model::UpdateTypeOutcomeCallable UpdateTypeCallable(const UpdateTypeRequestT& request) const
        {
            return SubmitCallable(&AppSyncClient::UpdateType, request);
        }

        /**
         * An Async wrapper for UpdateType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTypeRequestT = Model::UpdateTypeRequest>
        void UpdateTypeAsync(const UpdateTypeRequestT& request, const UpdateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppSyncClient::UpdateType, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppSyncEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppSyncClient>;
      void init(const AppSyncClientConfiguration& clientConfiguration);

      AppSyncClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppSyncEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppSync
} // namespace Aws
