/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UnprocessableEntityException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

UnprocessableEntityException::UnprocessableEntityException() : 
    m_messageHasBeenSet(false),
    m_validationErrorsHasBeenSet(false)
{
}

UnprocessableEntityException::UnprocessableEntityException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_validationErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessableEntityException& UnprocessableEntityException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationErrors"))
  {
    Aws::Utils::Array<JsonView> validationErrorsJsonList = jsonValue.GetArray("validationErrors");
    for(unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex)
    {
      m_validationErrors.push_back(validationErrorsJsonList[validationErrorsIndex].AsObject());
    }
    m_validationErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessableEntityException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_validationErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationErrorsJsonList(m_validationErrors.size());
   for(unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex)
   {
     validationErrorsJsonList[validationErrorsIndex].AsObject(m_validationErrors[validationErrorsIndex].Jsonize());
   }
   payload.WithArray("validationErrors", std::move(validationErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
