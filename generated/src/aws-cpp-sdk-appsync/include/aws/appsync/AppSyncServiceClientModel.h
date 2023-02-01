/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/appsync/AppSyncErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/appsync/AppSyncEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppSyncClient header */
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
#include <aws/appsync/model/EvaluateCodeResult.h>
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
/* End of service model headers required in AppSyncClient header */

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
    using AppSyncClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppSyncEndpointProviderBase = Aws::AppSync::Endpoint::AppSyncEndpointProviderBase;
    using AppSyncEndpointProvider = Aws::AppSync::Endpoint::AppSyncEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppSyncClient header */
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
      class EvaluateCodeRequest;
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
      /* End of service model forward declarations required in AppSyncClient header */

      /* Service model Outcome class definitions */
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
      typedef Aws::Utils::Outcome<EvaluateCodeResult, AppSyncError> EvaluateCodeOutcome;
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<EvaluateCodeOutcome> EvaluateCodeOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppSyncClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const AppSyncClient*, const Model::EvaluateCodeRequest&, const Model::EvaluateCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EvaluateCodeResponseReceivedHandler;
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
    /* End of service model async handlers definitions */
  } // namespace AppSync
} // namespace Aws
