/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ActionGroupState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains details about an action group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ActionGroupSummary">AWS
   * API Reference</a></p>
   */
  class ActionGroupSummary
  {
  public:
    AWS_BEDROCKAGENT_API ActionGroupSummary() = default;
    AWS_BEDROCKAGENT_API ActionGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ActionGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline const Aws::String& GetActionGroupId() const { return m_actionGroupId; }
    inline bool ActionGroupIdHasBeenSet() const { return m_actionGroupIdHasBeenSet; }
    template<typename ActionGroupIdT = Aws::String>
    void SetActionGroupId(ActionGroupIdT&& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = std::forward<ActionGroupIdT>(value); }
    template<typename ActionGroupIdT = Aws::String>
    ActionGroupSummary& WithActionGroupId(ActionGroupIdT&& value) { SetActionGroupId(std::forward<ActionGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action group.</p>
     */
    inline const Aws::String& GetActionGroupName() const { return m_actionGroupName; }
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }
    template<typename ActionGroupNameT = Aws::String>
    void SetActionGroupName(ActionGroupNameT&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::forward<ActionGroupNameT>(value); }
    template<typename ActionGroupNameT = Aws::String>
    ActionGroupSummary& WithActionGroupName(ActionGroupNameT&& value) { SetActionGroupName(std::forward<ActionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline ActionGroupState GetActionGroupState() const { return m_actionGroupState; }
    inline bool ActionGroupStateHasBeenSet() const { return m_actionGroupStateHasBeenSet; }
    inline void SetActionGroupState(ActionGroupState value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = value; }
    inline ActionGroupSummary& WithActionGroupState(ActionGroupState value) { SetActionGroupState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the action group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ActionGroupSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ActionGroupSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionGroupId;
    bool m_actionGroupIdHasBeenSet = false;

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    ActionGroupState m_actionGroupState{ActionGroupState::NOT_SET};
    bool m_actionGroupStateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
