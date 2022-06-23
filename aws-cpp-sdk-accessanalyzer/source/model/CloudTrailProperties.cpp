/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CloudTrailProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

CloudTrailProperties::CloudTrailProperties() : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_trailPropertiesHasBeenSet(false)
{
}

CloudTrailProperties::CloudTrailProperties(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_trailPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

CloudTrailProperties& CloudTrailProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trailProperties"))
  {
    Array<JsonView> trailPropertiesJsonList = jsonValue.GetArray("trailProperties");
    for(unsigned trailPropertiesIndex = 0; trailPropertiesIndex < trailPropertiesJsonList.GetLength(); ++trailPropertiesIndex)
    {
      m_trailProperties.push_back(trailPropertiesJsonList[trailPropertiesIndex].AsObject());
    }
    m_trailPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudTrailProperties::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_trailPropertiesHasBeenSet)
  {
   Array<JsonValue> trailPropertiesJsonList(m_trailProperties.size());
   for(unsigned trailPropertiesIndex = 0; trailPropertiesIndex < trailPropertiesJsonList.GetLength(); ++trailPropertiesIndex)
   {
     trailPropertiesJsonList[trailPropertiesIndex].AsObject(m_trailProperties[trailPropertiesIndex].Jsonize());
   }
   payload.WithArray("trailProperties", std::move(trailPropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
