/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
#include <aws/inspector2/model/Schedule.h>
#include <aws/inspector2/model/UpdateCisTargets.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class UpdateCisScanConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateCisScanConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCisScanConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The CIS scan configuration ARN.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const { return m_scanConfigurationArn; }
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }
    template<typename ScanConfigurationArnT = Aws::String>
    void SetScanConfigurationArn(ScanConfigurationArnT&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::forward<ScanConfigurationArnT>(value); }
    template<typename ScanConfigurationArnT = Aws::String>
    UpdateCisScanConfigurationRequest& WithScanConfigurationArn(ScanConfigurationArnT&& value) { SetScanConfigurationArn(std::forward<ScanConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline const Aws::String& GetScanName() const { return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    template<typename ScanNameT = Aws::String>
    void SetScanName(ScanNameT&& value) { m_scanNameHasBeenSet = true; m_scanName = std::forward<ScanNameT>(value); }
    template<typename ScanNameT = Aws::String>
    UpdateCisScanConfigurationRequest& WithScanName(ScanNameT&& value) { SetScanName(std::forward<ScanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The security level for the CIS scan configuration. Security level refers to
     * the Benchmark levels that CIS assigns to a profile. </p>
     */
    inline CisSecurityLevel GetSecurityLevel() const { return m_securityLevel; }
    inline bool SecurityLevelHasBeenSet() const { return m_securityLevelHasBeenSet; }
    inline void SetSecurityLevel(CisSecurityLevel value) { m_securityLevelHasBeenSet = true; m_securityLevel = value; }
    inline UpdateCisScanConfigurationRequest& WithSecurityLevel(CisSecurityLevel value) { SetSecurityLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for the CIS scan configuration.</p>
     */
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    UpdateCisScanConfigurationRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets for the CIS scan configuration.</p>
     */
    inline const UpdateCisTargets& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = UpdateCisTargets>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = UpdateCisTargets>
    UpdateCisScanConfigurationRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    CisSecurityLevel m_securityLevel{CisSecurityLevel::NOT_SET};
    bool m_securityLevelHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    UpdateCisTargets m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
