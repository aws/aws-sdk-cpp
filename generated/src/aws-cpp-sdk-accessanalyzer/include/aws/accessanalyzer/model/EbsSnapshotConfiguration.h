/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The proposed access control configuration for an Amazon EBS volume snapshot.
   * You can propose a configuration for a new Amazon EBS volume snapshot or an
   * Amazon EBS volume snapshot that you own by specifying the user IDs, groups, and
   * optional KMS encryption key. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifySnapshotAttribute.html">ModifySnapshotAttribute</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/EbsSnapshotConfiguration">AWS
   * API Reference</a></p>
   */
  class EbsSnapshotConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API EbsSnapshotConfiguration();
    AWS_ACCESSANALYZER_API EbsSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API EbsSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline EbsSnapshotConfiguration& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline EbsSnapshotConfiguration& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline EbsSnapshotConfiguration& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline EbsSnapshotConfiguration& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that have access to the Amazon
     * EBS volume snapshot.</p> <ul> <li> <p>If the configuration is for an existing
     * Amazon EBS volume snapshot and you do not specify the <code>userIds</code>, then
     * the access preview uses the existing shared <code>userIds</code> for the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the <code>userIds</code>, then the access preview considers the
     * snapshot without any <code>userIds</code>.</p> </li> <li> <p>To propose deletion
     * of existing shared <code>accountIds</code>, you can specify an empty list for
     * <code>userIds</code>.</p> </li> </ul>
     */
    inline EbsSnapshotConfiguration& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }


    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline EbsSnapshotConfiguration& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline EbsSnapshotConfiguration& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline EbsSnapshotConfiguration& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline EbsSnapshotConfiguration& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>The groups that have access to the Amazon EBS volume snapshot. If the value
     * <code>all</code> is specified, then the Amazon EBS volume snapshot is
     * public.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS
     * volume snapshot and you do not specify the <code>groups</code>, then the access
     * preview uses the existing shared <code>groups</code> for the snapshot.</p> </li>
     * <li> <p>If the access preview is for a new resource and you do not specify the
     * <code>groups</code>, then the access preview considers the snapshot without any
     * <code>groups</code>.</p> </li> <li> <p>To propose deletion of existing shared
     * <code>groups</code>, you can specify an empty list for <code>groups</code>.</p>
     * </li> </ul>
     */
    inline EbsSnapshotConfiguration& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }


    /**
     * <p>The KMS key identifier for an encrypted Amazon EBS volume snapshot. The KMS
     * key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS volume
     * snapshot and you do not specify the <code>kmsKeyId</code>, or you specify an
     * empty string, then the access preview uses the existing <code>kmsKeyId</code> of
     * the snapshot.</p> </li> <li> <p>If the access preview is for a new resource and
     * you do not specify the <code>kmsKeyId</code>, the access preview considers the
     * snapshot as unencrypted.</p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier for an encrypted Amazon EBS volume snapshot. The KMS
     * key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS volume
     * snapshot and you do not specify the <code>kmsKeyId</code>, or you specify an
     * empty string, then the access preview uses the existing <code>kmsKeyId</code> of
     * the snapshot.</p> </li> <li> <p>If the access preview is for a new resource and
     * you do not specify the <code>kmsKeyId</code>, the access preview considers the
     * snapshot as unencrypted.</p> </li> </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key identifier for an encrypted Amazon EBS volume snapshot. The KMS
     * key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS volume
     * snapshot and you do not specify the <code>kmsKeyId</code>, or you specify an
     * empty string, then the access preview uses the existing <code>kmsKeyId</code> of
     * the snapshot.</p> </li> <li> <p>If the access preview is for a new resource and
     * you do not specify the <code>kmsKeyId</code>, the access preview considers the
     * snapshot as unencrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier for an encrypted Amazon EBS volume snapshot. The KMS
     * key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS volume
     * snapshot and you do not specify the <code>kmsKeyId</code>, or you specify an
     * empty string, then the access preview uses the existing <code>kmsKeyId</code> of
     * the snapshot.</p> </li> <li> <p>If the access preview is for a new resource and
     * you do not specify the <code>kmsKeyId</code>, the access preview considers the
     * snapshot as unencrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier for an encrypted Amazon EBS volume snapshot. The KMS
     * key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS volume
     * snapshot and you do not specify the <code>kmsKeyId</code>, or you specify an
     * empty string, then the access preview uses the existing <code>kmsKeyId</code> of
     * the snapshot.</p> </li> <li> <p>If the access preview is for a new resource and
     * you do not specify the <code>kmsKeyId</code>, the access preview considers the
     * snapshot as unencrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier for an encrypted Amazon EBS volume snapshot. The KMS
     * key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS volume
     * snapshot and you do not specify the <code>kmsKeyId</code>, or you specify an
     * empty string, then the access preview uses the existing <code>kmsKeyId</code> of
     * the snapshot.</p> </li> <li> <p>If the access preview is for a new resource and
     * you do not specify the <code>kmsKeyId</code>, the access preview considers the
     * snapshot as unencrypted.</p> </li> </ul>
     */
    inline EbsSnapshotConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted Amazon EBS volume snapshot. The KMS
     * key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS volume
     * snapshot and you do not specify the <code>kmsKeyId</code>, or you specify an
     * empty string, then the access preview uses the existing <code>kmsKeyId</code> of
     * the snapshot.</p> </li> <li> <p>If the access preview is for a new resource and
     * you do not specify the <code>kmsKeyId</code>, the access preview considers the
     * snapshot as unencrypted.</p> </li> </ul>
     */
    inline EbsSnapshotConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted Amazon EBS volume snapshot. The KMS
     * key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon EBS volume
     * snapshot and you do not specify the <code>kmsKeyId</code>, or you specify an
     * empty string, then the access preview uses the existing <code>kmsKeyId</code> of
     * the snapshot.</p> </li> <li> <p>If the access preview is for a new resource and
     * you do not specify the <code>kmsKeyId</code>, the access preview considers the
     * snapshot as unencrypted.</p> </li> </ul>
     */
    inline EbsSnapshotConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
