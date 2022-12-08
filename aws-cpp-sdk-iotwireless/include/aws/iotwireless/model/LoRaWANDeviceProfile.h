/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWANDeviceProfile object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANDeviceProfile">AWS
   * API Reference</a></p>
   */
  class LoRaWANDeviceProfile
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANDeviceProfile();
    AWS_IOTWIRELESS_API LoRaWANDeviceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANDeviceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SupportsClassB value.</p>
     */
    inline bool GetSupportsClassB() const{ return m_supportsClassB; }

    /**
     * <p>The SupportsClassB value.</p>
     */
    inline bool SupportsClassBHasBeenSet() const { return m_supportsClassBHasBeenSet; }

    /**
     * <p>The SupportsClassB value.</p>
     */
    inline void SetSupportsClassB(bool value) { m_supportsClassBHasBeenSet = true; m_supportsClassB = value; }

    /**
     * <p>The SupportsClassB value.</p>
     */
    inline LoRaWANDeviceProfile& WithSupportsClassB(bool value) { SetSupportsClassB(value); return *this;}


    /**
     * <p>The ClassBTimeout value.</p>
     */
    inline int GetClassBTimeout() const{ return m_classBTimeout; }

    /**
     * <p>The ClassBTimeout value.</p>
     */
    inline bool ClassBTimeoutHasBeenSet() const { return m_classBTimeoutHasBeenSet; }

    /**
     * <p>The ClassBTimeout value.</p>
     */
    inline void SetClassBTimeout(int value) { m_classBTimeoutHasBeenSet = true; m_classBTimeout = value; }

    /**
     * <p>The ClassBTimeout value.</p>
     */
    inline LoRaWANDeviceProfile& WithClassBTimeout(int value) { SetClassBTimeout(value); return *this;}


    /**
     * <p>The PingSlotPeriod value.</p>
     */
    inline int GetPingSlotPeriod() const{ return m_pingSlotPeriod; }

    /**
     * <p>The PingSlotPeriod value.</p>
     */
    inline bool PingSlotPeriodHasBeenSet() const { return m_pingSlotPeriodHasBeenSet; }

    /**
     * <p>The PingSlotPeriod value.</p>
     */
    inline void SetPingSlotPeriod(int value) { m_pingSlotPeriodHasBeenSet = true; m_pingSlotPeriod = value; }

    /**
     * <p>The PingSlotPeriod value.</p>
     */
    inline LoRaWANDeviceProfile& WithPingSlotPeriod(int value) { SetPingSlotPeriod(value); return *this;}


    /**
     * <p>The PingSlotDR value.</p>
     */
    inline int GetPingSlotDr() const{ return m_pingSlotDr; }

    /**
     * <p>The PingSlotDR value.</p>
     */
    inline bool PingSlotDrHasBeenSet() const { return m_pingSlotDrHasBeenSet; }

    /**
     * <p>The PingSlotDR value.</p>
     */
    inline void SetPingSlotDr(int value) { m_pingSlotDrHasBeenSet = true; m_pingSlotDr = value; }

    /**
     * <p>The PingSlotDR value.</p>
     */
    inline LoRaWANDeviceProfile& WithPingSlotDr(int value) { SetPingSlotDr(value); return *this;}


    /**
     * <p>The PingSlotFreq value.</p>
     */
    inline int GetPingSlotFreq() const{ return m_pingSlotFreq; }

    /**
     * <p>The PingSlotFreq value.</p>
     */
    inline bool PingSlotFreqHasBeenSet() const { return m_pingSlotFreqHasBeenSet; }

    /**
     * <p>The PingSlotFreq value.</p>
     */
    inline void SetPingSlotFreq(int value) { m_pingSlotFreqHasBeenSet = true; m_pingSlotFreq = value; }

    /**
     * <p>The PingSlotFreq value.</p>
     */
    inline LoRaWANDeviceProfile& WithPingSlotFreq(int value) { SetPingSlotFreq(value); return *this;}


    /**
     * <p>The SupportsClassC value.</p>
     */
    inline bool GetSupportsClassC() const{ return m_supportsClassC; }

    /**
     * <p>The SupportsClassC value.</p>
     */
    inline bool SupportsClassCHasBeenSet() const { return m_supportsClassCHasBeenSet; }

    /**
     * <p>The SupportsClassC value.</p>
     */
    inline void SetSupportsClassC(bool value) { m_supportsClassCHasBeenSet = true; m_supportsClassC = value; }

    /**
     * <p>The SupportsClassC value.</p>
     */
    inline LoRaWANDeviceProfile& WithSupportsClassC(bool value) { SetSupportsClassC(value); return *this;}


    /**
     * <p>The ClassCTimeout value.</p>
     */
    inline int GetClassCTimeout() const{ return m_classCTimeout; }

    /**
     * <p>The ClassCTimeout value.</p>
     */
    inline bool ClassCTimeoutHasBeenSet() const { return m_classCTimeoutHasBeenSet; }

    /**
     * <p>The ClassCTimeout value.</p>
     */
    inline void SetClassCTimeout(int value) { m_classCTimeoutHasBeenSet = true; m_classCTimeout = value; }

    /**
     * <p>The ClassCTimeout value.</p>
     */
    inline LoRaWANDeviceProfile& WithClassCTimeout(int value) { SetClassCTimeout(value); return *this;}


    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline const Aws::String& GetMacVersion() const{ return m_macVersion; }

    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline bool MacVersionHasBeenSet() const { return m_macVersionHasBeenSet; }

    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline void SetMacVersion(const Aws::String& value) { m_macVersionHasBeenSet = true; m_macVersion = value; }

    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline void SetMacVersion(Aws::String&& value) { m_macVersionHasBeenSet = true; m_macVersion = std::move(value); }

    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline void SetMacVersion(const char* value) { m_macVersionHasBeenSet = true; m_macVersion.assign(value); }

    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline LoRaWANDeviceProfile& WithMacVersion(const Aws::String& value) { SetMacVersion(value); return *this;}

    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline LoRaWANDeviceProfile& WithMacVersion(Aws::String&& value) { SetMacVersion(std::move(value)); return *this;}

    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline LoRaWANDeviceProfile& WithMacVersion(const char* value) { SetMacVersion(value); return *this;}


    /**
     * <p>The version of regional parameters.</p>
     */
    inline const Aws::String& GetRegParamsRevision() const{ return m_regParamsRevision; }

    /**
     * <p>The version of regional parameters.</p>
     */
    inline bool RegParamsRevisionHasBeenSet() const { return m_regParamsRevisionHasBeenSet; }

    /**
     * <p>The version of regional parameters.</p>
     */
    inline void SetRegParamsRevision(const Aws::String& value) { m_regParamsRevisionHasBeenSet = true; m_regParamsRevision = value; }

    /**
     * <p>The version of regional parameters.</p>
     */
    inline void SetRegParamsRevision(Aws::String&& value) { m_regParamsRevisionHasBeenSet = true; m_regParamsRevision = std::move(value); }

    /**
     * <p>The version of regional parameters.</p>
     */
    inline void SetRegParamsRevision(const char* value) { m_regParamsRevisionHasBeenSet = true; m_regParamsRevision.assign(value); }

    /**
     * <p>The version of regional parameters.</p>
     */
    inline LoRaWANDeviceProfile& WithRegParamsRevision(const Aws::String& value) { SetRegParamsRevision(value); return *this;}

    /**
     * <p>The version of regional parameters.</p>
     */
    inline LoRaWANDeviceProfile& WithRegParamsRevision(Aws::String&& value) { SetRegParamsRevision(std::move(value)); return *this;}

    /**
     * <p>The version of regional parameters.</p>
     */
    inline LoRaWANDeviceProfile& WithRegParamsRevision(const char* value) { SetRegParamsRevision(value); return *this;}


    /**
     * <p>The RXDelay1 value.</p>
     */
    inline int GetRxDelay1() const{ return m_rxDelay1; }

    /**
     * <p>The RXDelay1 value.</p>
     */
    inline bool RxDelay1HasBeenSet() const { return m_rxDelay1HasBeenSet; }

    /**
     * <p>The RXDelay1 value.</p>
     */
    inline void SetRxDelay1(int value) { m_rxDelay1HasBeenSet = true; m_rxDelay1 = value; }

    /**
     * <p>The RXDelay1 value.</p>
     */
    inline LoRaWANDeviceProfile& WithRxDelay1(int value) { SetRxDelay1(value); return *this;}


    /**
     * <p>The RXDROffset1 value.</p>
     */
    inline int GetRxDrOffset1() const{ return m_rxDrOffset1; }

    /**
     * <p>The RXDROffset1 value.</p>
     */
    inline bool RxDrOffset1HasBeenSet() const { return m_rxDrOffset1HasBeenSet; }

    /**
     * <p>The RXDROffset1 value.</p>
     */
    inline void SetRxDrOffset1(int value) { m_rxDrOffset1HasBeenSet = true; m_rxDrOffset1 = value; }

    /**
     * <p>The RXDROffset1 value.</p>
     */
    inline LoRaWANDeviceProfile& WithRxDrOffset1(int value) { SetRxDrOffset1(value); return *this;}


    /**
     * <p>The RXDataRate2 value.</p>
     */
    inline int GetRxDataRate2() const{ return m_rxDataRate2; }

    /**
     * <p>The RXDataRate2 value.</p>
     */
    inline bool RxDataRate2HasBeenSet() const { return m_rxDataRate2HasBeenSet; }

    /**
     * <p>The RXDataRate2 value.</p>
     */
    inline void SetRxDataRate2(int value) { m_rxDataRate2HasBeenSet = true; m_rxDataRate2 = value; }

    /**
     * <p>The RXDataRate2 value.</p>
     */
    inline LoRaWANDeviceProfile& WithRxDataRate2(int value) { SetRxDataRate2(value); return *this;}


    /**
     * <p>The RXFreq2 value.</p>
     */
    inline int GetRxFreq2() const{ return m_rxFreq2; }

    /**
     * <p>The RXFreq2 value.</p>
     */
    inline bool RxFreq2HasBeenSet() const { return m_rxFreq2HasBeenSet; }

    /**
     * <p>The RXFreq2 value.</p>
     */
    inline void SetRxFreq2(int value) { m_rxFreq2HasBeenSet = true; m_rxFreq2 = value; }

    /**
     * <p>The RXFreq2 value.</p>
     */
    inline LoRaWANDeviceProfile& WithRxFreq2(int value) { SetRxFreq2(value); return *this;}


    /**
     * <p>The list of values that make up the FactoryPresetFreqs value.</p>
     */
    inline const Aws::Vector<int>& GetFactoryPresetFreqsList() const{ return m_factoryPresetFreqsList; }

    /**
     * <p>The list of values that make up the FactoryPresetFreqs value.</p>
     */
    inline bool FactoryPresetFreqsListHasBeenSet() const { return m_factoryPresetFreqsListHasBeenSet; }

    /**
     * <p>The list of values that make up the FactoryPresetFreqs value.</p>
     */
    inline void SetFactoryPresetFreqsList(const Aws::Vector<int>& value) { m_factoryPresetFreqsListHasBeenSet = true; m_factoryPresetFreqsList = value; }

    /**
     * <p>The list of values that make up the FactoryPresetFreqs value.</p>
     */
    inline void SetFactoryPresetFreqsList(Aws::Vector<int>&& value) { m_factoryPresetFreqsListHasBeenSet = true; m_factoryPresetFreqsList = std::move(value); }

    /**
     * <p>The list of values that make up the FactoryPresetFreqs value.</p>
     */
    inline LoRaWANDeviceProfile& WithFactoryPresetFreqsList(const Aws::Vector<int>& value) { SetFactoryPresetFreqsList(value); return *this;}

    /**
     * <p>The list of values that make up the FactoryPresetFreqs value.</p>
     */
    inline LoRaWANDeviceProfile& WithFactoryPresetFreqsList(Aws::Vector<int>&& value) { SetFactoryPresetFreqsList(std::move(value)); return *this;}

    /**
     * <p>The list of values that make up the FactoryPresetFreqs value.</p>
     */
    inline LoRaWANDeviceProfile& AddFactoryPresetFreqsList(int value) { m_factoryPresetFreqsListHasBeenSet = true; m_factoryPresetFreqsList.push_back(value); return *this; }


    /**
     * <p>The MaxEIRP value.</p>
     */
    inline int GetMaxEirp() const{ return m_maxEirp; }

    /**
     * <p>The MaxEIRP value.</p>
     */
    inline bool MaxEirpHasBeenSet() const { return m_maxEirpHasBeenSet; }

    /**
     * <p>The MaxEIRP value.</p>
     */
    inline void SetMaxEirp(int value) { m_maxEirpHasBeenSet = true; m_maxEirp = value; }

    /**
     * <p>The MaxEIRP value.</p>
     */
    inline LoRaWANDeviceProfile& WithMaxEirp(int value) { SetMaxEirp(value); return *this;}


    /**
     * <p>The MaxDutyCycle value.</p>
     */
    inline int GetMaxDutyCycle() const{ return m_maxDutyCycle; }

    /**
     * <p>The MaxDutyCycle value.</p>
     */
    inline bool MaxDutyCycleHasBeenSet() const { return m_maxDutyCycleHasBeenSet; }

    /**
     * <p>The MaxDutyCycle value.</p>
     */
    inline void SetMaxDutyCycle(int value) { m_maxDutyCycleHasBeenSet = true; m_maxDutyCycle = value; }

    /**
     * <p>The MaxDutyCycle value.</p>
     */
    inline LoRaWANDeviceProfile& WithMaxDutyCycle(int value) { SetMaxDutyCycle(value); return *this;}


    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline const Aws::String& GetRfRegion() const{ return m_rfRegion; }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline void SetRfRegion(const Aws::String& value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline void SetRfRegion(Aws::String&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::move(value); }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline void SetRfRegion(const char* value) { m_rfRegionHasBeenSet = true; m_rfRegion.assign(value); }

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline LoRaWANDeviceProfile& WithRfRegion(const Aws::String& value) { SetRfRegion(value); return *this;}

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline LoRaWANDeviceProfile& WithRfRegion(Aws::String&& value) { SetRfRegion(std::move(value)); return *this;}

    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline LoRaWANDeviceProfile& WithRfRegion(const char* value) { SetRfRegion(value); return *this;}


    /**
     * <p>The SupportsJoin value.</p>
     */
    inline bool GetSupportsJoin() const{ return m_supportsJoin; }

    /**
     * <p>The SupportsJoin value.</p>
     */
    inline bool SupportsJoinHasBeenSet() const { return m_supportsJoinHasBeenSet; }

    /**
     * <p>The SupportsJoin value.</p>
     */
    inline void SetSupportsJoin(bool value) { m_supportsJoinHasBeenSet = true; m_supportsJoin = value; }

    /**
     * <p>The SupportsJoin value.</p>
     */
    inline LoRaWANDeviceProfile& WithSupportsJoin(bool value) { SetSupportsJoin(value); return *this;}


    /**
     * <p>The Supports32BitFCnt value.</p>
     */
    inline bool GetSupports32BitFCnt() const{ return m_supports32BitFCnt; }

    /**
     * <p>The Supports32BitFCnt value.</p>
     */
    inline bool Supports32BitFCntHasBeenSet() const { return m_supports32BitFCntHasBeenSet; }

    /**
     * <p>The Supports32BitFCnt value.</p>
     */
    inline void SetSupports32BitFCnt(bool value) { m_supports32BitFCntHasBeenSet = true; m_supports32BitFCnt = value; }

    /**
     * <p>The Supports32BitFCnt value.</p>
     */
    inline LoRaWANDeviceProfile& WithSupports32BitFCnt(bool value) { SetSupports32BitFCnt(value); return *this;}

  private:

    bool m_supportsClassB;
    bool m_supportsClassBHasBeenSet = false;

    int m_classBTimeout;
    bool m_classBTimeoutHasBeenSet = false;

    int m_pingSlotPeriod;
    bool m_pingSlotPeriodHasBeenSet = false;

    int m_pingSlotDr;
    bool m_pingSlotDrHasBeenSet = false;

    int m_pingSlotFreq;
    bool m_pingSlotFreqHasBeenSet = false;

    bool m_supportsClassC;
    bool m_supportsClassCHasBeenSet = false;

    int m_classCTimeout;
    bool m_classCTimeoutHasBeenSet = false;

    Aws::String m_macVersion;
    bool m_macVersionHasBeenSet = false;

    Aws::String m_regParamsRevision;
    bool m_regParamsRevisionHasBeenSet = false;

    int m_rxDelay1;
    bool m_rxDelay1HasBeenSet = false;

    int m_rxDrOffset1;
    bool m_rxDrOffset1HasBeenSet = false;

    int m_rxDataRate2;
    bool m_rxDataRate2HasBeenSet = false;

    int m_rxFreq2;
    bool m_rxFreq2HasBeenSet = false;

    Aws::Vector<int> m_factoryPresetFreqsList;
    bool m_factoryPresetFreqsListHasBeenSet = false;

    int m_maxEirp;
    bool m_maxEirpHasBeenSet = false;

    int m_maxDutyCycle;
    bool m_maxDutyCycleHasBeenSet = false;

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    bool m_supportsJoin;
    bool m_supportsJoinHasBeenSet = false;

    bool m_supports32BitFCnt;
    bool m_supports32BitFCntHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
