/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lexv2-models/LexModelsV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lexv2-models/LexModelsV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LexModelsV2Client header */
#include <aws/lexv2-models/model/BatchCreateCustomVocabularyItemResult.h>
#include <aws/lexv2-models/model/BatchDeleteCustomVocabularyItemResult.h>
#include <aws/lexv2-models/model/BatchUpdateCustomVocabularyItemResult.h>
#include <aws/lexv2-models/model/BuildBotLocaleResult.h>
#include <aws/lexv2-models/model/CreateBotResult.h>
#include <aws/lexv2-models/model/CreateBotAliasResult.h>
#include <aws/lexv2-models/model/CreateBotLocaleResult.h>
#include <aws/lexv2-models/model/CreateBotReplicaResult.h>
#include <aws/lexv2-models/model/CreateBotVersionResult.h>
#include <aws/lexv2-models/model/CreateExportResult.h>
#include <aws/lexv2-models/model/CreateIntentResult.h>
#include <aws/lexv2-models/model/CreateResourcePolicyResult.h>
#include <aws/lexv2-models/model/CreateResourcePolicyStatementResult.h>
#include <aws/lexv2-models/model/CreateSlotResult.h>
#include <aws/lexv2-models/model/CreateSlotTypeResult.h>
#include <aws/lexv2-models/model/CreateTestSetDiscrepancyReportResult.h>
#include <aws/lexv2-models/model/CreateUploadUrlResult.h>
#include <aws/lexv2-models/model/DeleteBotResult.h>
#include <aws/lexv2-models/model/DeleteBotAliasResult.h>
#include <aws/lexv2-models/model/DeleteBotLocaleResult.h>
#include <aws/lexv2-models/model/DeleteBotReplicaResult.h>
#include <aws/lexv2-models/model/DeleteBotVersionResult.h>
#include <aws/lexv2-models/model/DeleteCustomVocabularyResult.h>
#include <aws/lexv2-models/model/DeleteExportResult.h>
#include <aws/lexv2-models/model/DeleteImportResult.h>
#include <aws/lexv2-models/model/DeleteResourcePolicyResult.h>
#include <aws/lexv2-models/model/DeleteResourcePolicyStatementResult.h>
#include <aws/lexv2-models/model/DeleteUtterancesResult.h>
#include <aws/lexv2-models/model/DescribeBotResult.h>
#include <aws/lexv2-models/model/DescribeBotAliasResult.h>
#include <aws/lexv2-models/model/DescribeBotLocaleResult.h>
#include <aws/lexv2-models/model/DescribeBotRecommendationResult.h>
#include <aws/lexv2-models/model/DescribeBotReplicaResult.h>
#include <aws/lexv2-models/model/DescribeBotResourceGenerationResult.h>
#include <aws/lexv2-models/model/DescribeBotVersionResult.h>
#include <aws/lexv2-models/model/DescribeCustomVocabularyMetadataResult.h>
#include <aws/lexv2-models/model/DescribeExportResult.h>
#include <aws/lexv2-models/model/DescribeImportResult.h>
#include <aws/lexv2-models/model/DescribeIntentResult.h>
#include <aws/lexv2-models/model/DescribeResourcePolicyResult.h>
#include <aws/lexv2-models/model/DescribeSlotResult.h>
#include <aws/lexv2-models/model/DescribeSlotTypeResult.h>
#include <aws/lexv2-models/model/DescribeTestExecutionResult.h>
#include <aws/lexv2-models/model/DescribeTestSetResult.h>
#include <aws/lexv2-models/model/DescribeTestSetDiscrepancyReportResult.h>
#include <aws/lexv2-models/model/DescribeTestSetGenerationResult.h>
#include <aws/lexv2-models/model/GenerateBotElementResult.h>
#include <aws/lexv2-models/model/GetTestExecutionArtifactsUrlResult.h>
#include <aws/lexv2-models/model/ListAggregatedUtterancesResult.h>
#include <aws/lexv2-models/model/ListBotAliasReplicasResult.h>
#include <aws/lexv2-models/model/ListBotAliasesResult.h>
#include <aws/lexv2-models/model/ListBotLocalesResult.h>
#include <aws/lexv2-models/model/ListBotRecommendationsResult.h>
#include <aws/lexv2-models/model/ListBotReplicasResult.h>
#include <aws/lexv2-models/model/ListBotResourceGenerationsResult.h>
#include <aws/lexv2-models/model/ListBotVersionReplicasResult.h>
#include <aws/lexv2-models/model/ListBotVersionsResult.h>
#include <aws/lexv2-models/model/ListBotsResult.h>
#include <aws/lexv2-models/model/ListBuiltInIntentsResult.h>
#include <aws/lexv2-models/model/ListBuiltInSlotTypesResult.h>
#include <aws/lexv2-models/model/ListCustomVocabularyItemsResult.h>
#include <aws/lexv2-models/model/ListExportsResult.h>
#include <aws/lexv2-models/model/ListImportsResult.h>
#include <aws/lexv2-models/model/ListIntentMetricsResult.h>
#include <aws/lexv2-models/model/ListIntentPathsResult.h>
#include <aws/lexv2-models/model/ListIntentStageMetricsResult.h>
#include <aws/lexv2-models/model/ListIntentsResult.h>
#include <aws/lexv2-models/model/ListRecommendedIntentsResult.h>
#include <aws/lexv2-models/model/ListSessionAnalyticsDataResult.h>
#include <aws/lexv2-models/model/ListSessionMetricsResult.h>
#include <aws/lexv2-models/model/ListSlotTypesResult.h>
#include <aws/lexv2-models/model/ListSlotsResult.h>
#include <aws/lexv2-models/model/ListTagsForResourceResult.h>
#include <aws/lexv2-models/model/ListTestExecutionResultItemsResult.h>
#include <aws/lexv2-models/model/ListTestExecutionsResult.h>
#include <aws/lexv2-models/model/ListTestSetRecordsResult.h>
#include <aws/lexv2-models/model/ListTestSetsResult.h>
#include <aws/lexv2-models/model/ListUtteranceAnalyticsDataResult.h>
#include <aws/lexv2-models/model/ListUtteranceMetricsResult.h>
#include <aws/lexv2-models/model/SearchAssociatedTranscriptsResult.h>
#include <aws/lexv2-models/model/StartBotRecommendationResult.h>
#include <aws/lexv2-models/model/StartBotResourceGenerationResult.h>
#include <aws/lexv2-models/model/StartImportResult.h>
#include <aws/lexv2-models/model/StartTestExecutionResult.h>
#include <aws/lexv2-models/model/StartTestSetGenerationResult.h>
#include <aws/lexv2-models/model/StopBotRecommendationResult.h>
#include <aws/lexv2-models/model/TagResourceResult.h>
#include <aws/lexv2-models/model/UntagResourceResult.h>
#include <aws/lexv2-models/model/UpdateBotResult.h>
#include <aws/lexv2-models/model/UpdateBotAliasResult.h>
#include <aws/lexv2-models/model/UpdateBotLocaleResult.h>
#include <aws/lexv2-models/model/UpdateBotRecommendationResult.h>
#include <aws/lexv2-models/model/UpdateExportResult.h>
#include <aws/lexv2-models/model/UpdateIntentResult.h>
#include <aws/lexv2-models/model/UpdateResourcePolicyResult.h>
#include <aws/lexv2-models/model/UpdateSlotResult.h>
#include <aws/lexv2-models/model/UpdateSlotTypeResult.h>
#include <aws/lexv2-models/model/UpdateTestSetResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in LexModelsV2Client header */

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

  namespace LexModelsV2
  {
    using LexModelsV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LexModelsV2EndpointProviderBase = Aws::LexModelsV2::Endpoint::LexModelsV2EndpointProviderBase;
    using LexModelsV2EndpointProvider = Aws::LexModelsV2::Endpoint::LexModelsV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LexModelsV2Client header */
      class BatchCreateCustomVocabularyItemRequest;
      class BatchDeleteCustomVocabularyItemRequest;
      class BatchUpdateCustomVocabularyItemRequest;
      class BuildBotLocaleRequest;
      class CreateBotRequest;
      class CreateBotAliasRequest;
      class CreateBotLocaleRequest;
      class CreateBotReplicaRequest;
      class CreateBotVersionRequest;
      class CreateExportRequest;
      class CreateIntentRequest;
      class CreateResourcePolicyRequest;
      class CreateResourcePolicyStatementRequest;
      class CreateSlotRequest;
      class CreateSlotTypeRequest;
      class CreateTestSetDiscrepancyReportRequest;
      class CreateUploadUrlRequest;
      class DeleteBotRequest;
      class DeleteBotAliasRequest;
      class DeleteBotLocaleRequest;
      class DeleteBotReplicaRequest;
      class DeleteBotVersionRequest;
      class DeleteCustomVocabularyRequest;
      class DeleteExportRequest;
      class DeleteImportRequest;
      class DeleteIntentRequest;
      class DeleteResourcePolicyRequest;
      class DeleteResourcePolicyStatementRequest;
      class DeleteSlotRequest;
      class DeleteSlotTypeRequest;
      class DeleteTestSetRequest;
      class DeleteUtterancesRequest;
      class DescribeBotRequest;
      class DescribeBotAliasRequest;
      class DescribeBotLocaleRequest;
      class DescribeBotRecommendationRequest;
      class DescribeBotReplicaRequest;
      class DescribeBotResourceGenerationRequest;
      class DescribeBotVersionRequest;
      class DescribeCustomVocabularyMetadataRequest;
      class DescribeExportRequest;
      class DescribeImportRequest;
      class DescribeIntentRequest;
      class DescribeResourcePolicyRequest;
      class DescribeSlotRequest;
      class DescribeSlotTypeRequest;
      class DescribeTestExecutionRequest;
      class DescribeTestSetRequest;
      class DescribeTestSetDiscrepancyReportRequest;
      class DescribeTestSetGenerationRequest;
      class GenerateBotElementRequest;
      class GetTestExecutionArtifactsUrlRequest;
      class ListAggregatedUtterancesRequest;
      class ListBotAliasReplicasRequest;
      class ListBotAliasesRequest;
      class ListBotLocalesRequest;
      class ListBotRecommendationsRequest;
      class ListBotReplicasRequest;
      class ListBotResourceGenerationsRequest;
      class ListBotVersionReplicasRequest;
      class ListBotVersionsRequest;
      class ListBotsRequest;
      class ListBuiltInIntentsRequest;
      class ListBuiltInSlotTypesRequest;
      class ListCustomVocabularyItemsRequest;
      class ListExportsRequest;
      class ListImportsRequest;
      class ListIntentMetricsRequest;
      class ListIntentPathsRequest;
      class ListIntentStageMetricsRequest;
      class ListIntentsRequest;
      class ListRecommendedIntentsRequest;
      class ListSessionAnalyticsDataRequest;
      class ListSessionMetricsRequest;
      class ListSlotTypesRequest;
      class ListSlotsRequest;
      class ListTagsForResourceRequest;
      class ListTestExecutionResultItemsRequest;
      class ListTestExecutionsRequest;
      class ListTestSetRecordsRequest;
      class ListTestSetsRequest;
      class ListUtteranceAnalyticsDataRequest;
      class ListUtteranceMetricsRequest;
      class SearchAssociatedTranscriptsRequest;
      class StartBotRecommendationRequest;
      class StartBotResourceGenerationRequest;
      class StartImportRequest;
      class StartTestExecutionRequest;
      class StartTestSetGenerationRequest;
      class StopBotRecommendationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBotRequest;
      class UpdateBotAliasRequest;
      class UpdateBotLocaleRequest;
      class UpdateBotRecommendationRequest;
      class UpdateExportRequest;
      class UpdateIntentRequest;
      class UpdateResourcePolicyRequest;
      class UpdateSlotRequest;
      class UpdateSlotTypeRequest;
      class UpdateTestSetRequest;
      /* End of service model forward declarations required in LexModelsV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCreateCustomVocabularyItemResult, LexModelsV2Error> BatchCreateCustomVocabularyItemOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteCustomVocabularyItemResult, LexModelsV2Error> BatchDeleteCustomVocabularyItemOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateCustomVocabularyItemResult, LexModelsV2Error> BatchUpdateCustomVocabularyItemOutcome;
      typedef Aws::Utils::Outcome<BuildBotLocaleResult, LexModelsV2Error> BuildBotLocaleOutcome;
      typedef Aws::Utils::Outcome<CreateBotResult, LexModelsV2Error> CreateBotOutcome;
      typedef Aws::Utils::Outcome<CreateBotAliasResult, LexModelsV2Error> CreateBotAliasOutcome;
      typedef Aws::Utils::Outcome<CreateBotLocaleResult, LexModelsV2Error> CreateBotLocaleOutcome;
      typedef Aws::Utils::Outcome<CreateBotReplicaResult, LexModelsV2Error> CreateBotReplicaOutcome;
      typedef Aws::Utils::Outcome<CreateBotVersionResult, LexModelsV2Error> CreateBotVersionOutcome;
      typedef Aws::Utils::Outcome<CreateExportResult, LexModelsV2Error> CreateExportOutcome;
      typedef Aws::Utils::Outcome<CreateIntentResult, LexModelsV2Error> CreateIntentOutcome;
      typedef Aws::Utils::Outcome<CreateResourcePolicyResult, LexModelsV2Error> CreateResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<CreateResourcePolicyStatementResult, LexModelsV2Error> CreateResourcePolicyStatementOutcome;
      typedef Aws::Utils::Outcome<CreateSlotResult, LexModelsV2Error> CreateSlotOutcome;
      typedef Aws::Utils::Outcome<CreateSlotTypeResult, LexModelsV2Error> CreateSlotTypeOutcome;
      typedef Aws::Utils::Outcome<CreateTestSetDiscrepancyReportResult, LexModelsV2Error> CreateTestSetDiscrepancyReportOutcome;
      typedef Aws::Utils::Outcome<CreateUploadUrlResult, LexModelsV2Error> CreateUploadUrlOutcome;
      typedef Aws::Utils::Outcome<DeleteBotResult, LexModelsV2Error> DeleteBotOutcome;
      typedef Aws::Utils::Outcome<DeleteBotAliasResult, LexModelsV2Error> DeleteBotAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteBotLocaleResult, LexModelsV2Error> DeleteBotLocaleOutcome;
      typedef Aws::Utils::Outcome<DeleteBotReplicaResult, LexModelsV2Error> DeleteBotReplicaOutcome;
      typedef Aws::Utils::Outcome<DeleteBotVersionResult, LexModelsV2Error> DeleteBotVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomVocabularyResult, LexModelsV2Error> DeleteCustomVocabularyOutcome;
      typedef Aws::Utils::Outcome<DeleteExportResult, LexModelsV2Error> DeleteExportOutcome;
      typedef Aws::Utils::Outcome<DeleteImportResult, LexModelsV2Error> DeleteImportOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelsV2Error> DeleteIntentOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, LexModelsV2Error> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyStatementResult, LexModelsV2Error> DeleteResourcePolicyStatementOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelsV2Error> DeleteSlotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelsV2Error> DeleteSlotTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LexModelsV2Error> DeleteTestSetOutcome;
      typedef Aws::Utils::Outcome<DeleteUtterancesResult, LexModelsV2Error> DeleteUtterancesOutcome;
      typedef Aws::Utils::Outcome<DescribeBotResult, LexModelsV2Error> DescribeBotOutcome;
      typedef Aws::Utils::Outcome<DescribeBotAliasResult, LexModelsV2Error> DescribeBotAliasOutcome;
      typedef Aws::Utils::Outcome<DescribeBotLocaleResult, LexModelsV2Error> DescribeBotLocaleOutcome;
      typedef Aws::Utils::Outcome<DescribeBotRecommendationResult, LexModelsV2Error> DescribeBotRecommendationOutcome;
      typedef Aws::Utils::Outcome<DescribeBotReplicaResult, LexModelsV2Error> DescribeBotReplicaOutcome;
      typedef Aws::Utils::Outcome<DescribeBotResourceGenerationResult, LexModelsV2Error> DescribeBotResourceGenerationOutcome;
      typedef Aws::Utils::Outcome<DescribeBotVersionResult, LexModelsV2Error> DescribeBotVersionOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomVocabularyMetadataResult, LexModelsV2Error> DescribeCustomVocabularyMetadataOutcome;
      typedef Aws::Utils::Outcome<DescribeExportResult, LexModelsV2Error> DescribeExportOutcome;
      typedef Aws::Utils::Outcome<DescribeImportResult, LexModelsV2Error> DescribeImportOutcome;
      typedef Aws::Utils::Outcome<DescribeIntentResult, LexModelsV2Error> DescribeIntentOutcome;
      typedef Aws::Utils::Outcome<DescribeResourcePolicyResult, LexModelsV2Error> DescribeResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeSlotResult, LexModelsV2Error> DescribeSlotOutcome;
      typedef Aws::Utils::Outcome<DescribeSlotTypeResult, LexModelsV2Error> DescribeSlotTypeOutcome;
      typedef Aws::Utils::Outcome<DescribeTestExecutionResult, LexModelsV2Error> DescribeTestExecutionOutcome;
      typedef Aws::Utils::Outcome<DescribeTestSetResult, LexModelsV2Error> DescribeTestSetOutcome;
      typedef Aws::Utils::Outcome<DescribeTestSetDiscrepancyReportResult, LexModelsV2Error> DescribeTestSetDiscrepancyReportOutcome;
      typedef Aws::Utils::Outcome<DescribeTestSetGenerationResult, LexModelsV2Error> DescribeTestSetGenerationOutcome;
      typedef Aws::Utils::Outcome<GenerateBotElementResult, LexModelsV2Error> GenerateBotElementOutcome;
      typedef Aws::Utils::Outcome<GetTestExecutionArtifactsUrlResult, LexModelsV2Error> GetTestExecutionArtifactsUrlOutcome;
      typedef Aws::Utils::Outcome<ListAggregatedUtterancesResult, LexModelsV2Error> ListAggregatedUtterancesOutcome;
      typedef Aws::Utils::Outcome<ListBotAliasReplicasResult, LexModelsV2Error> ListBotAliasReplicasOutcome;
      typedef Aws::Utils::Outcome<ListBotAliasesResult, LexModelsV2Error> ListBotAliasesOutcome;
      typedef Aws::Utils::Outcome<ListBotLocalesResult, LexModelsV2Error> ListBotLocalesOutcome;
      typedef Aws::Utils::Outcome<ListBotRecommendationsResult, LexModelsV2Error> ListBotRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ListBotReplicasResult, LexModelsV2Error> ListBotReplicasOutcome;
      typedef Aws::Utils::Outcome<ListBotResourceGenerationsResult, LexModelsV2Error> ListBotResourceGenerationsOutcome;
      typedef Aws::Utils::Outcome<ListBotVersionReplicasResult, LexModelsV2Error> ListBotVersionReplicasOutcome;
      typedef Aws::Utils::Outcome<ListBotVersionsResult, LexModelsV2Error> ListBotVersionsOutcome;
      typedef Aws::Utils::Outcome<ListBotsResult, LexModelsV2Error> ListBotsOutcome;
      typedef Aws::Utils::Outcome<ListBuiltInIntentsResult, LexModelsV2Error> ListBuiltInIntentsOutcome;
      typedef Aws::Utils::Outcome<ListBuiltInSlotTypesResult, LexModelsV2Error> ListBuiltInSlotTypesOutcome;
      typedef Aws::Utils::Outcome<ListCustomVocabularyItemsResult, LexModelsV2Error> ListCustomVocabularyItemsOutcome;
      typedef Aws::Utils::Outcome<ListExportsResult, LexModelsV2Error> ListExportsOutcome;
      typedef Aws::Utils::Outcome<ListImportsResult, LexModelsV2Error> ListImportsOutcome;
      typedef Aws::Utils::Outcome<ListIntentMetricsResult, LexModelsV2Error> ListIntentMetricsOutcome;
      typedef Aws::Utils::Outcome<ListIntentPathsResult, LexModelsV2Error> ListIntentPathsOutcome;
      typedef Aws::Utils::Outcome<ListIntentStageMetricsResult, LexModelsV2Error> ListIntentStageMetricsOutcome;
      typedef Aws::Utils::Outcome<ListIntentsResult, LexModelsV2Error> ListIntentsOutcome;
      typedef Aws::Utils::Outcome<ListRecommendedIntentsResult, LexModelsV2Error> ListRecommendedIntentsOutcome;
      typedef Aws::Utils::Outcome<ListSessionAnalyticsDataResult, LexModelsV2Error> ListSessionAnalyticsDataOutcome;
      typedef Aws::Utils::Outcome<ListSessionMetricsResult, LexModelsV2Error> ListSessionMetricsOutcome;
      typedef Aws::Utils::Outcome<ListSlotTypesResult, LexModelsV2Error> ListSlotTypesOutcome;
      typedef Aws::Utils::Outcome<ListSlotsResult, LexModelsV2Error> ListSlotsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, LexModelsV2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTestExecutionResultItemsResult, LexModelsV2Error> ListTestExecutionResultItemsOutcome;
      typedef Aws::Utils::Outcome<ListTestExecutionsResult, LexModelsV2Error> ListTestExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListTestSetRecordsResult, LexModelsV2Error> ListTestSetRecordsOutcome;
      typedef Aws::Utils::Outcome<ListTestSetsResult, LexModelsV2Error> ListTestSetsOutcome;
      typedef Aws::Utils::Outcome<ListUtteranceAnalyticsDataResult, LexModelsV2Error> ListUtteranceAnalyticsDataOutcome;
      typedef Aws::Utils::Outcome<ListUtteranceMetricsResult, LexModelsV2Error> ListUtteranceMetricsOutcome;
      typedef Aws::Utils::Outcome<SearchAssociatedTranscriptsResult, LexModelsV2Error> SearchAssociatedTranscriptsOutcome;
      typedef Aws::Utils::Outcome<StartBotRecommendationResult, LexModelsV2Error> StartBotRecommendationOutcome;
      typedef Aws::Utils::Outcome<StartBotResourceGenerationResult, LexModelsV2Error> StartBotResourceGenerationOutcome;
      typedef Aws::Utils::Outcome<StartImportResult, LexModelsV2Error> StartImportOutcome;
      typedef Aws::Utils::Outcome<StartTestExecutionResult, LexModelsV2Error> StartTestExecutionOutcome;
      typedef Aws::Utils::Outcome<StartTestSetGenerationResult, LexModelsV2Error> StartTestSetGenerationOutcome;
      typedef Aws::Utils::Outcome<StopBotRecommendationResult, LexModelsV2Error> StopBotRecommendationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, LexModelsV2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, LexModelsV2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBotResult, LexModelsV2Error> UpdateBotOutcome;
      typedef Aws::Utils::Outcome<UpdateBotAliasResult, LexModelsV2Error> UpdateBotAliasOutcome;
      typedef Aws::Utils::Outcome<UpdateBotLocaleResult, LexModelsV2Error> UpdateBotLocaleOutcome;
      typedef Aws::Utils::Outcome<UpdateBotRecommendationResult, LexModelsV2Error> UpdateBotRecommendationOutcome;
      typedef Aws::Utils::Outcome<UpdateExportResult, LexModelsV2Error> UpdateExportOutcome;
      typedef Aws::Utils::Outcome<UpdateIntentResult, LexModelsV2Error> UpdateIntentOutcome;
      typedef Aws::Utils::Outcome<UpdateResourcePolicyResult, LexModelsV2Error> UpdateResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateSlotResult, LexModelsV2Error> UpdateSlotOutcome;
      typedef Aws::Utils::Outcome<UpdateSlotTypeResult, LexModelsV2Error> UpdateSlotTypeOutcome;
      typedef Aws::Utils::Outcome<UpdateTestSetResult, LexModelsV2Error> UpdateTestSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCreateCustomVocabularyItemOutcome> BatchCreateCustomVocabularyItemOutcomeCallable;
      typedef std::future<BatchDeleteCustomVocabularyItemOutcome> BatchDeleteCustomVocabularyItemOutcomeCallable;
      typedef std::future<BatchUpdateCustomVocabularyItemOutcome> BatchUpdateCustomVocabularyItemOutcomeCallable;
      typedef std::future<BuildBotLocaleOutcome> BuildBotLocaleOutcomeCallable;
      typedef std::future<CreateBotOutcome> CreateBotOutcomeCallable;
      typedef std::future<CreateBotAliasOutcome> CreateBotAliasOutcomeCallable;
      typedef std::future<CreateBotLocaleOutcome> CreateBotLocaleOutcomeCallable;
      typedef std::future<CreateBotReplicaOutcome> CreateBotReplicaOutcomeCallable;
      typedef std::future<CreateBotVersionOutcome> CreateBotVersionOutcomeCallable;
      typedef std::future<CreateExportOutcome> CreateExportOutcomeCallable;
      typedef std::future<CreateIntentOutcome> CreateIntentOutcomeCallable;
      typedef std::future<CreateResourcePolicyOutcome> CreateResourcePolicyOutcomeCallable;
      typedef std::future<CreateResourcePolicyStatementOutcome> CreateResourcePolicyStatementOutcomeCallable;
      typedef std::future<CreateSlotOutcome> CreateSlotOutcomeCallable;
      typedef std::future<CreateSlotTypeOutcome> CreateSlotTypeOutcomeCallable;
      typedef std::future<CreateTestSetDiscrepancyReportOutcome> CreateTestSetDiscrepancyReportOutcomeCallable;
      typedef std::future<CreateUploadUrlOutcome> CreateUploadUrlOutcomeCallable;
      typedef std::future<DeleteBotOutcome> DeleteBotOutcomeCallable;
      typedef std::future<DeleteBotAliasOutcome> DeleteBotAliasOutcomeCallable;
      typedef std::future<DeleteBotLocaleOutcome> DeleteBotLocaleOutcomeCallable;
      typedef std::future<DeleteBotReplicaOutcome> DeleteBotReplicaOutcomeCallable;
      typedef std::future<DeleteBotVersionOutcome> DeleteBotVersionOutcomeCallable;
      typedef std::future<DeleteCustomVocabularyOutcome> DeleteCustomVocabularyOutcomeCallable;
      typedef std::future<DeleteExportOutcome> DeleteExportOutcomeCallable;
      typedef std::future<DeleteImportOutcome> DeleteImportOutcomeCallable;
      typedef std::future<DeleteIntentOutcome> DeleteIntentOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteResourcePolicyStatementOutcome> DeleteResourcePolicyStatementOutcomeCallable;
      typedef std::future<DeleteSlotOutcome> DeleteSlotOutcomeCallable;
      typedef std::future<DeleteSlotTypeOutcome> DeleteSlotTypeOutcomeCallable;
      typedef std::future<DeleteTestSetOutcome> DeleteTestSetOutcomeCallable;
      typedef std::future<DeleteUtterancesOutcome> DeleteUtterancesOutcomeCallable;
      typedef std::future<DescribeBotOutcome> DescribeBotOutcomeCallable;
      typedef std::future<DescribeBotAliasOutcome> DescribeBotAliasOutcomeCallable;
      typedef std::future<DescribeBotLocaleOutcome> DescribeBotLocaleOutcomeCallable;
      typedef std::future<DescribeBotRecommendationOutcome> DescribeBotRecommendationOutcomeCallable;
      typedef std::future<DescribeBotReplicaOutcome> DescribeBotReplicaOutcomeCallable;
      typedef std::future<DescribeBotResourceGenerationOutcome> DescribeBotResourceGenerationOutcomeCallable;
      typedef std::future<DescribeBotVersionOutcome> DescribeBotVersionOutcomeCallable;
      typedef std::future<DescribeCustomVocabularyMetadataOutcome> DescribeCustomVocabularyMetadataOutcomeCallable;
      typedef std::future<DescribeExportOutcome> DescribeExportOutcomeCallable;
      typedef std::future<DescribeImportOutcome> DescribeImportOutcomeCallable;
      typedef std::future<DescribeIntentOutcome> DescribeIntentOutcomeCallable;
      typedef std::future<DescribeResourcePolicyOutcome> DescribeResourcePolicyOutcomeCallable;
      typedef std::future<DescribeSlotOutcome> DescribeSlotOutcomeCallable;
      typedef std::future<DescribeSlotTypeOutcome> DescribeSlotTypeOutcomeCallable;
      typedef std::future<DescribeTestExecutionOutcome> DescribeTestExecutionOutcomeCallable;
      typedef std::future<DescribeTestSetOutcome> DescribeTestSetOutcomeCallable;
      typedef std::future<DescribeTestSetDiscrepancyReportOutcome> DescribeTestSetDiscrepancyReportOutcomeCallable;
      typedef std::future<DescribeTestSetGenerationOutcome> DescribeTestSetGenerationOutcomeCallable;
      typedef std::future<GenerateBotElementOutcome> GenerateBotElementOutcomeCallable;
      typedef std::future<GetTestExecutionArtifactsUrlOutcome> GetTestExecutionArtifactsUrlOutcomeCallable;
      typedef std::future<ListAggregatedUtterancesOutcome> ListAggregatedUtterancesOutcomeCallable;
      typedef std::future<ListBotAliasReplicasOutcome> ListBotAliasReplicasOutcomeCallable;
      typedef std::future<ListBotAliasesOutcome> ListBotAliasesOutcomeCallable;
      typedef std::future<ListBotLocalesOutcome> ListBotLocalesOutcomeCallable;
      typedef std::future<ListBotRecommendationsOutcome> ListBotRecommendationsOutcomeCallable;
      typedef std::future<ListBotReplicasOutcome> ListBotReplicasOutcomeCallable;
      typedef std::future<ListBotResourceGenerationsOutcome> ListBotResourceGenerationsOutcomeCallable;
      typedef std::future<ListBotVersionReplicasOutcome> ListBotVersionReplicasOutcomeCallable;
      typedef std::future<ListBotVersionsOutcome> ListBotVersionsOutcomeCallable;
      typedef std::future<ListBotsOutcome> ListBotsOutcomeCallable;
      typedef std::future<ListBuiltInIntentsOutcome> ListBuiltInIntentsOutcomeCallable;
      typedef std::future<ListBuiltInSlotTypesOutcome> ListBuiltInSlotTypesOutcomeCallable;
      typedef std::future<ListCustomVocabularyItemsOutcome> ListCustomVocabularyItemsOutcomeCallable;
      typedef std::future<ListExportsOutcome> ListExportsOutcomeCallable;
      typedef std::future<ListImportsOutcome> ListImportsOutcomeCallable;
      typedef std::future<ListIntentMetricsOutcome> ListIntentMetricsOutcomeCallable;
      typedef std::future<ListIntentPathsOutcome> ListIntentPathsOutcomeCallable;
      typedef std::future<ListIntentStageMetricsOutcome> ListIntentStageMetricsOutcomeCallable;
      typedef std::future<ListIntentsOutcome> ListIntentsOutcomeCallable;
      typedef std::future<ListRecommendedIntentsOutcome> ListRecommendedIntentsOutcomeCallable;
      typedef std::future<ListSessionAnalyticsDataOutcome> ListSessionAnalyticsDataOutcomeCallable;
      typedef std::future<ListSessionMetricsOutcome> ListSessionMetricsOutcomeCallable;
      typedef std::future<ListSlotTypesOutcome> ListSlotTypesOutcomeCallable;
      typedef std::future<ListSlotsOutcome> ListSlotsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTestExecutionResultItemsOutcome> ListTestExecutionResultItemsOutcomeCallable;
      typedef std::future<ListTestExecutionsOutcome> ListTestExecutionsOutcomeCallable;
      typedef std::future<ListTestSetRecordsOutcome> ListTestSetRecordsOutcomeCallable;
      typedef std::future<ListTestSetsOutcome> ListTestSetsOutcomeCallable;
      typedef std::future<ListUtteranceAnalyticsDataOutcome> ListUtteranceAnalyticsDataOutcomeCallable;
      typedef std::future<ListUtteranceMetricsOutcome> ListUtteranceMetricsOutcomeCallable;
      typedef std::future<SearchAssociatedTranscriptsOutcome> SearchAssociatedTranscriptsOutcomeCallable;
      typedef std::future<StartBotRecommendationOutcome> StartBotRecommendationOutcomeCallable;
      typedef std::future<StartBotResourceGenerationOutcome> StartBotResourceGenerationOutcomeCallable;
      typedef std::future<StartImportOutcome> StartImportOutcomeCallable;
      typedef std::future<StartTestExecutionOutcome> StartTestExecutionOutcomeCallable;
      typedef std::future<StartTestSetGenerationOutcome> StartTestSetGenerationOutcomeCallable;
      typedef std::future<StopBotRecommendationOutcome> StopBotRecommendationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBotOutcome> UpdateBotOutcomeCallable;
      typedef std::future<UpdateBotAliasOutcome> UpdateBotAliasOutcomeCallable;
      typedef std::future<UpdateBotLocaleOutcome> UpdateBotLocaleOutcomeCallable;
      typedef std::future<UpdateBotRecommendationOutcome> UpdateBotRecommendationOutcomeCallable;
      typedef std::future<UpdateExportOutcome> UpdateExportOutcomeCallable;
      typedef std::future<UpdateIntentOutcome> UpdateIntentOutcomeCallable;
      typedef std::future<UpdateResourcePolicyOutcome> UpdateResourcePolicyOutcomeCallable;
      typedef std::future<UpdateSlotOutcome> UpdateSlotOutcomeCallable;
      typedef std::future<UpdateSlotTypeOutcome> UpdateSlotTypeOutcomeCallable;
      typedef std::future<UpdateTestSetOutcome> UpdateTestSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LexModelsV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const LexModelsV2Client*, const Model::BatchCreateCustomVocabularyItemRequest&, const Model::BatchCreateCustomVocabularyItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateCustomVocabularyItemResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::BatchDeleteCustomVocabularyItemRequest&, const Model::BatchDeleteCustomVocabularyItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteCustomVocabularyItemResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::BatchUpdateCustomVocabularyItemRequest&, const Model::BatchUpdateCustomVocabularyItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateCustomVocabularyItemResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::BuildBotLocaleRequest&, const Model::BuildBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BuildBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotRequest&, const Model::CreateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotAliasRequest&, const Model::CreateBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotLocaleRequest&, const Model::CreateBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotReplicaRequest&, const Model::CreateBotReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotReplicaResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotVersionRequest&, const Model::CreateBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateExportRequest&, const Model::CreateExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateIntentRequest&, const Model::CreateIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateResourcePolicyRequest&, const Model::CreateResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateResourcePolicyStatementRequest&, const Model::CreateResourcePolicyStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourcePolicyStatementResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateSlotRequest&, const Model::CreateSlotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateSlotTypeRequest&, const Model::CreateSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateTestSetDiscrepancyReportRequest&, const Model::CreateTestSetDiscrepancyReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTestSetDiscrepancyReportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateUploadUrlRequest&, const Model::CreateUploadUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUploadUrlResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotRequest&, const Model::DeleteBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotAliasRequest&, const Model::DeleteBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotLocaleRequest&, const Model::DeleteBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotReplicaRequest&, const Model::DeleteBotReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotReplicaResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotVersionRequest&, const Model::DeleteBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteCustomVocabularyRequest&, const Model::DeleteCustomVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomVocabularyResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteExportRequest&, const Model::DeleteExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteImportRequest&, const Model::DeleteImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteIntentRequest&, const Model::DeleteIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteResourcePolicyStatementRequest&, const Model::DeleteResourcePolicyStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyStatementResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteSlotRequest&, const Model::DeleteSlotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteSlotTypeRequest&, const Model::DeleteSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteTestSetRequest&, const Model::DeleteTestSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTestSetResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteUtterancesRequest&, const Model::DeleteUtterancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUtterancesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotRequest&, const Model::DescribeBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotAliasRequest&, const Model::DescribeBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotLocaleRequest&, const Model::DescribeBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotRecommendationRequest&, const Model::DescribeBotRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotRecommendationResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotReplicaRequest&, const Model::DescribeBotReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotReplicaResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotResourceGenerationRequest&, const Model::DescribeBotResourceGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotResourceGenerationResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotVersionRequest&, const Model::DescribeBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeCustomVocabularyMetadataRequest&, const Model::DescribeCustomVocabularyMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomVocabularyMetadataResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeExportRequest&, const Model::DescribeExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeImportRequest&, const Model::DescribeImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeIntentRequest&, const Model::DescribeIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeResourcePolicyRequest&, const Model::DescribeResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeSlotRequest&, const Model::DescribeSlotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSlotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeSlotTypeRequest&, const Model::DescribeSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeTestExecutionRequest&, const Model::DescribeTestExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTestExecutionResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeTestSetRequest&, const Model::DescribeTestSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTestSetResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeTestSetDiscrepancyReportRequest&, const Model::DescribeTestSetDiscrepancyReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTestSetDiscrepancyReportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeTestSetGenerationRequest&, const Model::DescribeTestSetGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTestSetGenerationResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::GenerateBotElementRequest&, const Model::GenerateBotElementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateBotElementResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::GetTestExecutionArtifactsUrlRequest&, const Model::GetTestExecutionArtifactsUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestExecutionArtifactsUrlResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListAggregatedUtterancesRequest&, const Model::ListAggregatedUtterancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAggregatedUtterancesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotAliasReplicasRequest&, const Model::ListBotAliasReplicasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotAliasReplicasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotAliasesRequest&, const Model::ListBotAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotAliasesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotLocalesRequest&, const Model::ListBotLocalesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotLocalesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotRecommendationsRequest&, const Model::ListBotRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotRecommendationsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotReplicasRequest&, const Model::ListBotReplicasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotReplicasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotResourceGenerationsRequest&, const Model::ListBotResourceGenerationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotResourceGenerationsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotVersionReplicasRequest&, const Model::ListBotVersionReplicasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotVersionReplicasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotVersionsRequest&, const Model::ListBotVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotVersionsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotsRequest&, const Model::ListBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBuiltInIntentsRequest&, const Model::ListBuiltInIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuiltInIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBuiltInSlotTypesRequest&, const Model::ListBuiltInSlotTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuiltInSlotTypesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListCustomVocabularyItemsRequest&, const Model::ListCustomVocabularyItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomVocabularyItemsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListExportsRequest&, const Model::ListExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExportsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListImportsRequest&, const Model::ListImportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListIntentMetricsRequest&, const Model::ListIntentMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntentMetricsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListIntentPathsRequest&, const Model::ListIntentPathsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntentPathsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListIntentStageMetricsRequest&, const Model::ListIntentStageMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntentStageMetricsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListIntentsRequest&, const Model::ListIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListRecommendedIntentsRequest&, const Model::ListRecommendedIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendedIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListSessionAnalyticsDataRequest&, const Model::ListSessionAnalyticsDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionAnalyticsDataResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListSessionMetricsRequest&, const Model::ListSessionMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionMetricsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListSlotTypesRequest&, const Model::ListSlotTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSlotTypesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListSlotsRequest&, const Model::ListSlotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSlotsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListTestExecutionResultItemsRequest&, const Model::ListTestExecutionResultItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestExecutionResultItemsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListTestExecutionsRequest&, const Model::ListTestExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestExecutionsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListTestSetRecordsRequest&, const Model::ListTestSetRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestSetRecordsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListTestSetsRequest&, const Model::ListTestSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestSetsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListUtteranceAnalyticsDataRequest&, const Model::ListUtteranceAnalyticsDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUtteranceAnalyticsDataResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListUtteranceMetricsRequest&, const Model::ListUtteranceMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUtteranceMetricsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::SearchAssociatedTranscriptsRequest&, const Model::SearchAssociatedTranscriptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAssociatedTranscriptsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::StartBotRecommendationRequest&, const Model::StartBotRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBotRecommendationResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::StartBotResourceGenerationRequest&, const Model::StartBotResourceGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBotResourceGenerationResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::StartImportRequest&, const Model::StartImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::StartTestExecutionRequest&, const Model::StartTestExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTestExecutionResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::StartTestSetGenerationRequest&, const Model::StartTestSetGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTestSetGenerationResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::StopBotRecommendationRequest&, const Model::StopBotRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopBotRecommendationResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateBotRequest&, const Model::UpdateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateBotAliasRequest&, const Model::UpdateBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateBotLocaleRequest&, const Model::UpdateBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateBotRecommendationRequest&, const Model::UpdateBotRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotRecommendationResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateExportRequest&, const Model::UpdateExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExportResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateIntentRequest&, const Model::UpdateIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateResourcePolicyRequest&, const Model::UpdateResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateSlotRequest&, const Model::UpdateSlotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSlotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateSlotTypeRequest&, const Model::UpdateSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateTestSetRequest&, const Model::UpdateTestSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTestSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LexModelsV2
} // namespace Aws
