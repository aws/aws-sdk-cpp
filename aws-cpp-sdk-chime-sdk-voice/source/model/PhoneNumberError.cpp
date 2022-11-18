/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumberError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

PhoneNumberError::PhoneNumberError() : 
    m_phoneNumberIdHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

PhoneNumberError::PhoneNumberError(JsonView jsonValue) : 
    m_phoneNumberIdHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberError& PhoneNumberError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("PhoneNumberId");

    m_phoneNumberIdHasBeenSet = true;
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

JsonValue PhoneNumberError::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberIdHasBeenSet)
  {
   payload.WithString("PhoneNumberId", m_phoneNumberId);

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
} // namespace ChimeSDKVoice
} // namespace Aws
