/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/OnboardStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about a Sidewalk device that has been added to an import
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ImportedSidewalkDevice">AWS
   * API Reference</a></p>
   */
  class ImportedSidewalkDevice
  {
  public:
    AWS_IOTWIRELESS_API ImportedSidewalkDevice() = default;
    AWS_IOTWIRELESS_API ImportedSidewalkDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ImportedSidewalkDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the Sidewalk device.</p>
     */
    inline const Aws::String& GetSidewalkManufacturingSn() const { return m_sidewalkManufacturingSn; }
    inline bool SidewalkManufacturingSnHasBeenSet() const { return m_sidewalkManufacturingSnHasBeenSet; }
    template<typename SidewalkManufacturingSnT = Aws::String>
    void SetSidewalkManufacturingSn(SidewalkManufacturingSnT&& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = std::forward<SidewalkManufacturingSnT>(value); }
    template<typename SidewalkManufacturingSnT = Aws::String>
    ImportedSidewalkDevice& WithSidewalkManufacturingSn(SidewalkManufacturingSnT&& value) { SetSidewalkManufacturingSn(std::forward<SidewalkManufacturingSnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The onboarding status of the Sidewalk device in the import task.</p>
     */
    inline OnboardStatus GetOnboardingStatus() const { return m_onboardingStatus; }
    inline bool OnboardingStatusHasBeenSet() const { return m_onboardingStatusHasBeenSet; }
    inline void SetOnboardingStatus(OnboardStatus value) { m_onboardingStatusHasBeenSet = true; m_onboardingStatus = value; }
    inline ImportedSidewalkDevice& WithOnboardingStatus(OnboardStatus value) { SetOnboardingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the onboarding status information for the Sidewalk device.</p>
     */
    inline const Aws::String& GetOnboardingStatusReason() const { return m_onboardingStatusReason; }
    inline bool OnboardingStatusReasonHasBeenSet() const { return m_onboardingStatusReasonHasBeenSet; }
    template<typename OnboardingStatusReasonT = Aws::String>
    void SetOnboardingStatusReason(OnboardingStatusReasonT&& value) { m_onboardingStatusReasonHasBeenSet = true; m_onboardingStatusReason = std::forward<OnboardingStatusReasonT>(value); }
    template<typename OnboardingStatusReasonT = Aws::String>
    ImportedSidewalkDevice& WithOnboardingStatusReason(OnboardingStatusReasonT&& value) { SetOnboardingStatusReason(std::forward<OnboardingStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the status information was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    ImportedSidewalkDevice& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sidewalkManufacturingSn;
    bool m_sidewalkManufacturingSnHasBeenSet = false;

    OnboardStatus m_onboardingStatus{OnboardStatus::NOT_SET};
    bool m_onboardingStatusHasBeenSet = false;

    Aws::String m_onboardingStatusReason;
    bool m_onboardingStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
