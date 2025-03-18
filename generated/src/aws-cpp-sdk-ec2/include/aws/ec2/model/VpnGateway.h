/**
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
    AWS_EC2_API VpnGateway() = default;
    AWS_EC2_API VpnGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline VpnGateway& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the virtual private gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VpnGateway& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VpnGateway& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const { return m_vpnGatewayId; }
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }
    template<typename VpnGatewayIdT = Aws::String>
    void SetVpnGatewayId(VpnGatewayIdT&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::forward<VpnGatewayIdT>(value); }
    template<typename VpnGatewayIdT = Aws::String>
    VpnGateway& WithVpnGatewayId(VpnGatewayIdT&& value) { SetVpnGatewayId(std::forward<VpnGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the virtual private gateway.</p>
     */
    inline VpnState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(VpnState value) { m_stateHasBeenSet = true; m_state = value; }
    inline VpnGateway& WithState(VpnState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection the virtual private gateway supports.</p>
     */
    inline GatewayType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GatewayType value) { m_typeHasBeenSet = true; m_type = value; }
    inline VpnGateway& WithType(GatewayType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the virtual private gateway was created, if
     * applicable. This field may be empty or not returned.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    VpnGateway& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any VPCs attached to the virtual private gateway.</p>
     */
    inline const Aws::Vector<VpcAttachment>& GetVpcAttachments() const { return m_vpcAttachments; }
    inline bool VpcAttachmentsHasBeenSet() const { return m_vpcAttachmentsHasBeenSet; }
    template<typename VpcAttachmentsT = Aws::Vector<VpcAttachment>>
    void SetVpcAttachments(VpcAttachmentsT&& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments = std::forward<VpcAttachmentsT>(value); }
    template<typename VpcAttachmentsT = Aws::Vector<VpcAttachment>>
    VpnGateway& WithVpcAttachments(VpcAttachmentsT&& value) { SetVpcAttachments(std::forward<VpcAttachmentsT>(value)); return *this;}
    template<typename VpcAttachmentsT = VpcAttachment>
    VpnGateway& AddVpcAttachments(VpcAttachmentsT&& value) { m_vpcAttachmentsHasBeenSet = true; m_vpcAttachments.emplace_back(std::forward<VpcAttachmentsT>(value)); return *this; }
    ///@}
  private:

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    VpnState m_state{VpnState::NOT_SET};
    bool m_stateHasBeenSet = false;

    GatewayType m_type{GatewayType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<VpcAttachment> m_vpcAttachments;
    bool m_vpcAttachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
