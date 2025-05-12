/**
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
    AWS_EC2_API AllocateHostsRequest() = default;

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
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    AllocateHostsRequest& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Dedicated Host during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    AllocateHostsRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    AllocateHostsRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * Host recovery is disabled by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">
     * Host recovery</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * <code>off</code> </p>
     */
    inline HostRecovery GetHostRecovery() const { return m_hostRecovery; }
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }
    inline void SetHostRecovery(HostRecovery value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }
    inline AllocateHostsRequest& WithHostRecovery(HostRecovery value) { SetHostRecovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which to
     * allocate the Dedicated Host. If you specify <b>OutpostArn</b>, you can
     * optionally specify <b>AssetIds</b>.</p> <p>If you are allocating the Dedicated
     * Host in a Region, omit this parameter.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    AllocateHostsRequest& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable or disable host maintenance for the Dedicated
     * Host. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-maintenance.html">Host
     * maintenance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline HostMaintenance GetHostMaintenance() const { return m_hostMaintenance; }
    inline bool HostMaintenanceHasBeenSet() const { return m_hostMaintenanceHasBeenSet; }
    inline void SetHostMaintenance(HostMaintenance value) { m_hostMaintenanceHasBeenSet = true; m_hostMaintenance = value; }
    inline AllocateHostsRequest& WithHostMaintenance(HostMaintenance value) { SetHostMaintenance(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetAssetIds() const { return m_assetIds; }
    inline bool AssetIdsHasBeenSet() const { return m_assetIdsHasBeenSet; }
    template<typename AssetIdsT = Aws::Vector<Aws::String>>
    void SetAssetIds(AssetIdsT&& value) { m_assetIdsHasBeenSet = true; m_assetIds = std::forward<AssetIdsT>(value); }
    template<typename AssetIdsT = Aws::Vector<Aws::String>>
    AllocateHostsRequest& WithAssetIds(AssetIdsT&& value) { SetAssetIds(std::forward<AssetIdsT>(value)); return *this;}
    template<typename AssetIdsT = Aws::String>
    AllocateHostsRequest& AddAssetIds(AssetIdsT&& value) { m_assetIdsHasBeenSet = true; m_assetIds.emplace_back(std::forward<AssetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    AllocateHostsRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
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
    inline AutoPlacement GetAutoPlacement() const { return m_autoPlacement; }
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }
    inline void SetAutoPlacement(AutoPlacement value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }
    inline AllocateHostsRequest& WithAutoPlacement(AutoPlacement value) { SetAutoPlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AllocateHostsRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AllocateHostsRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
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
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline AllocateHostsRequest& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which to allocate the Dedicated Host.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    AllocateHostsRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    HostRecovery m_hostRecovery{HostRecovery::NOT_SET};
    bool m_hostRecoveryHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    HostMaintenance m_hostMaintenance{HostMaintenance::NOT_SET};
    bool m_hostMaintenanceHasBeenSet = false;

    Aws::Vector<Aws::String> m_assetIds;
    bool m_assetIdsHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    AutoPlacement m_autoPlacement{AutoPlacement::NOT_SET};
    bool m_autoPlacementHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
