/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
