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
    AWS_IOTWIRELESS_API LoRaWANGetServiceProfileInfo();
    AWS_IOTWIRELESS_API LoRaWANGetServiceProfileInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANGetServiceProfileInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ULRate value.</p>
     */
    inline int GetUlRate() const{ return m_ulRate; }

    /**
     * <p>The ULRate value.</p>
     */
    inline bool UlRateHasBeenSet() const { return m_ulRateHasBeenSet; }

    /**
     * <p>The ULRate value.</p>
     */
    inline void SetUlRate(int value) { m_ulRateHasBeenSet = true; m_ulRate = value; }

    /**
     * <p>The ULRate value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithUlRate(int value) { SetUlRate(value); return *this;}


    /**
     * <p>The ULBucketSize value.</p>
     */
    inline int GetUlBucketSize() const{ return m_ulBucketSize; }

    /**
     * <p>The ULBucketSize value.</p>
     */
    inline bool UlBucketSizeHasBeenSet() const { return m_ulBucketSizeHasBeenSet; }

    /**
     * <p>The ULBucketSize value.</p>
     */
    inline void SetUlBucketSize(int value) { m_ulBucketSizeHasBeenSet = true; m_ulBucketSize = value; }

    /**
     * <p>The ULBucketSize value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithUlBucketSize(int value) { SetUlBucketSize(value); return *this;}


    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline const Aws::String& GetUlRatePolicy() const{ return m_ulRatePolicy; }

    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline bool UlRatePolicyHasBeenSet() const { return m_ulRatePolicyHasBeenSet; }

    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline void SetUlRatePolicy(const Aws::String& value) { m_ulRatePolicyHasBeenSet = true; m_ulRatePolicy = value; }

    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline void SetUlRatePolicy(Aws::String&& value) { m_ulRatePolicyHasBeenSet = true; m_ulRatePolicy = std::move(value); }

    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline void SetUlRatePolicy(const char* value) { m_ulRatePolicyHasBeenSet = true; m_ulRatePolicy.assign(value); }

    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithUlRatePolicy(const Aws::String& value) { SetUlRatePolicy(value); return *this;}

    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithUlRatePolicy(Aws::String&& value) { SetUlRatePolicy(std::move(value)); return *this;}

    /**
     * <p>The ULRatePolicy value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithUlRatePolicy(const char* value) { SetUlRatePolicy(value); return *this;}


    /**
     * <p>The DLRate value.</p>
     */
    inline int GetDlRate() const{ return m_dlRate; }

    /**
     * <p>The DLRate value.</p>
     */
    inline bool DlRateHasBeenSet() const { return m_dlRateHasBeenSet; }

    /**
     * <p>The DLRate value.</p>
     */
    inline void SetDlRate(int value) { m_dlRateHasBeenSet = true; m_dlRate = value; }

    /**
     * <p>The DLRate value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithDlRate(int value) { SetDlRate(value); return *this;}


    /**
     * <p>The DLBucketSize value.</p>
     */
    inline int GetDlBucketSize() const{ return m_dlBucketSize; }

    /**
     * <p>The DLBucketSize value.</p>
     */
    inline bool DlBucketSizeHasBeenSet() const { return m_dlBucketSizeHasBeenSet; }

    /**
     * <p>The DLBucketSize value.</p>
     */
    inline void SetDlBucketSize(int value) { m_dlBucketSizeHasBeenSet = true; m_dlBucketSize = value; }

    /**
     * <p>The DLBucketSize value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithDlBucketSize(int value) { SetDlBucketSize(value); return *this;}


    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline const Aws::String& GetDlRatePolicy() const{ return m_dlRatePolicy; }

    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline bool DlRatePolicyHasBeenSet() const { return m_dlRatePolicyHasBeenSet; }

    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline void SetDlRatePolicy(const Aws::String& value) { m_dlRatePolicyHasBeenSet = true; m_dlRatePolicy = value; }

    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline void SetDlRatePolicy(Aws::String&& value) { m_dlRatePolicyHasBeenSet = true; m_dlRatePolicy = std::move(value); }

    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline void SetDlRatePolicy(const char* value) { m_dlRatePolicyHasBeenSet = true; m_dlRatePolicy.assign(value); }

    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithDlRatePolicy(const Aws::String& value) { SetDlRatePolicy(value); return *this;}

    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithDlRatePolicy(Aws::String&& value) { SetDlRatePolicy(std::move(value)); return *this;}

    /**
     * <p>The DLRatePolicy value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithDlRatePolicy(const char* value) { SetDlRatePolicy(value); return *this;}


    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline bool GetAddGwMetadata() const{ return m_addGwMetadata; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline bool AddGwMetadataHasBeenSet() const { return m_addGwMetadataHasBeenSet; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline void SetAddGwMetadata(bool value) { m_addGwMetadataHasBeenSet = true; m_addGwMetadata = value; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithAddGwMetadata(bool value) { SetAddGwMetadata(value); return *this;}


    /**
     * <p>The DevStatusReqFreq value.</p>
     */
    inline int GetDevStatusReqFreq() const{ return m_devStatusReqFreq; }

    /**
     * <p>The DevStatusReqFreq value.</p>
     */
    inline bool DevStatusReqFreqHasBeenSet() const { return m_devStatusReqFreqHasBeenSet; }

    /**
     * <p>The DevStatusReqFreq value.</p>
     */
    inline void SetDevStatusReqFreq(int value) { m_devStatusReqFreqHasBeenSet = true; m_devStatusReqFreq = value; }

    /**
     * <p>The DevStatusReqFreq value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithDevStatusReqFreq(int value) { SetDevStatusReqFreq(value); return *this;}


    /**
     * <p>The ReportDevStatusBattery value.</p>
     */
    inline bool GetReportDevStatusBattery() const{ return m_reportDevStatusBattery; }

    /**
     * <p>The ReportDevStatusBattery value.</p>
     */
    inline bool ReportDevStatusBatteryHasBeenSet() const { return m_reportDevStatusBatteryHasBeenSet; }

    /**
     * <p>The ReportDevStatusBattery value.</p>
     */
    inline void SetReportDevStatusBattery(bool value) { m_reportDevStatusBatteryHasBeenSet = true; m_reportDevStatusBattery = value; }

    /**
     * <p>The ReportDevStatusBattery value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithReportDevStatusBattery(bool value) { SetReportDevStatusBattery(value); return *this;}


    /**
     * <p>The ReportDevStatusMargin value.</p>
     */
    inline bool GetReportDevStatusMargin() const{ return m_reportDevStatusMargin; }

    /**
     * <p>The ReportDevStatusMargin value.</p>
     */
    inline bool ReportDevStatusMarginHasBeenSet() const { return m_reportDevStatusMarginHasBeenSet; }

    /**
     * <p>The ReportDevStatusMargin value.</p>
     */
    inline void SetReportDevStatusMargin(bool value) { m_reportDevStatusMarginHasBeenSet = true; m_reportDevStatusMargin = value; }

    /**
     * <p>The ReportDevStatusMargin value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithReportDevStatusMargin(bool value) { SetReportDevStatusMargin(value); return *this;}


    /**
     * <p>The DRMin value.</p>
     */
    inline int GetDrMin() const{ return m_drMin; }

    /**
     * <p>The DRMin value.</p>
     */
    inline bool DrMinHasBeenSet() const { return m_drMinHasBeenSet; }

    /**
     * <p>The DRMin value.</p>
     */
    inline void SetDrMin(int value) { m_drMinHasBeenSet = true; m_drMin = value; }

    /**
     * <p>The DRMin value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithDrMin(int value) { SetDrMin(value); return *this;}


    /**
     * <p>The DRMax value.</p>
     */
    inline int GetDrMax() const{ return m_drMax; }

    /**
     * <p>The DRMax value.</p>
     */
    inline bool DrMaxHasBeenSet() const { return m_drMaxHasBeenSet; }

    /**
     * <p>The DRMax value.</p>
     */
    inline void SetDrMax(int value) { m_drMaxHasBeenSet = true; m_drMax = value; }

    /**
     * <p>The DRMax value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithDrMax(int value) { SetDrMax(value); return *this;}


    /**
     * <p>The ChannelMask value.</p>
     */
    inline const Aws::String& GetChannelMask() const{ return m_channelMask; }

    /**
     * <p>The ChannelMask value.</p>
     */
    inline bool ChannelMaskHasBeenSet() const { return m_channelMaskHasBeenSet; }

    /**
     * <p>The ChannelMask value.</p>
     */
    inline void SetChannelMask(const Aws::String& value) { m_channelMaskHasBeenSet = true; m_channelMask = value; }

    /**
     * <p>The ChannelMask value.</p>
     */
    inline void SetChannelMask(Aws::String&& value) { m_channelMaskHasBeenSet = true; m_channelMask = std::move(value); }

    /**
     * <p>The ChannelMask value.</p>
     */
    inline void SetChannelMask(const char* value) { m_channelMaskHasBeenSet = true; m_channelMask.assign(value); }

    /**
     * <p>The ChannelMask value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithChannelMask(const Aws::String& value) { SetChannelMask(value); return *this;}

    /**
     * <p>The ChannelMask value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithChannelMask(Aws::String&& value) { SetChannelMask(std::move(value)); return *this;}

    /**
     * <p>The ChannelMask value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithChannelMask(const char* value) { SetChannelMask(value); return *this;}


    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline bool GetPrAllowed() const{ return m_prAllowed; }

    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline bool PrAllowedHasBeenSet() const { return m_prAllowedHasBeenSet; }

    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline void SetPrAllowed(bool value) { m_prAllowedHasBeenSet = true; m_prAllowed = value; }

    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithPrAllowed(bool value) { SetPrAllowed(value); return *this;}


    /**
     * <p>The HRAllowed value that describes whether handover roaming is allowed.</p>
     */
    inline bool GetHrAllowed() const{ return m_hrAllowed; }

    /**
     * <p>The HRAllowed value that describes whether handover roaming is allowed.</p>
     */
    inline bool HrAllowedHasBeenSet() const { return m_hrAllowedHasBeenSet; }

    /**
     * <p>The HRAllowed value that describes whether handover roaming is allowed.</p>
     */
    inline void SetHrAllowed(bool value) { m_hrAllowedHasBeenSet = true; m_hrAllowed = value; }

    /**
     * <p>The HRAllowed value that describes whether handover roaming is allowed.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithHrAllowed(bool value) { SetHrAllowed(value); return *this;}


    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline bool GetRaAllowed() const{ return m_raAllowed; }

    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline bool RaAllowedHasBeenSet() const { return m_raAllowedHasBeenSet; }

    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline void SetRaAllowed(bool value) { m_raAllowedHasBeenSet = true; m_raAllowed = value; }

    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithRaAllowed(bool value) { SetRaAllowed(value); return *this;}


    /**
     * <p>The NwkGeoLoc value.</p>
     */
    inline bool GetNwkGeoLoc() const{ return m_nwkGeoLoc; }

    /**
     * <p>The NwkGeoLoc value.</p>
     */
    inline bool NwkGeoLocHasBeenSet() const { return m_nwkGeoLocHasBeenSet; }

    /**
     * <p>The NwkGeoLoc value.</p>
     */
    inline void SetNwkGeoLoc(bool value) { m_nwkGeoLocHasBeenSet = true; m_nwkGeoLoc = value; }

    /**
     * <p>The NwkGeoLoc value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithNwkGeoLoc(bool value) { SetNwkGeoLoc(value); return *this;}


    /**
     * <p>The TargetPER value.</p>
     */
    inline int GetTargetPer() const{ return m_targetPer; }

    /**
     * <p>The TargetPER value.</p>
     */
    inline bool TargetPerHasBeenSet() const { return m_targetPerHasBeenSet; }

    /**
     * <p>The TargetPER value.</p>
     */
    inline void SetTargetPer(int value) { m_targetPerHasBeenSet = true; m_targetPer = value; }

    /**
     * <p>The TargetPER value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithTargetPer(int value) { SetTargetPer(value); return *this;}


    /**
     * <p>The MinGwDiversity value.</p>
     */
    inline int GetMinGwDiversity() const{ return m_minGwDiversity; }

    /**
     * <p>The MinGwDiversity value.</p>
     */
    inline bool MinGwDiversityHasBeenSet() const { return m_minGwDiversityHasBeenSet; }

    /**
     * <p>The MinGwDiversity value.</p>
     */
    inline void SetMinGwDiversity(int value) { m_minGwDiversityHasBeenSet = true; m_minGwDiversity = value; }

    /**
     * <p>The MinGwDiversity value.</p>
     */
    inline LoRaWANGetServiceProfileInfo& WithMinGwDiversity(int value) { SetMinGwDiversity(value); return *this;}

  private:

    int m_ulRate;
    bool m_ulRateHasBeenSet = false;

    int m_ulBucketSize;
    bool m_ulBucketSizeHasBeenSet = false;

    Aws::String m_ulRatePolicy;
    bool m_ulRatePolicyHasBeenSet = false;

    int m_dlRate;
    bool m_dlRateHasBeenSet = false;

    int m_dlBucketSize;
    bool m_dlBucketSizeHasBeenSet = false;

    Aws::String m_dlRatePolicy;
    bool m_dlRatePolicyHasBeenSet = false;

    bool m_addGwMetadata;
    bool m_addGwMetadataHasBeenSet = false;

    int m_devStatusReqFreq;
    bool m_devStatusReqFreqHasBeenSet = false;

    bool m_reportDevStatusBattery;
    bool m_reportDevStatusBatteryHasBeenSet = false;

    bool m_reportDevStatusMargin;
    bool m_reportDevStatusMarginHasBeenSet = false;

    int m_drMin;
    bool m_drMinHasBeenSet = false;

    int m_drMax;
    bool m_drMaxHasBeenSet = false;

    Aws::String m_channelMask;
    bool m_channelMaskHasBeenSet = false;

    bool m_prAllowed;
    bool m_prAllowedHasBeenSet = false;

    bool m_hrAllowed;
    bool m_hrAllowedHasBeenSet = false;

    bool m_raAllowed;
    bool m_raAllowedHasBeenSet = false;

    bool m_nwkGeoLoc;
    bool m_nwkGeoLocHasBeenSet = false;

    int m_targetPer;
    bool m_targetPerHasBeenSet = false;

    int m_minGwDiversity;
    bool m_minGwDiversityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
