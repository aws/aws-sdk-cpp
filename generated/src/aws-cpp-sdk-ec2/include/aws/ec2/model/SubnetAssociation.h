/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayMulitcastDomainAssociationState.h>
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
   * <p>Describes the subnet association with the transit gateway multicast
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SubnetAssociation">AWS
   * API Reference</a></p>
   */
  class SubnetAssociation
  {
  public:
    AWS_EC2_API SubnetAssociation();
    AWS_EC2_API SubnetAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SubnetAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline SubnetAssociation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline SubnetAssociation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline SubnetAssociation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the subnet association.</p>
     */
    inline const TransitGatewayMulitcastDomainAssociationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayMulitcastDomainAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayMulitcastDomainAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline SubnetAssociation& WithState(const TransitGatewayMulitcastDomainAssociationState& value) { SetState(value); return *this;}
    inline SubnetAssociation& WithState(TransitGatewayMulitcastDomainAssociationState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    TransitGatewayMulitcastDomainAssociationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
