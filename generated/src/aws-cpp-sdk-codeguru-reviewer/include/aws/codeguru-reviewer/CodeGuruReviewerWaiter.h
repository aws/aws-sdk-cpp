/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewerClient.h>
#include <aws/codeguru-reviewer/model/DescribeCodeReviewRequest.h>
#include <aws/codeguru-reviewer/model/DescribeCodeReviewResult.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationResult.h>
#include <aws/codeguru-reviewer/model/JobState.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociationState.h>
#include <aws/core/utils/Waiter.h>

#include <algorithm>

namespace Aws {
namespace CodeGuruReviewer {

template <typename DerivedClient = CodeGuruReviewerClient>
class CodeGuruReviewerWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeCodeReviewOutcome> WaitUntilCodeReviewCompleted(
      const Model::DescribeCodeReviewRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeCodeReviewOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
                         [](const Model::DescribeCodeReviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStateMapper::GetNameForJobState(result.GetCodeReview().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeCodeReviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStateMapper::GetNameForJobState(result.GetCodeReview().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Pending"),
                         [](const Model::DescribeCodeReviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStateMapper::GetNameForJobState(result.GetCodeReview().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeCodeReviewRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeCodeReview(req);
    };
    Aws::Utils::Waiter<Model::DescribeCodeReviewRequest, Model::DescribeCodeReviewOutcome> waiter(10, 12, acceptors, operation,
                                                                                                  "WaitUntilCodeReviewCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeRepositoryAssociationOutcome> WaitUntilRepositoryAssociationSucceeded(
      const Model::DescribeRepositoryAssociationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeRepositoryAssociationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Associated"),
                         [](const Model::DescribeRepositoryAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RepositoryAssociationStateMapper::GetNameForRepositoryAssociationState(
                                      result.GetRepositoryAssociation().GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeRepositoryAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RepositoryAssociationStateMapper::GetNameForRepositoryAssociationState(
                                      result.GetRepositoryAssociation().GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Associating"),
                         [](const Model::DescribeRepositoryAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RepositoryAssociationStateMapper::GetNameForRepositoryAssociationState(
                                      result.GetRepositoryAssociation().GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeRepositoryAssociationRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeRepositoryAssociation(req);
    };
    Aws::Utils::Waiter<Model::DescribeRepositoryAssociationRequest, Model::DescribeRepositoryAssociationOutcome> waiter(
        10, 12, acceptors, operation, "WaitUntilRepositoryAssociationSucceeded");
    return waiter.Wait(request);
  }
};
}  // namespace CodeGuruReviewer
}  // namespace Aws
