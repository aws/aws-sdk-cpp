/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupRequest.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Backup {
namespace Model {

/**
 */
class UpdateRegionSettingsRequest : public BackupRequest {
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
  template <typename ResourceTypeOptInPreferenceT = Aws::Map<Aws::String, bool>>
  void SetResourceTypeOptInPreference(ResourceTypeOptInPreferenceT&& value) {
    m_resourceTypeOptInPreferenceHasBeenSet = true;
    m_resourceTypeOptInPreference = std::forward<ResourceTypeOptInPreferenceT>(value);
  }
  template <typename ResourceTypeOptInPreferenceT = Aws::Map<Aws::String, bool>>
  UpdateRegionSettingsRequest& WithResourceTypeOptInPreference(ResourceTypeOptInPreferenceT&& value) {
    SetResourceTypeOptInPreference(std::forward<ResourceTypeOptInPreferenceT>(value));
    return *this;
  }
  inline UpdateRegionSettingsRequest& AddResourceTypeOptInPreference(Aws::String key, bool value) {
    m_resourceTypeOptInPreferenceHasBeenSet = true;
    m_resourceTypeOptInPreference.emplace(key, value);
    return *this;
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
  template <typename ResourceTypeManagementPreferenceT = Aws::Map<Aws::String, bool>>
  void SetResourceTypeManagementPreference(ResourceTypeManagementPreferenceT&& value) {
    m_resourceTypeManagementPreferenceHasBeenSet = true;
    m_resourceTypeManagementPreference = std::forward<ResourceTypeManagementPreferenceT>(value);
  }
  template <typename ResourceTypeManagementPreferenceT = Aws::Map<Aws::String, bool>>
  UpdateRegionSettingsRequest& WithResourceTypeManagementPreference(ResourceTypeManagementPreferenceT&& value) {
    SetResourceTypeManagementPreference(std::forward<ResourceTypeManagementPreferenceT>(value));
    return *this;
  }
  inline UpdateRegionSettingsRequest& AddResourceTypeManagementPreference(Aws::String key, bool value) {
    m_resourceTypeManagementPreferenceHasBeenSet = true;
    m_resourceTypeManagementPreference.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether you opt in to incremental backups for each resource type in
   * the Region. Opt in when you want to reduce backup storage and backup time for
   * large resources that change infrequently. Incremental backup opt-in is currently
   * available for Amazon DynamoDB.</p> <p>To view your current incremental backup
   * settings, use the <code>DescribeRegionSettings</code> API. For the resource
   * types that each Backup feature supports, see the <a
   * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
   * availability by resource</a> table.</p>
   */
  inline const Aws::Map<Aws::String, bool>& GetResourceTypeOptInIncremental() const { return m_resourceTypeOptInIncremental; }
  inline bool ResourceTypeOptInIncrementalHasBeenSet() const { return m_resourceTypeOptInIncrementalHasBeenSet; }
  template <typename ResourceTypeOptInIncrementalT = Aws::Map<Aws::String, bool>>
  void SetResourceTypeOptInIncremental(ResourceTypeOptInIncrementalT&& value) {
    m_resourceTypeOptInIncrementalHasBeenSet = true;
    m_resourceTypeOptInIncremental = std::forward<ResourceTypeOptInIncrementalT>(value);
  }
  template <typename ResourceTypeOptInIncrementalT = Aws::Map<Aws::String, bool>>
  UpdateRegionSettingsRequest& WithResourceTypeOptInIncremental(ResourceTypeOptInIncrementalT&& value) {
    SetResourceTypeOptInIncremental(std::forward<ResourceTypeOptInIncrementalT>(value));
    return *this;
  }
  inline UpdateRegionSettingsRequest& AddResourceTypeOptInIncremental(Aws::String key, bool value) {
    m_resourceTypeOptInIncrementalHasBeenSet = true;
    m_resourceTypeOptInIncremental.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, bool> m_resourceTypeOptInPreference;

  Aws::Map<Aws::String, bool> m_resourceTypeManagementPreference;

  Aws::Map<Aws::String, bool> m_resourceTypeOptInIncremental;
  bool m_resourceTypeOptInPreferenceHasBeenSet = false;
  bool m_resourceTypeManagementPreferenceHasBeenSet = false;
  bool m_resourceTypeOptInIncrementalHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
