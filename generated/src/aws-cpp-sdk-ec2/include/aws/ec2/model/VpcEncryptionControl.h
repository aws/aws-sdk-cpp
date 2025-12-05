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
#include <aws/ec2/model/VpcEncryptionControlExclusions.h>
#include <aws/ec2/model/VpcEncryptionControlMode.h>
#include <aws/ec2/model/VpcEncryptionControlState.h>

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
 * <p>Describes the configuration and state of VPC encryption controls.</p> <p>For
 * more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-encryption-controls.html">Enforce
 * VPC encryption in transit</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEncryptionControl">AWS
 * API Reference</a></p>
 */
class VpcEncryptionControl {
 public:
  AWS_EC2_API VpcEncryptionControl() = default;
  AWS_EC2_API VpcEncryptionControl(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpcEncryptionControl& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the VPC associated with the encryption control configuration.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  VpcEncryptionControl& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC Encryption Control configuration.</p>
   */
  inline const Aws::String& GetVpcEncryptionControlId() const { return m_vpcEncryptionControlId; }
  inline bool VpcEncryptionControlIdHasBeenSet() const { return m_vpcEncryptionControlIdHasBeenSet; }
  template <typename VpcEncryptionControlIdT = Aws::String>
  void SetVpcEncryptionControlId(VpcEncryptionControlIdT&& value) {
    m_vpcEncryptionControlIdHasBeenSet = true;
    m_vpcEncryptionControlId = std::forward<VpcEncryptionControlIdT>(value);
  }
  template <typename VpcEncryptionControlIdT = Aws::String>
  VpcEncryptionControl& WithVpcEncryptionControlId(VpcEncryptionControlIdT&& value) {
    SetVpcEncryptionControlId(std::forward<VpcEncryptionControlIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption mode for the VPC Encryption Control configuration.</p>
   */
  inline VpcEncryptionControlMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(VpcEncryptionControlMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline VpcEncryptionControl& WithMode(VpcEncryptionControlMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the VPC Encryption Control configuration.</p>
   */
  inline VpcEncryptionControlState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(VpcEncryptionControlState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline VpcEncryptionControl& WithState(VpcEncryptionControlState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message providing additional information about the encryption control
   * state.</p>
   */
  inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
  inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
  template <typename StateMessageT = Aws::String>
  void SetStateMessage(StateMessageT&& value) {
    m_stateMessageHasBeenSet = true;
    m_stateMessage = std::forward<StateMessageT>(value);
  }
  template <typename StateMessageT = Aws::String>
  VpcEncryptionControl& WithStateMessage(StateMessageT&& value) {
    SetStateMessage(std::forward<StateMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about resource exclusions for the VPC Encryption Control
   * configuration.</p>
   */
  inline const VpcEncryptionControlExclusions& GetResourceExclusions() const { return m_resourceExclusions; }
  inline bool ResourceExclusionsHasBeenSet() const { return m_resourceExclusionsHasBeenSet; }
  template <typename ResourceExclusionsT = VpcEncryptionControlExclusions>
  void SetResourceExclusions(ResourceExclusionsT&& value) {
    m_resourceExclusionsHasBeenSet = true;
    m_resourceExclusions = std::forward<ResourceExclusionsT>(value);
  }
  template <typename ResourceExclusionsT = VpcEncryptionControlExclusions>
  VpcEncryptionControl& WithResourceExclusions(ResourceExclusionsT&& value) {
    SetResourceExclusions(std::forward<ResourceExclusionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the VPC Encryption Control configuration.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  VpcEncryptionControl& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  VpcEncryptionControl& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcId;

  Aws::String m_vpcEncryptionControlId;

  VpcEncryptionControlMode m_mode{VpcEncryptionControlMode::NOT_SET};

  VpcEncryptionControlState m_state{VpcEncryptionControlState::NOT_SET};

  Aws::String m_stateMessage;

  VpcEncryptionControlExclusions m_resourceExclusions;

  Aws::Vector<Tag> m_tags;
  bool m_vpcIdHasBeenSet = false;
  bool m_vpcEncryptionControlIdHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateMessageHasBeenSet = false;
  bool m_resourceExclusionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
