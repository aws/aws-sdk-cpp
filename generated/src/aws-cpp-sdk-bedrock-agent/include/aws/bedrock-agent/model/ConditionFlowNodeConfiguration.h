/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/FlowCondition.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Defines a condition node in your flow. You can specify conditions that
   * determine which node comes next in the flow. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-nodes.html">Node
   * types in Amazon Bedrock works</a> in the Amazon Bedrock User
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ConditionFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class ConditionFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API ConditionFlowNodeConfiguration();
    AWS_BEDROCKAGENT_API ConditionFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ConditionFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of conditions. Each member contains the name of a condition and an
     * expression that defines the condition.</p>
     */
    inline const Aws::Vector<FlowCondition>& GetConditions() const{ return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    inline void SetConditions(const Aws::Vector<FlowCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }
    inline void SetConditions(Aws::Vector<FlowCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }
    inline ConditionFlowNodeConfiguration& WithConditions(const Aws::Vector<FlowCondition>& value) { SetConditions(value); return *this;}
    inline ConditionFlowNodeConfiguration& WithConditions(Aws::Vector<FlowCondition>&& value) { SetConditions(std::move(value)); return *this;}
    inline ConditionFlowNodeConfiguration& AddConditions(const FlowCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }
    inline ConditionFlowNodeConfiguration& AddConditions(FlowCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FlowCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
