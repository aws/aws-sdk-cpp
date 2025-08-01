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

LoRaWANGetServiceProfileInfo::LoRaWANGetServiceProfileInfo(JsonView jsonValue)
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
  if(jsonValue.ValueExists("TxPowerIndexMin"))
  {
    m_txPowerIndexMin = jsonValue.GetInteger("TxPowerIndexMin");
    m_txPowerIndexMinHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TxPowerIndexMax"))
  {
    m_txPowerIndexMax = jsonValue.GetInteger("TxPowerIndexMax");
    m_txPowerIndexMaxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NbTransMin"))
  {
    m_nbTransMin = jsonValue.GetInteger("NbTransMin");
    m_nbTransMinHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NbTransMax"))
  {
    m_nbTransMax = jsonValue.GetInteger("NbTransMax");
    m_nbTransMaxHasBeenSet = true;
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

  if(m_txPowerIndexMinHasBeenSet)
  {
   payload.WithInteger("TxPowerIndexMin", m_txPowerIndexMin);

  }

  if(m_txPowerIndexMaxHasBeenSet)
  {
   payload.WithInteger("TxPowerIndexMax", m_txPowerIndexMax);

  }

  if(m_nbTransMinHasBeenSet)
  {
   payload.WithInteger("NbTransMin", m_nbTransMin);

  }

  if(m_nbTransMaxHasBeenSet)
  {
   payload.WithInteger("NbTransMax", m_nbTransMax);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
