/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/Affinity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/HostTenancy.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstancePlacementRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstancePlacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstancePlacement"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The affinity setting for the instance.</p>
     */
    inline const Affinity& GetAffinity() const{ return m_affinity; }

    /**
     * <p>The affinity setting for the instance.</p>
     */
    inline bool AffinityHasBeenSet() const { return m_affinityHasBeenSet; }

    /**
     * <p>The affinity setting for the instance.</p>
     */
    inline void SetAffinity(const Affinity& value) { m_affinityHasBeenSet = true; m_affinity = value; }

    /**
     * <p>The affinity setting for the instance.</p>
     */
    inline void SetAffinity(Affinity&& value) { m_affinityHasBeenSet = true; m_affinity = std::move(value); }

    /**
     * <p>The affinity setting for the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithAffinity(const Affinity& value) { SetAffinity(value); return *this;}

    /**
     * <p>The affinity setting for the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithAffinity(Affinity&& value) { SetAffinity(std::move(value)); return *this;}


    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline ModifyInstancePlacementRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline ModifyInstancePlacementRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline ModifyInstancePlacementRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }

    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }

    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostId(const char* value) { SetHostId(value); return *this;}


    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline ModifyInstancePlacementRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline ModifyInstancePlacementRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline ModifyInstancePlacementRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The tenancy for the instance.</p>  <p>For T3 instances, you can't
     * change the tenancy from <code>dedicated</code> to <code>host</code>, or from
     * <code>host</code> to <code>dedicated</code>. Attempting to make one of these
     * unsupported tenancy changes results in the <code>InvalidTenancy</code> error
     * code.</p> 
     */
    inline const HostTenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The tenancy for the instance.</p>  <p>For T3 instances, you can't
     * change the tenancy from <code>dedicated</code> to <code>host</code>, or from
     * <code>host</code> to <code>dedicated</code>. Attempting to make one of these
     * unsupported tenancy changes results in the <code>InvalidTenancy</code> error
     * code.</p> 
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>The tenancy for the instance.</p>  <p>For T3 instances, you can't
     * change the tenancy from <code>dedicated</code> to <code>host</code>, or from
     * <code>host</code> to <code>dedicated</code>. Attempting to make one of these
     * unsupported tenancy changes results in the <code>InvalidTenancy</code> error
     * code.</p> 
     */
    inline void SetTenancy(const HostTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy for the instance.</p>  <p>For T3 instances, you can't
     * change the tenancy from <code>dedicated</code> to <code>host</code>, or from
     * <code>host</code> to <code>dedicated</code>. Attempting to make one of these
     * unsupported tenancy changes results in the <code>InvalidTenancy</code> error
     * code.</p> 
     */
    inline void SetTenancy(HostTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>The tenancy for the instance.</p>  <p>For T3 instances, you can't
     * change the tenancy from <code>dedicated</code> to <code>host</code>, or from
     * <code>host</code> to <code>dedicated</code>. Attempting to make one of these
     * unsupported tenancy changes results in the <code>InvalidTenancy</code> error
     * code.</p> 
     */
    inline ModifyInstancePlacementRequest& WithTenancy(const HostTenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>The tenancy for the instance.</p>  <p>For T3 instances, you can't
     * change the tenancy from <code>dedicated</code> to <code>host</code>, or from
     * <code>host</code> to <code>dedicated</code>. Attempting to make one of these
     * unsupported tenancy changes results in the <code>InvalidTenancy</code> error
     * code.</p> 
     */
    inline ModifyInstancePlacementRequest& WithTenancy(HostTenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>The number of the partition in which to place the instance. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline int GetPartitionNumber() const{ return m_partitionNumber; }

    /**
     * <p>The number of the partition in which to place the instance. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline bool PartitionNumberHasBeenSet() const { return m_partitionNumberHasBeenSet; }

    /**
     * <p>The number of the partition in which to place the instance. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline void SetPartitionNumber(int value) { m_partitionNumberHasBeenSet = true; m_partitionNumber = value; }

    /**
     * <p>The number of the partition in which to place the instance. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline ModifyInstancePlacementRequest& WithPartitionNumber(int value) { SetPartitionNumber(value); return *this;}


    /**
     * <p>The ARN of the host resource group in which to place the instance.</p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const{ return m_hostResourceGroupArn; }

    /**
     * <p>The ARN of the host resource group in which to place the instance.</p>
     */
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the host resource group in which to place the instance.</p>
     */
    inline void SetHostResourceGroupArn(const Aws::String& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = value; }

    /**
     * <p>The ARN of the host resource group in which to place the instance.</p>
     */
    inline void SetHostResourceGroupArn(Aws::String&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::move(value); }

    /**
     * <p>The ARN of the host resource group in which to place the instance.</p>
     */
    inline void SetHostResourceGroupArn(const char* value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn.assign(value); }

    /**
     * <p>The ARN of the host resource group in which to place the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostResourceGroupArn(const Aws::String& value) { SetHostResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the host resource group in which to place the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostResourceGroupArn(Aws::String&& value) { SetHostResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the host resource group in which to place the instance.</p>
     */
    inline ModifyInstancePlacementRequest& WithHostResourceGroupArn(const char* value) { SetHostResourceGroupArn(value); return *this;}


    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline ModifyInstancePlacementRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline ModifyInstancePlacementRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline ModifyInstancePlacementRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:

    Affinity m_affinity;
    bool m_affinityHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    HostTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    int m_partitionNumber;
    bool m_partitionNumberHasBeenSet = false;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
