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
   * <p>ActionGroup Summary</p><p><h3>See Also:</h3>   <a
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


    
    inline const Aws::String& GetActionGroupId() const{ return m_actionGroupId; }

    
    inline bool ActionGroupIdHasBeenSet() const { return m_actionGroupIdHasBeenSet; }

    
    inline void SetActionGroupId(const Aws::String& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = value; }

    
    inline void SetActionGroupId(Aws::String&& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = std::move(value); }

    
    inline void SetActionGroupId(const char* value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId.assign(value); }

    
    inline ActionGroupSummary& WithActionGroupId(const Aws::String& value) { SetActionGroupId(value); return *this;}

    
    inline ActionGroupSummary& WithActionGroupId(Aws::String&& value) { SetActionGroupId(std::move(value)); return *this;}

    
    inline ActionGroupSummary& WithActionGroupId(const char* value) { SetActionGroupId(value); return *this;}


    
    inline const Aws::String& GetActionGroupName() const{ return m_actionGroupName; }

    
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }

    
    inline void SetActionGroupName(const Aws::String& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = value; }

    
    inline void SetActionGroupName(Aws::String&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::move(value); }

    
    inline void SetActionGroupName(const char* value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName.assign(value); }

    
    inline ActionGroupSummary& WithActionGroupName(const Aws::String& value) { SetActionGroupName(value); return *this;}

    
    inline ActionGroupSummary& WithActionGroupName(Aws::String&& value) { SetActionGroupName(std::move(value)); return *this;}

    
    inline ActionGroupSummary& WithActionGroupName(const char* value) { SetActionGroupName(value); return *this;}


    
    inline const ActionGroupState& GetActionGroupState() const{ return m_actionGroupState; }

    
    inline bool ActionGroupStateHasBeenSet() const { return m_actionGroupStateHasBeenSet; }

    
    inline void SetActionGroupState(const ActionGroupState& value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = value; }

    
    inline void SetActionGroupState(ActionGroupState&& value) { m_actionGroupStateHasBeenSet = true; m_actionGroupState = std::move(value); }

    
    inline ActionGroupSummary& WithActionGroupState(const ActionGroupState& value) { SetActionGroupState(value); return *this;}

    
    inline ActionGroupSummary& WithActionGroupState(ActionGroupState&& value) { SetActionGroupState(std::move(value)); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline ActionGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline ActionGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline ActionGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline ActionGroupSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
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
