/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlClient.h>
#include <aws/bedrock-agentcore-control/model/GetMemoryRequest.h>
#include <aws/bedrock-agentcore-control/model/GetMemoryResult.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyEngineRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyEngineResult.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyGenerationRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyGenerationResult.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyRequest.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyResult.h>
#include <aws/bedrock-agentcore-control/model/MemoryStatus.h>
#include <aws/bedrock-agentcore-control/model/PolicyEngineStatus.h>
#include <aws/bedrock-agentcore-control/model/PolicyGenerationStatus.h>
#include <aws/bedrock-agentcore-control/model/PolicyStatus.h>
#include <aws/core/utils/Waiter.h>

#include <algorithm>

namespace Aws {
namespace BedrockAgentCoreControl {

template <typename DerivedClient = BedrockAgentCoreControlClient>
class BedrockAgentCoreControlWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetMemoryOutcome> WaitUntilMemoryCreated(const Model::GetMemoryRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetMemoryOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetMemoryOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MemoryStatusMapper::GetNameForMemoryStatus(result.GetMemory().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetMemoryOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MemoryStatusMapper::GetNameForMemoryStatus(result.GetMemory().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetMemoryOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MemoryStatusMapper::GetNameForMemoryStatus(result.GetMemory().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetMemoryRequest& req) { return static_cast<DerivedClient*>(this)->GetMemory(req); };
    Aws::Utils::Waiter<Model::GetMemoryRequest, Model::GetMemoryOutcome> waiter(2, 60, acceptors, operation, "WaitUntilMemoryCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPolicyOutcome> WaitUntilPolicyActive(const Model::GetPolicyRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPolicyOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetPolicyEngineOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::GetPolicyEngineOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::GetPolicyEngineOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetPolicyGenerationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetPolicyRequest& req) { return static_cast<DerivedClient*>(this)->GetPolicy(req); };
    Aws::Utils::Waiter<Model::GetPolicyRequest, Model::GetPolicyOutcome> waiter(5, 24, acceptors, operation, "WaitUntilPolicyActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPolicyOutcome> WaitUntilPolicyDeleted(const Model::GetPolicyRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPolicyOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetPolicyEngineOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetPolicyGenerationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetPolicyRequest& req) { return static_cast<DerivedClient*>(this)->GetPolicy(req); };
    Aws::Utils::Waiter<Model::GetPolicyRequest, Model::GetPolicyOutcome> waiter(2, 60, acceptors, operation, "WaitUntilPolicyDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPolicyEngineOutcome> WaitUntilPolicyEngineActive(const Model::GetPolicyEngineRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPolicyEngineOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetPolicyEngineOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::GetPolicyEngineOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::GetPolicyEngineOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetPolicyGenerationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetPolicyEngineRequest& req) { return static_cast<DerivedClient*>(this)->GetPolicyEngine(req); };
    Aws::Utils::Waiter<Model::GetPolicyEngineRequest, Model::GetPolicyEngineOutcome> waiter(5, 24, acceptors, operation,
                                                                                            "WaitUntilPolicyEngineActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPolicyEngineOutcome> WaitUntilPolicyEngineDeleted(const Model::GetPolicyEngineRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPolicyEngineOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetPolicyEngineOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyEngineStatusMapper::GetNameForPolicyEngineStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetPolicyGenerationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetPolicyEngineRequest& req) { return static_cast<DerivedClient*>(this)->GetPolicyEngine(req); };
    Aws::Utils::Waiter<Model::GetPolicyEngineRequest, Model::GetPolicyEngineOutcome> waiter(2, 60, acceptors, operation,
                                                                                            "WaitUntilPolicyEngineDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPolicyGenerationOutcome> WaitUntilPolicyGenerationCompleted(
      const Model::GetPolicyGenerationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPolicyGenerationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("GENERATED"),
                         [](const Model::GetPolicyGenerationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("GENERATING"),
                         [](const Model::GetPolicyGenerationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("GENERATE_FAILED"),
                         [](const Model::GetPolicyGenerationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetPolicyGenerationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PolicyGenerationStatusMapper::GetNameForPolicyGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetPolicyGenerationRequest& req) {
      return static_cast<DerivedClient*>(this)->GetPolicyGeneration(req);
    };
    Aws::Utils::Waiter<Model::GetPolicyGenerationRequest, Model::GetPolicyGenerationOutcome> waiter(5, 24, acceptors, operation,
                                                                                                    "WaitUntilPolicyGenerationCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
