/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormationClient.h>
#include <aws/cloudformation/model/ChangeSetStatus.h>
#include <aws/cloudformation/model/DescribeChangeSetRequest.h>
#include <aws/cloudformation/model/DescribeChangeSetResult.h>
#include <aws/cloudformation/model/DescribeStackRefactorRequest.h>
#include <aws/cloudformation/model/DescribeStackRefactorResult.h>
#include <aws/cloudformation/model/DescribeStacksRequest.h>
#include <aws/cloudformation/model/DescribeStacksResult.h>
#include <aws/cloudformation/model/DescribeTypeRegistrationRequest.h>
#include <aws/cloudformation/model/DescribeTypeRegistrationResult.h>
#include <aws/cloudformation/model/RegistrationStatus.h>
#include <aws/cloudformation/model/StackRefactorExecutionStatus.h>
#include <aws/cloudformation/model/StackRefactorStatus.h>
#include <aws/cloudformation/model/StackStatus.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudFormation {

template <typename DerivedClient = CloudFormationClient>
class CloudFormationWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeChangeSetOutcome> WaitUntilChangeSetCreateComplete(
      const Model::DescribeChangeSetRequest& request) {
    using OutcomeT = Model::DescribeChangeSetOutcome;
    using RequestT = Model::DescribeChangeSetRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChangeSetCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATE_COMPLETE"),
        [](const Model::DescribeChangeSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChangeSetStatusMapper::GetNameForChangeSetStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChangeSetCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeChangeSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChangeSetStatusMapper::GetNameForChangeSetStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ChangeSetCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationError")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChangeSet(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilChangeSetCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStackRefactorOutcome> WaitUntilStackRefactorCreateComplete(
      const Model::DescribeStackRefactorRequest& request) {
    using OutcomeT = Model::DescribeStackRefactorOutcome;
    using RequestT = Model::DescribeStackRefactorRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRefactorCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATE_COMPLETE"),
        [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StackRefactorStatusMapper::GetNameForStackRefactorStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRefactorCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StackRefactorStatusMapper::GetNameForStackRefactorStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "StackRefactorCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationError")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStackRefactor(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilStackRefactorCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStackRefactorOutcome> WaitUntilStackRefactorExecuteComplete(
      const Model::DescribeStackRefactorRequest& request) {
    using OutcomeT = Model::DescribeStackRefactorOutcome;
    using RequestT = Model::DescribeStackRefactorRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRefactorExecuteCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("EXECUTE_COMPLETE"),
        [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(result.GetExecutionStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRefactorExecuteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("EXECUTE_FAILED"),
        [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(result.GetExecutionStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRefactorExecuteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLBACK_COMPLETE"),
        [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(result.GetExecutionStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "StackRefactorExecuteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationError")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStackRefactor(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilStackRefactorExecuteComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackCreateComplete(const Model::DescribeStacksRequest& request) {
    using OutcomeT = Model::DescribeStacksOutcome;
    using RequestT = Model::DescribeStacksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATE_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_IN_PROGRESS"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_COMPLETE_CLEANUP_IN_PROGRESS"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_ROLLBACK_IN_PROGRESS"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_ROLLBACK_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_ROLLBACK_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLBACK_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLBACK_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "StackCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationError")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilStackCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackDeleteComplete(const Model::DescribeStacksRequest& request) {
    using OutcomeT = Model::DescribeStacksOutcome;
    using RequestT = Model::DescribeStacksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETE_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ValidationError")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLBACK_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_ROLLBACK_IN_PROGRESS"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_ROLLBACK_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_ROLLBACK_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackDeleteCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilStackDeleteComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackExists(const Model::DescribeStacksRequest& request) {
    using OutcomeT = Model::DescribeStacksOutcome;
    using RequestT = Model::DescribeStacksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("StackExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("StackExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ValidationError")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilStackExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackImportComplete(const Model::DescribeStacksRequest& request) {
    using OutcomeT = Model::DescribeStacksOutcome;
    using RequestT = Model::DescribeStacksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackImportCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("IMPORT_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackImportCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLBACK_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackImportCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLBACK_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackImportCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("IMPORT_ROLLBACK_IN_PROGRESS"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackImportCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("IMPORT_ROLLBACK_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackImportCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("IMPORT_ROLLBACK_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "StackImportCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationError")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilStackImportComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackRollbackComplete(const Model::DescribeStacksRequest& request) {
    using OutcomeT = Model::DescribeStacksOutcome;
    using RequestT = Model::DescribeStacksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRollbackCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_ROLLBACK_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRollbackCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRollbackCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_ROLLBACK_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackRollbackCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "StackRollbackCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationError")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilStackRollbackComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackUpdateComplete(const Model::DescribeStacksRequest& request) {
    using OutcomeT = Model::DescribeStacksOutcome;
    using RequestT = Model::DescribeStacksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackUpdateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackUpdateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackUpdateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_ROLLBACK_FAILED"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StackUpdateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_ROLLBACK_COMPLETE"),
        [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
            return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "StackUpdateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ValidationError")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilStackUpdateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTypeRegistrationOutcome> WaitUntilTypeRegistrationComplete(
      const Model::DescribeTypeRegistrationRequest& request) {
    using OutcomeT = Model::DescribeTypeRegistrationOutcome;
    using RequestT = Model::DescribeTypeRegistrationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TypeRegistrationCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETE"),
        [](const Model::DescribeTypeRegistrationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistrationStatusMapper::GetNameForRegistrationStatus(result.GetProgressStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TypeRegistrationCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeTypeRegistrationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistrationStatusMapper::GetNameForRegistrationStatus(result.GetProgressStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTypeRegistration(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilTypeRegistrationComplete");
    return waiter.Wait(request);
  }
};
}  // namespace CloudFormation
}  // namespace Aws
