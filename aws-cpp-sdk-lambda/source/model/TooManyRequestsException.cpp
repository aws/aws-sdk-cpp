/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lambda/model/TooManyRequestsException.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

TooManyRequestsException::TooManyRequestsException() : 
    m_retryAfterSecondsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(ThrottleReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

TooManyRequestsException::TooManyRequestsException(JsonView jsonValue) : 
    m_retryAfterSecondsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(ThrottleReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

TooManyRequestsException& TooManyRequestsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ThrottleReasonMapper::GetThrottleReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue TooManyRequestsException::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ThrottleReasonMapper::GetNameForThrottleReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
