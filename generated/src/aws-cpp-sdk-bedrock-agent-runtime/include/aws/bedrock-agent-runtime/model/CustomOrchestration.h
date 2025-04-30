/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationExecutor.h>
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
   * <p>Contains details of the custom orchestration configured for the agent.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CustomOrchestration">AWS
   * API Reference</a></p>
   */
  class CustomOrchestration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CustomOrchestration() = default;
    AWS_BEDROCKAGENTRUNTIME_API CustomOrchestration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CustomOrchestration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure of the executor invoking the actions in custom orchestration.
     * </p>
     */
    inline const OrchestrationExecutor& GetExecutor() const { return m_executor; }
    inline bool ExecutorHasBeenSet() const { return m_executorHasBeenSet; }
    template<typename ExecutorT = OrchestrationExecutor>
    void SetExecutor(ExecutorT&& value) { m_executorHasBeenSet = true; m_executor = std::forward<ExecutorT>(value); }
    template<typename ExecutorT = OrchestrationExecutor>
    CustomOrchestration& WithExecutor(ExecutorT&& value) { SetExecutor(std::forward<ExecutorT>(value)); return *this;}
    ///@}
  private:

    OrchestrationExecutor m_executor;
    bool m_executorHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
