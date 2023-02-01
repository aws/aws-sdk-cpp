/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANGetServiceProfileInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

LoRaWANGetServiceProfileInfo::LoRaWANGetServiceProfileInfo() : 
    m_ulRate(0),
    m_ulRateHasBeenSet(false),
    m_ulBucketSize(0),
    m_ulBucketSizeHasBeenSet(false),
    m_ulRatePolicyHasBeenSet(false),
    m_dlRate(0),
    m_dlRateHasBeenSet(false),
    m_dlBucketSize(0),
    m_dlBucketSizeHasBeenSet(false),
    m_dlRatePolicyHasBeenSet(false),
    m_addGwMetadata(false),
    m_addGwMetadataHasBeenSet(false),
    m_devStatusReqFreq(0),
    m_devStatusReqFreqHasBeenSet(false),
    m_reportDevStatusBattery(false),
    m_reportDevStatusBatteryHasBeenSet(false),
    m_reportDevStatusMargin(false),
    m_reportDevStatusMarginHasBeenSet(false),
    m_drMin(0),
    m_drMinHasBeenSet(false),
    m_drMax(0),
    m_drMaxHasBeenSet(false),
    m_channelMaskHasBeenSet(false),
    m_prAllowed(false),
    m_prAllowedHasBeenSet(false),
    m_hrAllowed(false),
    m_hrAllowedHasBeenSet(false),
    m_raAllowed(false),
    m_raAllowedHasBeenSet(false),
    m_nwkGeoLoc(false),
    m_nwkGeoLocHasBeenSet(false),
    m_targetPer(0),
    m_targetPerHasBeenSet(false),
    m_minGwDiversity(0),
    m_minGwDiversityHasBeenSet(false)
{
}

