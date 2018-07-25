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

#include <aws/pi/model/MetricKeyDataPoints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

MetricKeyDataPoints::MetricKeyDataPoints() : 
    m_keyHasBeenSet(false),
    m_dataPointsHasBeenSet(false)
{
}

MetricKeyDataPoints::MetricKeyDataPoints(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_dataPointsHasBeenSet(false)
{
  *this = jsonValue;
}

MetricKeyDataPoints& MetricKeyDataPoints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetObject("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPoints"))
  {
    Array<JsonView> dataPointsJsonList = jsonValue.GetArray("DataPoints");
    for(unsigned dataPointsIndex = 0; dataPointsIndex < dataPointsJsonList.GetLength(); ++dataPointsIndex)
    {
      m_dataPoints.push_back(dataPointsJsonList[dataPointsIndex].AsObject());
    }
    m_dataPointsHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricKeyDataPoints::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithObject("Key", m_key.Jsonize());

  }

  if(m_dataPointsHasBeenSet)
  {
   Array<JsonValue> dataPointsJsonList(m_dataPoints.size());
   for(unsigned dataPointsIndex = 0; dataPointsIndex < dataPointsJsonList.GetLength(); ++dataPointsIndex)
   {
     dataPointsJsonList[dataPointsIndex].AsObject(m_dataPoints[dataPointsIndex].Jsonize());
   }
   payload.WithArray("DataPoints", std::move(dataPointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
