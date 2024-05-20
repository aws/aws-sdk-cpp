/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailTopicPolicyAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/GuardrailTopicType.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The details for a specific topic defined in the Guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailTopic">AWS
   * API Reference</a></p>
   */
  class GuardrailTopic
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTopic();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTopic(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTopic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action details on a specific topic in the Guardrail.</p>
     */
    inline const GuardrailTopicPolicyAction& GetAction() const{ return m_action; }

    /**
     * <p>The action details on a specific topic in the Guardrail.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action details on a specific topic in the Guardrail.</p>
     */
    inline void SetAction(const GuardrailTopicPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action details on a specific topic in the Guardrail.</p>
     */
    inline void SetAction(GuardrailTopicPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action details on a specific topic in the Guardrail.</p>
     */
    inline GuardrailTopic& WithAction(const GuardrailTopicPolicyAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action details on a specific topic in the Guardrail.</p>
     */
    inline GuardrailTopic& WithAction(GuardrailTopicPolicyAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The name details on a specific topic in the Guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name details on a specific topic in the Guardrail.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name details on a specific topic in the Guardrail.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name details on a specific topic in the Guardrail.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name details on a specific topic in the Guardrail.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name details on a specific topic in the Guardrail.</p>
     */
    inline GuardrailTopic& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name details on a specific topic in the Guardrail.</p>
     */
    inline GuardrailTopic& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name details on a specific topic in the Guardrail.</p>
     */
    inline GuardrailTopic& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type details on a specific topic in the Guardrail.</p>
     */
    inline const GuardrailTopicType& GetType() const{ return m_type; }

    /**
     * <p>The type details on a specific topic in the Guardrail.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type details on a specific topic in the Guardrail.</p>
     */
    inline void SetType(const GuardrailTopicType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type details on a specific topic in the Guardrail.</p>
     */
    inline void SetType(GuardrailTopicType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type details on a specific topic in the Guardrail.</p>
     */
    inline GuardrailTopic& WithType(const GuardrailTopicType& value) { SetType(value); return *this;}

    /**
     * <p>The type details on a specific topic in the Guardrail.</p>
     */
    inline GuardrailTopic& WithType(GuardrailTopicType&& value) { SetType(std::move(value)); return *this;}

  private:

    GuardrailTopicPolicyAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GuardrailTopicType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
