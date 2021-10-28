/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

ConflictException::ConflictException() : 
    m_messageHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_retryAfterHasBeenSet(false)
{
}

ConflictException::ConflictException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_retryAfterHasBeenSet(false)
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

  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("resourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retryAfter"))
  {
    m_retryAfter = jsonValue.GetDouble("retryAfter");

    m_retryAfterHasBeenSet = true;
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

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("resourceIdentifier", m_resourceIdentifier);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_retryAfterHasBeenSet)
  {
   payload.WithDouble("retryAfter", m_retryAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
