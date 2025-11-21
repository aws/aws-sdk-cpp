/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPolicyState.h>
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
 * <p>Information about an IPAM policy.</p> <p>An IPAM policy is a set of rules
 * that define how public IPv4 addresses from IPAM pools are allocated to Amazon
 * Web Services resources. Each rule maps an Amazon Web Services service to IPAM
 * pools that the service will use to get IP addresses. A single policy can have
 * multiple rules and be applied to multiple Amazon Web Services Regions. If the
 * IPAM pool run out of addresses then the services fallback to Amazon-provided IP
 * addresses. A policy can be applied to an individual Amazon Web Services account
 * or an entity within Amazon Web Services Organizations.</p><p><h3>See Also:</h3>
 * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPolicy">AWS
 * API Reference</a></p>
 */
class IpamPolicy {
 public:
  AWS_EC2_API IpamPolicy() = default;
  AWS_EC2_API IpamPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The account ID that owns the IPAM policy.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  IpamPolicy& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM policy.</p>
   */
  inline const Aws::String& GetIpamPolicyId() const { return m_ipamPolicyId; }
  inline bool IpamPolicyIdHasBeenSet() const { return m_ipamPolicyIdHasBeenSet; }
  template <typename IpamPolicyIdT = Aws::String>
  void SetIpamPolicyId(IpamPolicyIdT&& value) {
    m_ipamPolicyIdHasBeenSet = true;
    m_ipamPolicyId = std::forward<IpamPolicyIdT>(value);
  }
  template <typename IpamPolicyIdT = Aws::String>
  IpamPolicy& WithIpamPolicyId(IpamPolicyIdT&& value) {
    SetIpamPolicyId(std::forward<IpamPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IPAM policy.</p>
   */
  inline const Aws::String& GetIpamPolicyArn() const { return m_ipamPolicyArn; }
  inline bool IpamPolicyArnHasBeenSet() const { return m_ipamPolicyArnHasBeenSet; }
  template <typename IpamPolicyArnT = Aws::String>
  void SetIpamPolicyArn(IpamPolicyArnT&& value) {
    m_ipamPolicyArnHasBeenSet = true;
    m_ipamPolicyArn = std::forward<IpamPolicyArnT>(value);
  }
  template <typename IpamPolicyArnT = Aws::String>
  IpamPolicy& WithIpamPolicyArn(IpamPolicyArnT&& value) {
    SetIpamPolicyArn(std::forward<IpamPolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region of the IPAM policy.</p>
   */
  inline const Aws::String& GetIpamPolicyRegion() const { return m_ipamPolicyRegion; }
  inline bool IpamPolicyRegionHasBeenSet() const { return m_ipamPolicyRegionHasBeenSet; }
  template <typename IpamPolicyRegionT = Aws::String>
  void SetIpamPolicyRegion(IpamPolicyRegionT&& value) {
    m_ipamPolicyRegionHasBeenSet = true;
    m_ipamPolicyRegion = std::forward<IpamPolicyRegionT>(value);
  }
  template <typename IpamPolicyRegionT = Aws::String>
  IpamPolicy& WithIpamPolicyRegion(IpamPolicyRegionT&& value) {
    SetIpamPolicyRegion(std::forward<IpamPolicyRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the IPAM policy.</p>
   */
  inline IpamPolicyState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IpamPolicyState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IpamPolicy& WithState(IpamPolicyState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message about the state of the IPAM policy.</p>
   */
  inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
  inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
  template <typename StateMessageT = Aws::String>
  void SetStateMessage(StateMessageT&& value) {
    m_stateMessageHasBeenSet = true;
    m_stateMessage = std::forward<StateMessageT>(value);
  }
  template <typename StateMessageT = Aws::String>
  IpamPolicy& WithStateMessage(StateMessageT&& value) {
    SetStateMessage(std::forward<StateMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the IPAM policy.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  IpamPolicy& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  IpamPolicy& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM this policy belongs to.</p>
   */
  inline const Aws::String& GetIpamId() const { return m_ipamId; }
  inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
  template <typename IpamIdT = Aws::String>
  void SetIpamId(IpamIdT&& value) {
    m_ipamIdHasBeenSet = true;
    m_ipamId = std::forward<IpamIdT>(value);
  }
  template <typename IpamIdT = Aws::String>
  IpamPolicy& WithIpamId(IpamIdT&& value) {
    SetIpamId(std::forward<IpamIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ownerId;
  bool m_ownerIdHasBeenSet = false;

  Aws::String m_ipamPolicyId;
  bool m_ipamPolicyIdHasBeenSet = false;

  Aws::String m_ipamPolicyArn;
  bool m_ipamPolicyArnHasBeenSet = false;

  Aws::String m_ipamPolicyRegion;
  bool m_ipamPolicyRegionHasBeenSet = false;

  IpamPolicyState m_state{IpamPolicyState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::String m_stateMessage;
  bool m_stateMessageHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::String m_ipamId;
  bool m_ipamIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
