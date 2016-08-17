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
#include <aws/ds/model/Computer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

Computer::Computer() : 
    m_computerIdHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_computerAttributesHasBeenSet(false)
{
}

Computer::Computer(const JsonValue& jsonValue) : 
    m_computerIdHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_computerAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

Computer& Computer::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ComputerId"))
  {
    m_computerId = jsonValue.GetString("ComputerId");

    m_computerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputerName"))
  {
    m_computerName = jsonValue.GetString("ComputerName");

    m_computerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputerAttributes"))
  {
    Array<JsonValue> computerAttributesJsonList = jsonValue.GetArray("ComputerAttributes");
    for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
    {
      m_computerAttributes.push_back(computerAttributesJsonList[computerAttributesIndex].AsObject());
    }
    m_computerAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue Computer::Jsonize() const
{
  JsonValue payload;

  if(m_computerIdHasBeenSet)
  {
   payload.WithString("ComputerId", m_computerId);

  }

  if(m_computerNameHasBeenSet)
  {
   payload.WithString("ComputerName", m_computerName);

  }

  if(m_computerAttributesHasBeenSet)
  {
   Array<JsonValue> computerAttributesJsonList(m_computerAttributes.size());
   for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
   {
     computerAttributesJsonList[computerAttributesIndex].AsObject(m_computerAttributes[computerAttributesIndex].Jsonize());
   }
   payload.WithArray("ComputerAttributes", std::move(computerAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws