/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/machinelearning/MachineLearningClient.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsRequest.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsResult.h>
#include <aws/machinelearning/model/DescribeDataSourcesRequest.h>
#include <aws/machinelearning/model/DescribeDataSourcesResult.h>
#include <aws/machinelearning/model/DescribeEvaluationsRequest.h>
#include <aws/machinelearning/model/DescribeEvaluationsResult.h>
#include <aws/machinelearning/model/DescribeMLModelsRequest.h>
#include <aws/machinelearning/model/DescribeMLModelsResult.h>
#include <aws/machinelearning/model/EntityStatus.h>

#include <algorithm>

namespace Aws {
namespace MachineLearning {

template <typename DerivedClient = MachineLearningClient>
class MachineLearningWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeBatchPredictionsOutcome> WaitUntilBatchPredictionAvailable(
      const Model::DescribeBatchPredictionsRequest& request) {
    using OutcomeT = Model::DescribeBatchPredictionsOutcome;
    using RequestT = Model::DescribeBatchPredictionsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BatchPredictionAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
            return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BatchPredictionAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
            return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeBatchPredictions(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilBatchPredictionAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDataSourcesOutcome> WaitUntilDataSourceAvailable(
      const Model::DescribeDataSourcesRequest& request) {
    using OutcomeT = Model::DescribeDataSourcesOutcome;
    using RequestT = Model::DescribeDataSourcesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DataSourceAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
            return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DataSourceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
            return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDataSources(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilDataSourceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEvaluationsOutcome> WaitUntilEvaluationAvailable(
      const Model::DescribeEvaluationsRequest& request) {
    using OutcomeT = Model::DescribeEvaluationsOutcome;
    using RequestT = Model::DescribeEvaluationsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EvaluationAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
            return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EvaluationAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
            return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEvaluations(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilEvaluationAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMLModelsOutcome> WaitUntilMLModelAvailable(const Model::DescribeMLModelsRequest& request) {
    using OutcomeT = Model::DescribeMLModelsOutcome;
    using RequestT = Model::DescribeMLModelsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MLModelAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
            return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MLModelAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
            return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMLModels(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilMLModelAvailable");
    return waiter.Wait(request);
  }
};
}  // namespace MachineLearning
}  // namespace Aws
