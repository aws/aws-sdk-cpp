/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

ConflictException::ConflictException() : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_reason(ConflictExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ConflictException::ConflictException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_reason(ConflictExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ConflictExceptionReasonMapper::GetConflictExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ConflictExceptionReasonMapper::GetNameForConflictExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
