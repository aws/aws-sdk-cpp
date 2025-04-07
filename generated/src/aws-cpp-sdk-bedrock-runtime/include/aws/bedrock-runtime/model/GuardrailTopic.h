/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailTopicType.h>
#include <aws/bedrock-runtime/model/GuardrailTopicPolicyAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Information about a topic guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailTopic">AWS
   * API Reference</a></p>
   */
  class GuardrailTopic
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailTopic() = default;
    AWS_BEDROCKRUNTIME_API GuardrailTopic(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailTopic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the guardrail.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GuardrailTopic& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type behavior that the guardrail should perform when the model detects
     * the topic.</p>
     */
    inline GuardrailTopicType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailTopicType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailTopic& WithType(GuardrailTopicType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action the guardrail should take when it intervenes on a topic.</p>
     */
    inline GuardrailTopicPolicyAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailTopicPolicyAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailTopic& WithAction(GuardrailTopicPolicyAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether topic content that breaches the guardrail configuration is
     * detected.</p>
     */
    inline bool GetDetected() const { return m_detected; }
    inline bool DetectedHasBeenSet() const { return m_detectedHasBeenSet; }
    inline void SetDetected(bool value) { m_detectedHasBeenSet = true; m_detected = value; }
    inline GuardrailTopic& WithDetected(bool value) { SetDetected(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GuardrailTopicType m_type{GuardrailTopicType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailTopicPolicyAction m_action{GuardrailTopicPolicyAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    bool m_detected{false};
    bool m_detectedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
