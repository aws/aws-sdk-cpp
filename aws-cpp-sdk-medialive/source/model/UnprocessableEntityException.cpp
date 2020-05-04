/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> validationErrorsJsonList = jsonValue.GetArray("validationErrors");
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
   Array<JsonValue> validationErrorsJsonList(m_validationErrors.size());
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
