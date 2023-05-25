/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/UserError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

UserError::UserError() : 
    m_userIdHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

UserError::UserError(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

UserError& UserError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue UserError::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
