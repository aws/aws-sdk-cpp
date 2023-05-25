/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ConflictException::ConflictException() : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_reason(ConflictExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ConflictException::ConflictException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_reason(ConflictExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ConflictExceptionReasonMapper::GetConflictExceptionReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ConflictExceptionReasonMapper::GetNameForConflictExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
