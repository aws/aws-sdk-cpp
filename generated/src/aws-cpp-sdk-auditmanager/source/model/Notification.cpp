/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Notification.h>
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

Notification::Notification() : 
    m_idHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_controlSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

Notification::Notification(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_controlSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

Notification& Notification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentId"))
  {
    m_assessmentId = jsonValue.GetString("assessmentId");

    m_assessmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentName"))
  {
    m_assessmentName = jsonValue.GetString("assessmentName");

    m_assessmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSetId"))
  {
    m_controlSetId = jsonValue.GetString("controlSetId");

    m_controlSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSetName"))
  {
    m_controlSetName = jsonValue.GetString("controlSetName");

    m_controlSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTime"))
  {
    m_eventTime = jsonValue.GetDouble("eventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue Notification::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("assessmentId", m_assessmentId);

  }

  if(m_assessmentNameHasBeenSet)
  {
   payload.WithString("assessmentName", m_assessmentName);

  }

  if(m_controlSetIdHasBeenSet)
  {
   payload.WithString("controlSetId", m_controlSetId);

  }

  if(m_controlSetNameHasBeenSet)
  {
   payload.WithString("controlSetName", m_controlSetName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("eventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
