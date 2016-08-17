/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/LocalizedText.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

LocalizedText::LocalizedText() : 
    m_keyHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

LocalizedText::LocalizedText(const JsonValue& jsonValue) : 
    m_keyHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

LocalizedText& LocalizedText::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetObject("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Array<JsonValue> parametersJsonList = jsonValue.GetArray("parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue LocalizedText::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithObject("key", m_key.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws