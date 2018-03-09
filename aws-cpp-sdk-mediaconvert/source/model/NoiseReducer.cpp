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

#include <aws/mediaconvert/model/NoiseReducer.h>
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

NoiseReducer::NoiseReducer() : 
    m_filter(NoiseReducerFilter::NOT_SET),
    m_filterHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_spatialFilterSettingsHasBeenSet(false)
{
}

NoiseReducer::NoiseReducer(const JsonValue& jsonValue) : 
    m_filter(NoiseReducerFilter::NOT_SET),
    m_filterHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_spatialFilterSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

NoiseReducer& NoiseReducer::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("filter"))
  {
    m_filter = NoiseReducerFilterMapper::GetNoiseReducerFilterForName(jsonValue.GetString("filter"));

    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterSettings"))
  {
    m_filterSettings = jsonValue.GetObject("filterSettings");

    m_filterSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spatialFilterSettings"))
  {
    m_spatialFilterSettings = jsonValue.GetObject("spatialFilterSettings");

    m_spatialFilterSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue NoiseReducer::Jsonize() const
{
  JsonValue payload;

  if(m_filterHasBeenSet)
  {
   payload.WithString("filter", NoiseReducerFilterMapper::GetNameForNoiseReducerFilter(m_filter));
  }

  if(m_filterSettingsHasBeenSet)
  {
   payload.WithObject("filterSettings", m_filterSettings.Jsonize());

  }

  if(m_spatialFilterSettingsHasBeenSet)
  {
   payload.WithObject("spatialFilterSettings", m_spatialFilterSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
