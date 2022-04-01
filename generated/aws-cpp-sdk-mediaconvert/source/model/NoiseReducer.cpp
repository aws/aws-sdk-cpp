/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_spatialFilterSettingsHasBeenSet(false),
    m_temporalFilterSettingsHasBeenSet(false)
{
}

NoiseReducer::NoiseReducer(JsonView jsonValue) : 
    m_filter(NoiseReducerFilter::NOT_SET),
    m_filterHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_spatialFilterSettingsHasBeenSet(false),
    m_temporalFilterSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

NoiseReducer& NoiseReducer::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("temporalFilterSettings"))
  {
    m_temporalFilterSettings = jsonValue.GetObject("temporalFilterSettings");

    m_temporalFilterSettingsHasBeenSet = true;
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

  if(m_temporalFilterSettingsHasBeenSet)
  {
   payload.WithObject("temporalFilterSettings", m_temporalFilterSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
