﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpnState.h>
#include <aws/ec2/model/GatewayType.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/VpcAttachment.h>
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
   * <p>Describes a virtual private gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnGateway">AWS API
   * Reference</a></p>
   */
  class VpnGateway
  {
  public:
    AWS_EC2_API VpnGateway();
    AWS_EC2_API VpnGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline VpnGateway& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VpnGateway& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VpnGateway& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VpnGateway& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VpnGateway& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::move(value); }
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }
    inline VpnGateway& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}
    inline VpnGateway& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}
    inline VpnGateway& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the virtual private gateway.</p>
     */
    inline const VpnState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VpnState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VpnState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VpnGateway& WithState(const VpnState& value) { SetState(value); return *this;}
    inline VpnGateway& WithState(VpnState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection the virtual private gateway supports.</p>
     */
    inline const GatewayType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GatewayType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GatewayType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline VpnGateway& WithType(const GatewayType& value) { SetType(value); return *this;}
    inline VpnGateway& WithType(GatewayType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline VpnGateway& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline VpnGateway& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline VpnGateway& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline const Aws::Vector<VpcAttachment>& GetVpcAttachments() const{ return m_vpcAttachments; }
    inline bool VpcAttachmentsHasBeenSet() const { return m_vpcAttachmentsHasBeenSet; }
    inline void SetVpcAttachments(const Aws::Vector<VpcAttachment>& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments = value; }
    inline void SetVpcAttachments(Aws::Vector<VpcAttachment>&& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments = std::move(value); }
    inline VpnGateway& WithVpcAttachments(const Aws::Vector<VpcAttachment>& value) { SetVpcAttachments(value); return *this;}
    inline VpnGateway& WithVpcAttachments(Aws::Vector<VpcAttachment>&& value) { SetVpcAttachments(std::move(value)); return *this;}
    inline VpnGateway& AddVpcAttachments(const VpcAttachment& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments.push_back(value); return *this; }
    inline VpnGateway& AddVpcAttachments(VpcAttachment&& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    long long m_amazonSideAsn;
    bool m_amazonSideAsnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    VpnState m_state;
    bool m_stateHasBeenSet = false;

    GatewayType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<VpcAttachment> m_vpcAttachments;
    bool m_vpcAttachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
