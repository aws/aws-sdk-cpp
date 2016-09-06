/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/VpnState.h>
#include <aws/ec2/model/GatewayType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpcAttachment.h>
#include <aws/ec2/model/Tag.h>

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
   * <p>Describes a virtual private gateway.</p>
   */
  class AWS_EC2_API VpnGateway
  {
  public:
    VpnGateway();
    VpnGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpnGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline VpnGateway& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline VpnGateway& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline VpnGateway& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The current state of the virtual private gateway.</p>
     */
    inline const VpnState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the virtual private gateway.</p>
     */
    inline void SetState(const VpnState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the virtual private gateway.</p>
     */
    inline void SetState(VpnState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the virtual private gateway.</p>
     */
    inline VpnGateway& WithState(const VpnState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the virtual private gateway.</p>
     */
    inline VpnGateway& WithState(VpnState&& value) { SetState(value); return *this;}

    /**
     * <p>The type of VPN connection the virtual private gateway supports.</p>
     */
    inline const GatewayType& GetType() const{ return m_type; }

    /**
     * <p>The type of VPN connection the virtual private gateway supports.</p>
     */
    inline void SetType(const GatewayType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection the virtual private gateway supports.</p>
     */
    inline void SetType(GatewayType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection the virtual private gateway supports.</p>
     */
    inline VpnGateway& WithType(const GatewayType& value) { SetType(value); return *this;}

    /**
     * <p>The type of VPN connection the virtual private gateway supports.</p>
     */
    inline VpnGateway& WithType(GatewayType&& value) { SetType(value); return *this;}

    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned. </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned. </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned. </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned. </p>
     */
    inline VpnGateway& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned. </p>
     */
    inline VpnGateway& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned. </p>
     */
    inline VpnGateway& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline const Aws::Vector<VpcAttachment>& GetVpcAttachments() const{ return m_vpcAttachments; }

    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline void SetVpcAttachments(const Aws::Vector<VpcAttachment>& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments = value; }

    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline void SetVpcAttachments(Aws::Vector<VpcAttachment>&& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments = value; }

    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline VpnGateway& WithVpcAttachments(const Aws::Vector<VpcAttachment>& value) { SetVpcAttachments(value); return *this;}

    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline VpnGateway& WithVpcAttachments(Aws::Vector<VpcAttachment>&& value) { SetVpcAttachments(value); return *this;}

    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline VpnGateway& AddVpcAttachments(const VpcAttachment& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments.push_back(value); return *this; }

    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline VpnGateway& AddVpcAttachments(VpcAttachment&& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline VpnGateway& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline VpnGateway& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline VpnGateway& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline VpnGateway& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet;
    VpnState m_state;
    bool m_stateHasBeenSet;
    GatewayType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::Vector<VpcAttachment> m_vpcAttachments;
    bool m_vpcAttachmentsHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
