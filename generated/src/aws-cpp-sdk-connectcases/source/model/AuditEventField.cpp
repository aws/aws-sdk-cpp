/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/AuditEventField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

AuditEventField::AuditEventField() : 
    m_eventFieldIdHasBeenSet(false),
    m_newValueHasBeenSet(false),
    m_oldValueHasBeenSet(false)
{
}

AuditEventField::AuditEventField(JsonView jsonValue) : 
    m_eventFieldIdHasBeenSet(false),
    m_newValueHasBeenSet(false),
    m_oldValueHasBeenSet(false)
{
  *this = jsonValue;
}

AuditEventField& AuditEventField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventFieldId"))
  {
    m_eventFieldId = jsonValue.GetString("eventFieldId");

    m_eventFieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("newValue"))
  {
    m_newValue = jsonValue.GetObject("newValue");

    m_newValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oldValue"))
  {
    m_oldValue = jsonValue.GetObject("oldValue");

    m_oldValueHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditEventField::Jsonize() const
{
  JsonValue payload;

  if(m_eventFieldIdHasBeenSet)
  {
   payload.WithString("eventFieldId", m_eventFieldId);

  }

  if(m_newValueHasBeenSet)
  {
   payload.WithObject("newValue", m_newValue.Jsonize());

  }

  if(m_oldValueHasBeenSet)
  {
   payload.WithObject("oldValue", m_oldValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
