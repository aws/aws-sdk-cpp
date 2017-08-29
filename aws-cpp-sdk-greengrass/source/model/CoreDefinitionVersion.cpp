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

#include <aws/greengrass/model/CoreDefinitionVersion.h>
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

CoreDefinitionVersion::CoreDefinitionVersion() : 
    m_coresHasBeenSet(false)
{
}

CoreDefinitionVersion::CoreDefinitionVersion(const JsonValue& jsonValue) : 
    m_coresHasBeenSet(false)
{
  *this = jsonValue;
}

CoreDefinitionVersion& CoreDefinitionVersion::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Cores"))
  {
    Array<JsonValue> coresJsonList = jsonValue.GetArray("Cores");
    for(unsigned coresIndex = 0; coresIndex < coresJsonList.GetLength(); ++coresIndex)
    {
      m_cores.push_back(coresJsonList[coresIndex].AsObject());
    }
    m_coresHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreDefinitionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_coresHasBeenSet)
  {
   Array<JsonValue> coresJsonList(m_cores.size());
   for(unsigned coresIndex = 0; coresIndex < coresJsonList.GetLength(); ++coresIndex)
   {
     coresJsonList[coresIndex].AsObject(m_cores[coresIndex].Jsonize());
   }
   payload.WithArray("Cores", std::move(coresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
