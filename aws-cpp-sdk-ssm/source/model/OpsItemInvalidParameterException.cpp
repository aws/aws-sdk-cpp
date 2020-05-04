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

#include <aws/ssm/model/OpsItemInvalidParameterException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemInvalidParameterException::OpsItemInvalidParameterException() : 
    m_parameterNamesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

OpsItemInvalidParameterException::OpsItemInvalidParameterException(JsonView jsonValue) : 
    m_parameterNamesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemInvalidParameterException& OpsItemInvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterNames"))
  {
    Array<JsonView> parameterNamesJsonList = jsonValue.GetArray("ParameterNames");
    for(unsigned parameterNamesIndex = 0; parameterNamesIndex < parameterNamesJsonList.GetLength(); ++parameterNamesIndex)
    {
      m_parameterNames.push_back(parameterNamesJsonList[parameterNamesIndex].AsString());
    }
    m_parameterNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemInvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNamesHasBeenSet)
  {
   Array<JsonValue> parameterNamesJsonList(m_parameterNames.size());
   for(unsigned parameterNamesIndex = 0; parameterNamesIndex < parameterNamesJsonList.GetLength(); ++parameterNamesIndex)
   {
     parameterNamesJsonList[parameterNamesIndex].AsString(m_parameterNames[parameterNamesIndex]);
   }
   payload.WithArray("ParameterNames", std::move(parameterNamesJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
