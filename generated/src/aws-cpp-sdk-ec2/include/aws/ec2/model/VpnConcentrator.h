/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a VPN concentrator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnConcentrator">AWS
 * API Reference</a></p>
 */
class VpnConcentrator {
 public:
  AWS_EC2_API VpnConcentrator() = default;
  AWS_EC2_API VpnConcentrator(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpnConcentrator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the VPN concentrator.</p>
   */
  inline const Aws::String& GetVpnConcentratorId() const { return m_vpnConcentratorId; }
  inline bool VpnConcentratorIdHasBeenSet() const { return m_vpnConcentratorIdHasBeenSet; }
  template <typename VpnConcentratorIdT = Aws::String>
  void SetVpnConcentratorId(VpnConcentratorIdT&& value) {
    m_vpnConcentratorIdHasBeenSet = true;
    m_vpnConcentratorId = std::forward<VpnConcentratorIdT>(value);
  }
  template <typename VpnConcentratorIdT = Aws::String>
  VpnConcentrator& WithVpnConcentratorId(VpnConcentratorIdT&& value) {
    SetVpnConcentratorId(std::forward<VpnConcentratorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the VPN concentrator.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  VpnConcentrator& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the transit gateway associated with the VPN concentrator.</p>
   */
  inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
  inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  VpnConcentrator& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the transit gateway attachment for the VPN concentrator.</p>
   */
  inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
  inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    m_transitGatewayAttachmentIdHasBeenSet = true;
    m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value);
  }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  VpnConcentrator& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of VPN concentrator.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  VpnConcentrator& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any tags assigned to the VPN concentrator.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  VpnConcentrator& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  VpnConcentrator& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpnConcentratorId;
  bool m_vpnConcentratorIdHasBeenSet = false;

  Aws::String m_state;
  bool m_stateHasBeenSet = false;

  Aws::String m_transitGatewayId;
  bool m_transitGatewayIdHasBeenSet = false;

  Aws::String m_transitGatewayAttachmentId;
  bool m_transitGatewayAttachmentIdHasBeenSet = false;

  Aws::String m_type;
  bool m_typeHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
