/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/cloudhsmv2/model/BackupRetentionPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsmv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline const BackupRetentionPolicy& GetBackupRetentionPolicy() const{ return m_backupRetentionPolicy; }

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline bool BackupRetentionPolicyHasBeenSet() const { return m_backupRetentionPolicyHasBeenSet; }

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline void SetBackupRetentionPolicy(const BackupRetentionPolicy& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = value; }

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline void SetBackupRetentionPolicy(BackupRetentionPolicy&& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = std::move(value); }

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline CreateClusterRequest& WithBackupRetentionPolicy(const BackupRetentionPolicy& value) { SetBackupRetentionPolicy(value); return *this;}

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline CreateClusterRequest& WithBackupRetentionPolicy(BackupRetentionPolicy&& value) { SetBackupRetentionPolicy(std::move(value)); return *this;}


    /**
     * <p>The type of HSM to use in the cluster. Currently the only allowed value is
     * <code>hsm1.medium</code>.</p>
     */
    inline const Aws::String& GetHsmType() const{ return m_hsmType; }

    /**
     * <p>The type of HSM to use in the cluster. Currently the only allowed value is
     * <code>hsm1.medium</code>.</p>
     */
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }

    /**
     * <p>The type of HSM to use in the cluster. Currently the only allowed value is
     * <code>hsm1.medium</code>.</p>
     */
    inline void SetHsmType(const Aws::String& value) { m_hsmTypeHasBeenSet = true; m_hsmType = value; }

    /**
     * <p>The type of HSM to use in the cluster. Currently the only allowed value is
     * <code>hsm1.medium</code>.</p>
     */
    inline void SetHsmType(Aws::String&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::move(value); }

    /**
     * <p>The type of HSM to use in the cluster. Currently the only allowed value is
     * <code>hsm1.medium</code>.</p>
     */
    inline void SetHsmType(const char* value) { m_hsmTypeHasBeenSet = true; m_hsmType.assign(value); }

    /**
     * <p>The type of HSM to use in the cluster. Currently the only allowed value is
     * <code>hsm1.medium</code>.</p>
     */
    inline CreateClusterRequest& WithHsmType(const Aws::String& value) { SetHsmType(value); return *this;}

    /**
     * <p>The type of HSM to use in the cluster. Currently the only allowed value is
     * <code>hsm1.medium</code>.</p>
     */
    inline CreateClusterRequest& WithHsmType(Aws::String&& value) { SetHsmType(std::move(value)); return *this;}

    /**
     * <p>The type of HSM to use in the cluster. Currently the only allowed value is
     * <code>hsm1.medium</code>.</p>
     */
    inline CreateClusterRequest& WithHsmType(const char* value) { SetHsmType(value); return *this;}


    /**
     * <p>The identifier (ID) of the cluster backup to restore. Use this value to
     * restore the cluster from a backup instead of creating a new cluster. To find the
     * backup ID, use <a>DescribeBackups</a>.</p>
     */
    inline const Aws::String& GetSourceBackupId() const{ return m_sourceBackupId; }

    /**
     * <p>The identifier (ID) of the cluster backup to restore. Use this value to
     * restore the cluster from a backup instead of creating a new cluster. To find the
     * backup ID, use <a>DescribeBackups</a>.</p>
     */
    inline bool SourceBackupIdHasBeenSet() const { return m_sourceBackupIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster backup to restore. Use this value to
     * restore the cluster from a backup instead of creating a new cluster. To find the
     * backup ID, use <a>DescribeBackups</a>.</p>
     */
    inline void SetSourceBackupId(const Aws::String& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = value; }

    /**
     * <p>The identifier (ID) of the cluster backup to restore. Use this value to
     * restore the cluster from a backup instead of creating a new cluster. To find the
     * backup ID, use <a>DescribeBackups</a>.</p>
     */
    inline void SetSourceBackupId(Aws::String&& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster backup to restore. Use this value to
     * restore the cluster from a backup instead of creating a new cluster. To find the
     * backup ID, use <a>DescribeBackups</a>.</p>
     */
    inline void SetSourceBackupId(const char* value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster backup to restore. Use this value to
     * restore the cluster from a backup instead of creating a new cluster. To find the
     * backup ID, use <a>DescribeBackups</a>.</p>
     */
    inline CreateClusterRequest& WithSourceBackupId(const Aws::String& value) { SetSourceBackupId(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster backup to restore. Use this value to
     * restore the cluster from a backup instead of creating a new cluster. To find the
     * backup ID, use <a>DescribeBackups</a>.</p>
     */
    inline CreateClusterRequest& WithSourceBackupId(Aws::String&& value) { SetSourceBackupId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster backup to restore. Use this value to
     * restore the cluster from a backup instead of creating a new cluster. To find the
     * backup ID, use <a>DescribeBackups</a>.</p>
     */
    inline CreateClusterRequest& WithSourceBackupId(const char* value) { SetSourceBackupId(value); return *this;}


    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline CreateClusterRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline CreateClusterRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline CreateClusterRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline CreateClusterRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline CreateClusterRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline CreateClusterRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline CreateClusterRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    BackupRetentionPolicy m_backupRetentionPolicy;
    bool m_backupRetentionPolicyHasBeenSet = false;

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet = false;

    Aws::String m_sourceBackupId;
    bool m_sourceBackupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
