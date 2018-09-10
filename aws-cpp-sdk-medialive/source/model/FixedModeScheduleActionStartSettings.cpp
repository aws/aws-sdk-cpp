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

#include <aws/medialive/model/FixedModeScheduleActionStartSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

FixedModeScheduleActionStartSettings::FixedModeScheduleActionStartSettings() : 
    m_timeHasBeenSet(false)
{
}

FixedModeScheduleActionStartSettings::FixedModeScheduleActionStartSettings(JsonView jsonValue) : 
    m_timeHasBeenSet(false)
{
  *this = jsonValue;
}

FixedModeScheduleActionStartSettings& FixedModeScheduleActionStartSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("time"))
  {
    m_time = jsonValue.GetString("time");

    m_timeHasBeenSet = true;
  }

  return *this;
}

JsonValue FixedModeScheduleActionStartSettings::Jsonize() const
{
  JsonValue payload;

  if(m_timeHasBeenSet)
  {
   payload.WithString("time", m_time);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
