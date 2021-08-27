/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/InvalidCrossAccountRoleException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

InvalidCrossAccountRoleException::InvalidCrossAccountRoleException() : 
    m_messageHasBeenSet(false),
    m_errorCode(InvalidCrossAccountRoleErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_canRetry(false),
    m_canRetryHasBeenSet(false)
{
}

InvalidCrossAccountRoleException::InvalidCrossAccountRoleException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_errorCode(InvalidCrossAccountRoleErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_canRetry(false),
    m_canRetryHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidCrossAccountRoleException& InvalidCrossAccountRoleException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = InvalidCrossAccountRoleErrorCodeMapper::GetInvalidCrossAccountRoleErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canRetry"))
  {
    m_canRetry = jsonValue.GetBool("canRetry");

    m_canRetryHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidCrossAccountRoleException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", InvalidCrossAccountRoleErrorCodeMapper::GetNameForInvalidCrossAccountRoleErrorCode(m_errorCode));
  }

  if(m_canRetryHasBeenSet)
  {
   payload.WithBool("canRetry", m_canRetry);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
