/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dynamodb/DynamoDBEndpointProvider.h>
#include <aws/core/utils/ConcurrentCache.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DynamoDBClient header */
#include <aws/dynamodb/model/BatchExecuteStatementResult.h>
#include <aws/dynamodb/model/BatchGetItemResult.h>
#include <aws/dynamodb/model/BatchWriteItemResult.h>
#include <aws/dynamodb/model/CreateBackupResult.h>
#include <aws/dynamodb/model/CreateGlobalTableResult.h>
#include <aws/dynamodb/model/CreateTableResult.h>
#include <aws/dynamodb/model/DeleteBackupResult.h>
#include <aws/dynamodb/model/DeleteItemResult.h>
#include <aws/dynamodb/model/DeleteTableResult.h>
#include <aws/dynamodb/model/DescribeBackupResult.h>
#include <aws/dynamodb/model/DescribeContinuousBackupsResult.h>
#include <aws/dynamodb/model/DescribeContributorInsightsResult.h>
#include <aws/dynamodb/model/DescribeEndpointsResult.h>
#include <aws/dynamodb/model/DescribeExportResult.h>
#include <aws/dynamodb/model/DescribeGlobalTableResult.h>
#include <aws/dynamodb/model/DescribeGlobalTableSettingsResult.h>
#include <aws/dynamodb/model/DescribeImportResult.h>
#include <aws/dynamodb/model/DescribeKinesisStreamingDestinationResult.h>
#include <aws/dynamodb/model/DescribeLimitsResult.h>
#include <aws/dynamodb/model/DescribeTableResult.h>
#include <aws/dynamodb/model/DescribeTableReplicaAutoScalingResult.h>
#include <aws/dynamodb/model/DescribeTimeToLiveResult.h>
#include <aws/dynamodb/model/DisableKinesisStreamingDestinationResult.h>
#include <aws/dynamodb/model/EnableKinesisStreamingDestinationResult.h>
#include <aws/dynamodb/model/ExecuteStatementResult.h>
#include <aws/dynamodb/model/ExecuteTransactionResult.h>
#include <aws/dynamodb/model/ExportTableToPointInTimeResult.h>
#include <aws/dynamodb/model/GetItemResult.h>
#include <aws/dynamodb/model/ImportTableResult.h>
#include <aws/dynamodb/model/ListBackupsResult.h>
#include <aws/dynamodb/model/ListContributorInsightsResult.h>
#include <aws/dynamodb/model/ListExportsResult.h>
#include <aws/dynamodb/model/ListGlobalTablesResult.h>
#include <aws/dynamodb/model/ListImportsResult.h>
#include <aws/dynamodb/model/ListTablesResult.h>
#include <aws/dynamodb/model/ListTagsOfResourceResult.h>
#include <aws/dynamodb/model/PutItemResult.h>
#include <aws/dynamodb/model/QueryResult.h>
#include <aws/dynamodb/model/RestoreTableFromBackupResult.h>
#include <aws/dynamodb/model/RestoreTableToPointInTimeResult.h>
#include <aws/dynamodb/model/ScanResult.h>
#include <aws/dynamodb/model/TransactGetItemsResult.h>
#include <aws/dynamodb/model/TransactWriteItemsResult.h>
#include <aws/dynamodb/model/UpdateContinuousBackupsResult.h>
#include <aws/dynamodb/model/UpdateContributorInsightsResult.h>
#include <aws/dynamodb/model/UpdateGlobalTableResult.h>
#include <aws/dynamodb/model/UpdateGlobalTableSettingsResult.h>
#include <aws/dynamodb/model/UpdateItemResult.h>
#include <aws/dynamodb/model/UpdateTableResult.h>
#include <aws/dynamodb/model/UpdateTableReplicaAutoScalingResult.h>
#include <aws/dynamodb/model/UpdateTimeToLiveResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in DynamoDBClient header */

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

  namespace DynamoDB
  {
    using DynamoDBClientConfiguration = Aws::Client::GenericClientConfiguration<true>;
    using DynamoDBEndpointProviderBase = Aws::DynamoDB::Endpoint::DynamoDBEndpointProviderBase;
    using DynamoDBEndpointProvider = Aws::DynamoDB::Endpoint::DynamoDBEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DynamoDBClient header */
      class BatchExecuteStatementRequest;
      class BatchGetItemRequest;
      class BatchWriteItemRequest;
      class CreateBackupRequest;
      class CreateGlobalTableRequest;
      class CreateTableRequest;
      class DeleteBackupRequest;
      class DeleteItemRequest;
      class DeleteTableRequest;
      class DescribeBackupRequest;
      class DescribeContinuousBackupsRequest;
      class DescribeContributorInsightsRequest;
      class DescribeEndpointsRequest;
      class DescribeExportRequest;
      class DescribeGlobalTableRequest;
      class DescribeGlobalTableSettingsRequest;
      class DescribeImportRequest;
      class DescribeKinesisStreamingDestinationRequest;
      class DescribeLimitsRequest;
      class DescribeTableRequest;
      class DescribeTableReplicaAutoScalingRequest;
      class DescribeTimeToLiveRequest;
      class DisableKinesisStreamingDestinationRequest;
      class EnableKinesisStreamingDestinationRequest;
      class ExecuteStatementRequest;
      class ExecuteTransactionRequest;
      class ExportTableToPointInTimeRequest;
      class GetItemRequest;
      class ImportTableRequest;
      class ListBackupsRequest;
      class ListContributorInsightsRequest;
      class ListExportsRequest;
      class ListGlobalTablesRequest;
      class ListImportsRequest;
      class ListTablesRequest;
      class ListTagsOfResourceRequest;
      class PutItemRequest;
      class QueryRequest;
      class RestoreTableFromBackupRequest;
      class RestoreTableToPointInTimeRequest;
      class ScanRequest;
      class TagResourceRequest;
      class TransactGetItemsRequest;
      class TransactWriteItemsRequest;
      class UntagResourceRequest;
      class UpdateContinuousBackupsRequest;
      class UpdateContributorInsightsRequest;
      class UpdateGlobalTableRequest;
      class UpdateGlobalTableSettingsRequest;
      class UpdateItemRequest;
      class UpdateTableRequest;
      class UpdateTableReplicaAutoScalingRequest;
      class UpdateTimeToLiveRequest;
      /* End of service model forward declarations required in DynamoDBClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchExecuteStatementResult, DynamoDBError> BatchExecuteStatementOutcome;
      typedef Aws::Utils::Outcome<BatchGetItemResult, DynamoDBError> BatchGetItemOutcome;
      typedef Aws::Utils::Outcome<BatchWriteItemResult, DynamoDBError> BatchWriteItemOutcome;
      typedef Aws::Utils::Outcome<CreateBackupResult, DynamoDBError> CreateBackupOutcome;
      typedef Aws::Utils::Outcome<CreateGlobalTableResult, DynamoDBError> CreateGlobalTableOutcome;
      typedef Aws::Utils::Outcome<CreateTableResult, DynamoDBError> CreateTableOutcome;
      typedef Aws::Utils::Outcome<DeleteBackupResult, DynamoDBError> DeleteBackupOutcome;
      typedef Aws::Utils::Outcome<DeleteItemResult, DynamoDBError> DeleteItemOutcome;
      typedef Aws::Utils::Outcome<DeleteTableResult, DynamoDBError> DeleteTableOutcome;
      typedef Aws::Utils::Outcome<DescribeBackupResult, DynamoDBError> DescribeBackupOutcome;
      typedef Aws::Utils::Outcome<DescribeContinuousBackupsResult, DynamoDBError> DescribeContinuousBackupsOutcome;
      typedef Aws::Utils::Outcome<DescribeContributorInsightsResult, DynamoDBError> DescribeContributorInsightsOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointsResult, DynamoDBError> DescribeEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeExportResult, DynamoDBError> DescribeExportOutcome;
      typedef Aws::Utils::Outcome<DescribeGlobalTableResult, DynamoDBError> DescribeGlobalTableOutcome;
      typedef Aws::Utils::Outcome<DescribeGlobalTableSettingsResult, DynamoDBError> DescribeGlobalTableSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeImportResult, DynamoDBError> DescribeImportOutcome;
      typedef Aws::Utils::Outcome<DescribeKinesisStreamingDestinationResult, DynamoDBError> DescribeKinesisStreamingDestinationOutcome;
      typedef Aws::Utils::Outcome<DescribeLimitsResult, DynamoDBError> DescribeLimitsOutcome;
      typedef Aws::Utils::Outcome<DescribeTableResult, DynamoDBError> DescribeTableOutcome;
      typedef Aws::Utils::Outcome<DescribeTableReplicaAutoScalingResult, DynamoDBError> DescribeTableReplicaAutoScalingOutcome;
      typedef Aws::Utils::Outcome<DescribeTimeToLiveResult, DynamoDBError> DescribeTimeToLiveOutcome;
      typedef Aws::Utils::Outcome<DisableKinesisStreamingDestinationResult, DynamoDBError> DisableKinesisStreamingDestinationOutcome;
      typedef Aws::Utils::Outcome<EnableKinesisStreamingDestinationResult, DynamoDBError> EnableKinesisStreamingDestinationOutcome;
      typedef Aws::Utils::Outcome<ExecuteStatementResult, DynamoDBError> ExecuteStatementOutcome;
      typedef Aws::Utils::Outcome<ExecuteTransactionResult, DynamoDBError> ExecuteTransactionOutcome;
      typedef Aws::Utils::Outcome<ExportTableToPointInTimeResult, DynamoDBError> ExportTableToPointInTimeOutcome;
      typedef Aws::Utils::Outcome<GetItemResult, DynamoDBError> GetItemOutcome;
      typedef Aws::Utils::Outcome<ImportTableResult, DynamoDBError> ImportTableOutcome;
      typedef Aws::Utils::Outcome<ListBackupsResult, DynamoDBError> ListBackupsOutcome;
      typedef Aws::Utils::Outcome<ListContributorInsightsResult, DynamoDBError> ListContributorInsightsOutcome;
      typedef Aws::Utils::Outcome<ListExportsResult, DynamoDBError> ListExportsOutcome;
      typedef Aws::Utils::Outcome<ListGlobalTablesResult, DynamoDBError> ListGlobalTablesOutcome;
      typedef Aws::Utils::Outcome<ListImportsResult, DynamoDBError> ListImportsOutcome;
      typedef Aws::Utils::Outcome<ListTablesResult, DynamoDBError> ListTablesOutcome;
      typedef Aws::Utils::Outcome<ListTagsOfResourceResult, DynamoDBError> ListTagsOfResourceOutcome;
      typedef Aws::Utils::Outcome<PutItemResult, DynamoDBError> PutItemOutcome;
      typedef Aws::Utils::Outcome<QueryResult, DynamoDBError> QueryOutcome;
      typedef Aws::Utils::Outcome<RestoreTableFromBackupResult, DynamoDBError> RestoreTableFromBackupOutcome;
      typedef Aws::Utils::Outcome<RestoreTableToPointInTimeResult, DynamoDBError> RestoreTableToPointInTimeOutcome;
      typedef Aws::Utils::Outcome<ScanResult, DynamoDBError> ScanOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DynamoDBError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TransactGetItemsResult, DynamoDBError> TransactGetItemsOutcome;
      typedef Aws::Utils::Outcome<TransactWriteItemsResult, DynamoDBError> TransactWriteItemsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DynamoDBError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateContinuousBackupsResult, DynamoDBError> UpdateContinuousBackupsOutcome;
      typedef Aws::Utils::Outcome<UpdateContributorInsightsResult, DynamoDBError> UpdateContributorInsightsOutcome;
      typedef Aws::Utils::Outcome<UpdateGlobalTableResult, DynamoDBError> UpdateGlobalTableOutcome;
      typedef Aws::Utils::Outcome<UpdateGlobalTableSettingsResult, DynamoDBError> UpdateGlobalTableSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateItemResult, DynamoDBError> UpdateItemOutcome;
      typedef Aws::Utils::Outcome<UpdateTableResult, DynamoDBError> UpdateTableOutcome;
      typedef Aws::Utils::Outcome<UpdateTableReplicaAutoScalingResult, DynamoDBError> UpdateTableReplicaAutoScalingOutcome;
      typedef Aws::Utils::Outcome<UpdateTimeToLiveResult, DynamoDBError> UpdateTimeToLiveOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchExecuteStatementOutcome> BatchExecuteStatementOutcomeCallable;
      typedef std::future<BatchGetItemOutcome> BatchGetItemOutcomeCallable;
      typedef std::future<BatchWriteItemOutcome> BatchWriteItemOutcomeCallable;
      typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
      typedef std::future<CreateGlobalTableOutcome> CreateGlobalTableOutcomeCallable;
      typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
      typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
      typedef std::future<DeleteItemOutcome> DeleteItemOutcomeCallable;
      typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
      typedef std::future<DescribeBackupOutcome> DescribeBackupOutcomeCallable;
      typedef std::future<DescribeContinuousBackupsOutcome> DescribeContinuousBackupsOutcomeCallable;
      typedef std::future<DescribeContributorInsightsOutcome> DescribeContributorInsightsOutcomeCallable;
      typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
      typedef std::future<DescribeExportOutcome> DescribeExportOutcomeCallable;
      typedef std::future<DescribeGlobalTableOutcome> DescribeGlobalTableOutcomeCallable;
      typedef std::future<DescribeGlobalTableSettingsOutcome> DescribeGlobalTableSettingsOutcomeCallable;
      typedef std::future<DescribeImportOutcome> DescribeImportOutcomeCallable;
      typedef std::future<DescribeKinesisStreamingDestinationOutcome> DescribeKinesisStreamingDestinationOutcomeCallable;
      typedef std::future<DescribeLimitsOutcome> DescribeLimitsOutcomeCallable;
      typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
      typedef std::future<DescribeTableReplicaAutoScalingOutcome> DescribeTableReplicaAutoScalingOutcomeCallable;
      typedef std::future<DescribeTimeToLiveOutcome> DescribeTimeToLiveOutcomeCallable;
      typedef std::future<DisableKinesisStreamingDestinationOutcome> DisableKinesisStreamingDestinationOutcomeCallable;
      typedef std::future<EnableKinesisStreamingDestinationOutcome> EnableKinesisStreamingDestinationOutcomeCallable;
      typedef std::future<ExecuteStatementOutcome> ExecuteStatementOutcomeCallable;
      typedef std::future<ExecuteTransactionOutcome> ExecuteTransactionOutcomeCallable;
      typedef std::future<ExportTableToPointInTimeOutcome> ExportTableToPointInTimeOutcomeCallable;
      typedef std::future<GetItemOutcome> GetItemOutcomeCallable;
      typedef std::future<ImportTableOutcome> ImportTableOutcomeCallable;
      typedef std::future<ListBackupsOutcome> ListBackupsOutcomeCallable;
      typedef std::future<ListContributorInsightsOutcome> ListContributorInsightsOutcomeCallable;
      typedef std::future<ListExportsOutcome> ListExportsOutcomeCallable;
      typedef std::future<ListGlobalTablesOutcome> ListGlobalTablesOutcomeCallable;
      typedef std::future<ListImportsOutcome> ListImportsOutcomeCallable;
      typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
      typedef std::future<ListTagsOfResourceOutcome> ListTagsOfResourceOutcomeCallable;
      typedef std::future<PutItemOutcome> PutItemOutcomeCallable;
      typedef std::future<QueryOutcome> QueryOutcomeCallable;
      typedef std::future<RestoreTableFromBackupOutcome> RestoreTableFromBackupOutcomeCallable;
      typedef std::future<RestoreTableToPointInTimeOutcome> RestoreTableToPointInTimeOutcomeCallable;
      typedef std::future<ScanOutcome> ScanOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TransactGetItemsOutcome> TransactGetItemsOutcomeCallable;
      typedef std::future<TransactWriteItemsOutcome> TransactWriteItemsOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateContinuousBackupsOutcome> UpdateContinuousBackupsOutcomeCallable;
      typedef std::future<UpdateContributorInsightsOutcome> UpdateContributorInsightsOutcomeCallable;
      typedef std::future<UpdateGlobalTableOutcome> UpdateGlobalTableOutcomeCallable;
      typedef std::future<UpdateGlobalTableSettingsOutcome> UpdateGlobalTableSettingsOutcomeCallable;
      typedef std::future<UpdateItemOutcome> UpdateItemOutcomeCallable;
      typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
      typedef std::future<UpdateTableReplicaAutoScalingOutcome> UpdateTableReplicaAutoScalingOutcomeCallable;
      typedef std::future<UpdateTimeToLiveOutcome> UpdateTimeToLiveOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DynamoDBClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DynamoDBClient*, const Model::BatchExecuteStatementRequest&, const Model::BatchExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::BatchGetItemRequest&, const Model::BatchGetItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::BatchWriteItemRequest&, const Model::BatchWriteItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchWriteItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::CreateBackupRequest&, const Model::CreateBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::CreateGlobalTableRequest&, const Model::CreateGlobalTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlobalTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteBackupRequest&, const Model::DeleteBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteItemRequest&, const Model::DeleteItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeBackupRequest&, const Model::DescribeBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeContinuousBackupsRequest&, const Model::DescribeContinuousBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContinuousBackupsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeContributorInsightsRequest&, const Model::DescribeContributorInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContributorInsightsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeExportRequest&, const Model::DescribeExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeGlobalTableRequest&, const Model::DescribeGlobalTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeGlobalTableSettingsRequest&, const Model::DescribeGlobalTableSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalTableSettingsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeImportRequest&, const Model::DescribeImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImportResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeKinesisStreamingDestinationRequest&, const Model::DescribeKinesisStreamingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKinesisStreamingDestinationResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeLimitsRequest&, const Model::DescribeLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLimitsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeTableRequest&, const Model::DescribeTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeTableReplicaAutoScalingRequest&, const Model::DescribeTableReplicaAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableReplicaAutoScalingResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeTimeToLiveRequest&, const Model::DescribeTimeToLiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTimeToLiveResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DisableKinesisStreamingDestinationRequest&, const Model::DisableKinesisStreamingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableKinesisStreamingDestinationResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::EnableKinesisStreamingDestinationRequest&, const Model::EnableKinesisStreamingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableKinesisStreamingDestinationResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ExecuteStatementRequest&, const Model::ExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ExecuteTransactionRequest&, const Model::ExecuteTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteTransactionResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ExportTableToPointInTimeRequest&, const Model::ExportTableToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportTableToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::GetItemRequest&, const Model::GetItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ImportTableRequest&, const Model::ImportTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListBackupsRequest&, const Model::ListBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackupsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListContributorInsightsRequest&, const Model::ListContributorInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContributorInsightsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListExportsRequest&, const Model::ListExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExportsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListGlobalTablesRequest&, const Model::ListGlobalTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGlobalTablesResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListImportsRequest&, const Model::ListImportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListTagsOfResourceRequest&, const Model::ListTagsOfResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsOfResourceResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::PutItemRequest&, const Model::PutItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::RestoreTableFromBackupRequest&, const Model::RestoreTableFromBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreTableFromBackupResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::RestoreTableToPointInTimeRequest&, const Model::RestoreTableToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreTableToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ScanRequest&, const Model::ScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::TransactGetItemsRequest&, const Model::TransactGetItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransactGetItemsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::TransactWriteItemsRequest&, const Model::TransactWriteItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransactWriteItemsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateContinuousBackupsRequest&, const Model::UpdateContinuousBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContinuousBackupsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateContributorInsightsRequest&, const Model::UpdateContributorInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContributorInsightsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateGlobalTableRequest&, const Model::UpdateGlobalTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateGlobalTableSettingsRequest&, const Model::UpdateGlobalTableSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalTableSettingsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateItemRequest&, const Model::UpdateItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateTableReplicaAutoScalingRequest&, const Model::UpdateTableReplicaAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableReplicaAutoScalingResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateTimeToLiveRequest&, const Model::UpdateTimeToLiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTimeToLiveResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DynamoDB
} // namespace Aws
