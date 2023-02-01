/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/ThrottlingException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivschat
{
namespace Model
{

ThrottlingException::ThrottlingException() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

ThrottlingException::ThrottlingException(JsonView jsonValue) : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ThrottlingException& ThrottlingException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("limit"))
  {
    m_limit = jsonValue.GetInteger("limit");

    m_limitHasBeenSet = true;
  }

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

  return *this;
}

JsonValue ThrottlingException::Jsonize() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

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

  return payload;
}

} // namespace Model
} // namespace ivschat
} // namespace Aws
