/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> The number of examples that have each field. An example can have more than
 * one of these fields, so the counts can add up to more than
 * <code>exampleCount</code>. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ExampleCountByField">AWS
 * API Reference</a></p>
 */
class ExampleCountByField {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ExampleCountByField() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ExampleCountByField(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ExampleCountByField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The number of examples that have <code>turns</code>. </p>
   */
  inline long long GetTurns() const { return m_turns; }
  inline bool TurnsHasBeenSet() const { return m_turnsHasBeenSet; }
  inline void SetTurns(long long value) {
    m_turnsHasBeenSet = true;
    m_turns = value;
  }
  inline ExampleCountByField& WithTurns(long long value) {
    SetTurns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of examples that have <code>input</code>. </p>
   */
  inline long long GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  inline void SetInput(long long value) {
    m_inputHasBeenSet = true;
    m_input = value;
  }
  inline ExampleCountByField& WithInput(long long value) {
    SetInput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of examples that have <code>actor_profile</code>. </p>
   */
  inline long long GetActorProfile() const { return m_actorProfile; }
  inline bool ActorProfileHasBeenSet() const { return m_actorProfileHasBeenSet; }
  inline void SetActorProfile(long long value) {
    m_actorProfileHasBeenSet = true;
    m_actorProfile = value;
  }
  inline ExampleCountByField& WithActorProfile(long long value) {
    SetActorProfile(value);
    return *this;
  }
  ///@}
 private:
  long long m_turns{0};

  long long m_input{0};

  long long m_actorProfile{0};
  bool m_turnsHasBeenSet = false;
  bool m_inputHasBeenSet = false;
  bool m_actorProfileHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
