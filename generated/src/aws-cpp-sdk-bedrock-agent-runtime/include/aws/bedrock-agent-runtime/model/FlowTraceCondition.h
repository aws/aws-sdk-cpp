/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about a condition that was satisfied. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceCondition">AWS
   * API Reference</a></p>
   */
  class FlowTraceCondition
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceCondition() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the condition.</p>
     */
    inline const Aws::String& GetConditionName() const { return m_conditionName; }
    inline bool ConditionNameHasBeenSet() const { return m_conditionNameHasBeenSet; }
    template<typename ConditionNameT = Aws::String>
    void SetConditionName(ConditionNameT&& value) { m_conditionNameHasBeenSet = true; m_conditionName = std::forward<ConditionNameT>(value); }
    template<typename ConditionNameT = Aws::String>
    FlowTraceCondition& WithConditionName(ConditionNameT&& value) { SetConditionName(std::forward<ConditionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conditionName;
    bool m_conditionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
