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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppSyncClient(const Aws::AppSync::AppSyncClientConfiguration& clientConfiguration = Aws::AppSync::AppSyncClientConfiguration(),
                      std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppSyncClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG),
                      const Aws::AppSync::AppSyncClientConfiguration& clientConfiguration = Aws::AppSync::AppSyncClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AppSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<AppSyncEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::AssociateApiOutcomeCallable AssociateApiCallable(const Model::AssociateApiRequest& request) const;

        /**
         * An Async wrapper for AssociateApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateApiAsync(const Model::AssociateApiRequest& request, const AssociateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a cache for the GraphQL API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiCacheOutcome CreateApiCache(const Model::CreateApiCacheRequest& request) const;

        /**
         * A Callable wrapper for CreateApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApiCacheOutcomeCallable CreateApiCacheCallable(const Model::CreateApiCacheRequest& request) const;

        /**
         * An Async wrapper for CreateApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApiCacheAsync(const Model::CreateApiCacheRequest& request, const CreateApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateApiKeyOutcomeCallable CreateApiKeyCallable(const Model::CreateApiKeyRequest& request) const;

        /**
         * An Async wrapper for CreateApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApiKeyAsync(const Model::CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const Model::CreateDataSourceRequest& request) const;

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDomainNameOutcomeCallable CreateDomainNameCallable(const Model::CreateDomainNameRequest& request) const;

        /**
         * An Async wrapper for CreateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainNameAsync(const Model::CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request) const;

        /**
         * An Async wrapper for CreateFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphqlApiOutcome CreateGraphqlApi(const Model::CreateGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for CreateGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGraphqlApiOutcomeCallable CreateGraphqlApiCallable(const Model::CreateGraphqlApiRequest& request) const;

        /**
         * An Async wrapper for CreateGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGraphqlApiAsync(const Model::CreateGraphqlApiRequest& request, const CreateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateResolverOutcomeCallable CreateResolverCallable(const Model::CreateResolverRequest& request) const;

        /**
         * An Async wrapper for CreateResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResolverAsync(const Model::CreateResolverRequest& request, const CreateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTypeOutcome CreateType(const Model::CreateTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTypeOutcomeCallable CreateTypeCallable(const Model::CreateTypeRequest& request) const;

        /**
         * An Async wrapper for CreateType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTypeAsync(const Model::CreateTypeRequest& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiCacheOutcome DeleteApiCache(const Model::DeleteApiCacheRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApiCacheOutcomeCallable DeleteApiCacheCallable(const Model::DeleteApiCacheRequest& request) const;

        /**
         * An Async wrapper for DeleteApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApiCacheAsync(const Model::DeleteApiCacheRequest& request, const DeleteApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const Model::DeleteApiKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApiKeyAsync(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDomainNameOutcomeCallable DeleteDomainNameCallable(const Model::DeleteDomainNameRequest& request) const;

        /**
         * An Async wrapper for DeleteDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainNameAsync(const Model::DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request) const;

        /**
         * An Async wrapper for DeleteFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGraphqlApiOutcome DeleteGraphqlApi(const Model::DeleteGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for DeleteGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGraphqlApiOutcomeCallable DeleteGraphqlApiCallable(const Model::DeleteGraphqlApiRequest& request) const;

        /**
         * An Async wrapper for DeleteGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGraphqlApiAsync(const Model::DeleteGraphqlApiRequest& request, const DeleteGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverOutcome DeleteResolver(const Model::DeleteResolverRequest& request) const;

        /**
         * A Callable wrapper for DeleteResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverOutcomeCallable DeleteResolverCallable(const Model::DeleteResolverRequest& request) const;

        /**
         * An Async wrapper for DeleteResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResolverAsync(const Model::DeleteResolverRequest& request, const DeleteResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTypeOutcome DeleteType(const Model::DeleteTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTypeOutcomeCallable DeleteTypeCallable(const Model::DeleteTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTypeAsync(const Model::DeleteTypeRequest& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateApiOutcomeCallable DisassociateApiCallable(const Model::DisassociateApiRequest& request) const;

        /**
         * An Async wrapper for DisassociateApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateApiAsync(const Model::DisassociateApiRequest& request, const DisassociateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::EvaluateCodeOutcomeCallable EvaluateCodeCallable(const Model::EvaluateCodeRequest& request) const;

        /**
         * An Async wrapper for EvaluateCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EvaluateCodeAsync(const Model::EvaluateCodeRequest& request, const EvaluateCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::EvaluateMappingTemplateOutcomeCallable EvaluateMappingTemplateCallable(const Model::EvaluateMappingTemplateRequest& request) const;

        /**
         * An Async wrapper for EvaluateMappingTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EvaluateMappingTemplateAsync(const Model::EvaluateMappingTemplateRequest& request, const EvaluateMappingTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Flushes an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/FlushApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::FlushApiCacheOutcome FlushApiCache(const Model::FlushApiCacheRequest& request) const;

        /**
         * A Callable wrapper for FlushApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FlushApiCacheOutcomeCallable FlushApiCacheCallable(const Model::FlushApiCacheRequest& request) const;

        /**
         * An Async wrapper for FlushApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FlushApiCacheAsync(const Model::FlushApiCacheRequest& request, const FlushApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetApiAssociationOutcomeCallable GetApiAssociationCallable(const Model::GetApiAssociationRequest& request) const;

        /**
         * An Async wrapper for GetApiAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiAssociationAsync(const Model::GetApiAssociationRequest& request, const GetApiAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiCacheOutcome GetApiCache(const Model::GetApiCacheRequest& request) const;

        /**
         * A Callable wrapper for GetApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApiCacheOutcomeCallable GetApiCacheCallable(const Model::GetApiCacheRequest& request) const;

        /**
         * An Async wrapper for GetApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiCacheAsync(const Model::GetApiCacheRequest& request, const GetApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * A Callable wrapper for GetDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const Model::GetDataSourceRequest& request) const;

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataSourceAsync(const Model::GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDomainNameOutcomeCallable GetDomainNameCallable(const Model::GetDomainNameRequest& request) const;

        /**
         * An Async wrapper for GetDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainNameAsync(const Model::GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

        /**
         * A Callable wrapper for GetFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request) const;

        /**
         * An Async wrapper for GetFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGraphqlApiOutcome GetGraphqlApi(const Model::GetGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for GetGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGraphqlApiOutcomeCallable GetGraphqlApiCallable(const Model::GetGraphqlApiRequest& request) const;

        /**
         * An Async wrapper for GetGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetIntrospectionSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntrospectionSchemaOutcomeCallable GetIntrospectionSchemaCallable(const Model::GetIntrospectionSchemaRequest& request) const;

        /**
         * An Async wrapper for GetIntrospectionSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntrospectionSchemaAsync(const Model::GetIntrospectionSchemaRequest& request, const GetIntrospectionSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverOutcome GetResolver(const Model::GetResolverRequest& request) const;

        /**
         * A Callable wrapper for GetResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverOutcomeCallable GetResolverCallable(const Model::GetResolverRequest& request) const;

        /**
         * An Async wrapper for GetResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetSchemaCreationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaCreationStatusOutcomeCallable GetSchemaCreationStatusCallable(const Model::GetSchemaCreationStatusRequest& request) const;

        /**
         * An Async wrapper for GetSchemaCreationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaCreationStatusAsync(const Model::GetSchemaCreationStatusRequest& request, const GetSchemaCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetType">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTypeOutcome GetType(const Model::GetTypeRequest& request) const;

        /**
         * A Callable wrapper for GetType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTypeOutcomeCallable GetTypeCallable(const Model::GetTypeRequest& request) const;

        /**
         * An Async wrapper for GetType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTypeAsync(const Model::GetTypeRequest& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListApiKeysOutcomeCallable ListApiKeysCallable(const Model::ListApiKeysRequest& request) const;

        /**
         * An Async wrapper for ListApiKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApiKeysAsync(const Model::ListApiKeysRequest& request, const ListApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the data sources for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const Model::ListDataSourcesRequest& request) const;

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSourcesAsync(const Model::ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists multiple custom domain names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;

        /**
         * A Callable wrapper for ListDomainNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainNamesOutcomeCallable ListDomainNamesCallable(const Model::ListDomainNamesRequest& request) const;

        /**
         * An Async wrapper for ListDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainNamesAsync(const Model::ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List multiple functions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request) const;

        /**
         * An Async wrapper for ListFunctions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your GraphQL APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListGraphqlApis">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGraphqlApisOutcome ListGraphqlApis(const Model::ListGraphqlApisRequest& request) const;

        /**
         * A Callable wrapper for ListGraphqlApis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGraphqlApisOutcomeCallable ListGraphqlApisCallable(const Model::ListGraphqlApisRequest& request) const;

        /**
         * An Async wrapper for ListGraphqlApis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGraphqlApisAsync(const Model::ListGraphqlApisRequest& request, const ListGraphqlApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resolvers for a given API and type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolvers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolversOutcome ListResolvers(const Model::ListResolversRequest& request) const;

        /**
         * A Callable wrapper for ListResolvers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolversOutcomeCallable ListResolversCallable(const Model::ListResolversRequest& request) const;

        /**
         * An Async wrapper for ListResolvers that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListResolversByFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolversByFunctionOutcomeCallable ListResolversByFunctionCallable(const Model::ListResolversByFunctionRequest& request) const;

        /**
         * An Async wrapper for ListResolversByFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolversByFunctionAsync(const Model::ListResolversByFunctionRequest& request, const ListResolversByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTagsForResource">AWS
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
         * <p>Lists the types for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypesOutcome ListTypes(const Model::ListTypesRequest& request) const;

        /**
         * A Callable wrapper for ListTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTypesOutcomeCallable ListTypesCallable(const Model::ListTypesRequest& request) const;

        /**
         * An Async wrapper for ListTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StartSchemaCreation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSchemaCreationOutcomeCallable StartSchemaCreationCallable(const Model::StartSchemaCreationRequest& request) const;

        /**
         * An Async wrapper for StartSchemaCreation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSchemaCreationAsync(const Model::StartSchemaCreationRequest& request, const StartSchemaCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags a resource with user-supplied tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/TagResource">AWS
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
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UntagResource">AWS
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
         * <p>Updates the cache for the GraphQL API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiCacheOutcome UpdateApiCache(const Model::UpdateApiCacheRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApiCacheOutcomeCallable UpdateApiCacheCallable(const Model::UpdateApiCacheRequest& request) const;

        /**
         * An Async wrapper for UpdateApiCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApiCacheAsync(const Model::UpdateApiCacheRequest& request, const UpdateApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateApiKeyOutcomeCallable UpdateApiKeyCallable(const Model::UpdateApiKeyRequest& request) const;

        /**
         * An Async wrapper for UpdateApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApiKeyAsync(const Model::UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDomainNameOutcomeCallable UpdateDomainNameCallable(const Model::UpdateDomainNameRequest& request) const;

        /**
         * An Async wrapper for UpdateDomainName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainNameAsync(const Model::UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>Function</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionOutcome UpdateFunction(const Model::UpdateFunctionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionOutcomeCallable UpdateFunctionCallable(const Model::UpdateFunctionRequest& request) const;

        /**
         * An Async wrapper for UpdateFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionAsync(const Model::UpdateFunctionRequest& request, const UpdateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGraphqlApiOutcome UpdateGraphqlApi(const Model::UpdateGraphqlApiRequest& request) const;

        /**
         * A Callable wrapper for UpdateGraphqlApi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGraphqlApiOutcomeCallable UpdateGraphqlApiCallable(const Model::UpdateGraphqlApiRequest& request) const;

        /**
         * An Async wrapper for UpdateGraphqlApi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGraphqlApiAsync(const Model::UpdateGraphqlApiRequest& request, const UpdateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverOutcome UpdateResolver(const Model::UpdateResolverRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverOutcomeCallable UpdateResolverCallable(const Model::UpdateResolverRequest& request) const;

        /**
         * An Async wrapper for UpdateResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResolverAsync(const Model::UpdateResolverRequest& request, const UpdateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTypeOutcome UpdateType(const Model::UpdateTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTypeOutcomeCallable UpdateTypeCallable(const Model::UpdateTypeRequest& request) const;

        /**
         * An Async wrapper for UpdateType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTypeAsync(const Model::UpdateTypeRequest& request, const UpdateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
