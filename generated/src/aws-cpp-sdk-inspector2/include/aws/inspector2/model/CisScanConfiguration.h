/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Schedule.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector2/model/CisTargets.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The CIS scan configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisScanConfiguration">AWS
   * API Reference</a></p>
   */
  class CisScanConfiguration
  {
  public:
    AWS_INSPECTOR2_API CisScanConfiguration();
    AWS_INSPECTOR2_API CisScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIS scan configuration's owner ID.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline CisScanConfiguration& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline CisScanConfiguration& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline CisScanConfiguration& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration's scan configuration ARN.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const{ return m_scanConfigurationArn; }
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }
    inline void SetScanConfigurationArn(const Aws::String& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = value; }
    inline void SetScanConfigurationArn(Aws::String&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::move(value); }
    inline void SetScanConfigurationArn(const char* value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn.assign(value); }
    inline CisScanConfiguration& WithScanConfigurationArn(const Aws::String& value) { SetScanConfigurationArn(value); return *this;}
    inline CisScanConfiguration& WithScanConfigurationArn(Aws::String&& value) { SetScanConfigurationArn(std::move(value)); return *this;}
    inline CisScanConfiguration& WithScanConfigurationArn(const char* value) { SetScanConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CIS scan configuration.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }
    inline CisScanConfiguration& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}
    inline CisScanConfiguration& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}
    inline CisScanConfiguration& WithScanName(const char* value) { SetScanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration's schedule.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline CisScanConfiguration& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline CisScanConfiguration& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration's security level.</p>
     */
    inline const CisSecurityLevel& GetSecurityLevel() const{ return m_securityLevel; }
    inline bool SecurityLevelHasBeenSet() const { return m_securityLevelHasBeenSet; }
    inline void SetSecurityLevel(const CisSecurityLevel& value) { m_securityLevelHasBeenSet = true; m_securityLevel = value; }
    inline void SetSecurityLevel(CisSecurityLevel&& value) { m_securityLevelHasBeenSet = true; m_securityLevel = std::move(value); }
    inline CisScanConfiguration& WithSecurityLevel(const CisSecurityLevel& value) { SetSecurityLevel(value); return *this;}
    inline CisScanConfiguration& WithSecurityLevel(CisSecurityLevel&& value) { SetSecurityLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CisScanConfiguration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CisScanConfiguration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CisScanConfiguration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CisScanConfiguration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CisScanConfiguration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CisScanConfiguration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CisScanConfiguration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CisScanConfiguration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CisScanConfiguration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CIS scan configuration's targets.</p>
     */
    inline const CisTargets& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const CisTargets& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(CisTargets&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline CisScanConfiguration& WithTargets(const CisTargets& value) { SetTargets(value); return *this;}
    inline CisScanConfiguration& WithTargets(CisTargets&& value) { SetTargets(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    CisSecurityLevel m_securityLevel;
    bool m_securityLevelHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    CisTargets m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
