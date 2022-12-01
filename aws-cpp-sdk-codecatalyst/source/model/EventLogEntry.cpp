/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/EventLogEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

EventLogEntry::EventLogEntry() : 
    m_idHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventCategoryHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_userIdentityHasBeenSet(false),
    m_projectInformationHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_requestPayloadHasBeenSet(false),
    m_responsePayloadHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_sourceIpAddressHasBeenSet(false),
    m_userAgentHasBeenSet(false)
{
}

EventLogEntry::EventLogEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventCategoryHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_operationType(OperationType::NOT_SET),
    m_operationTypeHasBeenSet(false),
    m_userIdentityHasBeenSet(false),
    m_projectInformationHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_requestPayloadHasBeenSet(false),
    m_responsePayloadHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_sourceIpAddressHasBeenSet(false),
    m_userAgentHasBeenSet(false)
{
  *this = jsonValue;
}

EventLogEntry& EventLogEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventName"))
  {
    m_eventName = jsonValue.GetString("eventName");

    m_eventNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventCategory"))
  {
    m_eventCategory = jsonValue.GetString("eventCategory");

    m_eventCategoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventSource"))
  {
    m_eventSource = jsonValue.GetString("eventSource");

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTime"))
  {
    m_eventTime = jsonValue.GetString("eventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationType"))
  {
    m_operationType = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("operationType"));

    m_operationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userIdentity"))
  {
    m_userIdentity = jsonValue.GetObject("userIdentity");

    m_userIdentityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectInformation"))
  {
    m_projectInformation = jsonValue.GetObject("projectInformation");

    m_projectInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestPayload"))
  {
    m_requestPayload = jsonValue.GetObject("requestPayload");

    m_requestPayloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responsePayload"))
  {
    m_responsePayload = jsonValue.GetObject("responsePayload");

    m_responsePayloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceIpAddress"))
  {
    m_sourceIpAddress = jsonValue.GetString("sourceIpAddress");

    m_sourceIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAgent"))
  {
    m_userAgent = jsonValue.GetString("userAgent");

    m_userAgentHasBeenSet = true;
  }

  return *this;
}

JsonValue EventLogEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_eventNameHasBeenSet)
  {
   payload.WithString("eventName", m_eventName);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_eventCategoryHasBeenSet)
  {
   payload.WithString("eventCategory", m_eventCategory);

  }

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("eventSource", m_eventSource);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithString("eventTime", m_eventTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_operationTypeHasBeenSet)
  {
   payload.WithString("operationType", OperationTypeMapper::GetNameForOperationType(m_operationType));
  }

  if(m_userIdentityHasBeenSet)
  {
   payload.WithObject("userIdentity", m_userIdentity.Jsonize());

  }

  if(m_projectInformationHasBeenSet)
  {
   payload.WithObject("projectInformation", m_projectInformation.Jsonize());

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_requestPayloadHasBeenSet)
  {
   payload.WithObject("requestPayload", m_requestPayload.Jsonize());

  }

  if(m_responsePayloadHasBeenSet)
  {
   payload.WithObject("responsePayload", m_responsePayload.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_sourceIpAddressHasBeenSet)
  {
   payload.WithString("sourceIpAddress", m_sourceIpAddress);

  }

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("userAgent", m_userAgent);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
