/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class UpdateRegionSettingsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API UpdateRegionSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRegionSettings"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p> <p>If resource assignments are only based on tags, then service
     * opt-in settings are applied. If a resource type is explicitly assigned to a
     * backup plan, such as Amazon S3, Amazon EC2, or Amazon RDS, it will be included
     * in the backup even if the opt-in is not enabled for that particular service. If
     * both a resource type and tags are specified in a resource assignment, the
     * resource type specified in the backup plan takes priority over the tag
     * condition. Service opt-in settings are disregarded in this situation.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResourceTypeOptInPreference() const { return m_resourceTypeOptInPreference; }
    inline bool ResourceTypeOptInPreferenceHasBeenSet() const { return m_resourceTypeOptInPreferenceHasBeenSet; }
    template<typename ResourceTypeOptInPreferenceT = Aws::Map<Aws::String, bool>>
    void SetResourceTypeOptInPreference(ResourceTypeOptInPreferenceT&& value) { m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference = std::forward<ResourceTypeOptInPreferenceT>(value); }
    template<typename ResourceTypeOptInPreferenceT = Aws::Map<Aws::String, bool>>
    UpdateRegionSettingsRequest& WithResourceTypeOptInPreference(ResourceTypeOptInPreferenceT&& value) { SetResourceTypeOptInPreference(std::forward<ResourceTypeOptInPreferenceT>(value)); return *this;}
    inline UpdateRegionSettingsRequest& AddResourceTypeOptInPreference(Aws::String key, bool value) {
      m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Enables or disables full Backup management of backups for a resource type. To
     * enable full Backup management for DynamoDB along with <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/advanced-ddb-backup.html">
     * Backup's advanced DynamoDB backup features</a>, follow the procedure to <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/advanced-ddb-backup.html#advanced-ddb-backup-enable-cli">
     * enable advanced DynamoDB backup programmatically</a>.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResourceTypeManagementPreference() const { return m_resourceTypeManagementPreference; }
    inline bool ResourceTypeManagementPreferenceHasBeenSet() const { return m_resourceTypeManagementPreferenceHasBeenSet; }
    template<typename ResourceTypeManagementPreferenceT = Aws::Map<Aws::String, bool>>
    void SetResourceTypeManagementPreference(ResourceTypeManagementPreferenceT&& value) { m_resourceTypeManagementPreferenceHasBeenSet = true; m_resourceTypeManagementPreference = std::forward<ResourceTypeManagementPreferenceT>(value); }
    template<typename ResourceTypeManagementPreferenceT = Aws::Map<Aws::String, bool>>
    UpdateRegionSettingsRequest& WithResourceTypeManagementPreference(ResourceTypeManagementPreferenceT&& value) { SetResourceTypeManagementPreference(std::forward<ResourceTypeManagementPreferenceT>(value)); return *this;}
    inline UpdateRegionSettingsRequest& AddResourceTypeManagementPreference(Aws::String key, bool value) {
      m_resourceTypeManagementPreferenceHasBeenSet = true; m_resourceTypeManagementPreference.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, bool> m_resourceTypeOptInPreference;
    bool m_resourceTypeOptInPreferenceHasBeenSet = false;

    Aws::Map<Aws::String, bool> m_resourceTypeManagementPreference;
    bool m_resourceTypeManagementPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
