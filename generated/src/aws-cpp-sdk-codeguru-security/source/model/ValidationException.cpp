/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

ValidationException::ValidationException() : 
    m_errorCodeHasBeenSet(false),
    m_fieldListHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(ValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_fieldListHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(ValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldList"))
  {
    Aws::Utils::Array<JsonView> fieldListJsonList = jsonValue.GetArray("fieldList");
    for(unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex)
    {
      m_fieldList.push_back(fieldListJsonList[fieldListIndex].AsObject());
    }
    m_fieldListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ValidationExceptionReasonMapper::GetValidationExceptionReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_fieldListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldListJsonList(m_fieldList.size());
   for(unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex)
   {
     fieldListJsonList[fieldListIndex].AsObject(m_fieldList[fieldListIndex].Jsonize());
   }
   payload.WithArray("fieldList", std::move(fieldListJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ValidationExceptionReasonMapper::GetNameForValidationExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
