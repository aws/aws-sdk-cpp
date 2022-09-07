/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appsync/model/AssociateApiResult.h>
#include <aws/appsync/model/CreateApiCacheResult.h>
#include <aws/appsync/model/CreateApiKeyResult.h>
#include <aws/appsync/model/CreateDataSourceResult.h>
#include <aws/appsync/model/CreateDomainNameResult.h>
#include <aws/appsync/model/CreateFunctionResult.h>
#include <aws/appsync/model/CreateGraphqlApiResult.h>
#include <aws/appsync/model/CreateResolverResult.h>
#include <aws/appsync/model/CreateTypeResult.h>
#include <aws/appsync/model/DeleteApiCacheResult.h>
#include <aws/appsync/model/DeleteApiKeyResult.h>
#include <aws/appsync/model/DeleteDataSourceResult.h>
#include <aws/appsync/model/DeleteDomainNameResult.h>
#include <aws/appsync/model/DeleteFunctionResult.h>
#include <aws/appsync/model/DeleteGraphqlApiResult.h>
#include <aws/appsync/model/DeleteResolverResult.h>
#include <aws/appsync/model/DeleteTypeResult.h>
#include <aws/appsync/model/DisassociateApiResult.h>
#include <aws/appsync/model/EvaluateMappingTemplateResult.h>
#include <aws/appsync/model/FlushApiCacheResult.h>
#include <aws/appsync/model/GetApiAssociationResult.h>
#include <aws/appsync/model/GetApiCacheResult.h>
#include <aws/appsync/model/GetDataSourceResult.h>
#include <aws/appsync/model/GetDomainNameResult.h>
#include <aws/appsync/model/GetFunctionResult.h>
#include <aws/appsync/model/GetGraphqlApiResult.h>
#include <aws/appsync/model/GetIntrospectionSchemaResult.h>
#include <aws/appsync/model/GetResolverResult.h>
#include <aws/appsync/model/GetSchemaCreationStatusResult.h>
#include <aws/appsync/model/GetTypeResult.h>
#include <aws/appsync/model/ListApiKeysResult.h>
#include <aws/appsync/model/ListDataSourcesResult.h>
#include <aws/appsync/model/ListDomainNamesResult.h>
#include <aws/appsync/model/ListFunctionsResult.h>
#include <aws/appsync/model/ListGraphqlApisResult.h>
#include <aws/appsync/model/ListResolversResult.h>
#include <aws/appsync/model/ListResolversByFunctionResult.h>
#include <aws/appsync/model/ListTagsForResourceResult.h>
#include <aws/appsync/model/ListTypesResult.h>
#include <aws/appsync/model/StartSchemaCreationResult.h>
#include <aws/appsync/model/TagResourceResult.h>
#include <aws/appsync/model/UntagResourceResult.h>
#include <aws/appsync/model/UpdateApiCacheResult.h>
#include <aws/appsync/model/UpdateApiKeyResult.h>
#include <aws/appsync/model/UpdateDataSourceResult.h>
#include <aws/appsync/model/UpdateDomainNameResult.h>
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
        class AssociateApiRequest;
        class CreateApiCacheRequest;
        class CreateApiKeyRequest;
        class CreateDataSourceRequest;
        class CreateDomainNameRequest;
        class CreateFunctionRequest;
        class CreateGraphqlApiRequest;
        class CreateResolverRequest;
        class CreateTypeRequest;
        class DeleteApiCacheRequest;
        class DeleteApiKeyRequest;
        class DeleteDataSourceRequest;
        class DeleteDomainNameRequest;
        class DeleteFunctionRequest;
        class DeleteGraphqlApiRequest;
        class DeleteResolverRequest;
        class DeleteTypeRequest;
        class DisassociateApiRequest;
        class EvaluateMappingTemplateRequest;
        class FlushApiCacheRequest;
        class GetApiAssociationRequest;
        class GetApiCacheRequest;
        class GetDataSourceRequest;
        class GetDomainNameRequest;
        class GetFunctionRequest;
        class GetGraphqlApiRequest;
        class GetIntrospectionSchemaRequest;
        class GetResolverRequest;
        class GetSchemaCreationStatusRequest;
        class GetTypeRequest;
        class ListApiKeysRequest;
        class ListDataSourcesRequest;
        class ListDomainNamesRequest;
        class ListFunctionsRequest;
        class ListGraphqlApisRequest;
        class ListResolversRequest;
        class ListResolversByFunctionRequest;
        class ListTagsForResourceRequest;
        class ListTypesRequest;
        class StartSchemaCreationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApiCacheRequest;
        class UpdateApiKeyRequest;
        class UpdateDataSourceRequest;
        class UpdateDomainNameRequest;
        class UpdateFunctionRequest;
        class UpdateGraphqlApiRequest;
        class UpdateResolverRequest;
        class UpdateTypeRequest;

        typedef Aws::Utils::Outcome<AssociateApiResult, AppSyncError> AssociateApiOutcome;
        typedef Aws::Utils::Outcome<CreateApiCacheResult, AppSyncError> CreateApiCacheOutcome;
        typedef Aws::Utils::Outcome<CreateApiKeyResult, AppSyncError> CreateApiKeyOutcome;
        typedef Aws::Utils::Outcome<CreateDataSourceResult, AppSyncError> CreateDataSourceOutcome;
        typedef Aws::Utils::Outcome<CreateDomainNameResult, AppSyncError> CreateDomainNameOutcome;
        typedef Aws::Utils::Outcome<CreateFunctionResult, AppSyncError> CreateFunctionOutcome;
        typedef Aws::Utils::Outcome<CreateGraphqlApiResult, AppSyncError> CreateGraphqlApiOutcome;
        typedef Aws::Utils::Outcome<CreateResolverResult, AppSyncError> CreateResolverOutcome;
        typedef Aws::Utils::Outcome<CreateTypeResult, AppSyncError> CreateTypeOutcome;
        typedef Aws::Utils::Outcome<DeleteApiCacheResult, AppSyncError> DeleteApiCacheOutcome;
        typedef Aws::Utils::Outcome<DeleteApiKeyResult, AppSyncError> DeleteApiKeyOutcome;
        typedef Aws::Utils::Outcome<DeleteDataSourceResult, AppSyncError> DeleteDataSourceOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainNameResult, AppSyncError> DeleteDomainNameOutcome;
        typedef Aws::Utils::Outcome<DeleteFunctionResult, AppSyncError> DeleteFunctionOutcome;
        typedef Aws::Utils::Outcome<DeleteGraphqlApiResult, AppSyncError> DeleteGraphqlApiOutcome;
        typedef Aws::Utils::Outcome<DeleteResolverResult, AppSyncError> DeleteResolverOutcome;
        typedef Aws::Utils::Outcome<DeleteTypeResult, AppSyncError> DeleteTypeOutcome;
        typedef Aws::Utils::Outcome<DisassociateApiResult, AppSyncError> DisassociateApiOutcome;
        typedef Aws::Utils::Outcome<EvaluateMappingTemplateResult, AppSyncError> EvaluateMappingTemplateOutcome;
        typedef Aws::Utils::Outcome<FlushApiCacheResult, AppSyncError> FlushApiCacheOutcome;
        typedef Aws::Utils::Outcome<GetApiAssociationResult, AppSyncError> GetApiAssociationOutcome;
        typedef Aws::Utils::Outcome<GetApiCacheResult, AppSyncError> GetApiCacheOutcome;
        typedef Aws::Utils::Outcome<GetDataSourceResult, AppSyncError> GetDataSourceOutcome;
        typedef Aws::Utils::Outcome<GetDomainNameResult, AppSyncError> GetDomainNameOutcome;
        typedef Aws::Utils::Outcome<GetFunctionResult, AppSyncError> GetFunctionOutcome;
        typedef Aws::Utils::Outcome<GetGraphqlApiResult, AppSyncError> GetGraphqlApiOutcome;
        typedef Aws::Utils::Outcome<GetIntrospectionSchemaResult, AppSyncError> GetIntrospectionSchemaOutcome;
        typedef Aws::Utils::Outcome<GetResolverResult, AppSyncError> GetResolverOutcome;
        typedef Aws::Utils::Outcome<GetSchemaCreationStatusResult, AppSyncError> GetSchemaCreationStatusOutcome;
        typedef Aws::Utils::Outcome<GetTypeResult, AppSyncError> GetTypeOutcome;
        typedef Aws::Utils::Outcome<ListApiKeysResult, AppSyncError> ListApiKeysOutcome;
        typedef Aws::Utils::Outcome<ListDataSourcesResult, AppSyncError> ListDataSourcesOutcome;
        typedef Aws::Utils::Outcome<ListDomainNamesResult, AppSyncError> ListDomainNamesOutcome;
        typedef Aws::Utils::Outcome<ListFunctionsResult, AppSyncError> ListFunctionsOutcome;
        typedef Aws::Utils::Outcome<ListGraphqlApisResult, AppSyncError> ListGraphqlApisOutcome;
        typedef Aws::Utils::Outcome<ListResolversResult, AppSyncError> ListResolversOutcome;
        typedef Aws::Utils::Outcome<ListResolversByFunctionResult, AppSyncError> ListResolversByFunctionOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppSyncError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTypesResult, AppSyncError> ListTypesOutcome;
        typedef Aws::Utils::Outcome<StartSchemaCreationResult, AppSyncError> StartSchemaCreationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, AppSyncError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, AppSyncError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApiCacheResult, AppSyncError> UpdateApiCacheOutcome;
        typedef Aws::Utils::Outcome<UpdateApiKeyResult, AppSyncError> UpdateApiKeyOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSourceResult, AppSyncError> UpdateDataSourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainNameResult, AppSyncError> UpdateDomainNameOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionResult, AppSyncError> UpdateFunctionOutcome;
        typedef Aws::Utils::Outcome<UpdateGraphqlApiResult, AppSyncError> UpdateGraphqlApiOutcome;
        typedef Aws::Utils::Outcome<UpdateResolverResult, AppSyncError> UpdateResolverOutcome;
        typedef Aws::Utils::Outcome<UpdateTypeResult, AppSyncError> UpdateTypeOutcome;

        typedef std::future<AssociateApiOutcome> AssociateApiOutcomeCallable;
        typedef std::future<CreateApiCacheOutcome> CreateApiCacheOutcomeCallable;
        typedef std::future<CreateApiKeyOutcome> CreateApiKeyOutcomeCallable;
        typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
        typedef std::future<CreateDomainNameOutcome> CreateDomainNameOutcomeCallable;
        typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
        typedef std::future<CreateGraphqlApiOutcome> CreateGraphqlApiOutcomeCallable;
        typedef std::future<CreateResolverOutcome> CreateResolverOutcomeCallable;
        typedef std::future<CreateTypeOutcome> CreateTypeOutcomeCallable;
        typedef std::future<DeleteApiCacheOutcome> DeleteApiCacheOutcomeCallable;
        typedef std::future<DeleteApiKeyOutcome> DeleteApiKeyOutcomeCallable;
        typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
        typedef std::future<DeleteDomainNameOutcome> DeleteDomainNameOutcomeCallable;
        typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
        typedef std::future<DeleteGraphqlApiOutcome> DeleteGraphqlApiOutcomeCallable;
        typedef std::future<DeleteResolverOutcome> DeleteResolverOutcomeCallable;
        typedef std::future<DeleteTypeOutcome> DeleteTypeOutcomeCallable;
        typedef std::future<DisassociateApiOutcome> DisassociateApiOutcomeCallable;
        typedef std::future<EvaluateMappingTemplateOutcome> EvaluateMappingTemplateOutcomeCallable;
        typedef std::future<FlushApiCacheOutcome> FlushApiCacheOutcomeCallable;
        typedef std::future<GetApiAssociationOutcome> GetApiAssociationOutcomeCallable;
        typedef std::future<GetApiCacheOutcome> GetApiCacheOutcomeCallable;
        typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
        typedef std::future<GetDomainNameOutcome> GetDomainNameOutcomeCallable;
        typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
        typedef std::future<GetGraphqlApiOutcome> GetGraphqlApiOutcomeCallable;
        typedef std::future<GetIntrospectionSchemaOutcome> GetIntrospectionSchemaOutcomeCallable;
        typedef std::future<GetResolverOutcome> GetResolverOutcomeCallable;
        typedef std::future<GetSchemaCreationStatusOutcome> GetSchemaCreationStatusOutcomeCallable;
        typedef std::future<GetTypeOutcome> GetTypeOutcomeCallable;
        typedef std::future<ListApiKeysOutcome> ListApiKeysOutcomeCallable;
        typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
        typedef std::future<ListDomainNamesOutcome> ListDomainNamesOutcomeCallable;
        typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
        typedef std::future<ListGraphqlApisOutcome> ListGraphqlApisOutcomeCallable;
        typedef std::future<ListResolversOutcome> ListResolversOutcomeCallable;
        typedef std::future<ListResolversByFunctionOutcome> ListResolversByFunctionOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTypesOutcome> ListTypesOutcomeCallable;
        typedef std::future<StartSchemaCreationOutcome> StartSchemaCreationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApiCacheOutcome> UpdateApiCacheOutcomeCallable;
        typedef std::future<UpdateApiKeyOutcome> UpdateApiKeyOutcomeCallable;
        typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
        typedef std::future<UpdateDomainNameOutcome> UpdateDomainNameOutcomeCallable;
        typedef std::future<UpdateFunctionOutcome> UpdateFunctionOutcomeCallable;
        typedef std::future<UpdateGraphqlApiOutcome> UpdateGraphqlApiOutcomeCallable;
        typedef std::future<UpdateResolverOutcome> UpdateResolverOutcomeCallable;
        typedef std::future<UpdateTypeOutcome> UpdateTypeOutcomeCallable;
} // namespace Model

  class AppSyncClient;

    typedef std::function<void(const AppSyncClient*, const Model::AssociateApiRequest&, const Model::AssociateApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateApiCacheRequest&, const Model::CreateApiCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiCacheResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateApiKeyRequest&, const Model::CreateApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiKeyResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateDomainNameRequest&, const Model::CreateDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainNameResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateFunctionRequest&, const Model::CreateFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateGraphqlApiRequest&, const Model::CreateGraphqlApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGraphqlApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateResolverRequest&, const Model::CreateResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::CreateTypeRequest&, const Model::CreateTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTypeResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteApiCacheRequest&, const Model::DeleteApiCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiCacheResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteApiKeyRequest&, const Model::DeleteApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiKeyResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteDomainNameRequest&, const Model::DeleteDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainNameResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteFunctionRequest&, const Model::DeleteFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteGraphqlApiRequest&, const Model::DeleteGraphqlApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGraphqlApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteResolverRequest&, const Model::DeleteResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DeleteTypeRequest&, const Model::DeleteTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTypeResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::DisassociateApiRequest&, const Model::DisassociateApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::EvaluateMappingTemplateRequest&, const Model::EvaluateMappingTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EvaluateMappingTemplateResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::FlushApiCacheRequest&, const Model::FlushApiCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FlushApiCacheResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetApiAssociationRequest&, const Model::GetApiAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApiAssociationResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetApiCacheRequest&, const Model::GetApiCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApiCacheResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetDomainNameRequest&, const Model::GetDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainNameResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetFunctionRequest&, const Model::GetFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetGraphqlApiRequest&, const Model::GetGraphqlApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGraphqlApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetIntrospectionSchemaRequest&, Model::GetIntrospectionSchemaOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntrospectionSchemaResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetResolverRequest&, const Model::GetResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetSchemaCreationStatusRequest&, const Model::GetSchemaCreationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaCreationStatusResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::GetTypeRequest&, const Model::GetTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTypeResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListApiKeysRequest&, const Model::ListApiKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApiKeysResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListDomainNamesRequest&, const Model::ListDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainNamesResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListFunctionsRequest&, const Model::ListFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionsResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListGraphqlApisRequest&, const Model::ListGraphqlApisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGraphqlApisResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListResolversRequest&, const Model::ListResolversOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolversResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListResolversByFunctionRequest&, const Model::ListResolversByFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolversByFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::ListTypesRequest&, const Model::ListTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTypesResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::StartSchemaCreationRequest&, const Model::StartSchemaCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSchemaCreationResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateApiCacheRequest&, const Model::UpdateApiCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiCacheResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateApiKeyRequest&, const Model::UpdateApiKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiKeyResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateDomainNameRequest&, const Model::UpdateDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainNameResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateFunctionRequest&, const Model::UpdateFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateGraphqlApiRequest&, const Model::UpdateGraphqlApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGraphqlApiResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateResolverRequest&, const Model::UpdateResolverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverResponseReceivedHandler;
    typedef std::function<void(const AppSyncClient*, const Model::UpdateTypeRequest&, const Model::UpdateTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTypeResponseReceivedHandler;

  /**
   * <p>AppSync provides API actions for creating and interacting with data sources
   * using GraphQL from your application.</p>
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
        AppSyncClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppSync
} // namespace Aws
