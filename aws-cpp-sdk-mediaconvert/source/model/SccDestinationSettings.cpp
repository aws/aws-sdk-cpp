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

#include <aws/mediaconvert/model/SccDestinationSettings.h>
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

SccDestinationSettings::SccDestinationSettings() : 
    m_framerate(SccDestinationFramerate::NOT_SET),
    m_framerateHasBeenSet(false)
{
}

SccDestinationSettings::SccDestinationSettings(const JsonValue& jsonValue) : 
    m_framerate(SccDestinationFramerate::NOT_SET),
    m_framerateHasBeenSet(false)
{
  *this = jsonValue;
}

SccDestinationSettings& SccDestinationSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("framerate"))
  {
    m_framerate = SccDestinationFramerateMapper::GetSccDestinationFramerateForName(jsonValue.GetString("framerate"));

    m_framerateHasBeenSet = true;
  }

  return *this;
}

JsonValue SccDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_framerateHasBeenSet)
  {
   payload.WithString("framerate", SccDestinationFramerateMapper::GetNameForSccDestinationFramerate(m_framerate));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
