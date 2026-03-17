/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusServiceClient.h>
#include <aws/amp/model/AnomalyDetectorStatusCode.h>
#include <aws/amp/model/DescribeAnomalyDetectorRequest.h>
#include <aws/amp/model/DescribeAnomalyDetectorResult.h>
#include <aws/amp/model/DescribeScraperRequest.h>
#include <aws/amp/model/DescribeScraperResult.h>
#include <aws/amp/model/DescribeWorkspaceRequest.h>
#include <aws/amp/model/DescribeWorkspaceResult.h>
#include <aws/core/utils/Waiter.h>

#include <algorithm>

namespace Aws {
namespace PrometheusService {

template <typename DerivedClient = PrometheusServiceClient>
class PrometheusServiceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeAnomalyDetectorOutcome> WaitUntilAnomalyDetectorActive(
      const Model::DescribeAnomalyDetectorRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAnomalyDetectorOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeAnomalyDetectorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AnomalyDetectorStatusCodeMapper::GetNameForAnomalyDetectorStatusCode(
                                      result.GetAnomalyDetector().GetStatus().GetStatusCode()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::DescribeAnomalyDetectorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AnomalyDetectorStatusCodeMapper::GetNameForAnomalyDetectorStatusCode(
                                      result.GetAnomalyDetector().GetStatus().GetStatusCode()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::DescribeAnomalyDetectorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AnomalyDetectorStatusCodeMapper::GetNameForAnomalyDetectorStatusCode(
                                      result.GetAnomalyDetector().GetStatus().GetStatusCode()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeAnomalyDetectorRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeAnomalyDetector(req);
    };
    Aws::Utils::Waiter<Model::DescribeAnomalyDetectorRequest, Model::DescribeAnomalyDetectorOutcome> waiter(
        2, 60, acceptors, operation, "WaitUntilAnomalyDetectorActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAnomalyDetectorOutcome> WaitUntilAnomalyDetectorDeleted(
      const Model::DescribeAnomalyDetectorRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAnomalyDetectorOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeAnomalyDetectorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::AnomalyDetectorStatusCodeMapper::GetNameForAnomalyDetectorStatusCode(
                                      result.GetAnomalyDetector().GetStatus().GetStatusCode()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeAnomalyDetectorRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeAnomalyDetector(req);
    };
    Aws::Utils::Waiter<Model::DescribeAnomalyDetectorRequest, Model::DescribeAnomalyDetectorOutcome> waiter(
        2, 60, acceptors, operation, "WaitUntilAnomalyDetectorDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeScraperOutcome> WaitUntilScraperActive(const Model::DescribeScraperRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeScraperOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeScraperOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetScraper().GetStatus().GetStatusCode() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATION_FAILED"),
                         [](const Model::DescribeScraperOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetScraper().GetStatus().GetStatusCode() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeScraperRequest& req) { return static_cast<DerivedClient*>(this)->DescribeScraper(req); };
    Aws::Utils::Waiter<Model::DescribeScraperRequest, Model::DescribeScraperOutcome> waiter(2, 60, acceptors, operation,
                                                                                            "WaitUntilScraperActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeScraperOutcome> WaitUntilScraperDeleted(const Model::DescribeScraperRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeScraperOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETION_FAILED"),
                         [](const Model::DescribeScraperOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetScraper().GetStatus().GetStatusCode() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeScraperRequest& req) { return static_cast<DerivedClient*>(this)->DescribeScraper(req); };
    Aws::Utils::Waiter<Model::DescribeScraperRequest, Model::DescribeScraperOutcome> waiter(2, 60, acceptors, operation,
                                                                                            "WaitUntilScraperDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeWorkspaceOutcome> WaitUntilWorkspaceActive(const Model::DescribeWorkspaceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeWorkspaceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeWorkspaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetWorkspace().GetStatus().GetStatusCode() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::DescribeWorkspaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetWorkspace().GetStatus().GetStatusCode() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::DescribeWorkspaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetWorkspace().GetStatus().GetStatusCode() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeWorkspaceRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeWorkspace(req);
    };
    Aws::Utils::Waiter<Model::DescribeWorkspaceRequest, Model::DescribeWorkspaceOutcome> waiter(2, 60, acceptors, operation,
                                                                                                "WaitUntilWorkspaceActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeWorkspaceOutcome> WaitUntilWorkspaceDeleted(const Model::DescribeWorkspaceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeWorkspaceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeWorkspaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetWorkspace().GetStatus().GetStatusCode() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeWorkspaceRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeWorkspace(req);
    };
    Aws::Utils::Waiter<Model::DescribeWorkspaceRequest, Model::DescribeWorkspaceOutcome> waiter(2, 60, acceptors, operation,
                                                                                                "WaitUntilWorkspaceDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace PrometheusService
}  // namespace Aws
