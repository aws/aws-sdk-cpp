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

#include <aws/macie/model/InvalidInputException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie
{
namespace Model
{

InvalidInputException::InvalidInputException() : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fieldNameHasBeenSet(false)
{
}

InvalidInputException::InvalidInputException(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_fieldNameHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidInputException& InvalidInputException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");

    m_fieldNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidInputException::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  return payload;
}

} // namespace Model
} // namespace Macie
} // namespace Aws
