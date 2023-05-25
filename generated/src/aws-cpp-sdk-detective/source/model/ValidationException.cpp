/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

ValidationException::ValidationException() : 
    m_messageHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorCodeReasonHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorCodeReasonHasBeenSet(false)
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

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCodeReason"))
  {
    m_errorCodeReason = jsonValue.GetString("ErrorCodeReason");

    m_errorCodeReasonHasBeenSet = true;
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

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  if(m_errorCodeReasonHasBeenSet)
  {
   payload.WithString("ErrorCodeReason", m_errorCodeReason);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
