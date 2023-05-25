/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ShareLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

ShareLimitExceededException::ShareLimitExceededException() : 
    m_messageHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

ShareLimitExceededException::ShareLimitExceededException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
  *this = jsonValue;
}

ShareLimitExceededException& ShareLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
