﻿/**
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
    AWS_IOTWIRELESS_API ImportedSidewalkDevice();
    AWS_IOTWIRELESS_API ImportedSidewalkDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ImportedSidewalkDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the Sidewalk device.</p>
     */
    inline const Aws::String& GetSidewalkManufacturingSn() const{ return m_sidewalkManufacturingSn; }
    inline bool SidewalkManufacturingSnHasBeenSet() const { return m_sidewalkManufacturingSnHasBeenSet; }
    inline void SetSidewalkManufacturingSn(const Aws::String& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = value; }
    inline void SetSidewalkManufacturingSn(Aws::String&& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = std::move(value); }
    inline void SetSidewalkManufacturingSn(const char* value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn.assign(value); }
    inline ImportedSidewalkDevice& WithSidewalkManufacturingSn(const Aws::String& value) { SetSidewalkManufacturingSn(value); return *this;}
    inline ImportedSidewalkDevice& WithSidewalkManufacturingSn(Aws::String&& value) { SetSidewalkManufacturingSn(std::move(value)); return *this;}
    inline ImportedSidewalkDevice& WithSidewalkManufacturingSn(const char* value) { SetSidewalkManufacturingSn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The onboarding status of the Sidewalk device in the import task.</p>
     */
    inline const OnboardStatus& GetOnboardingStatus() const{ return m_onboardingStatus; }
    inline bool OnboardingStatusHasBeenSet() const { return m_onboardingStatusHasBeenSet; }
    inline void SetOnboardingStatus(const OnboardStatus& value) { m_onboardingStatusHasBeenSet = true; m_onboardingStatus = value; }
    inline void SetOnboardingStatus(OnboardStatus&& value) { m_onboardingStatusHasBeenSet = true; m_onboardingStatus = std::move(value); }
    inline ImportedSidewalkDevice& WithOnboardingStatus(const OnboardStatus& value) { SetOnboardingStatus(value); return *this;}
    inline ImportedSidewalkDevice& WithOnboardingStatus(OnboardStatus&& value) { SetOnboardingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the onboarding status information for the Sidewalk device.</p>
     */
    inline const Aws::String& GetOnboardingStatusReason() const{ return m_onboardingStatusReason; }
    inline bool OnboardingStatusReasonHasBeenSet() const { return m_onboardingStatusReasonHasBeenSet; }
    inline void SetOnboardingStatusReason(const Aws::String& value) { m_onboardingStatusReasonHasBeenSet = true; m_onboardingStatusReason = value; }
    inline void SetOnboardingStatusReason(Aws::String&& value) { m_onboardingStatusReasonHasBeenSet = true; m_onboardingStatusReason = std::move(value); }
    inline void SetOnboardingStatusReason(const char* value) { m_onboardingStatusReasonHasBeenSet = true; m_onboardingStatusReason.assign(value); }
    inline ImportedSidewalkDevice& WithOnboardingStatusReason(const Aws::String& value) { SetOnboardingStatusReason(value); return *this;}
    inline ImportedSidewalkDevice& WithOnboardingStatusReason(Aws::String&& value) { SetOnboardingStatusReason(std::move(value)); return *this;}
    inline ImportedSidewalkDevice& WithOnboardingStatusReason(const char* value) { SetOnboardingStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the status information was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline ImportedSidewalkDevice& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline ImportedSidewalkDevice& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sidewalkManufacturingSn;
    bool m_sidewalkManufacturingSnHasBeenSet = false;

    OnboardStatus m_onboardingStatus;
    bool m_onboardingStatusHasBeenSet = false;

    Aws::String m_onboardingStatusReason;
    bool m_onboardingStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
