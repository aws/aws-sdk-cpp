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
   * <p>Describes an IPv6 CIDR block associated with a subnet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SubnetIpv6CidrBlockAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SubnetIpv6CidrBlockAssociation
  {
  public:
    SubnetIpv6CidrBlockAssociation();
    SubnetIpv6CidrBlockAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    SubnetIpv6CidrBlockAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

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
     * <p>Information about the state of the CIDR block.</p>
     */
    inline const SubnetCidrBlockState& GetIpv6CidrBlockState() const{ return m_ipv6CidrBlockState; }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline void SetIpv6CidrBlockState(const SubnetCidrBlockState& value) { m_ipv6CidrBlockStateHasBeenSet = true; m_ipv6CidrBlockState = value; }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline void SetIpv6CidrBlockState(SubnetCidrBlockState&& value) { m_ipv6CidrBlockStateHasBeenSet = true; m_ipv6CidrBlockState = std::move(value); }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlockState(const SubnetCidrBlockState& value) { SetIpv6CidrBlockState(value); return *this;}

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline SubnetIpv6CidrBlockAssociation& WithIpv6CidrBlockState(SubnetCidrBlockState&& value) { SetIpv6CidrBlockState(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet;

    SubnetCidrBlockState m_ipv6CidrBlockState;
    bool m_ipv6CidrBlockStateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