LoRaWANGetServiceProfileInfo::LoRaWANGetServiceProfileInfo(JsonView jsonValue) : 
    m_ulRate(0),
    m_ulRateHasBeenSet(false),
    m_ulBucketSize(0),
    m_ulBucketSizeHasBeenSet(false),
    m_ulRatePolicyHasBeenSet(false),
    m_dlRate(0),
    m_dlRateHasBeenSet(false),
    m_dlBucketSize(0),
    m_dlBucketSizeHasBeenSet(false),
    m_dlRatePolicyHasBeenSet(false),
    m_addGwMetadata(false),
    m_addGwMetadataHasBeenSet(false),
    m_devStatusReqFreq(0),
    m_devStatusReqFreqHasBeenSet(false),
    m_reportDevStatusBattery(false),
    m_reportDevStatusBatteryHasBeenSet(false),
    m_reportDevStatusMargin(false),
    m_reportDevStatusMarginHasBeenSet(false),
    m_drMin(0),
    m_drMinHasBeenSet(false),
    m_drMax(0),
    m_drMaxHasBeenSet(false),
    m_channelMaskHasBeenSet(false),
    m_prAllowed(false),
    m_prAllowedHasBeenSet(false),
    m_hrAllowed(false),
    m_hrAllowedHasBeenSet(false),
    m_raAllowed(false),
    m_raAllowedHasBeenSet(false),
    m_nwkGeoLoc(false),
    m_nwkGeoLocHasBeenSet(false),
    m_targetPer(0),
    m_targetPerHasBeenSet(false),
    m_minGwDiversity(0),
    m_minGwDiversityHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANGetServiceProfileInfo& LoRaWANGetServiceProfileInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UlRate"))
  {
    m_ulRate = jsonValue.GetInteger("UlRate");

    m_ulRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UlBucketSize"))
  {
    m_ulBucketSize = jsonValue.GetInteger("UlBucketSize");

    m_ulBucketSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UlRatePolicy"))
  {
    m_ulRatePolicy = jsonValue.GetString("UlRatePolicy");

    m_ulRatePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DlRate"))
  {
    m_dlRate = jsonValue.GetInteger("DlRate");

    m_dlRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DlBucketSize"))
  {
    m_dlBucketSize = jsonValue.GetInteger("DlBucketSize");

    m_dlBucketSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DlRatePolicy"))
  {
    m_dlRatePolicy = jsonValue.GetString("DlRatePolicy");

    m_dlRatePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddGwMetadata"))
  {
    m_addGwMetadata = jsonValue.GetBool("AddGwMetadata");

    m_addGwMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DevStatusReqFreq"))
  {
    m_devStatusReqFreq = jsonValue.GetInteger("DevStatusReqFreq");

    m_devStatusReqFreqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportDevStatusBattery"))
  {
    m_reportDevStatusBattery = jsonValue.GetBool("ReportDevStatusBattery");

    m_reportDevStatusBatteryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportDevStatusMargin"))
  {
    m_reportDevStatusMargin = jsonValue.GetBool("ReportDevStatusMargin");

    m_reportDevStatusMarginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DrMin"))
  {
    m_drMin = jsonValue.GetInteger("DrMin");

    m_drMinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DrMax"))
  {
    m_drMax = jsonValue.GetInteger("DrMax");

    m_drMaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelMask"))
  {
    m_channelMask = jsonValue.GetString("ChannelMask");

    m_channelMaskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrAllowed"))
  {
    m_prAllowed = jsonValue.GetBool("PrAllowed");

    m_prAllowedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HrAllowed"))
  {
    m_hrAllowed = jsonValue.GetBool("HrAllowed");

    m_hrAllowedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RaAllowed"))
  {
    m_raAllowed = jsonValue.GetBool("RaAllowed");

    m_raAllowedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NwkGeoLoc"))
  {
    m_nwkGeoLoc = jsonValue.GetBool("NwkGeoLoc");

    m_nwkGeoLocHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetPer"))
  {
    m_targetPer = jsonValue.GetInteger("TargetPer");

    m_targetPerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinGwDiversity"))
  {
    m_minGwDiversity = jsonValue.GetInteger("MinGwDiversity");

    m_minGwDiversityHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANGetServiceProfileInfo::Jsonize() const
{
  JsonValue payload;

  if(m_ulRateHasBeenSet)
  {
   payload.WithInteger("UlRate", m_ulRate);

  }

  if(m_ulBucketSizeHasBeenSet)
  {
   payload.WithInteger("UlBucketSize", m_ulBucketSize);

  }

  if(m_ulRatePolicyHasBeenSet)
  {
   payload.WithString("UlRatePolicy", m_ulRatePolicy);

  }

  if(m_dlRateHasBeenSet)
  {
   payload.WithInteger("DlRate", m_dlRate);

  }

  if(m_dlBucketSizeHasBeenSet)
  {
   payload.WithInteger("DlBucketSize", m_dlBucketSize);

  }

  if(m_dlRatePolicyHasBeenSet)
  {
   payload.WithString("DlRatePolicy", m_dlRatePolicy);

  }

  if(m_addGwMetadataHasBeenSet)
  {
   payload.WithBool("AddGwMetadata", m_addGwMetadata);

  }

  if(m_devStatusReqFreqHasBeenSet)
  {
   payload.WithInteger("DevStatusReqFreq", m_devStatusReqFreq);

  }

  if(m_reportDevStatusBatteryHasBeenSet)
  {
   payload.WithBool("ReportDevStatusBattery", m_reportDevStatusBattery);

  }

  if(m_reportDevStatusMarginHasBeenSet)
  {
   payload.WithBool("ReportDevStatusMargin", m_reportDevStatusMargin);

  }

  if(m_drMinHasBeenSet)
  {
   payload.WithInteger("DrMin", m_drMin);

  }

  if(m_drMaxHasBeenSet)
  {
   payload.WithInteger("DrMax", m_drMax);

  }

  if(m_channelMaskHasBeenSet)
  {
   payload.WithString("ChannelMask", m_channelMask);

  }

  if(m_prAllowedHasBeenSet)
  {
   payload.WithBool("PrAllowed", m_prAllowed);

  }

  if(m_hrAllowedHasBeenSet)
  {
   payload.WithBool("HrAllowed", m_hrAllowed);

  }

  if(m_raAllowedHasBeenSet)
  {
   payload.WithBool("RaAllowed", m_raAllowed);

  }

  if(m_nwkGeoLocHasBeenSet)
  {
   payload.WithBool("NwkGeoLoc", m_nwkGeoLoc);

  }

  if(m_targetPerHasBeenSet)
  {
   payload.WithInteger("TargetPer", m_targetPer);

  }

  if(m_minGwDiversityHasBeenSet)
  {
   payload.WithInteger("MinGwDiversity", m_minGwDiversity);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
