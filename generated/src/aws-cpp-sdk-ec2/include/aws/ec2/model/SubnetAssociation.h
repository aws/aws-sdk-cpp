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


    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline SubnetAssociation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline SubnetAssociation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline SubnetAssociation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The state of the subnet association.</p>
     */
    inline const TransitGatewayMulitcastDomainAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the subnet association.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the subnet association.</p>
     */
    inline void SetState(const TransitGatewayMulitcastDomainAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the subnet association.</p>
     */
    inline void SetState(TransitGatewayMulitcastDomainAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the subnet association.</p>
     */
    inline SubnetAssociation& WithState(const TransitGatewayMulitcastDomainAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the subnet association.</p>
     */
    inline SubnetAssociation& WithState(TransitGatewayMulitcastDomainAssociationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    TransitGatewayMulitcastDomainAssociationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
