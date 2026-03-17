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

#include <algorithm>

namespace Aws {
namespace CloudFormation {

template <typename DerivedClient = CloudFormationClient>
class CloudFormationWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeChangeSetOutcome> WaitUntilChangeSetCreateComplete(
      const Model::DescribeChangeSetRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeChangeSetOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_COMPLETE"),
                         [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StackRefactorStatusMapper::GetNameForStackRefactorStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeChangeSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChangeSetStatusMapper::GetNameForChangeSetStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});

    auto operation = [this](const Model::DescribeChangeSetRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeChangeSet(req);
    };
    Aws::Utils::Waiter<Model::DescribeChangeSetRequest, Model::DescribeChangeSetOutcome> waiter(30, 4, acceptors, operation,
                                                                                                "WaitUntilChangeSetCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStackRefactorOutcome> WaitUntilStackRefactorCreateComplete(
      const Model::DescribeStackRefactorRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStackRefactorOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_COMPLETE"),
                         [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StackRefactorStatusMapper::GetNameForStackRefactorStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StackRefactorStatusMapper::GetNameForStackRefactorStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});

    auto operation = [this](const Model::DescribeStackRefactorRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeStackRefactor(req);
    };
    Aws::Utils::Waiter<Model::DescribeStackRefactorRequest, Model::DescribeStackRefactorOutcome> waiter(
        5, 24, acceptors, operation, "WaitUntilStackRefactorCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStackRefactorOutcome> WaitUntilStackRefactorExecuteComplete(
      const Model::DescribeStackRefactorRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStackRefactorOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("EXECUTE_COMPLETE"),
                         [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(
                                      result.GetExecutionStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("EXECUTE_FAILED"),
                         [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(
                                      result.GetExecutionStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ROLLBACK_COMPLETE"),
                         [](const Model::DescribeStackRefactorOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(
                                      result.GetExecutionStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});

    auto operation = [this](const Model::DescribeStackRefactorRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeStackRefactor(req);
    };
    Aws::Utils::Waiter<Model::DescribeStackRefactorRequest, Model::DescribeStackRefactorOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilStackRefactorExecuteComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackCreateComplete(const Model::DescribeStacksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStacksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_IN_PROGRESS"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH,
                         Aws::String("UPDATE_COMPLETE_CLEANUP_IN_PROGRESS"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_IN_PROGRESS"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH,
                         Aws::String("UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ROLLBACK_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ROLLBACK_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});

    auto operation = [this](const Model::DescribeStacksRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<Model::DescribeStacksRequest, Model::DescribeStacksOutcome> waiter(30, 4, acceptors, operation,
                                                                                          "WaitUntilStackCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackDeleteComplete(const Model::DescribeStacksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStacksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ROLLBACK_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_IN_PROGRESS"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeStacksRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<Model::DescribeStacksRequest, Model::DescribeStacksOutcome> waiter(30, 4, acceptors, operation,
                                                                                          "WaitUntilStackDeleteComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackExists(const Model::DescribeStacksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStacksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});

    auto operation = [this](const Model::DescribeStacksRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<Model::DescribeStacksRequest, Model::DescribeStacksOutcome> waiter(5, 24, acceptors, operation,
                                                                                          "WaitUntilStackExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackImportComplete(const Model::DescribeStacksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStacksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("IMPORT_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ROLLBACK_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ROLLBACK_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("IMPORT_ROLLBACK_IN_PROGRESS"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("IMPORT_ROLLBACK_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("IMPORT_ROLLBACK_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});

    auto operation = [this](const Model::DescribeStacksRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<Model::DescribeStacksRequest, Model::DescribeStacksOutcome> waiter(30, 4, acceptors, operation,
                                                                                          "WaitUntilStackImportComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackRollbackComplete(const Model::DescribeStacksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStacksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});

    auto operation = [this](const Model::DescribeStacksRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<Model::DescribeStacksRequest, Model::DescribeStacksOutcome> waiter(30, 4, acceptors, operation,
                                                                                          "WaitUntilStackRollbackComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeStacksOutcome> WaitUntilStackUpdateComplete(const Model::DescribeStacksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeStacksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_FAILED"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_ROLLBACK_COMPLETE"),
                         [](const Model::DescribeStacksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetStacks().begin(), result.GetStacks().end(), [&](const Model::Stack& item) {
                             return Model::StackStatusMapper::GetNameForStackStatus(item.GetStackStatus()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ValidationError")});

    auto operation = [this](const Model::DescribeStacksRequest& req) { return static_cast<DerivedClient*>(this)->DescribeStacks(req); };
    Aws::Utils::Waiter<Model::DescribeStacksRequest, Model::DescribeStacksOutcome> waiter(30, 4, acceptors, operation,
                                                                                          "WaitUntilStackUpdateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTypeRegistrationOutcome> WaitUntilTypeRegistrationComplete(
      const Model::DescribeTypeRegistrationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTypeRegistrationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETE"),
                         [](const Model::DescribeTypeRegistrationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RegistrationStatusMapper::GetNameForRegistrationStatus(result.GetProgressStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeTypeRegistrationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RegistrationStatusMapper::GetNameForRegistrationStatus(result.GetProgressStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeTypeRegistrationRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeTypeRegistration(req);
    };
    Aws::Utils::Waiter<Model::DescribeTypeRegistrationRequest, Model::DescribeTypeRegistrationOutcome> waiter(
        30, 4, acceptors, operation, "WaitUntilTypeRegistrationComplete");
    return waiter.Wait(request);
  }
};
}  // namespace CloudFormation
}  // namespace Aws
