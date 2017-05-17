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

#include <aws/rekognition/model/Pose.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

Pose::Pose() : 
    m_roll(0.0),
    m_rollHasBeenSet(false),
    m_yaw(0.0),
    m_yawHasBeenSet(false),
    m_pitch(0.0),
    m_pitchHasBeenSet(false)
{
}

Pose::Pose(const JsonValue& jsonValue) : 
    m_roll(0.0),
    m_rollHasBeenSet(false),
    m_yaw(0.0),
    m_yawHasBeenSet(false),
    m_pitch(0.0),
    m_pitchHasBeenSet(false)
{
  *this = jsonValue;
}

Pose& Pose::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Roll"))
  {
    m_roll = jsonValue.GetDouble("Roll");

    m_rollHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Yaw"))
  {
    m_yaw = jsonValue.GetDouble("Yaw");

    m_yawHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pitch"))
  {
    m_pitch = jsonValue.GetDouble("Pitch");

    m_pitchHasBeenSet = true;
  }

  return *this;
}

JsonValue Pose::Jsonize() const
{
  JsonValue payload;

  if(m_rollHasBeenSet)
  {
   payload.WithDouble("Roll", m_roll);

  }

  if(m_yawHasBeenSet)
  {
   payload.WithDouble("Yaw", m_yaw);

  }

  if(m_pitchHasBeenSet)
  {
   payload.WithDouble("Pitch", m_pitch);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws