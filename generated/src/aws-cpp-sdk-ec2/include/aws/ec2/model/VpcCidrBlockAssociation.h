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
   * <p>Describes an IPv4 CIDR block associated with a VPC.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcCidrBlockAssociation">AWS
   * API Reference</a></p>
   */
  class VpcCidrBlockAssociation
  {
  public:
    AWS_EC2_API VpcCidrBlockAssociation() = default;
    AWS_EC2_API VpcCidrBlockAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcCidrBlockAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The association ID for the IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    VpcCidrBlockAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    VpcCidrBlockAssociation& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the state of the CIDR block.</p>
     */
    inline const VpcCidrBlockState& GetCidrBlockState() const { return m_cidrBlockState; }
    inline bool CidrBlockStateHasBeenSet() const { return m_cidrBlockStateHasBeenSet; }
    template<typename CidrBlockStateT = VpcCidrBlockState>
    void SetCidrBlockState(CidrBlockStateT&& value) { m_cidrBlockStateHasBeenSet = true; m_cidrBlockState = std::forward<CidrBlockStateT>(value); }
    template<typename CidrBlockStateT = VpcCidrBlockState>
    VpcCidrBlockAssociation& WithCidrBlockState(CidrBlockStateT&& value) { SetCidrBlockState(std::forward<CidrBlockStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    VpcCidrBlockState m_cidrBlockState;
    bool m_cidrBlockStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
