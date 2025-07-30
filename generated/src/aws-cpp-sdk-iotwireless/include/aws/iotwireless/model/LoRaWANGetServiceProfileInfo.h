/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>LoRaWANGetServiceProfileInfo object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANGetServiceProfileInfo">AWS
   * API Reference</a></p>
   */
  class LoRaWANGetServiceProfileInfo
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANGetServiceProfileInfo() = default;
    AWS_IOTWIRELESS_API LoRaWANGetServiceProfileInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANGetServiceProfileInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ULRate value.</p>
     */
    inline int GetUlRate() const { return m_ulRate; }
    inline bool UlRateHasBeenSet() const { return m_ulRateHasBeenSet; }
    inline void SetUlRate(int value) { m_ulRateHasBeenSet = true; m_ulRate = value; }
    inline LoRaWANGetServiceProfileInfo& WithUlRate(int value) { SetUlRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ULBucketSize value.</p>
     */
    inline int GetUlBucketSize() const { return m_ulBucketSize; }
    inline bool UlBucketSizeHasBeenSet() const { return m_ulBucketSizeHasBeenSet; }
    inline void SetUlBucketSize(int value) { m_ulBucketSizeHasBeenSet = true; m_ulBucketSize = value; }
    inline LoRaWANGetServiceProfileInfo& WithUlBucketSize(int value) { SetUlBucketSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline const Aws::String& GetUlRatePolicy() const { return m_ulRatePolicy; }
    inline bool UlRatePolicyHasBeenSet() const { return m_ulRatePolicyHasBeenSet; }
    template<typename UlRatePolicyT = Aws::String>
    void SetUlRatePolicy(UlRatePolicyT&& value) { m_ulRatePolicyHasBeenSet = true; m_ulRatePolicy = std::forward<UlRatePolicyT>(value); }
    template<typename UlRatePolicyT = Aws::String>
    LoRaWANGetServiceProfileInfo& WithUlRatePolicy(UlRatePolicyT&& value) { SetUlRatePolicy(std::forward<UlRatePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DLRate value.</p>
     */
    inline int GetDlRate() const { return m_dlRate; }
    inline bool DlRateHasBeenSet() const { return m_dlRateHasBeenSet; }
    inline void SetDlRate(int value) { m_dlRateHasBeenSet = true; m_dlRate = value; }
    inline LoRaWANGetServiceProfileInfo& WithDlRate(int value) { SetDlRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DLBucketSize value.</p>
     */
    inline int GetDlBucketSize() const { return m_dlBucketSize; }
    inline bool DlBucketSizeHasBeenSet() const { return m_dlBucketSizeHasBeenSet; }
    inline void SetDlBucketSize(int value) { m_dlBucketSizeHasBeenSet = true; m_dlBucketSize = value; }
    inline LoRaWANGetServiceProfileInfo& WithDlBucketSize(int value) { SetDlBucketSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline const Aws::String& GetDlRatePolicy() const { return m_dlRatePolicy; }
    inline bool DlRatePolicyHasBeenSet() const { return m_dlRatePolicyHasBeenSet; }
    template<typename DlRatePolicyT = Aws::String>
    void SetDlRatePolicy(DlRatePolicyT&& value) { m_dlRatePolicyHasBeenSet = true; m_dlRatePolicy = std::forward<DlRatePolicyT>(value); }
    template<typename DlRatePolicyT = Aws::String>
    LoRaWANGetServiceProfileInfo& WithDlRatePolicy(DlRatePolicyT&& value) { SetDlRatePolicy(std::forward<DlRatePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline bool GetAddGwMetadata() const { return m_addGwMetadata; }
    inline bool AddGwMetadataHasBeenSet() const { return m_addGwMetadataHasBeenSet; }
    inline void SetAddGwMetadata(bool value) { m_addGwMetadataHasBeenSet = true; m_addGwMetadata = value; }
    inline LoRaWANGetServiceProfileInfo& WithAddGwMetadata(bool value) { SetAddGwMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DevStatusReqFreq value.</p>
     */
    inline int GetDevStatusReqFreq() const { return m_devStatusReqFreq; }
    inline bool DevStatusReqFreqHasBeenSet() const { return m_devStatusReqFreqHasBeenSet; }
    inline void SetDevStatusReqFreq(int value) { m_devStatusReqFreqHasBeenSet = true; m_devStatusReqFreq = value; }
    inline LoRaWANGetServiceProfileInfo& WithDevStatusReqFreq(int value) { SetDevStatusReqFreq(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ReportDevStatusBattery value.</p>
     */
    inline bool GetReportDevStatusBattery() const { return m_reportDevStatusBattery; }
    inline bool ReportDevStatusBatteryHasBeenSet() const { return m_reportDevStatusBatteryHasBeenSet; }
    inline void SetReportDevStatusBattery(bool value) { m_reportDevStatusBatteryHasBeenSet = true; m_reportDevStatusBattery = value; }
    inline LoRaWANGetServiceProfileInfo& WithReportDevStatusBattery(bool value) { SetReportDevStatusBattery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ReportDevStatusMargin value.</p>
     */
    inline bool GetReportDevStatusMargin() const { return m_reportDevStatusMargin; }
    inline bool ReportDevStatusMarginHasBeenSet() const { return m_reportDevStatusMarginHasBeenSet; }
    inline void SetReportDevStatusMargin(bool value) { m_reportDevStatusMarginHasBeenSet = true; m_reportDevStatusMargin = value; }
    inline LoRaWANGetServiceProfileInfo& WithReportDevStatusMargin(bool value) { SetReportDevStatusMargin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DRMin value.</p>
     */
    inline int GetDrMin() const { return m_drMin; }
    inline bool DrMinHasBeenSet() const { return m_drMinHasBeenSet; }
    inline void SetDrMin(int value) { m_drMinHasBeenSet = true; m_drMin = value; }
    inline LoRaWANGetServiceProfileInfo& WithDrMin(int value) { SetDrMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DRMax value.</p>
     */
    inline int GetDrMax() const { return m_drMax; }
    inline bool DrMaxHasBeenSet() const { return m_drMaxHasBeenSet; }
    inline void SetDrMax(int value) { m_drMaxHasBeenSet = true; m_drMax = value; }
    inline LoRaWANGetServiceProfileInfo& WithDrMax(int value) { SetDrMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ChannelMask value.</p>
     */
    inline const Aws::String& GetChannelMask() const { return m_channelMask; }
    inline bool ChannelMaskHasBeenSet() const { return m_channelMaskHasBeenSet; }
    template<typename ChannelMaskT = Aws::String>
    void SetChannelMask(ChannelMaskT&& value) { m_channelMaskHasBeenSet = true; m_channelMask = std::forward<ChannelMaskT>(value); }
    template<typename ChannelMaskT = Aws::String>
    LoRaWANGetServiceProfileInfo& WithChannelMask(ChannelMaskT&& value) { SetChannelMask(std::forward<ChannelMaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline bool GetPrAllowed() const { return m_prAllowed; }
    inline bool PrAllowedHasBeenSet() const { return m_prAllowedHasBeenSet; }
    inline void SetPrAllowed(bool value) { m_prAllowedHasBeenSet = true; m_prAllowed = value; }
    inline LoRaWANGetServiceProfileInfo& WithPrAllowed(bool value) { SetPrAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HRAllowed value that describes whether handover roaming is allowed.</p>
     */
    inline bool GetHrAllowed() const { return m_hrAllowed; }
    inline bool HrAllowedHasBeenSet() const { return m_hrAllowedHasBeenSet; }
    inline void SetHrAllowed(bool value) { m_hrAllowedHasBeenSet = true; m_hrAllowed = value; }
    inline LoRaWANGetServiceProfileInfo& WithHrAllowed(bool value) { SetHrAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline bool GetRaAllowed() const { return m_raAllowed; }
    inline bool RaAllowedHasBeenSet() const { return m_raAllowedHasBeenSet; }
    inline void SetRaAllowed(bool value) { m_raAllowedHasBeenSet = true; m_raAllowed = value; }
    inline LoRaWANGetServiceProfileInfo& WithRaAllowed(bool value) { SetRaAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NwkGeoLoc value.</p>
     */
    inline bool GetNwkGeoLoc() const { return m_nwkGeoLoc; }
    inline bool NwkGeoLocHasBeenSet() const { return m_nwkGeoLocHasBeenSet; }
    inline void SetNwkGeoLoc(bool value) { m_nwkGeoLocHasBeenSet = true; m_nwkGeoLoc = value; }
    inline LoRaWANGetServiceProfileInfo& WithNwkGeoLoc(bool value) { SetNwkGeoLoc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TargetPER value.</p>
     */
    inline int GetTargetPer() const { return m_targetPer; }
    inline bool TargetPerHasBeenSet() const { return m_targetPerHasBeenSet; }
    inline void SetTargetPer(int value) { m_targetPerHasBeenSet = true; m_targetPer = value; }
    inline LoRaWANGetServiceProfileInfo& WithTargetPer(int value) { SetTargetPer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MinGwDiversity value.</p>
     */
    inline int GetMinGwDiversity() const { return m_minGwDiversity; }
    inline bool MinGwDiversityHasBeenSet() const { return m_minGwDiversityHasBeenSet; }
    inline void SetMinGwDiversity(int value) { m_minGwDiversityHasBeenSet = true; m_minGwDiversity = value; }
    inline LoRaWANGetServiceProfileInfo& WithMinGwDiversity(int value) { SetMinGwDiversity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transmit Power Index minimum value.</p> <p>Default: <code>0</code> </p>
     */
    inline int GetTxPowerIndexMin() const { return m_txPowerIndexMin; }
    inline bool TxPowerIndexMinHasBeenSet() const { return m_txPowerIndexMinHasBeenSet; }
    inline void SetTxPowerIndexMin(int value) { m_txPowerIndexMinHasBeenSet = true; m_txPowerIndexMin = value; }
    inline LoRaWANGetServiceProfileInfo& WithTxPowerIndexMin(int value) { SetTxPowerIndexMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transmit Power Index maximum value.</p> <p>Default: <code>15</code> </p>
     */
    inline int GetTxPowerIndexMax() const { return m_txPowerIndexMax; }
    inline bool TxPowerIndexMaxHasBeenSet() const { return m_txPowerIndexMaxHasBeenSet; }
    inline void SetTxPowerIndexMax(int value) { m_txPowerIndexMaxHasBeenSet = true; m_txPowerIndexMax = value; }
    inline LoRaWANGetServiceProfileInfo& WithTxPowerIndexMax(int value) { SetTxPowerIndexMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of transmissions.</p> <p>Default: <code>0</code> </p>
     */
    inline int GetNbTransMin() const { return m_nbTransMin; }
    inline bool NbTransMinHasBeenSet() const { return m_nbTransMinHasBeenSet; }
    inline void SetNbTransMin(int value) { m_nbTransMinHasBeenSet = true; m_nbTransMin = value; }
    inline LoRaWANGetServiceProfileInfo& WithNbTransMin(int value) { SetNbTransMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of transmissions.</p> <p>Default: <code>3</code> </p>
     */
    inline int GetNbTransMax() const { return m_nbTransMax; }
    inline bool NbTransMaxHasBeenSet() const { return m_nbTransMaxHasBeenSet; }
    inline void SetNbTransMax(int value) { m_nbTransMaxHasBeenSet = true; m_nbTransMax = value; }
    inline LoRaWANGetServiceProfileInfo& WithNbTransMax(int value) { SetNbTransMax(value); return *this;}
    ///@}
  private:

    int m_ulRate{0};
    bool m_ulRateHasBeenSet = false;

    int m_ulBucketSize{0};
    bool m_ulBucketSizeHasBeenSet = false;

    Aws::String m_ulRatePolicy;
    bool m_ulRatePolicyHasBeenSet = false;

    int m_dlRate{0};
    bool m_dlRateHasBeenSet = false;

    int m_dlBucketSize{0};
    bool m_dlBucketSizeHasBeenSet = false;

    Aws::String m_dlRatePolicy;
    bool m_dlRatePolicyHasBeenSet = false;

    bool m_addGwMetadata{false};
    bool m_addGwMetadataHasBeenSet = false;

    int m_devStatusReqFreq{0};
    bool m_devStatusReqFreqHasBeenSet = false;

    bool m_reportDevStatusBattery{false};
    bool m_reportDevStatusBatteryHasBeenSet = false;

    bool m_reportDevStatusMargin{false};
    bool m_reportDevStatusMarginHasBeenSet = false;

    int m_drMin{0};
    bool m_drMinHasBeenSet = false;

    int m_drMax{0};
    bool m_drMaxHasBeenSet = false;

    Aws::String m_channelMask;
    bool m_channelMaskHasBeenSet = false;

    bool m_prAllowed{false};
    bool m_prAllowedHasBeenSet = false;

    bool m_hrAllowed{false};
    bool m_hrAllowedHasBeenSet = false;

    bool m_raAllowed{false};
    bool m_raAllowedHasBeenSet = false;

    bool m_nwkGeoLoc{false};
    bool m_nwkGeoLocHasBeenSet = false;

    int m_targetPer{0};
    bool m_targetPerHasBeenSet = false;

    int m_minGwDiversity{0};
    bool m_minGwDiversityHasBeenSet = false;

    int m_txPowerIndexMin{0};
    bool m_txPowerIndexMinHasBeenSet = false;

    int m_txPowerIndexMax{0};
    bool m_txPowerIndexMaxHasBeenSet = false;

    int m_nbTransMin{0};
    bool m_nbTransMinHasBeenSet = false;

    int m_nbTransMax{0};
    bool m_nbTransMaxHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
