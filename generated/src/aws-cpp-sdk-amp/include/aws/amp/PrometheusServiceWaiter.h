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
#include <aws/amp/model/ScraperStatusCode.h>
#include <aws/amp/model/WorkspaceStatusCode.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace PrometheusService {

template <typename DerivedClient = PrometheusServiceClient>
class PrometheusServiceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeAnomalyDetectorOutcome> WaitUntilAnomalyDetectorActive(
      const Model::DescribeAnomalyDetectorRequest& request) {
    using OutcomeT = Model::DescribeAnomalyDetectorOutcome;
    using RequestT = Model::DescribeAnomalyDetectorRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnomalyDetectorActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeAnomalyDetectorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AnomalyDetectorStatusCodeMapper::GetNameForAnomalyDetectorStatusCode(
                     result.GetAnomalyDetector().GetStatus().GetStatusCode()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnomalyDetectorActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::DescribeAnomalyDetectorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AnomalyDetectorStatusCodeMapper::GetNameForAnomalyDetectorStatusCode(
                     result.GetAnomalyDetector().GetStatus().GetStatusCode()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnomalyDetectorActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::DescribeAnomalyDetectorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AnomalyDetectorStatusCodeMapper::GetNameForAnomalyDetectorStatusCode(
                     result.GetAnomalyDetector().GetStatus().GetStatusCode()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAnomalyDetector(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilAnomalyDetectorActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAnomalyDetectorOutcome> WaitUntilAnomalyDetectorDeleted(
      const Model::DescribeAnomalyDetectorRequest& request) {
    using OutcomeT = Model::DescribeAnomalyDetectorOutcome;
    using RequestT = Model::DescribeAnomalyDetectorRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "AnomalyDetectorDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnomalyDetectorDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeAnomalyDetectorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AnomalyDetectorStatusCodeMapper::GetNameForAnomalyDetectorStatusCode(
                     result.GetAnomalyDetector().GetStatus().GetStatusCode()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAnomalyDetector(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilAnomalyDetectorDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeScraperOutcome> WaitUntilScraperActive(const Model::DescribeScraperRequest& request) {
    using OutcomeT = Model::DescribeScraperOutcome;
    using RequestT = Model::DescribeScraperRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ScraperActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeScraperOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ScraperStatusCodeMapper::GetNameForScraperStatusCode(result.GetScraper().GetStatus().GetStatusCode()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ScraperActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATION_FAILED"),
        [](const Model::DescribeScraperOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ScraperStatusCodeMapper::GetNameForScraperStatusCode(result.GetScraper().GetStatus().GetStatusCode()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeScraper(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilScraperActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeScraperOutcome> WaitUntilScraperDeleted(const Model::DescribeScraperRequest& request) {
    using OutcomeT = Model::DescribeScraperOutcome;
    using RequestT = Model::DescribeScraperRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ScraperDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ScraperDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETION_FAILED"),
        [](const Model::DescribeScraperOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ScraperStatusCodeMapper::GetNameForScraperStatusCode(result.GetScraper().GetStatus().GetStatusCode()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeScraper(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilScraperDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeWorkspaceOutcome> WaitUntilWorkspaceActive(const Model::DescribeWorkspaceRequest& request) {
    using OutcomeT = Model::DescribeWorkspaceOutcome;
    using RequestT = Model::DescribeWorkspaceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkspaceActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeWorkspaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkspaceStatusCodeMapper::GetNameForWorkspaceStatusCode(result.GetWorkspace().GetStatus().GetStatusCode()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkspaceActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::DescribeWorkspaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkspaceStatusCodeMapper::GetNameForWorkspaceStatusCode(result.GetWorkspace().GetStatus().GetStatusCode()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkspaceActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::DescribeWorkspaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkspaceStatusCodeMapper::GetNameForWorkspaceStatusCode(result.GetWorkspace().GetStatus().GetStatusCode()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeWorkspace(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilWorkspaceActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeWorkspaceOutcome> WaitUntilWorkspaceDeleted(const Model::DescribeWorkspaceRequest& request) {
    using OutcomeT = Model::DescribeWorkspaceOutcome;
    using RequestT = Model::DescribeWorkspaceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("WorkspaceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkspaceDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeWorkspaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkspaceStatusCodeMapper::GetNameForWorkspaceStatusCode(result.GetWorkspace().GetStatus().GetStatusCode()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeWorkspace(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilWorkspaceDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace PrometheusService
}  // namespace Aws
