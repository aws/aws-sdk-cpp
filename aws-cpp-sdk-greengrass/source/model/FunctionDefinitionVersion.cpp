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

#include <aws/greengrass/model/FunctionDefinitionVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

FunctionDefinitionVersion::FunctionDefinitionVersion() : 
    m_functionsHasBeenSet(false)
{
}

FunctionDefinitionVersion::FunctionDefinitionVersion(const JsonValue& jsonValue) : 
    m_functionsHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionDefinitionVersion& FunctionDefinitionVersion::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Functions"))
  {
    Array<JsonValue> functionsJsonList = jsonValue.GetArray("Functions");
    for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
    {
      m_functions.push_back(functionsJsonList[functionsIndex].AsObject());
    }
    m_functionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionDefinitionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_functionsHasBeenSet)
  {
   Array<JsonValue> functionsJsonList(m_functions.size());
   for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
   {
     functionsJsonList[functionsIndex].AsObject(m_functions[functionsIndex].Jsonize());
   }
   payload.WithArray("Functions", std::move(functionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
