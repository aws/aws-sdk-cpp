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
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CodeGuruReviewer {

template <typename DerivedClient = CodeGuruReviewerClient>
class CodeGuruReviewerWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeCodeReviewOutcome> WaitUntilCodeReviewCompleted(
      const Model::DescribeCodeReviewRequest& request) {
    using OutcomeT = Model::DescribeCodeReviewOutcome;
    using RequestT = Model::DescribeCodeReviewRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CodeReviewCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::DescribeCodeReviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStateMapper::GetNameForJobState(result.GetCodeReview().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CodeReviewCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeCodeReviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStateMapper::GetNameForJobState(result.GetCodeReview().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CodeReviewCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Pending"),
        [](const Model::DescribeCodeReviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStateMapper::GetNameForJobState(result.GetCodeReview().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCodeReview(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilCodeReviewCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeRepositoryAssociationOutcome> WaitUntilRepositoryAssociationSucceeded(
      const Model::DescribeRepositoryAssociationRequest& request) {
    using OutcomeT = Model::DescribeRepositoryAssociationOutcome;
    using RequestT = Model::DescribeRepositoryAssociationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RepositoryAssociationSucceededWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Associated"),
        [](const Model::DescribeRepositoryAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RepositoryAssociationStateMapper::GetNameForRepositoryAssociationState(
                     result.GetRepositoryAssociation().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RepositoryAssociationSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeRepositoryAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RepositoryAssociationStateMapper::GetNameForRepositoryAssociationState(
                     result.GetRepositoryAssociation().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RepositoryAssociationSucceededWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Associating"),
        [](const Model::DescribeRepositoryAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RepositoryAssociationStateMapper::GetNameForRepositoryAssociationState(
                     result.GetRepositoryAssociation().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeRepositoryAssociation(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 12, std::move(acceptors), operation, "WaitUntilRepositoryAssociationSucceeded");
    return waiter.Wait(request);
  }
};
}  // namespace CodeGuruReviewer
}  // namespace Aws
