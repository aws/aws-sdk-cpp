/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appsync/AppSyncServiceClientModel.h>
#include <aws/appsync/AppSyncLegacyAsyncMacros.h>

namespace Aws
{
namespace AppSync
{
  /**
   * <p>AppSync provides API actions for creating and interacting with data sources
   * using GraphQL from your application.</p>
   */
  class AWS_APPSYNC_API AppSyncClient : public Aws::Client::AWSJsonClient
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
         * <p>Maps an endpoint to your custom domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AssociateApi">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApiOutcome AssociateApi(const Model::AssociateApiRequest& request) const;


        /**
         * <p>Creates a cache for the GraphQL API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiCacheOutcome CreateApiCache(const Model::CreateApiCacheRequest& request) const;


        /**
         * <p>Creates a unique key that you can distribute to clients who invoke your
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest& request) const;


        /**
         * <p>Creates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;


        /**
         * <p>Creates a custom <code>DomainName</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainNameOutcome CreateDomainName(const Model::CreateDomainNameRequest& request) const;


        /**
         * <p>Creates a <code>Function</code> object.</p> <p>A function is a reusable
         * entity. You can use multiple functions to compose the resolver
         * logic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;


        /**
         * <p>Creates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGraphqlApiOutcome CreateGraphqlApi(const Model::CreateGraphqlApiRequest& request) const;


        /**
         * <p>Creates a <code>Resolver</code> object.</p> <p>A resolver converts incoming
         * requests into a format that a data source can understand, and converts the data
         * source's responses into GraphQL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverOutcome CreateResolver(const Model::CreateResolverRequest& request) const;


        /**
         * <p>Creates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/CreateType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTypeOutcome CreateType(const Model::CreateTypeRequest& request) const;


        /**
         * <p>Deletes an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiCacheOutcome DeleteApiCache(const Model::DeleteApiCacheRequest& request) const;


        /**
         * <p>Deletes an API key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest& request) const;


        /**
         * <p>Deletes a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;


        /**
         * <p>Deletes a custom <code>DomainName</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainNameOutcome DeleteDomainName(const Model::DeleteDomainNameRequest& request) const;


        /**
         * <p>Deletes a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;


        /**
         * <p>Deletes a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGraphqlApiOutcome DeleteGraphqlApi(const Model::DeleteGraphqlApiRequest& request) const;


        /**
         * <p>Deletes a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverOutcome DeleteResolver(const Model::DeleteResolverRequest& request) const;


        /**
         * <p>Deletes a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeleteType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTypeOutcome DeleteType(const Model::DeleteTypeRequest& request) const;


        /**
         * <p>Removes an <code>ApiAssociation</code> object from a custom
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DisassociateApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApiOutcome DisassociateApi(const Model::DisassociateApiRequest& request) const;


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
         * <p>Flushes an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/FlushApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::FlushApiCacheOutcome FlushApiCache(const Model::FlushApiCacheRequest& request) const;


        /**
         * <p>Retrieves an <code>ApiAssociation</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetApiAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiAssociationOutcome GetApiAssociation(const Model::GetApiAssociationRequest& request) const;


        /**
         * <p>Retrieves an <code>ApiCache</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiCacheOutcome GetApiCache(const Model::GetApiCacheRequest& request) const;


        /**
         * <p>Retrieves a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;


        /**
         * <p>Retrieves a custom <code>DomainName</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNameOutcome GetDomainName(const Model::GetDomainNameRequest& request) const;


        /**
         * <p>Get a <code>Function</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;


        /**
         * <p>Retrieves a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGraphqlApiOutcome GetGraphqlApi(const Model::GetGraphqlApiRequest& request) const;


        /**
         * <p>Retrieves the introspection schema for a GraphQL API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetIntrospectionSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntrospectionSchemaOutcome GetIntrospectionSchema(const Model::GetIntrospectionSchemaRequest& request) const;


        /**
         * <p>Retrieves a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverOutcome GetResolver(const Model::GetResolverRequest& request) const;


        /**
         * <p>Retrieves the current status of a schema creation operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetSchemaCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaCreationStatusOutcome GetSchemaCreationStatus(const Model::GetSchemaCreationStatusRequest& request) const;


        /**
         * <p>Retrieves a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetType">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTypeOutcome GetType(const Model::GetTypeRequest& request) const;


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
         * <p>Lists the data sources for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;


        /**
         * <p>Lists multiple custom domain names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;


        /**
         * <p>List multiple functions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;


        /**
         * <p>Lists your GraphQL APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListGraphqlApis">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGraphqlApisOutcome ListGraphqlApis(const Model::ListGraphqlApisRequest& request) const;


        /**
         * <p>Lists the resolvers for a given API and type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolvers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolversOutcome ListResolvers(const Model::ListResolversRequest& request) const;


        /**
         * <p>List the resolvers that are associated with a specific
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListResolversByFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolversByFunctionOutcome ListResolversByFunction(const Model::ListResolversByFunctionRequest& request) const;


        /**
         * <p>Lists the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the types for a given API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ListTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypesOutcome ListTypes(const Model::ListTypesRequest& request) const;


        /**
         * <p>Adds a new schema to your GraphQL API.</p> <p>This operation is asynchronous.
         * Use to determine when it has completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/StartSchemaCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSchemaCreationOutcome StartSchemaCreation(const Model::StartSchemaCreationRequest& request) const;


        /**
         * <p>Tags a resource with user-supplied tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the cache for the GraphQL API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiCache">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiCacheOutcome UpdateApiCache(const Model::UpdateApiCacheRequest& request) const;


        /**
         * <p>Updates an API key. You can update the key as long as it's not
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest& request) const;


        /**
         * <p>Updates a <code>DataSource</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;


        /**
         * <p>Updates a custom <code>DomainName</code> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainNameOutcome UpdateDomainName(const Model::UpdateDomainNameRequest& request) const;


        /**
         * <p>Updates a <code>Function</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionOutcome UpdateFunction(const Model::UpdateFunctionRequest& request) const;


        /**
         * <p>Updates a <code>GraphqlApi</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateGraphqlApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGraphqlApiOutcome UpdateGraphqlApi(const Model::UpdateGraphqlApiRequest& request) const;


        /**
         * <p>Updates a <code>Resolver</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverOutcome UpdateResolver(const Model::UpdateResolverRequest& request) const;


        /**
         * <p>Updates a <code>Type</code> object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/UpdateType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTypeOutcome UpdateType(const Model::UpdateTypeRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppSyncEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AppSyncClientConfiguration& clientConfiguration);

      AppSyncClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppSyncEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppSync
} // namespace Aws
