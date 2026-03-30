/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Context.h>
#include <aws/bedrock-agentcore/model/EvaluationContent.h>
#include <aws/bedrock-agentcore/model/EvaluationExpectedTrajectory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p> A reference input containing ground truth data for evaluation, scoped to a
 * specific context level (session or trace) through its span context.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluationReferenceInput">AWS
 * API Reference</a></p>
 */
class EvaluationReferenceInput {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluationReferenceInput() = default;
  AWS_BEDROCKAGENTCORE_API EvaluationReferenceInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluationReferenceInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Context& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = Context>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Context>
  EvaluationReferenceInput& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The expected response for trace-level evaluation. Built-in evaluators that
   * support this field compare the agent's actual response against this value for
   * assessment. Custom evaluators can access it through the
   * <code>{expected_response}</code> placeholder in their instructions. </p>
   */
  inline const EvaluationContent& GetExpectedResponse() const { return m_expectedResponse; }
  inline bool ExpectedResponseHasBeenSet() const { return m_expectedResponseHasBeenSet; }
  template <typename ExpectedResponseT = EvaluationContent>
  void SetExpectedResponse(ExpectedResponseT&& value) {
    m_expectedResponseHasBeenSet = true;
    m_expectedResponse = std::forward<ExpectedResponseT>(value);
  }
  template <typename ExpectedResponseT = EvaluationContent>
  EvaluationReferenceInput& WithExpectedResponse(ExpectedResponseT&& value) {
    SetExpectedResponse(std::forward<ExpectedResponseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of assertion statements for session-level evaluation. Each assertion
   * describes an expected behavior or outcome the agent should demonstrate during
   * the session. </p>
   */
  inline const Aws::Vector<EvaluationContent>& GetAssertions() const { return m_assertions; }
  inline bool AssertionsHasBeenSet() const { return m_assertionsHasBeenSet; }
  template <typename AssertionsT = Aws::Vector<EvaluationContent>>
  void SetAssertions(AssertionsT&& value) {
    m_assertionsHasBeenSet = true;
    m_assertions = std::forward<AssertionsT>(value);
  }
  template <typename AssertionsT = Aws::Vector<EvaluationContent>>
  EvaluationReferenceInput& WithAssertions(AssertionsT&& value) {
    SetAssertions(std::forward<AssertionsT>(value));
    return *this;
  }
  template <typename AssertionsT = EvaluationContent>
  EvaluationReferenceInput& AddAssertions(AssertionsT&& value) {
    m_assertionsHasBeenSet = true;
    m_assertions.emplace_back(std::forward<AssertionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The expected tool call sequence for session-level trajectory evaluation.
   * Contains a list of tool names representing the tools the agent is expected to
   * invoke. </p>
   */
  inline const EvaluationExpectedTrajectory& GetExpectedTrajectory() const { return m_expectedTrajectory; }
  inline bool ExpectedTrajectoryHasBeenSet() const { return m_expectedTrajectoryHasBeenSet; }
  template <typename ExpectedTrajectoryT = EvaluationExpectedTrajectory>
  void SetExpectedTrajectory(ExpectedTrajectoryT&& value) {
    m_expectedTrajectoryHasBeenSet = true;
    m_expectedTrajectory = std::forward<ExpectedTrajectoryT>(value);
  }
  template <typename ExpectedTrajectoryT = EvaluationExpectedTrajectory>
  EvaluationReferenceInput& WithExpectedTrajectory(ExpectedTrajectoryT&& value) {
    SetExpectedTrajectory(std::forward<ExpectedTrajectoryT>(value));
    return *this;
  }
  ///@}
 private:
  Context m_context;

  EvaluationContent m_expectedResponse;

  Aws::Vector<EvaluationContent> m_assertions;

  EvaluationExpectedTrajectory m_expectedTrajectory;
  bool m_contextHasBeenSet = false;
  bool m_expectedResponseHasBeenSet = false;
  bool m_assertionsHasBeenSet = false;
  bool m_expectedTrajectoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
