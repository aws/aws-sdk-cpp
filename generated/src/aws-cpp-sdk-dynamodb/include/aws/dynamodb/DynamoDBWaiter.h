/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeContributorInsightsOutcome;
    using RequestT = Model::DescribeContributorInsightsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ContributorInsightsEnabledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ENABLED"),
        [](const Model::DescribeContributorInsightsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ContributorInsightsStatusMapper::GetNameForContributorInsightsStatus(result.GetContributorInsightsStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ContributorInsightsEnabledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeContributorInsightsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ContributorInsightsStatusMapper::GetNameForContributorInsightsStatus(result.GetContributorInsightsStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeContributorInsights(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilContributorInsightsEnabled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeExportOutcome> WaitUntilExportCompleted(const Model::DescribeExportRequest& request) {
    using OutcomeT = Model::DescribeExportOutcome;
    using RequestT = Model::DescribeExportRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportDescription().GetExportStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportDescription().GetExportStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeExport(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilExportCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeImportOutcome> WaitUntilImportCompleted(const Model::DescribeImportRequest& request) {
    using OutcomeT = Model::DescribeImportOutcome;
    using RequestT = Model::DescribeImportRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportTableDescription().GetImportStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportTableDescription().GetImportStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::DescribeImportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportStatusMapper::GetNameForImportStatus(result.GetImportTableDescription().GetImportStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImport(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilImportCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeKinesisStreamingDestinationOutcome> WaitUntilKinesisStreamingDestinationActive(
      const Model::DescribeKinesisStreamingDestinationRequest& request) {
    using OutcomeT = Model::DescribeKinesisStreamingDestinationOutcome;
    using RequestT = Model::DescribeKinesisStreamingDestinationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "KinesisStreamingDestinationActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeKinesisStreamingDestinationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetKinesisDataStreamDestinations().begin(), result.GetKinesisDataStreamDestinations().end(),
                             [&](const Model::KinesisDataStreamDestination& item) {
                               return Model::DestinationStatusMapper::GetNameForDestinationStatus(item.GetDestinationStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "KinesisStreamingDestinationActiveWaiter", Aws::Utils::WaiterState::FAILURE, true,
        [](const Model::DescribeKinesisStreamingDestinationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return ((result.GetKinesisDataStreamDestinations().size() > 0) &&
                  (static_cast<std::size_t>(std::count_if(
                       result.GetKinesisDataStreamDestinations().begin(), result.GetKinesisDataStreamDestinations().end(),
                       [](const Model::KinesisDataStreamDestination& item) {
                         return (
                             (Model::DestinationStatusMapper::GetNameForDestinationStatus(item.GetDestinationStatus()) == "DISABLED") ||
                             (Model::DestinationStatusMapper::GetNameForDestinationStatus(item.GetDestinationStatus()) == "ENABLE_FAILED"));
                       })) == result.GetKinesisDataStreamDestinations().size())) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeKinesisStreamingDestination(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilKinesisStreamingDestinationActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTableOutcome> WaitUntilTableExists(const Model::DescribeTableRequest& request) {
    using OutcomeT = Model::DescribeTableOutcome;
    using RequestT = Model::DescribeTableRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TableExistsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeTableOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TableStatusMapper::GetNameForTableStatus(result.GetTable().GetTableStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("TableExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTable(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilTableExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTableOutcome> WaitUntilTableNotExists(const Model::DescribeTableRequest& request) {
    using OutcomeT = Model::DescribeTableOutcome;
    using RequestT = Model::DescribeTableRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("TableNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTable(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilTableNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace DynamoDB
}  // namespace Aws
