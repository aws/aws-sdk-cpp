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

#include <aws/mediaconvert/model/Av1QvbrSettings.h>
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

Av1QvbrSettings::Av1QvbrSettings() : 
    m_qvbrQualityLevel(0),
    m_qvbrQualityLevelHasBeenSet(false),
    m_qvbrQualityLevelFineTune(0.0),
    m_qvbrQualityLevelFineTuneHasBeenSet(false)
{
}

Av1QvbrSettings::Av1QvbrSettings(JsonView jsonValue) : 
    m_qvbrQualityLevel(0),
    m_qvbrQualityLevelHasBeenSet(false),
    m_qvbrQualityLevelFineTune(0.0),
    m_qvbrQualityLevelFineTuneHasBeenSet(false)
{
  *this = jsonValue;
}

Av1QvbrSettings& Av1QvbrSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("qvbrQualityLevel"))
  {
    m_qvbrQualityLevel = jsonValue.GetInteger("qvbrQualityLevel");

    m_qvbrQualityLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qvbrQualityLevelFineTune"))
  {
    m_qvbrQualityLevelFineTune = jsonValue.GetDouble("qvbrQualityLevelFineTune");

    m_qvbrQualityLevelFineTuneHasBeenSet = true;
  }

  return *this;
}

JsonValue Av1QvbrSettings::Jsonize() const
{
  JsonValue payload;

  if(m_qvbrQualityLevelHasBeenSet)
  {
   payload.WithInteger("qvbrQualityLevel", m_qvbrQualityLevel);

  }

  if(m_qvbrQualityLevelFineTuneHasBeenSet)
  {
   payload.WithDouble("qvbrQualityLevelFineTune", m_qvbrQualityLevelFineTune);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
