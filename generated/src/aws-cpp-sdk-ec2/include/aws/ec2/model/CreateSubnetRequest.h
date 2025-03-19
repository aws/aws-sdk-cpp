/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateSubnetRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateSubnetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubnet"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateSubnetRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateSubnetRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: Amazon
     * Web Services selects one for you. If you create more than one subnet in your
     * VPC, we do not necessarily select a different zone for each subnet.</p> <p>To
     * create a subnet in a Local Zone, set this value to the Local Zone ID, for
     * example <code>us-west-2-lax-1a</code>. For information about the Regions that
     * support Local Zones, see <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/available-local-zones.html">Available
     * Local Zones</a>.</p> <p>To create a subnet in an Outpost, set this value to the
     * Availability Zone for the Outpost and specify the Outpost ARN.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateSubnetRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateSubnetRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p> <p>This parameter is not supported for an IPv6
     * only subnet.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    CreateSubnetRequest& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. This parameter is
     * required for an IPv6 only subnet.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const { return m_ipv6CidrBlock; }
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }
    template<typename Ipv6CidrBlockT = Aws::String>
    void SetIpv6CidrBlock(Ipv6CidrBlockT&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::forward<Ipv6CidrBlockT>(value); }
    template<typename Ipv6CidrBlockT = Aws::String>
    CreateSubnetRequest& WithIpv6CidrBlock(Ipv6CidrBlockT&& value) { SetIpv6CidrBlock(std::forward<Ipv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    CreateSubnetRequest& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateSubnetRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to create an IPv6 only subnet.</p>
     */
    inline bool GetIpv6Native() const { return m_ipv6Native; }
    inline bool Ipv6NativeHasBeenSet() const { return m_ipv6NativeHasBeenSet; }
    inline void SetIpv6Native(bool value) { m_ipv6NativeHasBeenSet = true; m_ipv6Native = value; }
    inline CreateSubnetRequest& WithIpv6Native(bool value) { SetIpv6Native(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPv4 IPAM pool ID for the subnet.</p>
     */
    inline const Aws::String& GetIpv4IpamPoolId() const { return m_ipv4IpamPoolId; }
    inline bool Ipv4IpamPoolIdHasBeenSet() const { return m_ipv4IpamPoolIdHasBeenSet; }
    template<typename Ipv4IpamPoolIdT = Aws::String>
    void SetIpv4IpamPoolId(Ipv4IpamPoolIdT&& value) { m_ipv4IpamPoolIdHasBeenSet = true; m_ipv4IpamPoolId = std::forward<Ipv4IpamPoolIdT>(value); }
    template<typename Ipv4IpamPoolIdT = Aws::String>
    CreateSubnetRequest& WithIpv4IpamPoolId(Ipv4IpamPoolIdT&& value) { SetIpv4IpamPoolId(std::forward<Ipv4IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPv4 netmask length for the subnet.</p>
     */
    inline int GetIpv4NetmaskLength() const { return m_ipv4NetmaskLength; }
    inline bool Ipv4NetmaskLengthHasBeenSet() const { return m_ipv4NetmaskLengthHasBeenSet; }
    inline void SetIpv4NetmaskLength(int value) { m_ipv4NetmaskLengthHasBeenSet = true; m_ipv4NetmaskLength = value; }
    inline CreateSubnetRequest& WithIpv4NetmaskLength(int value) { SetIpv4NetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPv6 IPAM pool ID for the subnet.</p>
     */
    inline const Aws::String& GetIpv6IpamPoolId() const { return m_ipv6IpamPoolId; }
    inline bool Ipv6IpamPoolIdHasBeenSet() const { return m_ipv6IpamPoolIdHasBeenSet; }
    template<typename Ipv6IpamPoolIdT = Aws::String>
    void SetIpv6IpamPoolId(Ipv6IpamPoolIdT&& value) { m_ipv6IpamPoolIdHasBeenSet = true; m_ipv6IpamPoolId = std::forward<Ipv6IpamPoolIdT>(value); }
    template<typename Ipv6IpamPoolIdT = Aws::String>
    CreateSubnetRequest& WithIpv6IpamPoolId(Ipv6IpamPoolIdT&& value) { SetIpv6IpamPoolId(std::forward<Ipv6IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPv6 netmask length for the subnet.</p>
     */
    inline int GetIpv6NetmaskLength() const { return m_ipv6NetmaskLength; }
    inline bool Ipv6NetmaskLengthHasBeenSet() const { return m_ipv6NetmaskLengthHasBeenSet; }
    inline void SetIpv6NetmaskLength(int value) { m_ipv6NetmaskLengthHasBeenSet = true; m_ipv6NetmaskLength = value; }
    inline CreateSubnetRequest& WithIpv6NetmaskLength(int value) { SetIpv6NetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateSubnetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    bool m_ipv6Native{false};
    bool m_ipv6NativeHasBeenSet = false;

    Aws::String m_ipv4IpamPoolId;
    bool m_ipv4IpamPoolIdHasBeenSet = false;

    int m_ipv4NetmaskLength{0};
    bool m_ipv4NetmaskLengthHasBeenSet = false;

    Aws::String m_ipv6IpamPoolId;
    bool m_ipv6IpamPoolIdHasBeenSet = false;

    int m_ipv6NetmaskLength{0};
    bool m_ipv6NetmaskLengthHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
