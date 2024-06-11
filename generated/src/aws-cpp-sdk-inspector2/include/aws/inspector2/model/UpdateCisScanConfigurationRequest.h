﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Schedule.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
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
    AWS_INSPECTOR2_API UpdateCisScanConfigurationRequest();

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
    inline const Aws::String& GetScanConfigurationArn() const{ return m_scanConfigurationArn; }
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }
    inline void SetScanConfigurationArn(const Aws::String& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = value; }
    inline void SetScanConfigurationArn(Aws::String&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::move(value); }
    inline void SetScanConfigurationArn(const char* value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn.assign(value); }
    inline UpdateCisScanConfigurationRequest& WithScanConfigurationArn(const Aws::String& value) { SetScanConfigurationArn(value); return *this;}
    inline UpdateCisScanConfigurationRequest& WithScanConfigurationArn(Aws::String&& value) { SetScanConfigurationArn(std::move(value)); return *this;}
    inline UpdateCisScanConfigurationRequest& WithScanConfigurationArn(const char* value) { SetScanConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }
    inline UpdateCisScanConfigurationRequest& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}
    inline UpdateCisScanConfigurationRequest& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}
    inline UpdateCisScanConfigurationRequest& WithScanName(const char* value) { SetScanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for the CIS scan configuration.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline UpdateCisScanConfigurationRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline UpdateCisScanConfigurationRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The security level for the CIS scan configuration. Security level refers to
     * the Benchmark levels that CIS assigns to a profile. </p>
     */
    inline const CisSecurityLevel& GetSecurityLevel() const{ return m_securityLevel; }
    inline bool SecurityLevelHasBeenSet() const { return m_securityLevelHasBeenSet; }
    inline void SetSecurityLevel(const CisSecurityLevel& value) { m_securityLevelHasBeenSet = true; m_securityLevel = value; }
    inline void SetSecurityLevel(CisSecurityLevel&& value) { m_securityLevelHasBeenSet = true; m_securityLevel = std::move(value); }
    inline UpdateCisScanConfigurationRequest& WithSecurityLevel(const CisSecurityLevel& value) { SetSecurityLevel(value); return *this;}
    inline UpdateCisScanConfigurationRequest& WithSecurityLevel(CisSecurityLevel&& value) { SetSecurityLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets for the CIS scan configuration.</p>
     */
    inline const UpdateCisTargets& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const UpdateCisTargets& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(UpdateCisTargets&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline UpdateCisScanConfigurationRequest& WithTargets(const UpdateCisTargets& value) { SetTargets(value); return *this;}
    inline UpdateCisScanConfigurationRequest& WithTargets(UpdateCisTargets&& value) { SetTargets(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    CisSecurityLevel m_securityLevel;
    bool m_securityLevelHasBeenSet = false;

    UpdateCisTargets m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
