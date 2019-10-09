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

#include <aws/mediaconvert/model/JobMessages.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

JobMessages::JobMessages() : 
    m_infoHasBeenSet(false),
    m_warningHasBeenSet(false)
{
}

JobMessages::JobMessages(JsonView jsonValue) : 
    m_infoHasBeenSet(false),
    m_warningHasBeenSet(false)
{
  *this = jsonValue;
}

JobMessages& JobMessages::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("info"))
  {
    Array<JsonView> infoJsonList = jsonValue.GetArray("info");
    for(unsigned infoIndex = 0; infoIndex < infoJsonList.GetLength(); ++infoIndex)
    {
      m_info.push_back(infoJsonList[infoIndex].AsString());
    }
    m_infoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warning"))
  {
    Array<JsonView> warningJsonList = jsonValue.GetArray("warning");
    for(unsigned warningIndex = 0; warningIndex < warningJsonList.GetLength(); ++warningIndex)
    {
      m_warning.push_back(warningJsonList[warningIndex].AsString());
    }
    m_warningHasBeenSet = true;
  }

  return *this;
}

JsonValue JobMessages::Jsonize() const
{
  JsonValue payload;

  if(m_infoHasBeenSet)
  {
   Array<JsonValue> infoJsonList(m_info.size());
   for(unsigned infoIndex = 0; infoIndex < infoJsonList.GetLength(); ++infoIndex)
   {
     infoJsonList[infoIndex].AsString(m_info[infoIndex]);
   }
   payload.WithArray("info", std::move(infoJsonList));

  }

  if(m_warningHasBeenSet)
  {
   Array<JsonValue> warningJsonList(m_warning.size());
   for(unsigned warningIndex = 0; warningIndex < warningJsonList.GetLength(); ++warningIndex)
   {
     warningJsonList[warningIndex].AsString(m_warning[warningIndex]);
   }
   payload.WithArray("warning", std::move(warningJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
