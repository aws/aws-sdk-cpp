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

#include <aws/lambda/model/Environment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

Environment::Environment() : 
    m_variablesHasBeenSet(false)
{
}

Environment::Environment(const JsonValue& jsonValue) : 
    m_variablesHasBeenSet(false)
{
  *this = jsonValue;
}

Environment& Environment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Variables"))
  {
    Aws::Map<Aws::String, JsonValue> variablesJsonMap = jsonValue.GetObject("Variables").GetAllObjects();
    for(auto& variablesItem : variablesJsonMap)
    {
      m_variables[variablesItem.first] = variablesItem.second.AsString();
    }
    m_variablesHasBeenSet = true;
  }

  return *this;
}

JsonValue Environment::Jsonize() const
{
  JsonValue payload;

  if(m_variablesHasBeenSet)
  {
   JsonValue variablesJsonMap;
   for(auto& variablesItem : m_variables)
   {
     variablesJsonMap.WithString(variablesItem.first, variablesItem.second);
   }
   payload.WithObject("Variables", std::move(variablesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws