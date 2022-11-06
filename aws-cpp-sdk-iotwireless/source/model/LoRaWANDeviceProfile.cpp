/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANDeviceProfile.h>
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

LoRaWANDeviceProfile::LoRaWANDeviceProfile() : 
    m_supportsClassB(false),
    m_supportsClassBHasBeenSet(false),
    m_classBTimeout(0),
    m_classBTimeoutHasBeenSet(false),
    m_pingSlotPeriod(0),
    m_pingSlotPeriodHasBeenSet(false),
    m_pingSlotDr(0),
    m_pingSlotDrHasBeenSet(false),
    m_pingSlotFreq(0),
    m_pingSlotFreqHasBeenSet(false),
    m_supportsClassC(false),
    m_supportsClassCHasBeenSet(false),
    m_classCTimeout(0),
    m_classCTimeoutHasBeenSet(false),
    m_macVersionHasBeenSet(false),
    m_regParamsRevisionHasBeenSet(false),
    m_rxDelay1(0),
    m_rxDelay1HasBeenSet(false),
    m_rxDrOffset1(0),
    m_rxDrOffset1HasBeenSet(false),
    m_rxDataRate2(0),
    m_rxDataRate2HasBeenSet(false),
    m_rxFreq2(0),
    m_rxFreq2HasBeenSet(false),
    m_factoryPresetFreqsListHasBeenSet(false),
    m_maxEirp(0),
    m_maxEirpHasBeenSet(false),
    m_maxDutyCycle(0),
    m_maxDutyCycleHasBeenSet(false),
    m_rfRegionHasBeenSet(false),
    m_supportsJoin(false),
    m_supportsJoinHasBeenSet(false),
    m_supports32BitFCnt(false),
    m_supports32BitFCntHasBeenSet(false)
{
}

