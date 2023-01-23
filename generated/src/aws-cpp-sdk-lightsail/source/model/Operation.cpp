/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Operation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Operation::Operation() : 
    m_idHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_isTerminal(false),
    m_isTerminalHasBeenSet(false),
    m_operationDetailsHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusChangedAtHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
}

Operation::Operation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_isTerminal(false),
    m_isTerminalHasBeenSet(false),
    m_operationDetailsHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusChangedAtHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Operation& Operation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isTerminal"))
  {
    m_isTerminal = jsonValue.GetBool("isTerminal");

    m_isTerminalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationDetails"))
  {
    m_operationDetails = jsonValue.GetString("operationDetails");

    m_operationDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationType"))
  {
    m_operationType = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("operationType"));

    m_operationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusChangedAt"))
  {
    m_statusChangedAt = jsonValue.GetDouble("statusChangedAt");

    m_statusChangedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDetails"))
  {
    m_errorDetails = jsonValue.GetString("errorDetails");

    m_errorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Operation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_isTerminalHasBeenSet)
  {
   payload.WithBool("isTerminal", m_isTerminal);

  }

  if(m_operationDetailsHasBeenSet)
  {
   payload.WithString("operationDetails", m_operationDetails);

  }

  if(m_operationTypeHasBeenSet)
  {
   payload.WithString("operationType", OperationTypeMapper::GetNameForOperationType(m_operationType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if(m_statusChangedAtHasBeenSet)
  {
   payload.WithDouble("statusChangedAt", m_statusChangedAt.SecondsWithMSPrecision());
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithString("errorDetails", m_errorDetails);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
