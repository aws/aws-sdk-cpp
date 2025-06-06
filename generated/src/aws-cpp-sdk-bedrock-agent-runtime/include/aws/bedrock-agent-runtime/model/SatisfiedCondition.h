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
   * <p>Represents a condition that was satisfied during a condition node evaluation
   * in a flow execution.</p>  <p>Flow executions is in preview release for
   * Amazon Bedrock and is subject to change.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/SatisfiedCondition">AWS
   * API Reference</a></p>
   */
  class SatisfiedCondition
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API SatisfiedCondition() = default;
    AWS_BEDROCKAGENTRUNTIME_API SatisfiedCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API SatisfiedCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the condition that was satisfied.</p>
     */
    inline const Aws::String& GetConditionName() const { return m_conditionName; }
    inline bool ConditionNameHasBeenSet() const { return m_conditionNameHasBeenSet; }
    template<typename ConditionNameT = Aws::String>
    void SetConditionName(ConditionNameT&& value) { m_conditionNameHasBeenSet = true; m_conditionName = std::forward<ConditionNameT>(value); }
    template<typename ConditionNameT = Aws::String>
    SatisfiedCondition& WithConditionName(ConditionNameT&& value) { SetConditionName(std::forward<ConditionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conditionName;
    bool m_conditionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
