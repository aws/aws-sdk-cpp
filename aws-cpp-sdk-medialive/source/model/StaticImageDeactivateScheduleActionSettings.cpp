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

#include <aws/medialive/model/StaticImageDeactivateScheduleActionSettings.h>
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

StaticImageDeactivateScheduleActionSettings::StaticImageDeactivateScheduleActionSettings() : 
    m_fadeOut(0),
    m_fadeOutHasBeenSet(false),
    m_layer(0),
    m_layerHasBeenSet(false)
{
}

StaticImageDeactivateScheduleActionSettings::StaticImageDeactivateScheduleActionSettings(JsonView jsonValue) : 
    m_fadeOut(0),
    m_fadeOutHasBeenSet(false),
    m_layer(0),
    m_layerHasBeenSet(false)
{
  *this = jsonValue;
}

StaticImageDeactivateScheduleActionSettings& StaticImageDeactivateScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fadeOut"))
  {
    m_fadeOut = jsonValue.GetInteger("fadeOut");

    m_fadeOutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layer"))
  {
    m_layer = jsonValue.GetInteger("layer");

    m_layerHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticImageDeactivateScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_fadeOutHasBeenSet)
  {
   payload.WithInteger("fadeOut", m_fadeOut);

  }

  if(m_layerHasBeenSet)
  {
   payload.WithInteger("layer", m_layer);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
