/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

JobExecutionStatusDetails::JobExecutionStatusDetails(JsonView jsonValue) : 
    m_detailsMapHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionStatusDetails& JobExecutionStatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detailsMap"))
  {
    Aws::Map<Aws::String, JsonView> detailsMapJsonMap = jsonValue.GetObject("detailsMap").GetAllObjects();
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
