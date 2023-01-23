/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/SecurityGroupRemediationAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

SecurityGroupRemediationAction::SecurityGroupRemediationAction() : 
    m_remediationActionType(RemediationActionType::NOT_SET),
    m_remediationActionTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationResultHasBeenSet(false),
    m_isDefaultAction(false),
    m_isDefaultActionHasBeenSet(false)
{
}

SecurityGroupRemediationAction::SecurityGroupRemediationAction(JsonView jsonValue) : 
    m_remediationActionType(RemediationActionType::NOT_SET),
    m_remediationActionTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationResultHasBeenSet(false),
    m_isDefaultAction(false),
    m_isDefaultActionHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityGroupRemediationAction& SecurityGroupRemediationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RemediationActionType"))
  {
    m_remediationActionType = RemediationActionTypeMapper::GetRemediationActionTypeForName(jsonValue.GetString("RemediationActionType"));

    m_remediationActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemediationResult"))
  {
    m_remediationResult = jsonValue.GetObject("RemediationResult");

    m_remediationResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsDefaultAction"))
  {
    m_isDefaultAction = jsonValue.GetBool("IsDefaultAction");

    m_isDefaultActionHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityGroupRemediationAction::Jsonize() const
{
  JsonValue payload;

  if(m_remediationActionTypeHasBeenSet)
  {
   payload.WithString("RemediationActionType", RemediationActionTypeMapper::GetNameForRemediationActionType(m_remediationActionType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_remediationResultHasBeenSet)
  {
   payload.WithObject("RemediationResult", m_remediationResult.Jsonize());

  }

  if(m_isDefaultActionHasBeenSet)
  {
   payload.WithBool("IsDefaultAction", m_isDefaultAction);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
