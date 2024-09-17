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
    AWS_BEDROCKRUNTIME_API GuardrailTopic();
    AWS_BEDROCKRUNTIME_API GuardrailTopic(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailTopic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GuardrailTopic& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GuardrailTopic& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GuardrailTopic& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type behavior that the guardrail should perform when the model detects
     * the topic.</p>
     */
    inline const GuardrailTopicType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GuardrailTopicType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GuardrailTopicType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GuardrailTopic& WithType(const GuardrailTopicType& value) { SetType(value); return *this;}
    inline GuardrailTopic& WithType(GuardrailTopicType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action the guardrail should take when it intervenes on a topic.</p>
     */
    inline const GuardrailTopicPolicyAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GuardrailTopicPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GuardrailTopicPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GuardrailTopic& WithAction(const GuardrailTopicPolicyAction& value) { SetAction(value); return *this;}
    inline GuardrailTopic& WithAction(GuardrailTopicPolicyAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GuardrailTopicType m_type;
    bool m_typeHasBeenSet = false;

    GuardrailTopicPolicyAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
