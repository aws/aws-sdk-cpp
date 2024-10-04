/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/HostTenancy.h>
#include <aws/ec2/model/Affinity.h>
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

    ///@{
    /**
     * <p>The name of the placement group in which to place the instance. For spread
     * placement groups, the instance must have a tenancy of <code>default</code>. For
     * cluster and partition placement groups, the instance must have a tenancy of
     * <code>default</code> or <code>dedicated</code>.</p> <p>To remove an instance
     * from a placement group, specify an empty string ("").</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline ModifyInstancePlacementRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline ModifyInstancePlacementRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline ModifyInstancePlacementRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the partition in which to place the instance. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline int GetPartitionNumber() const{ return m_partitionNumber; }
    inline bool PartitionNumberHasBeenSet() const { return m_partitionNumberHasBeenSet; }
    inline void SetPartitionNumber(int value) { m_partitionNumberHasBeenSet = true; m_partitionNumber = value; }
    inline ModifyInstancePlacementRequest& WithPartitionNumber(int value) { SetPartitionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the host resource group in which to place the instance. The
     * instance must have a tenancy of <code>host</code> to specify this parameter.</p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const{ return m_hostResourceGroupArn; }
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }
    inline void SetHostResourceGroupArn(const Aws::String& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = value; }
    inline void SetHostResourceGroupArn(Aws::String&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::move(value); }
    inline void SetHostResourceGroupArn(const char* value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn.assign(value); }
    inline ModifyInstancePlacementRequest& WithHostResourceGroupArn(const Aws::String& value) { SetHostResourceGroupArn(value); return *this;}
    inline ModifyInstancePlacementRequest& WithHostResourceGroupArn(Aws::String&& value) { SetHostResourceGroupArn(std::move(value)); return *this;}
    inline ModifyInstancePlacementRequest& WithHostResourceGroupArn(const char* value) { SetHostResourceGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Group Id of a placement group. You must specify the Placement Group
     * <b>Group Id</b> to launch an instance in a shared placement group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline ModifyInstancePlacementRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline ModifyInstancePlacementRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline ModifyInstancePlacementRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance that you are modifying.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ModifyInstancePlacementRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ModifyInstancePlacementRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ModifyInstancePlacementRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy for the instance.</p>  <p>For T3 instances, you must launch
     * the instance on a Dedicated Host to use a tenancy of <code>host</code>. You
     * can't change the tenancy from <code>host</code> to <code>dedicated</code> or
     * <code>default</code>. Attempting to make one of these unsupported tenancy
     * changes results in an <code>InvalidRequest</code> error code.</p> 
     */
    inline const HostTenancy& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const HostTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(HostTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline ModifyInstancePlacementRequest& WithTenancy(const HostTenancy& value) { SetTenancy(value); return *this;}
    inline ModifyInstancePlacementRequest& WithTenancy(HostTenancy&& value) { SetTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The affinity setting for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/how-dedicated-hosts-work.html#dedicated-hosts-affinity">Host
     * affinity</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Affinity& GetAffinity() const{ return m_affinity; }
    inline bool AffinityHasBeenSet() const { return m_affinityHasBeenSet; }
    inline void SetAffinity(const Affinity& value) { m_affinityHasBeenSet = true; m_affinity = value; }
    inline void SetAffinity(Affinity&& value) { m_affinityHasBeenSet = true; m_affinity = std::move(value); }
    inline ModifyInstancePlacementRequest& WithAffinity(const Affinity& value) { SetAffinity(value); return *this;}
    inline ModifyInstancePlacementRequest& WithAffinity(Affinity&& value) { SetAffinity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Dedicated Host with which to associate the instance.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }
    inline ModifyInstancePlacementRequest& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline ModifyInstancePlacementRequest& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline ModifyInstancePlacementRequest& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    int m_partitionNumber;
    bool m_partitionNumberHasBeenSet = false;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    HostTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    Affinity m_affinity;
    bool m_affinityHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
