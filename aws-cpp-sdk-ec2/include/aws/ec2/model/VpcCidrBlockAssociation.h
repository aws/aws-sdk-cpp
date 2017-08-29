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
   * <p>Describes an IPv4 CIDR block associated with a VPC.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcCidrBlockAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VpcCidrBlockAssociation
  {
  public:
    VpcCidrBlockAssociation();
    VpcCidrBlockAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcCidrBlockAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline VpcCidrBlockAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline VpcCidrBlockAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline VpcCidrBlockAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline VpcCidrBlockAssociation& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline VpcCidrBlockAssociation& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline VpcCidrBlockAssociation& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline const VpcCidrBlockState& GetCidrBlockState() const{ return m_cidrBlockState; }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline void SetCidrBlockState(const VpcCidrBlockState& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = value; }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline void SetCidrBlockState(VpcCidrBlockState&& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = std::move(value); }

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline VpcCidrBlockAssociation& WithCidrBlockState(const VpcCidrBlockState& value) { SetCidrBlockState(value); return *this;}

    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline VpcCidrBlockAssociation& WithCidrBlockState(VpcCidrBlockState&& value) { SetCidrBlockState(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;

    VpcCidrBlockState m_cidrBlockState;
    bool m_cidrBlockStateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
