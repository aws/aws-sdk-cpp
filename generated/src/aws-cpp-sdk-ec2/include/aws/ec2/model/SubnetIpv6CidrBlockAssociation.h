/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SubnetCidrBlockState.h>
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
    AWS_EC2_API SubnetIpv6CidrBlockAssociation();
    AWS_EC2_API SubnetIpv6CidrBlockAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SubnetIpv6CidrBlockAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


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
    inline SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>The state of the CIDR block.</p>
     */
    inline const SubnetCidrBlockState& GetIpv6CidrBlockState() const{ return m_ipv6CidrBlockState; }

    /**
     * <p>The state of the CIDR block.</p>
     */
    inline bool Ipv6CidrBlockStateHasBeenSet() const { return m_ipv6CidrBlockStateHasBeenSet; }

    /**
     * <p>The state of the CIDR block.</p>
     */
    inline void SetIpv6CidrBlockState(const SubnetCidrBlockState& value) { m_ipv6CidrBlockStateHasBeenSet = true; m_ipv6CidrBlockState = value; }

    /**
     * <p>The state of the CIDR block.</p>
     */
    inline void SetIpv6CidrBlockState(SubnetCidrBlockState&& value) { m_ipv6CidrBlockStateHasBeenSet = true; m_ipv6CidrBlockState = std::move(value); }

    /**
     * <p>The state of the CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlockState(const SubnetCidrBlockState& value) { SetIpv6CidrBlockState(value); return *this;}

    /**
     * <p>The state of the CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlockState(SubnetCidrBlockState&& value) { SetIpv6CidrBlockState(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    SubnetCidrBlockState m_ipv6CidrBlockState;
    bool m_ipv6CidrBlockStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
