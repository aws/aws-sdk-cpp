/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ActionGroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

ActionGroupSummary::ActionGroupSummary() : 
    m_actionGroupIdHasBeenSet(false),
    m_actionGroupNameHasBeenSet(false),
    m_actionGroupState(ActionGroupState::NOT_SET),
    m_actionGroupStateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

ActionGroupSummary::ActionGroupSummary(JsonView jsonValue) : 
    m_actionGroupIdHasBeenSet(false),
    m_actionGroupNameHasBeenSet(false),
    m_actionGroupState(ActionGroupState::NOT_SET),
    m_actionGroupStateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ActionGroupSummary& ActionGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroupId"))
  {
    m_actionGroupId = jsonValue.GetString("actionGroupId");

    m_actionGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionGroupName"))
  {
    m_actionGroupName = jsonValue.GetString("actionGroupName");

    m_actionGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionGroupState"))
  {
    m_actionGroupState = ActionGroupStateMapper::GetActionGroupStateForName(jsonValue.GetString("actionGroupState"));

    m_actionGroupStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupIdHasBeenSet)
  {
   payload.WithString("actionGroupId", m_actionGroupId);

  }

  if(m_actionGroupNameHasBeenSet)
  {
   payload.WithString("actionGroupName", m_actionGroupName);

  }

  if(m_actionGroupStateHasBeenSet)
  {
   payload.WithString("actionGroupState", ActionGroupStateMapper::GetNameForActionGroupState(m_actionGroupState));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
