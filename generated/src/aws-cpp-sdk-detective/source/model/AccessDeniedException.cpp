/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/AccessDeniedException.h>
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

AccessDeniedException::AccessDeniedException() : 
    m_messageHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorCodeReasonHasBeenSet(false),
    m_subErrorCode(ErrorCode::NOT_SET),
    m_subErrorCodeHasBeenSet(false),
    m_subErrorCodeReasonHasBeenSet(false)
{
}

AccessDeniedException::AccessDeniedException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorCodeReasonHasBeenSet(false),
    m_subErrorCode(ErrorCode::NOT_SET),
    m_subErrorCodeHasBeenSet(false),
    m_subErrorCodeReasonHasBeenSet(false)
{
  *this = jsonValue;
}

AccessDeniedException& AccessDeniedException::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("SubErrorCode"))
  {
    m_subErrorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("SubErrorCode"));

    m_subErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubErrorCodeReason"))
  {
    m_subErrorCodeReason = jsonValue.GetString("SubErrorCodeReason");

    m_subErrorCodeReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessDeniedException::Jsonize() const
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

  if(m_subErrorCodeHasBeenSet)
  {
   payload.WithString("SubErrorCode", ErrorCodeMapper::GetNameForErrorCode(m_subErrorCode));
  }

  if(m_subErrorCodeReasonHasBeenSet)
  {
   payload.WithString("SubErrorCodeReason", m_subErrorCodeReason);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
