/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeBatchPredictionsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
                             return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
                             return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeBatchPredictionsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeBatchPredictions(req);
    };
    Aws::Utils::Waiter<Model::DescribeBatchPredictionsRequest, Model::DescribeBatchPredictionsOutcome> waiter(
        30, 4, acceptors, operation, "WaitUntilBatchPredictionAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDataSourcesOutcome> WaitUntilDataSourceAvailable(
      const Model::DescribeDataSourcesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDataSourcesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
                             return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
                             return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeDataSourcesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDataSources(req);
    };
    Aws::Utils::Waiter<Model::DescribeDataSourcesRequest, Model::DescribeDataSourcesOutcome> waiter(30, 4, acceptors, operation,
                                                                                                    "WaitUntilDataSourceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEvaluationsOutcome> WaitUntilEvaluationAvailable(
      const Model::DescribeEvaluationsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeEvaluationsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
                             return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
                             return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeEvaluationsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeEvaluations(req);
    };
    Aws::Utils::Waiter<Model::DescribeEvaluationsRequest, Model::DescribeEvaluationsOutcome> waiter(30, 4, acceptors, operation,
                                                                                                    "WaitUntilEvaluationAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMLModelsOutcome> WaitUntilMLModelAvailable(const Model::DescribeMLModelsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeMLModelsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
                             return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeMLModelsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetResults().begin(), result.GetResults().end(), [&](const Model::MLModel& item) {
                             return Model::EntityStatusMapper::GetNameForEntityStatus(item.GetStatus()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeMLModelsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeMLModels(req); };
    Aws::Utils::Waiter<Model::DescribeMLModelsRequest, Model::DescribeMLModelsOutcome> waiter(30, 4, acceptors, operation,
                                                                                              "WaitUntilMLModelAvailable");
    return waiter.Wait(request);
  }
};
}  // namespace MachineLearning
}  // namespace Aws
