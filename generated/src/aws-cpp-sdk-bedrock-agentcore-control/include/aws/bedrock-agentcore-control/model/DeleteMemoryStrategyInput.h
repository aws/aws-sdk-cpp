/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Input for deleting a memory strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteMemoryStrategyInput">AWS
   * API Reference</a></p>
   */
  class DeleteMemoryStrategyInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API DeleteMemoryStrategyInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API DeleteMemoryStrategyInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API DeleteMemoryStrategyInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the memory strategy to delete.</p>
     */
    inline const Aws::String& GetMemoryStrategyId() const { return m_memoryStrategyId; }
    inline bool MemoryStrategyIdHasBeenSet() const { return m_memoryStrategyIdHasBeenSet; }
    template<typename MemoryStrategyIdT = Aws::String>
    void SetMemoryStrategyId(MemoryStrategyIdT&& value) { m_memoryStrategyIdHasBeenSet = true; m_memoryStrategyId = std::forward<MemoryStrategyIdT>(value); }
    template<typename MemoryStrategyIdT = Aws::String>
    DeleteMemoryStrategyInput& WithMemoryStrategyId(MemoryStrategyIdT&& value) { SetMemoryStrategyId(std::forward<MemoryStrategyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryStrategyId;
    bool m_memoryStrategyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
