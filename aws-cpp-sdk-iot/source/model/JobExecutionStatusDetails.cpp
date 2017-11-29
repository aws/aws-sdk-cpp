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

#include <aws/iot/model/JobExecutionStatusDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

JobExecutionStatusDetails::JobExecutionStatusDetails() : 
    m_detailsMapHasBeenSet(false)
{
}

JobExecutionStatusDetails::JobExecutionStatusDetails(const JsonValue& jsonValue) : 
    m_detailsMapHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionStatusDetails& JobExecutionStatusDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("detailsMap"))
  {
    Aws::Map<Aws::String, JsonValue> detailsMapJsonMap = jsonValue.GetObject("detailsMap").GetAllObjects();
    for(auto& detailsMapItem : detailsMapJsonMap)
    {
      m_detailsMap[detailsMapItem.first] = detailsMapItem.second.AsString();
    }
    m_detailsMapHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecutionStatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_detailsMapHasBeenSet)
  {
   JsonValue detailsMapJsonMap;
   for(auto& detailsMapItem : m_detailsMap)
   {
     detailsMapJsonMap.WithString(detailsMapItem.first, detailsMapItem.second);
   }
   payload.WithObject("detailsMap", std::move(detailsMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
