﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/HostRecovery.h>
#include <aws/ec2/model/HostMaintenance.h>
#include <aws/ec2/model/AutoPlacement.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AllocateHostsRequest : public EC2Request
  {
  public:
    AWS_EC2_API AllocateHostsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateHosts"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Specifies the instance family to be supported by the Dedicated Hosts. If you
     * specify an instance family, the Dedicated Hosts support multiple instance types
     * within that instance family.</p> <p>If you want the Dedicated Hosts to support a
     * specific instance type only, omit this parameter and specify <b>InstanceType</b>
     * instead. You cannot specify <b>InstanceFamily</b> and <b>InstanceType</b> in the
     * same request.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }
    inline AllocateHostsRequest& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}
    inline AllocateHostsRequest& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}
    inline AllocateHostsRequest& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline AllocateHostsRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline AllocateHostsRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline AllocateHostsRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline AllocateHostsRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * Host recovery is disabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host recovery</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * <code>off</code> </p>
     */
    inline const HostRecovery& GetHostRecovery() const{ return m_hostRecovery; }
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }
    inline void SetHostRecovery(const HostRecovery& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }
    inline void SetHostRecovery(HostRecovery&& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = std::move(value); }
    inline AllocateHostsRequest& WithHostRecovery(const HostRecovery& value) { SetHostRecovery(value); return *this;}
    inline AllocateHostsRequest& WithHostRecovery(HostRecovery&& value) { SetHostRecovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which to
     * allocate the Dedicated Host. If you specify <b>OutpostArn</b>, you can
     * optionally specify <b>AssetIds</b>.</p> <p>If you are allocating the Dedicated
     * Host in a Region, omit this parameter.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline AllocateHostsRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline AllocateHostsRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline AllocateHostsRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable or disable host maintenance for the Dedicated
     * Host. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-maintenance.html">Host
     * maintenance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const HostMaintenance& GetHostMaintenance() const{ return m_hostMaintenance; }
    inline bool HostMaintenanceHasBeenSet() const { return m_hostMaintenanceHasBeenSet; }
    inline void SetHostMaintenance(const HostMaintenance& value) { m_hostMaintenanceHasBeenSet = true; m_hostMaintenance = value; }
    inline void SetHostMaintenance(HostMaintenance&& value) { m_hostMaintenanceHasBeenSet = true; m_hostMaintenance = std::move(value); }
    inline AllocateHostsRequest& WithHostMaintenance(const HostMaintenance& value) { SetHostMaintenance(value); return *this;}
    inline AllocateHostsRequest& WithHostMaintenance(HostMaintenance&& value) { SetHostMaintenance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Outpost hardware assets on which to allocate the Dedicated
     * Hosts. Targeting specific hardware assets on an Outpost can help to minimize
     * latency between your workloads. This parameter is supported only if you specify
     * <b>OutpostArn</b>. If you are allocating the Dedicated Hosts in a Region, omit
     * this parameter.</p> <ul> <li> <p>If you specify this parameter, you can omit
     * <b>Quantity</b>. In this case, Amazon EC2 allocates a Dedicated Host on each
     * specified hardware asset.</p> </li> <li> <p>If you specify both <b>AssetIds</b>
     * and <b>Quantity</b>, then the value for <b>Quantity</b> must be equal to the
     * number of asset IDs specified.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAssetIds() const{ return m_assetIds; }
    inline bool AssetIdsHasBeenSet() const { return m_assetIdsHasBeenSet; }
    inline void SetAssetIds(const Aws::Vector<Aws::String>& value) { m_assetIdsHasBeenSet = true; m_assetIds = value; }
    inline void SetAssetIds(Aws::Vector<Aws::String>&& value) { m_assetIdsHasBeenSet = true; m_assetIds = std::move(value); }
    inline AllocateHostsRequest& WithAssetIds(const Aws::Vector<Aws::String>& value) { SetAssetIds(value); return *this;}
    inline AllocateHostsRequest& WithAssetIds(Aws::Vector<Aws::String>&& value) { SetAssetIds(std::move(value)); return *this;}
    inline AllocateHostsRequest& AddAssetIds(const Aws::String& value) { m_assetIdsHasBeenSet = true; m_assetIds.push_back(value); return *this; }
    inline AllocateHostsRequest& AddAssetIds(Aws::String&& value) { m_assetIdsHasBeenSet = true; m_assetIds.push_back(std::move(value)); return *this; }
    inline AllocateHostsRequest& AddAssetIds(const char* value) { m_assetIdsHasBeenSet = true; m_assetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the host accepts any untargeted instance launches that
     * match its instance type configuration, or if it only accepts Host tenancy
     * instance launches that specify its unique host ID. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/how-dedicated-hosts-work.html#dedicated-hosts-understanding">
     * Understanding auto-placement and affinity</a> in the <i>Amazon EC2 User
     * Guide</i>.</p> <p>Default: <code>off</code> </p>
     */
    inline const AutoPlacement& GetAutoPlacement() const{ return m_autoPlacement; }
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }
    inline void SetAutoPlacement(const AutoPlacement& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }
    inline void SetAutoPlacement(AutoPlacement&& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = std::move(value); }
    inline AllocateHostsRequest& WithAutoPlacement(const AutoPlacement& value) { SetAutoPlacement(value); return *this;}
    inline AllocateHostsRequest& WithAutoPlacement(AutoPlacement&& value) { SetAutoPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AllocateHostsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AllocateHostsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AllocateHostsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the instance type to be supported by the Dedicated Hosts. If you
     * specify an instance type, the Dedicated Hosts support instances of the specified
     * instance type only.</p> <p>If you want the Dedicated Hosts to support multiple
     * instance types in a specific instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline AllocateHostsRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline AllocateHostsRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline AllocateHostsRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Dedicated Hosts to allocate to your account with these
     * parameters. If you are allocating the Dedicated Hosts on an Outpost, and you
     * specify <b>AssetIds</b>, you can omit this parameter. In this case, Amazon EC2
     * allocates a Dedicated Host on each specified hardware asset. If you specify both
     * <b>AssetIds</b> and <b>Quantity</b>, then the value that you specify for
     * <b>Quantity</b> must be equal to the number of asset IDs specified.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline AllocateHostsRequest& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline AllocateHostsRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline AllocateHostsRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline AllocateHostsRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    HostRecovery m_hostRecovery;
    bool m_hostRecoveryHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    HostMaintenance m_hostMaintenance;
    bool m_hostMaintenanceHasBeenSet = false;

    Aws::Vector<Aws::String> m_assetIds;
    bool m_assetIdsHasBeenSet = false;

    AutoPlacement m_autoPlacement;
    bool m_autoPlacementHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
