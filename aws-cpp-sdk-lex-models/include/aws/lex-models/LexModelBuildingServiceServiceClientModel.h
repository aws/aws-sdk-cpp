/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lex-models/LexModelBuildingServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lex-models/LexModelBuildingServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LexModelBuildingServiceClient header */
#include <aws/lex-models/model/CreateBotVersionResult.h>
#include <aws/lex-models/model/CreateIntentVersionResult.h>
#include <aws/lex-models/model/CreateSlotTypeVersionResult.h>
#include <aws/lex-models/model/GetBotResult.h>
#include <aws/lex-models/model/GetBotAliasResult.h>
#include <aws/lex-models/model/GetBotAliasesResult.h>
#include <aws/lex-models/model/GetBotChannelAssociationResult.h>
#include <aws/lex-models/model/GetBotChannelAssociationsResult.h>
#include <aws/lex-models/model/GetBotVersionsResult.h>
#include <aws/lex-models/model/GetBotsResult.h>
#include <aws/lex-models/model/GetBuiltinIntentResult.h>
#include <aws/lex-models/model/GetBuiltinIntentsResult.h>
#include <aws/lex-models/model/GetBuiltinSlotTypesResult.h>
#include <aws/lex-models/model/GetExportResult.h>
#include <aws/lex-models/model/GetImportResult.h>
#include <aws/lex-models/model/GetIntentResult.h>
#include <aws/lex-models/model/GetIntentVersionsResult.h>
#include <aws/lex-models/model/GetIntentsResult.h>
#include <aws/lex-models/model/GetMigrationResult.h>
#include <aws/lex-models/model/GetMigrationsResult.h>
#include <aws/lex-models/model/GetSlotTypeResult.h>
#include <aws/lex-models/model/GetSlotTypeVersionsResult.h>
#include <aws/lex-models/model/GetSlotTypesResult.h>
#include <aws/lex-models/model/GetUtterancesViewResult.h>
#include <aws/lex-models/model/ListTagsForResourceResult.h>
#include <aws/lex-models/model/PutBotResult.h>
#include <aws/lex-models/model/PutBotAliasResult.h>
#include <aws/lex-models/model/PutIntentResult.h>
#include <aws/lex-models/model/PutSlotTypeResult.h>
#include <aws/lex-models/model/StartImportResult.h>
#include <aws/lex-models/model/StartMigrationResult.h>
#include <aws/lex-models/model/TagResourceResult.h>
#include <aws/lex-models/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in LexModelBuildingServiceClient header */

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

  namespace LexModelBuildingService
  {
    using LexModelBuildingServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LexModelBuildingServiceEndpointProviderBase = Aws::LexModelBuildingService::Endpoint::LexModelBuildingServiceEndpointProviderBase;
    using LexModelBuildingServiceEndpointProvider = Aws::LexModelBuildingService::Endpoint::LexModelBuildingServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LexModelBuildingServiceClient header */
      class CreateBotVersionRequest;
      class CreateIntentVersionRequest;
      class CreateSlotTypeVersionRequest;
      class DeleteBotRequest;
      class DeleteBotAliasRequest;
      class DeleteBotChannelAssociationRequest;
      class DeleteBotVersionRequest;
      class DeleteIntentRequest;
      class DeleteIntentVersionRequest;
      class DeleteSlotTypeRequest;
      class DeleteSlotTypeVersionRequest;
      class DeleteUtterancesRequest;
      class GetBotRequest;
      class GetBotAliasRequest;
      class GetBotAliasesRequest;
      class GetBotChannelAssociationRequest;
      class GetBotChannelAssociationsRequest;
      class GetBotVersionsRequest;
      class GetBotsRequest;
      class GetBuiltinIntentRequest;
      class GetBuiltinIntentsRequest;
      class GetBuiltinSlotTypesRequest;
      class GetExportRequest;
      class GetImportRequest;
      class GetIntentRequest;
      class GetIntentVersionsRequest;
      class GetIntentsRequest;
      class GetMigrationRequest;
      class GetMigrationsRequest;
      class GetSlotTypeRequest;
      class GetSlotTypeVersionsRequest;
      class GetSlotTypesRequest;
      class GetUtterancesViewRequest;
      class ListTagsForResourceRequest;
      class PutBotRequest;
      class PutBotAliasRequest;
      class PutIntentRequest;
      class PutSlotTypeRequest;
      class StartImportRequest;
      class StartMigrationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in LexModelBuildingServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateBotVersionResult, LexModelBuildingServiceError> CreateBotVersionOutcome;
      typedef Aws::Utils::Outcome<CreateIntentVersionResult, LexModelBuildingServiceError> CreateIntentVersionOutcome;
      typedef Aws::Utils::Outcome<CreateSlotTypeVersionResult, LexModelBuildingServiceError> CreateSlotTypeVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteBotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteBotAliasOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteBotChannelAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteBotVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteIntentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteIntentVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteSlotTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteSlotTypeVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelBuildingServiceError> DeleteUtterancesOutcome;
      typedef Aws::Utils::Outcome<GetBotResult, LexModelBuildingServiceError> GetBotOutcome;
      typedef Aws::Utils::Outcome<GetBotAliasResult, LexModelBuildingServiceError> GetBotAliasOutcome;
      typedef Aws::Utils::Outcome<GetBotAliasesResult, LexModelBuildingServiceError> GetBotAliasesOutcome;
      typedef Aws::Utils::Outcome<GetBotChannelAssociationResult, LexModelBuildingServiceError> GetBotChannelAssociationOutcome;
      typedef Aws::Utils::Outcome<GetBotChannelAssociationsResult, LexModelBuildingServiceError> GetBotChannelAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetBotVersionsResult, LexModelBuildingServiceError> GetBotVersionsOutcome;
      typedef Aws::Utils::Outcome<GetBotsResult, LexModelBuildingServiceError> GetBotsOutcome;
      typedef Aws::Utils::Outcome<GetBuiltinIntentResult, LexModelBuildingServiceError> GetBuiltinIntentOutcome;
      typedef Aws::Utils::Outcome<GetBuiltinIntentsResult, LexModelBuildingServiceError> GetBuiltinIntentsOutcome;
      typedef Aws::Utils::Outcome<GetBuiltinSlotTypesResult, LexModelBuildingServiceError> GetBuiltinSlotTypesOutcome;
      typedef Aws::Utils::Outcome<GetExportResult, LexModelBuildingServiceError> GetExportOutcome;
      typedef Aws::Utils::Outcome<GetImportResult, LexModelBuildingServiceError> GetImportOutcome;
      typedef Aws::Utils::Outcome<GetIntentResult, LexModelBuildingServiceError> GetIntentOutcome;
      typedef Aws::Utils::Outcome<GetIntentVersionsResult, LexModelBuildingServiceError> GetIntentVersionsOutcome;
      typedef Aws::Utils::Outcome<GetIntentsResult, LexModelBuildingServiceError> GetIntentsOutcome;
      typedef Aws::Utils::Outcome<GetMigrationResult, LexModelBuildingServiceError> GetMigrationOutcome;
      typedef Aws::Utils::Outcome<GetMigrationsResult, LexModelBuildingServiceError> GetMigrationsOutcome;
      typedef Aws::Utils::Outcome<GetSlotTypeResult, LexModelBuildingServiceError> GetSlotTypeOutcome;
      typedef Aws::Utils::Outcome<GetSlotTypeVersionsResult, LexModelBuildingServiceError> GetSlotTypeVersionsOutcome;
      typedef Aws::Utils::Outcome<GetSlotTypesResult, LexModelBuildingServiceError> GetSlotTypesOutcome;
      typedef Aws::Utils::Outcome<GetUtterancesViewResult, LexModelBuildingServiceError> GetUtterancesViewOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, LexModelBuildingServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutBotResult, LexModelBuildingServiceError> PutBotOutcome;
      typedef Aws::Utils::Outcome<PutBotAliasResult, LexModelBuildingServiceError> PutBotAliasOutcome;
      typedef Aws::Utils::Outcome<PutIntentResult, LexModelBuildingServiceError> PutIntentOutcome;
      typedef Aws::Utils::Outcome<PutSlotTypeResult, LexModelBuildingServiceError> PutSlotTypeOutcome;
      typedef Aws::Utils::Outcome<StartImportResult, LexModelBuildingServiceError> StartImportOutcome;
      typedef Aws::Utils::Outcome<StartMigrationResult, LexModelBuildingServiceError> StartMigrationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, LexModelBuildingServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, LexModelBuildingServiceError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateBotVersionOutcome> CreateBotVersionOutcomeCallable;
      typedef std::future<CreateIntentVersionOutcome> CreateIntentVersionOutcomeCallable;
      typedef std::future<CreateSlotTypeVersionOutcome> CreateSlotTypeVersionOutcomeCallable;
      typedef std::future<DeleteBotOutcome> DeleteBotOutcomeCallable;
      typedef std::future<DeleteBotAliasOutcome> DeleteBotAliasOutcomeCallable;
      typedef std::future<DeleteBotChannelAssociationOutcome> DeleteBotChannelAssociationOutcomeCallable;
      typedef std::future<DeleteBotVersionOutcome> DeleteBotVersionOutcomeCallable;
      typedef std::future<DeleteIntentOutcome> DeleteIntentOutcomeCallable;
      typedef std::future<DeleteIntentVersionOutcome> DeleteIntentVersionOutcomeCallable;
      typedef std::future<DeleteSlotTypeOutcome> DeleteSlotTypeOutcomeCallable;
      typedef std::future<DeleteSlotTypeVersionOutcome> DeleteSlotTypeVersionOutcomeCallable;
      typedef std::future<DeleteUtterancesOutcome> DeleteUtterancesOutcomeCallable;
      typedef std::future<GetBotOutcome> GetBotOutcomeCallable;
      typedef std::future<GetBotAliasOutcome> GetBotAliasOutcomeCallable;
      typedef std::future<GetBotAliasesOutcome> GetBotAliasesOutcomeCallable;
      typedef std::future<GetBotChannelAssociationOutcome> GetBotChannelAssociationOutcomeCallable;
      typedef std::future<GetBotChannelAssociationsOutcome> GetBotChannelAssociationsOutcomeCallable;
      typedef std::future<GetBotVersionsOutcome> GetBotVersionsOutcomeCallable;
      typedef std::future<GetBotsOutcome> GetBotsOutcomeCallable;
      typedef std::future<GetBuiltinIntentOutcome> GetBuiltinIntentOutcomeCallable;
      typedef std::future<GetBuiltinIntentsOutcome> GetBuiltinIntentsOutcomeCallable;
      typedef std::future<GetBuiltinSlotTypesOutcome> GetBuiltinSlotTypesOutcomeCallable;
      typedef std::future<GetExportOutcome> GetExportOutcomeCallable;
      typedef std::future<GetImportOutcome> GetImportOutcomeCallable;
      typedef std::future<GetIntentOutcome> GetIntentOutcomeCallable;
      typedef std::future<GetIntentVersionsOutcome> GetIntentVersionsOutcomeCallable;
      typedef std::future<GetIntentsOutcome> GetIntentsOutcomeCallable;
      typedef std::future<GetMigrationOutcome> GetMigrationOutcomeCallable;
      typedef std::future<GetMigrationsOutcome> GetMigrationsOutcomeCallable;
      typedef std::future<GetSlotTypeOutcome> GetSlotTypeOutcomeCallable;
      typedef std::future<GetSlotTypeVersionsOutcome> GetSlotTypeVersionsOutcomeCallable;
      typedef std::future<GetSlotTypesOutcome> GetSlotTypesOutcomeCallable;
      typedef std::future<GetUtterancesViewOutcome> GetUtterancesViewOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutBotOutcome> PutBotOutcomeCallable;
      typedef std::future<PutBotAliasOutcome> PutBotAliasOutcomeCallable;
      typedef std::future<PutIntentOutcome> PutIntentOutcomeCallable;
      typedef std::future<PutSlotTypeOutcome> PutSlotTypeOutcomeCallable;
      typedef std::future<StartImportOutcome> StartImportOutcomeCallable;
      typedef std::future<StartMigrationOutcome> StartMigrationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LexModelBuildingServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::CreateBotVersionRequest&, const Model::CreateBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::CreateIntentVersionRequest&, const Model::CreateIntentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntentVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::CreateSlotTypeVersionRequest&, const Model::CreateSlotTypeVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlotTypeVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteBotRequest&, const Model::DeleteBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteBotAliasRequest&, const Model::DeleteBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteBotChannelAssociationRequest&, const Model::DeleteBotChannelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotChannelAssociationResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteBotVersionRequest&, const Model::DeleteBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteIntentRequest&, const Model::DeleteIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteIntentVersionRequest&, const Model::DeleteIntentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntentVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteSlotTypeRequest&, const Model::DeleteSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteSlotTypeVersionRequest&, const Model::DeleteSlotTypeVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlotTypeVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteUtterancesRequest&, const Model::DeleteUtterancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUtterancesResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotRequest&, const Model::GetBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotAliasRequest&, const Model::GetBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotAliasesRequest&, const Model::GetBotAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotAliasesResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotChannelAssociationRequest&, const Model::GetBotChannelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotChannelAssociationResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotChannelAssociationsRequest&, const Model::GetBotChannelAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotChannelAssociationsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotVersionsRequest&, const Model::GetBotVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotVersionsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotsRequest&, const Model::GetBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBuiltinIntentRequest&, const Model::GetBuiltinIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBuiltinIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBuiltinIntentsRequest&, const Model::GetBuiltinIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBuiltinIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBuiltinSlotTypesRequest&, const Model::GetBuiltinSlotTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBuiltinSlotTypesResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetExportRequest&, const Model::GetExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetImportRequest&, const Model::GetImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetIntentRequest&, const Model::GetIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetIntentVersionsRequest&, const Model::GetIntentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntentVersionsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetIntentsRequest&, const Model::GetIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetMigrationRequest&, const Model::GetMigrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMigrationResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetMigrationsRequest&, const Model::GetMigrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMigrationsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetSlotTypeRequest&, const Model::GetSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetSlotTypeVersionsRequest&, const Model::GetSlotTypeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSlotTypeVersionsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetSlotTypesRequest&, const Model::GetSlotTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSlotTypesResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetUtterancesViewRequest&, const Model::GetUtterancesViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUtterancesViewResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::PutBotRequest&, const Model::PutBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBotResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::PutBotAliasRequest&, const Model::PutBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::PutIntentRequest&, const Model::PutIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::PutSlotTypeRequest&, const Model::PutSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::StartImportRequest&, const Model::StartImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::StartMigrationRequest&, const Model::StartMigrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMigrationResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LexModelBuildingService
} // namespace Aws