LoRaWANDeviceProfile::LoRaWANDeviceProfile(JsonView jsonValue) : 
    m_supportsClassB(false),
    m_supportsClassBHasBeenSet(false),
    m_classBTimeout(0),
    m_classBTimeoutHasBeenSet(false),
    m_pingSlotPeriod(0),
    m_pingSlotPeriodHasBeenSet(false),
    m_pingSlotDr(0),
    m_pingSlotDrHasBeenSet(false),
    m_pingSlotFreq(0),
    m_pingSlotFreqHasBeenSet(false),
    m_supportsClassC(false),
    m_supportsClassCHasBeenSet(false),
    m_classCTimeout(0),
    m_classCTimeoutHasBeenSet(false),
    m_macVersionHasBeenSet(false),
    m_regParamsRevisionHasBeenSet(false),
    m_rxDelay1(0),
    m_rxDelay1HasBeenSet(false),
    m_rxDrOffset1(0),
    m_rxDrOffset1HasBeenSet(false),
    m_rxDataRate2(0),
    m_rxDataRate2HasBeenSet(false),
    m_rxFreq2(0),
    m_rxFreq2HasBeenSet(false),
    m_factoryPresetFreqsListHasBeenSet(false),
    m_maxEirp(0),
    m_maxEirpHasBeenSet(false),
    m_maxDutyCycle(0),
    m_maxDutyCycleHasBeenSet(false),
    m_rfRegionHasBeenSet(false),
    m_supportsJoin(false),
    m_supportsJoinHasBeenSet(false),
    m_supports32BitFCnt(false),
    m_supports32BitFCntHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANDeviceProfile& LoRaWANDeviceProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SupportsClassB"))
  {
    m_supportsClassB = jsonValue.GetBool("SupportsClassB");

    m_supportsClassBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClassBTimeout"))
  {
    m_classBTimeout = jsonValue.GetInteger("ClassBTimeout");

    m_classBTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PingSlotPeriod"))
  {
    m_pingSlotPeriod = jsonValue.GetInteger("PingSlotPeriod");

    m_pingSlotPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PingSlotDr"))
  {
    m_pingSlotDr = jsonValue.GetInteger("PingSlotDr");

    m_pingSlotDrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PingSlotFreq"))
  {
    m_pingSlotFreq = jsonValue.GetInteger("PingSlotFreq");

    m_pingSlotFreqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportsClassC"))
  {
    m_supportsClassC = jsonValue.GetBool("SupportsClassC");

    m_supportsClassCHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClassCTimeout"))
  {
    m_classCTimeout = jsonValue.GetInteger("ClassCTimeout");

    m_classCTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MacVersion"))
  {
    m_macVersion = jsonValue.GetString("MacVersion");

    m_macVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegParamsRevision"))
  {
    m_regParamsRevision = jsonValue.GetString("RegParamsRevision");

    m_regParamsRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RxDelay1"))
  {
    m_rxDelay1 = jsonValue.GetInteger("RxDelay1");

    m_rxDelay1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("RxDrOffset1"))
  {
    m_rxDrOffset1 = jsonValue.GetInteger("RxDrOffset1");

    m_rxDrOffset1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("RxDataRate2"))
  {
    m_rxDataRate2 = jsonValue.GetInteger("RxDataRate2");

    m_rxDataRate2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("RxFreq2"))
  {
    m_rxFreq2 = jsonValue.GetInteger("RxFreq2");

    m_rxFreq2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("FactoryPresetFreqsList"))
  {
    Aws::Utils::Array<JsonView> factoryPresetFreqsListJsonList = jsonValue.GetArray("FactoryPresetFreqsList");
    for(unsigned factoryPresetFreqsListIndex = 0; factoryPresetFreqsListIndex < factoryPresetFreqsListJsonList.GetLength(); ++factoryPresetFreqsListIndex)
    {
      m_factoryPresetFreqsList.push_back(factoryPresetFreqsListJsonList[factoryPresetFreqsListIndex].AsInteger());
    }
    m_factoryPresetFreqsListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxEirp"))
  {
    m_maxEirp = jsonValue.GetInteger("MaxEirp");

    m_maxEirpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxDutyCycle"))
  {
    m_maxDutyCycle = jsonValue.GetInteger("MaxDutyCycle");

    m_maxDutyCycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RfRegion"))
  {
    m_rfRegion = jsonValue.GetString("RfRegion");

    m_rfRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportsJoin"))
  {
    m_supportsJoin = jsonValue.GetBool("SupportsJoin");

    m_supportsJoinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Supports32BitFCnt"))
  {
    m_supports32BitFCnt = jsonValue.GetBool("Supports32BitFCnt");

    m_supports32BitFCntHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANDeviceProfile::Jsonize() const
{
  JsonValue payload;

  if(m_supportsClassBHasBeenSet)
  {
   payload.WithBool("SupportsClassB", m_supportsClassB);

  }

  if(m_classBTimeoutHasBeenSet)
  {
   payload.WithInteger("ClassBTimeout", m_classBTimeout);

  }

  if(m_pingSlotPeriodHasBeenSet)
  {
   payload.WithInteger("PingSlotPeriod", m_pingSlotPeriod);

  }

  if(m_pingSlotDrHasBeenSet)
  {
   payload.WithInteger("PingSlotDr", m_pingSlotDr);

  }

  if(m_pingSlotFreqHasBeenSet)
  {
   payload.WithInteger("PingSlotFreq", m_pingSlotFreq);

  }

  if(m_supportsClassCHasBeenSet)
  {
   payload.WithBool("SupportsClassC", m_supportsClassC);

  }

  if(m_classCTimeoutHasBeenSet)
  {
   payload.WithInteger("ClassCTimeout", m_classCTimeout);

  }

  if(m_macVersionHasBeenSet)
  {
   payload.WithString("MacVersion", m_macVersion);

  }

  if(m_regParamsRevisionHasBeenSet)
  {
   payload.WithString("RegParamsRevision", m_regParamsRevision);

  }

  if(m_rxDelay1HasBeenSet)
  {
   payload.WithInteger("RxDelay1", m_rxDelay1);

  }

  if(m_rxDrOffset1HasBeenSet)
  {
   payload.WithInteger("RxDrOffset1", m_rxDrOffset1);

  }

  if(m_rxDataRate2HasBeenSet)
  {
   payload.WithInteger("RxDataRate2", m_rxDataRate2);

  }

  if(m_rxFreq2HasBeenSet)
  {
   payload.WithInteger("RxFreq2", m_rxFreq2);

  }

  if(m_factoryPresetFreqsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> factoryPresetFreqsListJsonList(m_factoryPresetFreqsList.size());
   for(unsigned factoryPresetFreqsListIndex = 0; factoryPresetFreqsListIndex < factoryPresetFreqsListJsonList.GetLength(); ++factoryPresetFreqsListIndex)
   {
     factoryPresetFreqsListJsonList[factoryPresetFreqsListIndex].AsInteger(m_factoryPresetFreqsList[factoryPresetFreqsListIndex]);
   }
   payload.WithArray("FactoryPresetFreqsList", std::move(factoryPresetFreqsListJsonList));

  }

  if(m_maxEirpHasBeenSet)
  {
   payload.WithInteger("MaxEirp", m_maxEirp);

  }

  if(m_maxDutyCycleHasBeenSet)
  {
   payload.WithInteger("MaxDutyCycle", m_maxDutyCycle);

  }

  if(m_rfRegionHasBeenSet)
  {
   payload.WithString("RfRegion", m_rfRegion);

  }

  if(m_supportsJoinHasBeenSet)
  {
   payload.WithBool("SupportsJoin", m_supportsJoin);

  }

  if(m_supports32BitFCntHasBeenSet)
  {
   payload.WithBool("Supports32BitFCnt", m_supports32BitFCnt);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
