/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/ProgressEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{

ProgressEvent::ProgressEvent() : 
    m_typeNameHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_requestTokenHasBeenSet(false),
    m_operation(Operation::NOT_SET),
    m_operationHasBeenSet(false),
    m_operationStatus(OperationStatus::NOT_SET),
    m_operationStatusHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_resourceModelHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_errorCode(HandlerErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_retryAfterHasBeenSet(false)
{
}

ProgressEvent::ProgressEvent(JsonView jsonValue) : 
    m_typeNameHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_requestTokenHasBeenSet(false),
    m_operation(Operation::NOT_SET),
    m_operationHasBeenSet(false),
    m_operationStatus(OperationStatus::NOT_SET),
    m_operationStatusHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_resourceModelHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_errorCode(HandlerErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_retryAfterHasBeenSet(false)
{
  *this = jsonValue;
}

ProgressEvent& ProgressEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestToken"))
  {
    m_requestToken = jsonValue.GetString("RequestToken");

    m_requestTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = OperationMapper::GetOperationForName(jsonValue.GetString("Operation"));

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationStatus"))
  {
    m_operationStatus = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("OperationStatus"));

    m_operationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTime"))
  {
    m_eventTime = jsonValue.GetDouble("EventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceModel"))
  {
    m_resourceModel = jsonValue.GetString("ResourceModel");

    m_resourceModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = HandlerErrorCodeMapper::GetHandlerErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryAfter"))
  {
    m_retryAfter = jsonValue.GetDouble("RetryAfter");

    m_retryAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue ProgressEvent::Jsonize() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_requestTokenHasBeenSet)
  {
   payload.WithString("RequestToken", m_requestToken);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", OperationMapper::GetNameForOperation(m_operation));
  }

  if(m_operationStatusHasBeenSet)
  {
   payload.WithString("OperationStatus", OperationStatusMapper::GetNameForOperationStatus(m_operationStatus));
  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("EventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_resourceModelHasBeenSet)
  {
   payload.WithString("ResourceModel", m_resourceModel);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", HandlerErrorCodeMapper::GetNameForHandlerErrorCode(m_errorCode));
  }

  if(m_retryAfterHasBeenSet)
  {
   payload.WithDouble("RetryAfter", m_retryAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
