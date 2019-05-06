/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSMV2_API CreateClusterRequest : public CloudHSMV2Request
  {
  public:
    CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet;

    Aws::String m_sourceBackupId;
    bool m_sourceBackupIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
