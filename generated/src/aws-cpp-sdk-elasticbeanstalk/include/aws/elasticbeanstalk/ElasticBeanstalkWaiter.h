/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkClient.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsResult.h>
#include <aws/elasticbeanstalk/model/EnvironmentStatus.h>

#include <algorithm>

namespace Aws {
namespace ElasticBeanstalk {

template <typename DerivedClient = ElasticBeanstalkClient>
class ElasticBeanstalkWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeEnvironmentsOutcome> WaitUntilEnvironmentExists(
      const Model::DescribeEnvironmentsRequest& request) {
    using OutcomeT = Model::DescribeEnvironmentsOutcome;
    using RequestT = Model::DescribeEnvironmentsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentExistsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Ready"),
        [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetEnvironments().begin(), result.GetEnvironments().end(), [&](const Model::EnvironmentDescription& item) {
                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentExistsWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Launching"),
        [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetEnvironments().begin(), result.GetEnvironments().end(), [&](const Model::EnvironmentDescription& item) {
                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEnvironments(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilEnvironmentExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEnvironmentsOutcome> WaitUntilEnvironmentTerminated(
      const Model::DescribeEnvironmentsRequest& request) {
    using OutcomeT = Model::DescribeEnvironmentsOutcome;
    using RequestT = Model::DescribeEnvironmentsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentTerminatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Terminated"),
        [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetEnvironments().begin(), result.GetEnvironments().end(), [&](const Model::EnvironmentDescription& item) {
                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentTerminatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Terminating"),
        [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetEnvironments().begin(), result.GetEnvironments().end(), [&](const Model::EnvironmentDescription& item) {
                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEnvironments(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilEnvironmentTerminated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEnvironmentsOutcome> WaitUntilEnvironmentUpdated(
      const Model::DescribeEnvironmentsRequest& request) {
    using OutcomeT = Model::DescribeEnvironmentsOutcome;
    using RequestT = Model::DescribeEnvironmentsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentUpdatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Ready"),
        [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetEnvironments().begin(), result.GetEnvironments().end(), [&](const Model::EnvironmentDescription& item) {
                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentUpdatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Updating"),
        [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetEnvironments().begin(), result.GetEnvironments().end(), [&](const Model::EnvironmentDescription& item) {
                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEnvironments(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilEnvironmentUpdated");
    return waiter.Wait(request);
  }
};
}  // namespace ElasticBeanstalk
}  // namespace Aws
