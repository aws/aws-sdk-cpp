/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpcPeeringConnectionOptionsDescription.h>
#include <aws/ec2/model/Ipv6CidrBlock.h>
#include <aws/ec2/model/CidrBlock.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a VPC in a VPC peering connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcPeeringConnectionVpcInfo">AWS
   * API Reference</a></p>
   */
  class VpcPeeringConnectionVpcInfo
  {
  public:
    AWS_EC2_API VpcPeeringConnectionVpcInfo() = default;
    AWS_EC2_API VpcPeeringConnectionVpcInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcPeeringConnectionVpcInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    VpcPeeringConnectionVpcInfo& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline const Aws::Vector<Ipv6CidrBlock>& GetIpv6CidrBlockSet() const { return m_ipv6CidrBlockSet; }
    inline bool Ipv6CidrBlockSetHasBeenSet() const { return m_ipv6CidrBlockSetHasBeenSet; }
    template<typename Ipv6CidrBlockSetT = Aws::Vector<Ipv6CidrBlock>>
    void SetIpv6CidrBlockSet(Ipv6CidrBlockSetT&& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet = std::forward<Ipv6CidrBlockSetT>(value); }
    template<typename Ipv6CidrBlockSetT = Aws::Vector<Ipv6CidrBlock>>
    VpcPeeringConnectionVpcInfo& WithIpv6CidrBlockSet(Ipv6CidrBlockSetT&& value) { SetIpv6CidrBlockSet(std::forward<Ipv6CidrBlockSetT>(value)); return *this;}
    template<typename Ipv6CidrBlockSetT = Ipv6CidrBlock>
    VpcPeeringConnectionVpcInfo& AddIpv6CidrBlockSet(Ipv6CidrBlockSetT&& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet.emplace_back(std::forward<Ipv6CidrBlockSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline const Aws::Vector<CidrBlock>& GetCidrBlockSet() const { return m_cidrBlockSet; }
    inline bool CidrBlockSetHasBeenSet() const { return m_cidrBlockSetHasBeenSet; }
    template<typename CidrBlockSetT = Aws::Vector<CidrBlock>>
    void SetCidrBlockSet(CidrBlockSetT&& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet = std::forward<CidrBlockSetT>(value); }
    template<typename CidrBlockSetT = Aws::Vector<CidrBlock>>
    VpcPeeringConnectionVpcInfo& WithCidrBlockSet(CidrBlockSetT&& value) { SetCidrBlockSet(std::forward<CidrBlockSetT>(value)); return *this;}
    template<typename CidrBlockSetT = CidrBlock>
    VpcPeeringConnectionVpcInfo& AddCidrBlockSet(CidrBlockSetT&& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet.emplace_back(std::forward<CidrBlockSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    VpcPeeringConnectionVpcInfo& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC.</p>
     */
    inline const VpcPeeringConnectionOptionsDescription& GetPeeringOptions() const { return m_peeringOptions; }
    inline bool PeeringOptionsHasBeenSet() const { return m_peeringOptionsHasBeenSet; }
    template<typename PeeringOptionsT = VpcPeeringConnectionOptionsDescription>
    void SetPeeringOptions(PeeringOptionsT&& value) { m_peeringOptionsHasBeenSet = true; m_peeringOptions = std::forward<PeeringOptionsT>(value); }
    template<typename PeeringOptionsT = VpcPeeringConnectionOptionsDescription>
    VpcPeeringConnectionVpcInfo& WithPeeringOptions(PeeringOptionsT&& value) { SetPeeringOptions(std::forward<PeeringOptionsT>(value)); return *this;}
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
    VpcPeeringConnectionVpcInfo& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    VpcPeeringConnectionVpcInfo& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::Vector<Ipv6CidrBlock> m_ipv6CidrBlockSet;
    bool m_ipv6CidrBlockSetHasBeenSet = false;

    Aws::Vector<CidrBlock> m_cidrBlockSet;
    bool m_cidrBlockSetHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    VpcPeeringConnectionOptionsDescription m_peeringOptions;
    bool m_peeringOptionsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
