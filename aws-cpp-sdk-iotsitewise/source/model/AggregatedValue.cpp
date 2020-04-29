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

#include <aws/iotsitewise/model/AggregatedValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

AggregatedValue::AggregatedValue() : 
    m_timestampHasBeenSet(false),
    m_quality(Quality::NOT_SET),
    m_qualityHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AggregatedValue::AggregatedValue(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_quality(Quality::NOT_SET),
    m_qualityHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AggregatedValue& AggregatedValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quality"))
  {
    m_quality = QualityMapper::GetQualityForName(jsonValue.GetString("quality"));

    m_qualityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregatedValue::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_qualityHasBeenSet)
  {
   payload.WithString("quality", QualityMapper::GetNameForQuality(m_quality));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
