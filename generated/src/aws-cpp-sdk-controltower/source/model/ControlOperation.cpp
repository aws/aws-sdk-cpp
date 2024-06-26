﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/ControlOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

ControlOperation::ControlOperation() : 
    m_controlIdentifierHasBeenSet(false),
    m_enabledControlIdentifierHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_operationIdentifierHasBeenSet(false),
    m_operationType(ControlOperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(ControlOperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false)
{
}

ControlOperation::ControlOperation(JsonView jsonValue)
  : ControlOperation()
{
  *this = jsonValue;
}

ControlOperation& ControlOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("controlIdentifier"))
  {
    m_controlIdentifier = jsonValue.GetString("controlIdentifier");

    m_controlIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabledControlIdentifier"))
  {
    m_enabledControlIdentifier = jsonValue.GetString("enabledControlIdentifier");

    m_enabledControlIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationIdentifier"))
  {
    m_operationIdentifier = jsonValue.GetString("operationIdentifier");

    m_operationIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationType"))
  {
    m_operationType = ControlOperationTypeMapper::GetControlOperationTypeForName(jsonValue.GetString("operationType"));

    m_operationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ControlOperationStatusMapper::GetControlOperationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetIdentifier"))
  {
    m_targetIdentifier = jsonValue.GetString("targetIdentifier");

    m_targetIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ControlOperation::Jsonize() const
{
  JsonValue payload;

  if(m_controlIdentifierHasBeenSet)
  {
   payload.WithString("controlIdentifier", m_controlIdentifier);

  }

  if(m_enabledControlIdentifierHasBeenSet)
  {
   payload.WithString("enabledControlIdentifier", m_enabledControlIdentifier);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_operationIdentifierHasBeenSet)
  {
   payload.WithString("operationIdentifier", m_operationIdentifier);

  }

  if(m_operationTypeHasBeenSet)
  {
   payload.WithString("operationType", ControlOperationTypeMapper::GetNameForControlOperationType(m_operationType));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ControlOperationStatusMapper::GetNameForControlOperationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_targetIdentifierHasBeenSet)
  {
   payload.WithString("targetIdentifier", m_targetIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
