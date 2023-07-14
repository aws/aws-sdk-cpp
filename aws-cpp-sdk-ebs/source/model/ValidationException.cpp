﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EBS
{
namespace Model
{

ValidationException::ValidationException() : 
    m_messageHasBeenSet(false),
    m_reason(ValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(ValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ValidationExceptionReasonMapper::GetValidationExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ValidationExceptionReasonMapper::GetNameForValidationExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace EBS
} // namespace Aws
