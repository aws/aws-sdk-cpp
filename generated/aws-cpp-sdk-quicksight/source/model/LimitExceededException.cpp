/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

LimitExceededException::LimitExceededException() : 
    m_messageHasBeenSet(false),
    m_resourceType(ExceptionResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

LimitExceededException::LimitExceededException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceType(ExceptionResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
  *this = jsonValue;
}

LimitExceededException& LimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ExceptionResourceTypeMapper::GetExceptionResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ExceptionResourceTypeMapper::GetNameForExceptionResourceType(m_resourceType));
  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
