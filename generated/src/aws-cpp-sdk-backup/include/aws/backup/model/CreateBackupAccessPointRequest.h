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
class CreateBackupAccessPointRequest : public BackupRequest {
 public:
  AWS_BACKUP_API CreateBackupAccessPointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateBackupAccessPoint"; }

  AWS_BACKUP_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Metadata for the backup access point. For continuous (point-in-time) recovery
   * points, you must include an <code>AccessPointInTime</code> timestamp (in format
   * <code>2021-11-27T03:30:27Z</code>). The access point provides access to the
   * content present in the backup at that specific time. You can specify any time
   * within the continuous backup's retention period, up to the latest restorable
   * time. For snapshot recovery points, do not include
   * <code>AccessPointInTime</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAccessPointMetadata() const { return m_accessPointMetadata; }
  inline bool AccessPointMetadataHasBeenSet() const { return m_accessPointMetadataHasBeenSet; }
  template <typename AccessPointMetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetAccessPointMetadata(AccessPointMetadataT&& value) {
    m_accessPointMetadataHasBeenSet = true;
    m_accessPointMetadata = std::forward<AccessPointMetadataT>(value);
  }
  template <typename AccessPointMetadataT = Aws::Map<Aws::String, Aws::String>>
  CreateBackupAccessPointRequest& WithAccessPointMetadata(AccessPointMetadataT&& value) {
    SetAccessPointMetadata(std::forward<AccessPointMetadataT>(value));
    return *this;
  }
  template <typename AccessPointMetadataKeyT = Aws::String, typename AccessPointMetadataValueT = Aws::String>
  CreateBackupAccessPointRequest& AddAccessPointMetadata(AccessPointMetadataKeyT&& key, AccessPointMetadataValueT&& value) {
    m_accessPointMetadataHasBeenSet = true;
    m_accessPointMetadata.emplace(std::forward<AccessPointMetadataKeyT>(key), std::forward<AccessPointMetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional resource-based policy, in JSON format, to apply to the underlying
   * Amazon S3 access point. The policy controls how backup data can be accessed
   * through the access point. If you do not specify a policy, access is governed by
   * the caller's IAM permissions. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html">Configuring
   * IAM policies for using access points</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline const Aws::String& GetAccessPointPolicy() const { return m_accessPointPolicy; }
  inline bool AccessPointPolicyHasBeenSet() const { return m_accessPointPolicyHasBeenSet; }
  template <typename AccessPointPolicyT = Aws::String>
  void SetAccessPointPolicy(AccessPointPolicyT&& value) {
    m_accessPointPolicyHasBeenSet = true;
    m_accessPointPolicy = std::forward<AccessPointPolicyT>(value);
  }
  template <typename AccessPointPolicyT = Aws::String>
  CreateBackupAccessPointRequest& WithAccessPointPolicy(AccessPointPolicyT&& value) {
    SetAccessPointPolicy(std::forward<AccessPointPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the backup access point. This name is shared with the Amazon S3
   * access point namespace. It must be unique within your account and Region and
   * cannot conflict with an existing Amazon S3 access point. For more information
   * about access point naming, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-restrictions-limitations-naming-rules.html">Access
   * points naming rules, restrictions, and limitations</a> in the <i>Amazon S3 User
   * Guide</i>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateBackupAccessPointRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recovery point for which to create the
   * backup access point. The recovery point must be an Amazon S3 recovery point in
   * the <code>AVAILABLE</code>, <code>STOPPED</code>, or <code>COMPLETED</code>
   * state.</p>
   */
  inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
  inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
  template <typename RecoveryPointArnT = Aws::String>
  void SetRecoveryPointArn(RecoveryPointArnT&& value) {
    m_recoveryPointArnHasBeenSet = true;
    m_recoveryPointArn = std::forward<RecoveryPointArnT>(value);
  }
  template <typename RecoveryPointArnT = Aws::String>
  CreateBackupAccessPointRequest& WithRecoveryPointArn(RecoveryPointArnT&& value) {
    SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the backup access point.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateBackupAccessPointRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateBackupAccessPointRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_accessPointMetadata;

  Aws::String m_accessPointPolicy;

  Aws::String m_name;

  Aws::String m_recoveryPointArn;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_accessPointMetadataHasBeenSet = false;
  bool m_accessPointPolicyHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_recoveryPointArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
