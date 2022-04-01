/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ConflictingOperationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ConflictingOperationException::ConflictingOperationException() : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

ConflictingOperationException::ConflictingOperationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictingOperationException& ConflictingOperationException::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictingOperationException::Jsonize() const
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

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
