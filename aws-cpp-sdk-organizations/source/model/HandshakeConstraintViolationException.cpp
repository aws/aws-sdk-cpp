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

#include <aws/organizations/model/HandshakeConstraintViolationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

HandshakeConstraintViolationException::HandshakeConstraintViolationException() : 
    m_messageHasBeenSet(false),
    m_reason(HandshakeConstraintViolationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

HandshakeConstraintViolationException::HandshakeConstraintViolationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(HandshakeConstraintViolationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

HandshakeConstraintViolationException& HandshakeConstraintViolationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = HandshakeConstraintViolationExceptionReasonMapper::GetHandshakeConstraintViolationExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue HandshakeConstraintViolationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", HandshakeConstraintViolationExceptionReasonMapper::GetNameForHandshakeConstraintViolationExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
