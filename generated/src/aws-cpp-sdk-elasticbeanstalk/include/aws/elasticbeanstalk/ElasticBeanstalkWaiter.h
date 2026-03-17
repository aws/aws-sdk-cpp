/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeEnvironmentsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Ready"),
                         [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetEnvironments().begin(), result.GetEnvironments().end(),
                                              [&](const Model::EnvironmentDescription& item) {
                                                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Launching"),
                         [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetEnvironments().begin(), result.GetEnvironments().end(),
                                              [&](const Model::EnvironmentDescription& item) {
                                                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeEnvironmentsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeEnvironments(req);
    };
    Aws::Utils::Waiter<Model::DescribeEnvironmentsRequest, Model::DescribeEnvironmentsOutcome> waiter(20, 6, acceptors, operation,
                                                                                                      "WaitUntilEnvironmentExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEnvironmentsOutcome> WaitUntilEnvironmentTerminated(
      const Model::DescribeEnvironmentsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeEnvironmentsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Terminated"),
                         [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetEnvironments().begin(), result.GetEnvironments().end(),
                                              [&](const Model::EnvironmentDescription& item) {
                                                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Terminating"),
                         [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetEnvironments().begin(), result.GetEnvironments().end(),
                                              [&](const Model::EnvironmentDescription& item) {
                                                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeEnvironmentsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeEnvironments(req);
    };
    Aws::Utils::Waiter<Model::DescribeEnvironmentsRequest, Model::DescribeEnvironmentsOutcome> waiter(20, 6, acceptors, operation,
                                                                                                      "WaitUntilEnvironmentTerminated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEnvironmentsOutcome> WaitUntilEnvironmentUpdated(
      const Model::DescribeEnvironmentsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeEnvironmentsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Ready"),
                         [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetEnvironments().begin(), result.GetEnvironments().end(),
                                              [&](const Model::EnvironmentDescription& item) {
                                                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Updating"),
                         [](const Model::DescribeEnvironmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetEnvironments().begin(), result.GetEnvironments().end(),
                                              [&](const Model::EnvironmentDescription& item) {
                                                return Model::EnvironmentStatusMapper::GetNameForEnvironmentStatus(item.GetStatus()) ==
                                                       expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeEnvironmentsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeEnvironments(req);
    };
    Aws::Utils::Waiter<Model::DescribeEnvironmentsRequest, Model::DescribeEnvironmentsOutcome> waiter(20, 6, acceptors, operation,
                                                                                                      "WaitUntilEnvironmentUpdated");
    return waiter.Wait(request);
  }
};
}  // namespace ElasticBeanstalk
}  // namespace Aws
