/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/ContributorInsightsStatus.h>
#include <aws/dynamodb/model/DescribeContributorInsightsRequest.h>
#include <aws/dynamodb/model/DescribeContributorInsightsResult.h>
#include <aws/dynamodb/model/DescribeExportRequest.h>
#include <aws/dynamodb/model/DescribeExportResult.h>
#include <aws/dynamodb/model/DescribeImportRequest.h>
#include <aws/dynamodb/model/DescribeImportResult.h>
#include <aws/dynamodb/model/DescribeKinesisStreamingDestinationRequest.h>
#include <aws/dynamodb/model/DescribeKinesisStreamingDestinationResult.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/DescribeTableResult.h>
#include <aws/dynamodb/model/DestinationStatus.h>
#include <aws/dynamodb/model/ExportStatus.h>
#include <aws/dynamodb/model/ImportStatus.h>
#include <aws/dynamodb/model/TableStatus.h>

#include <algorithm>

namespace Aws {
namespace DynamoDB {

template <typename DerivedClient = DynamoDBClient>
class DynamoDBWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeContributorInsightsOutcome> WaitUntilContributorInsightsEnabled(
      const Model::DescribeContributorInsightsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeContributorInsightsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ENABLED"),
                         [](const Model::DescribeContributorInsightsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ContributorInsightsStatusMapper::GetNameForContributorInsightsStatus(
                                      result.GetContributorInsightsStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeContributorInsightsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ContributorInsightsStatusMapper::GetNameForContributorInsightsStatus(
                                      result.GetContributorInsightsStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeContributorInsightsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeContributorInsights(req);
    };
    Aws::Utils::Waiter<Model::DescribeContributorInsightsRequest, Model::DescribeContributorInsightsOutcome> waiter(
        20, 6, acceptors, operation, "WaitUntilContributorInsightsEnabled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExportOutcome> WaitUntilExportCompleted(const Model::DescribeExportRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeExportOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportDescription().GetExportStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportDescription().GetExportStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeExportRequest& req) { return static_cast<DerivedClient*>(this)->DescribeExport(req); };
    Aws::Utils::Waiter<Model::DescribeExportRequest, Model::DescribeExportOutcome> waiter(20, 6, acceptors, operation,
                                                                                          "WaitUntilExportCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImportOutcome> WaitUntilImportCompleted(const Model::DescribeImportRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeImportOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportTableDescription().GetImportStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportTableDescription().GetImportStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportTableDescription().GetImportStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeImportRequest& req) { return static_cast<DerivedClient*>(this)->DescribeImport(req); };
    Aws::Utils::Waiter<Model::DescribeImportRequest, Model::DescribeImportOutcome> waiter(20, 6, acceptors, operation,
                                                                                          "WaitUntilImportCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeKinesisStreamingDestinationOutcome> WaitUntilKinesisStreamingDestinationActive(
      const Model::DescribeKinesisStreamingDestinationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeKinesisStreamingDestinationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeKinesisStreamingDestinationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetKinesisDataStreamDestinations().begin(), result.GetKinesisDataStreamDestinations().end(),
                               [&](const Model::KinesisDataStreamDestination& item) {
                                 return Model::DestinationStatusMapper::GetNameForDestinationStatus(item.GetDestinationStatus()) ==
                                        expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, true,
         [](const Model::DescribeKinesisStreamingDestinationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return ((result.GetKinesisDataStreamDestinations().size() > 0) &&
                   (std::count_if(result.GetKinesisDataStreamDestinations().begin(), result.GetKinesisDataStreamDestinations().end(),
                                  [](const Model::KinesisDataStreamDestination& item) {
                                    return ((item.GetDestinationStatus() == "DISABLED") ||
                                            (item.GetDestinationStatus() == "ENABLE_FAILED"));
                                  }) == result.GetKinesisDataStreamDestinations().size())) == expected.get<bool>();
         }});

    auto operation = [this](const Model::DescribeKinesisStreamingDestinationRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeKinesisStreamingDestination(req);
    };
    Aws::Utils::Waiter<Model::DescribeKinesisStreamingDestinationRequest, Model::DescribeKinesisStreamingDestinationOutcome> waiter(
        20, 6, acceptors, operation, "WaitUntilKinesisStreamingDestinationActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTableOutcome> WaitUntilTableExists(const Model::DescribeTableRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTableOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeTableOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TableStatusMapper::GetNameForTableStatus(result.GetTable().GetTableStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeTableRequest& req) { return static_cast<DerivedClient*>(this)->DescribeTable(req); };
    Aws::Utils::Waiter<Model::DescribeTableRequest, Model::DescribeTableOutcome> waiter(20, 6, acceptors, operation,
                                                                                        "WaitUntilTableExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTableOutcome> WaitUntilTableNotExists(const Model::DescribeTableRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTableOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeTableRequest& req) { return static_cast<DerivedClient*>(this)->DescribeTable(req); };
    Aws::Utils::Waiter<Model::DescribeTableRequest, Model::DescribeTableOutcome> waiter(20, 6, acceptors, operation,
                                                                                        "WaitUntilTableNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace DynamoDB
}  // namespace Aws
