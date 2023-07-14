/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SegmentDemographics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SegmentDemographics::SegmentDemographics() : 
    m_appVersionHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_makeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_platformHasBeenSet(false)
{
}

SegmentDemographics::SegmentDemographics(JsonView jsonValue) : 
    m_appVersionHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_makeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_platformHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentDemographics& SegmentDemographics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppVersion"))
  {
    m_appVersion = jsonValue.GetObject("AppVersion");

    m_appVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = jsonValue.GetObject("Channel");

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceType"))
  {
    m_deviceType = jsonValue.GetObject("DeviceType");

    m_deviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Make"))
  {
    m_make = jsonValue.GetObject("Make");

    m_makeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetObject("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetObject("Platform");

    m_platformHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentDemographics::Jsonize() const
{
  JsonValue payload;

  if(m_appVersionHasBeenSet)
  {
   payload.WithObject("AppVersion", m_appVersion.Jsonize());

  }

  if(m_channelHasBeenSet)
  {
   payload.WithObject("Channel", m_channel.Jsonize());

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithObject("DeviceType", m_deviceType.Jsonize());

  }

  if(m_makeHasBeenSet)
  {
   payload.WithObject("Make", m_make.Jsonize());

  }

  if(m_modelHasBeenSet)
  {
   payload.WithObject("Model", m_model.Jsonize());

  }

  if(m_platformHasBeenSet)
  {
   payload.WithObject("Platform", m_platform.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
