/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpcCidrBlockState.h>
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
   * <p>Describes an IPv6 CIDR block associated with a VPC.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcIpv6CidrBlockAssociation">AWS
   * API Reference</a></p>
   */
  class VpcIpv6CidrBlockAssociation
  {
  public:
    AWS_EC2_API VpcIpv6CidrBlockAssociation();
    AWS_EC2_API VpcIpv6CidrBlockAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcIpv6CidrBlockAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID for the IPv6 CIDR block.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline const VpcCidrBlockState& GetIpv6CidrBlockState() const{ return m_ipv6CidrBlockState; }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline bool Ipv6CidrBlockStateHasBeenSet() const { return m_ipv6CidrBlockStateHasBeenSet; }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline void SetIpv6CidrBlockState(const VpcCidrBlockState& value) { m_ipv6CidrBlockStateHasBeenSet = true; m_ipv6CidrBlockState = value; }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline void SetIpv6CidrBlockState(VpcCidrBlockState&& value) { m_ipv6CidrBlockStateHasBeenSet = true; m_ipv6CidrBlockState = std::move(value); }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithIpv6CidrBlockState(const VpcCidrBlockState& value) { SetIpv6CidrBlockState(value); return *this;}

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithIpv6CidrBlockState(VpcCidrBlockState&& value) { SetIpv6CidrBlockState(std::move(value)); return *this;}


    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses, for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }

    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses, for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>.</p>
     */
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }

    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses, for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>.</p>
     */
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }

    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses, for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>.</p>
     */
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }

    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses, for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>.</p>
     */
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }

    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses, for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}

    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses, for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses, for example,
     * <code>us-east-1-wl1-bos-wlz-1</code>.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}


    /**
     * <p>The ID of the IPv6 address pool from which the IPv6 CIDR block is
     * allocated.</p>
     */
    inline const Aws::String& GetIpv6Pool() const{ return m_ipv6Pool; }

    /**
     * <p>The ID of the IPv6 address pool from which the IPv6 CIDR block is
     * allocated.</p>
     */
    inline bool Ipv6PoolHasBeenSet() const { return m_ipv6PoolHasBeenSet; }

    /**
     * <p>The ID of the IPv6 address pool from which the IPv6 CIDR block is
     * allocated.</p>
     */
    inline void SetIpv6Pool(const Aws::String& value) { m_ipv6PoolHasBeenSet = true; m_ipv6Pool = value; }

    /**
     * <p>The ID of the IPv6 address pool from which the IPv6 CIDR block is
     * allocated.</p>
     */
    inline void SetIpv6Pool(Aws::String&& value) { m_ipv6PoolHasBeenSet = true; m_ipv6Pool = std::move(value); }

    /**
     * <p>The ID of the IPv6 address pool from which the IPv6 CIDR block is
     * allocated.</p>
     */
    inline void SetIpv6Pool(const char* value) { m_ipv6PoolHasBeenSet = true; m_ipv6Pool.assign(value); }

    /**
     * <p>The ID of the IPv6 address pool from which the IPv6 CIDR block is
     * allocated.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithIpv6Pool(const Aws::String& value) { SetIpv6Pool(value); return *this;}

    /**
     * <p>The ID of the IPv6 address pool from which the IPv6 CIDR block is
     * allocated.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithIpv6Pool(Aws::String&& value) { SetIpv6Pool(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPv6 address pool from which the IPv6 CIDR block is
     * allocated.</p>
     */
    inline VpcIpv6CidrBlockAssociation& WithIpv6Pool(const char* value) { SetIpv6Pool(value); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    VpcCidrBlockState m_ipv6CidrBlockState;
    bool m_ipv6CidrBlockStateHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::String m_ipv6Pool;
    bool m_ipv6PoolHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
