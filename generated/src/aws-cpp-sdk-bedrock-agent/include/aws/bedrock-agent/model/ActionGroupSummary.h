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
    AWS_BEDROCKAGENT_API ActionGroupSummary();
    AWS_BEDROCKAGENT_API ActionGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ActionGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline const Aws::String& GetActionGroupId() const{ return m_actionGroupId; }

    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline bool ActionGroupIdHasBeenSet() const { return m_actionGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline void SetActionGroupId(const Aws::String& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = value; }

    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline void SetActionGroupId(Aws::String&& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline void SetActionGroupId(const char* value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId.assign(value); }

    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline ActionGroupSummary& WithActionGroupId(const Aws::String& value) { SetActionGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline ActionGroupSummary& WithActionGroupId(Aws::String&& value) { SetActionGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the action group.</p>
     */
    inline ActionGroupSummary& WithActionGroupId(const char* value) { SetActionGroupId(value); return *this;}


    /**
     * <p>The name of the action group.</p>
     */
    inline const Aws::String& GetActionGroupName() const{ return m_actionGroupName; }

    /**
     * <p>The name of the action group.</p>
     */
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }

    /**
     * <p>The name of the action group.</p>
     */
    inline void SetActionGroupName(const Aws::String& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = value; }

    /**
     * <p>The name of the action group.</p>
     */
    inline void SetActionGroupName(Aws::String&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::move(value); }

    /**
     * <p>The name of the action group.</p>
     */
    inline void SetActionGroupName(const char* value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName.assign(value); }

    /**
     * <p>The name of the action group.</p>
     */
    inline ActionGroupSummary& WithActionGroupName(const Aws::String& value) { SetActionGroupName(value); return *this;}

    /**
     * <p>The name of the action group.</p>
     */
    inline ActionGroupSummary& WithActionGroupName(Aws::String&& value) { SetActionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the action group.</p>
     */
    inline ActionGroupSummary& WithActionGroupName(const char* value) { SetActionGroupName(value); return *this;}


    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline const ActionGroupState& GetActionGroupState() const{ return m_actionGroupState; }

    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline bool ActionGroupStateHasBeenSet() const { return m_actionGroupStateHasBeenSet; }

    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline void SetActionGroupState(const ActionGroupState& value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = value; }

    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline void SetActionGroupState(ActionGroupState&& value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = std::move(value); }

    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline ActionGroupSummary& WithActionGroupState(const ActionGroupState& value) { SetActionGroupState(value); return *this;}

    /**
     * <p>Specifies whether the action group is available for the agent to invoke or
     * not when sending an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
     * request.</p>
     */
    inline ActionGroupSummary& WithActionGroupState(ActionGroupState&& value) { SetActionGroupState(std::move(value)); return *this;}


    /**
     * <p>The description of the action group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the action group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the action group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the action group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the action group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the action group.</p>
     */
    inline ActionGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the action group.</p>
     */
    inline ActionGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the action group.</p>
     */
    inline ActionGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline ActionGroupSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the action group was last updated.</p>
     */
    inline ActionGroupSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_actionGroupId;
    bool m_actionGroupIdHasBeenSet = false;

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    ActionGroupState m_actionGroupState;
    bool m_actionGroupStateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
