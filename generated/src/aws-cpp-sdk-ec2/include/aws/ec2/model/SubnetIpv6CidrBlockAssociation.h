/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SubnetCidrBlockState.h>
#include <aws/ec2/model/Ipv6AddressAttribute.h>
#include <aws/ec2/model/IpSource.h>
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
   * <p>Describes an association between a subnet and an IPv6 CIDR
   * block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SubnetIpv6CidrBlockAssociation">AWS
   * API Reference</a></p>
   */
  class SubnetIpv6CidrBlockAssociation
  {
  public:
    AWS_EC2_API SubnetIpv6CidrBlockAssociation() = default;
    AWS_EC2_API SubnetIpv6CidrBlockAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SubnetIpv6CidrBlockAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    SubnetIpv6CidrBlockAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const { return m_ipv6CidrBlock; }
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }
    template<typename Ipv6CidrBlockT = Aws::String>
    void SetIpv6CidrBlock(Ipv6CidrBlockT&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::forward<Ipv6CidrBlockT>(value); }
    template<typename Ipv6CidrBlockT = Aws::String>
    SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlock(Ipv6CidrBlockT&& value) { SetIpv6CidrBlock(std::forward<Ipv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the CIDR block.</p>
     */
    inline const SubnetCidrBlockState& GetIpv6CidrBlockState() const { return m_ipv6CidrBlockState; }
    inline bool Ipv6CidrBlockStateHasBeenSet() const { return m_ipv6CidrBlockStateHasBeenSet; }
    template<typename Ipv6CidrBlockStateT = SubnetCidrBlockState>
    void SetIpv6CidrBlockState(Ipv6CidrBlockStateT&& value) { m_ipv6CidrBlockStateHasBeenSet = true; m_ipv6CidrBlockState = std::forward<Ipv6CidrBlockStateT>(value); }
    template<typename Ipv6CidrBlockStateT = SubnetCidrBlockState>
    SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlockState(Ipv6CidrBlockStateT&& value) { SetIpv6CidrBlockState(std::forward<Ipv6CidrBlockStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Public IPv6 addresses are those advertised on the internet from Amazon Web
     * Services. Private IP addresses are not and cannot be advertised on the internet
     * from Amazon Web Services.</p>
     */
    inline Ipv6AddressAttribute GetIpv6AddressAttribute() const { return m_ipv6AddressAttribute; }
    inline bool Ipv6AddressAttributeHasBeenSet() const { return m_ipv6AddressAttributeHasBeenSet; }
    inline void SetIpv6AddressAttribute(Ipv6AddressAttribute value) { m_ipv6AddressAttributeHasBeenSet = true; m_ipv6AddressAttribute = value; }
    inline SubnetIpv6CidrBlockAssociation& WithIpv6AddressAttribute(Ipv6AddressAttribute value) { SetIpv6AddressAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source that allocated the IP address space. <code>byoip</code> or
     * <code>amazon</code> indicates public IP address space allocated by Amazon or
     * space that you have allocated with Bring your own IP (BYOIP). <code>none</code>
     * indicates private space.</p>
     */
    inline IpSource GetIpSource() const { return m_ipSource; }
    inline bool IpSourceHasBeenSet() const { return m_ipSourceHasBeenSet; }
    inline void SetIpSource(IpSource value) { m_ipSourceHasBeenSet = true; m_ipSource = value; }
    inline SubnetIpv6CidrBlockAssociation& WithIpSource(IpSource value) { SetIpSource(value); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    SubnetCidrBlockState m_ipv6CidrBlockState;
    bool m_ipv6CidrBlockStateHasBeenSet = false;

    Ipv6AddressAttribute m_ipv6AddressAttribute{Ipv6AddressAttribute::NOT_SET};
    bool m_ipv6AddressAttributeHasBeenSet = false;

    IpSource m_ipSource{IpSource::NOT_SET};
    bool m_ipSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
