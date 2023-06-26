/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ChangeLog.h>
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

ChangeLog::ChangeLog() : 
    m_objectType(ObjectTypeEnum::NOT_SET),
    m_objectTypeHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_action(ActionEnum::NOT_SET),
    m_actionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
}

ChangeLog::ChangeLog(JsonView jsonValue) : 
    m_objectType(ObjectTypeEnum::NOT_SET),
    m_objectTypeHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_action(ActionEnum::NOT_SET),
    m_actionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeLog& ChangeLog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("objectType"))
  {
    m_objectType = ObjectTypeEnumMapper::GetObjectTypeEnumForName(jsonValue.GetString("objectType"));

    m_objectTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectName"))
  {
    m_objectName = jsonValue.GetString("objectName");

    m_objectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = ActionEnumMapper::GetActionEnumForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeLog::Jsonize() const
{
  JsonValue payload;

  if(m_objectTypeHasBeenSet)
  {
   payload.WithString("objectType", ObjectTypeEnumMapper::GetNameForObjectTypeEnum(m_objectType));
  }

  if(m_objectNameHasBeenSet)
  {
   payload.WithString("objectName", m_objectName);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", ActionEnumMapper::GetNameForActionEnum(m_action));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
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
