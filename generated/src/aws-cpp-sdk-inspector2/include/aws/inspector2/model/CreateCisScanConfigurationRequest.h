/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Schedule.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector2/model/CreateCisTargets.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class CreateCisScanConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API CreateCisScanConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCisScanConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }

    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }

    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }

    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }

    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }

    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}

    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}

    /**
     * <p>The scan name for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithScanName(const char* value) { SetScanName(value); return *this;}


    /**
     * <p>The schedule for the CIS scan configuration.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule for the CIS scan configuration.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule for the CIS scan configuration.</p>
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule for the CIS scan configuration.</p>
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p> The security level for the CIS scan configuration. Security level refers to
     * the Benchmark levels that CIS assigns to a profile. </p>
     */
    inline const CisSecurityLevel& GetSecurityLevel() const{ return m_securityLevel; }

    /**
     * <p> The security level for the CIS scan configuration. Security level refers to
     * the Benchmark levels that CIS assigns to a profile. </p>
     */
    inline bool SecurityLevelHasBeenSet() const { return m_securityLevelHasBeenSet; }

    /**
     * <p> The security level for the CIS scan configuration. Security level refers to
     * the Benchmark levels that CIS assigns to a profile. </p>
     */
    inline void SetSecurityLevel(const CisSecurityLevel& value) { m_securityLevelHasBeenSet = true; m_securityLevel = value; }

    /**
     * <p> The security level for the CIS scan configuration. Security level refers to
     * the Benchmark levels that CIS assigns to a profile. </p>
     */
    inline void SetSecurityLevel(CisSecurityLevel&& value) { m_securityLevelHasBeenSet = true; m_securityLevel = std::move(value); }

    /**
     * <p> The security level for the CIS scan configuration. Security level refers to
     * the Benchmark levels that CIS assigns to a profile. </p>
     */
    inline CreateCisScanConfigurationRequest& WithSecurityLevel(const CisSecurityLevel& value) { SetSecurityLevel(value); return *this;}

    /**
     * <p> The security level for the CIS scan configuration. Security level refers to
     * the Benchmark levels that CIS assigns to a profile. </p>
     */
    inline CreateCisScanConfigurationRequest& WithSecurityLevel(CisSecurityLevel&& value) { SetSecurityLevel(std::move(value)); return *this;}


    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The targets for the CIS scan configuration.</p>
     */
    inline const CreateCisTargets& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets for the CIS scan configuration.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets for the CIS scan configuration.</p>
     */
    inline void SetTargets(const CreateCisTargets& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets for the CIS scan configuration.</p>
     */
    inline void SetTargets(CreateCisTargets&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithTargets(const CreateCisTargets& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationRequest& WithTargets(CreateCisTargets&& value) { SetTargets(std::move(value)); return *this;}

  private:

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    CisSecurityLevel m_securityLevel;
    bool m_securityLevelHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    CreateCisTargets m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
