/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Delegation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

Delegation::Delegation() : 
    m_idHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_status(DelegationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_roleType(RoleType::NOT_SET),
    m_roleTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
}

Delegation::Delegation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_status(DelegationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_roleType(RoleType::NOT_SET),
    m_roleTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
  *this = jsonValue;
}

Delegation& Delegation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentName"))
  {
    m_assessmentName = jsonValue.GetString("assessmentName");

    m_assessmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentId"))
  {
    m_assessmentId = jsonValue.GetString("assessmentId");

    m_assessmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DelegationStatusMapper::GetDelegationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleType"))
  {
    m_roleType = RoleTypeMapper::GetRoleTypeForName(jsonValue.GetString("roleType"));

    m_roleTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSetId"))
  {
    m_controlSetId = jsonValue.GetString("controlSetId");

    m_controlSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  return *this;
}

JsonValue Delegation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_assessmentNameHasBeenSet)
  {
   payload.WithString("assessmentName", m_assessmentName);

  }

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("assessmentId", m_assessmentId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DelegationStatusMapper::GetNameForDelegationStatus(m_status));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_roleTypeHasBeenSet)
  {
   payload.WithString("roleType", RoleTypeMapper::GetNameForRoleType(m_roleType));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_controlSetIdHasBeenSet)
  {
   payload.WithString("controlSetId", m_controlSetId);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
