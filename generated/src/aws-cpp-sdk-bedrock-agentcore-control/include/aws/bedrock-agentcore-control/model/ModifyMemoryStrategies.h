/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/MemoryStrategyInput.h>
#include <aws/bedrock-agentcore-control/model/ModifyMemoryStrategyInput.h>
#include <aws/bedrock-agentcore-control/model/DeleteMemoryStrategyInput.h>
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
   * <p>Contains information for modifying memory strategies.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ModifyMemoryStrategies">AWS
   * API Reference</a></p>
   */
  class ModifyMemoryStrategies
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ModifyMemoryStrategies() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ModifyMemoryStrategies(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ModifyMemoryStrategies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of memory strategies to add.</p>
     */
    inline const Aws::Vector<MemoryStrategyInput>& GetAddMemoryStrategies() const { return m_addMemoryStrategies; }
    inline bool AddMemoryStrategiesHasBeenSet() const { return m_addMemoryStrategiesHasBeenSet; }
    template<typename AddMemoryStrategiesT = Aws::Vector<MemoryStrategyInput>>
    void SetAddMemoryStrategies(AddMemoryStrategiesT&& value) { m_addMemoryStrategiesHasBeenSet = true; m_addMemoryStrategies = std::forward<AddMemoryStrategiesT>(value); }
    template<typename AddMemoryStrategiesT = Aws::Vector<MemoryStrategyInput>>
    ModifyMemoryStrategies& WithAddMemoryStrategies(AddMemoryStrategiesT&& value) { SetAddMemoryStrategies(std::forward<AddMemoryStrategiesT>(value)); return *this;}
    template<typename AddMemoryStrategiesT = MemoryStrategyInput>
    ModifyMemoryStrategies& AddAddMemoryStrategies(AddMemoryStrategiesT&& value) { m_addMemoryStrategiesHasBeenSet = true; m_addMemoryStrategies.emplace_back(std::forward<AddMemoryStrategiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of memory strategies to modify.</p>
     */
    inline const Aws::Vector<ModifyMemoryStrategyInput>& GetModifyMemoryStrategies() const { return m_modifyMemoryStrategies; }
    inline bool ModifyMemoryStrategiesHasBeenSet() const { return m_modifyMemoryStrategiesHasBeenSet; }
    template<typename ModifyMemoryStrategiesT = Aws::Vector<ModifyMemoryStrategyInput>>
    void SetModifyMemoryStrategies(ModifyMemoryStrategiesT&& value) { m_modifyMemoryStrategiesHasBeenSet = true; m_modifyMemoryStrategies = std::forward<ModifyMemoryStrategiesT>(value); }
    template<typename ModifyMemoryStrategiesT = Aws::Vector<ModifyMemoryStrategyInput>>
    ModifyMemoryStrategies& WithModifyMemoryStrategies(ModifyMemoryStrategiesT&& value) { SetModifyMemoryStrategies(std::forward<ModifyMemoryStrategiesT>(value)); return *this;}
    template<typename ModifyMemoryStrategiesT = ModifyMemoryStrategyInput>
    ModifyMemoryStrategies& AddModifyMemoryStrategies(ModifyMemoryStrategiesT&& value) { m_modifyMemoryStrategiesHasBeenSet = true; m_modifyMemoryStrategies.emplace_back(std::forward<ModifyMemoryStrategiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of memory strategies to delete.</p>
     */
    inline const Aws::Vector<DeleteMemoryStrategyInput>& GetDeleteMemoryStrategies() const { return m_deleteMemoryStrategies; }
    inline bool DeleteMemoryStrategiesHasBeenSet() const { return m_deleteMemoryStrategiesHasBeenSet; }
    template<typename DeleteMemoryStrategiesT = Aws::Vector<DeleteMemoryStrategyInput>>
    void SetDeleteMemoryStrategies(DeleteMemoryStrategiesT&& value) { m_deleteMemoryStrategiesHasBeenSet = true; m_deleteMemoryStrategies = std::forward<DeleteMemoryStrategiesT>(value); }
    template<typename DeleteMemoryStrategiesT = Aws::Vector<DeleteMemoryStrategyInput>>
    ModifyMemoryStrategies& WithDeleteMemoryStrategies(DeleteMemoryStrategiesT&& value) { SetDeleteMemoryStrategies(std::forward<DeleteMemoryStrategiesT>(value)); return *this;}
    template<typename DeleteMemoryStrategiesT = DeleteMemoryStrategyInput>
    ModifyMemoryStrategies& AddDeleteMemoryStrategies(DeleteMemoryStrategiesT&& value) { m_deleteMemoryStrategiesHasBeenSet = true; m_deleteMemoryStrategies.emplace_back(std::forward<DeleteMemoryStrategiesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MemoryStrategyInput> m_addMemoryStrategies;
    bool m_addMemoryStrategiesHasBeenSet = false;

    Aws::Vector<ModifyMemoryStrategyInput> m_modifyMemoryStrategies;
    bool m_modifyMemoryStrategiesHasBeenSet = false;

    Aws::Vector<DeleteMemoryStrategyInput> m_deleteMemoryStrategies;
    bool m_deleteMemoryStrategiesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
