/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

ValidationException::ValidationException(JsonView jsonValue)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("programSetValidationFailures"))
  {
    Aws::Utils::Array<JsonView> programSetValidationFailuresJsonList = jsonValue.GetArray("programSetValidationFailures");
    for(unsigned programSetValidationFailuresIndex = 0; programSetValidationFailuresIndex < programSetValidationFailuresJsonList.GetLength(); ++programSetValidationFailuresIndex)
    {
      m_programSetValidationFailures.push_back(programSetValidationFailuresJsonList[programSetValidationFailuresIndex].AsObject());
    }
    m_programSetValidationFailuresHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ValidationExceptionReasonMapper::GetNameForValidationExceptionReason(m_reason));
  }

  if(m_programSetValidationFailuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> programSetValidationFailuresJsonList(m_programSetValidationFailures.size());
   for(unsigned programSetValidationFailuresIndex = 0; programSetValidationFailuresIndex < programSetValidationFailuresJsonList.GetLength(); ++programSetValidationFailuresIndex)
   {
     programSetValidationFailuresJsonList[programSetValidationFailuresIndex].AsObject(m_programSetValidationFailures[programSetValidationFailuresIndex].Jsonize());
   }
   payload.WithArray("programSetValidationFailures", std::move(programSetValidationFailuresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
