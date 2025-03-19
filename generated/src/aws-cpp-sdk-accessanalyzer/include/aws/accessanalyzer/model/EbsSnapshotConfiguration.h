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
    AWS_ACCESSANALYZER_API EbsSnapshotConfiguration() = default;
    AWS_ACCESSANALYZER_API EbsSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API EbsSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    void SetUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds = std::forward<UserIdsT>(value); }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    EbsSnapshotConfiguration& WithUserIds(UserIdsT&& value) { SetUserIds(std::forward<UserIdsT>(value)); return *this;}
    template<typename UserIdsT = Aws::String>
    EbsSnapshotConfiguration& AddUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds.emplace_back(std::forward<UserIdsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    EbsSnapshotConfiguration& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    EbsSnapshotConfiguration& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EbsSnapshotConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
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
