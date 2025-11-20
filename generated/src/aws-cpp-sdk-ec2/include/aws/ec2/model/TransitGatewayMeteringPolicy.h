/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyState.h>

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
 * <p>Describes a transit gateway metering policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMeteringPolicy">AWS
 * API Reference</a></p>
 */
class TransitGatewayMeteringPolicy {
 public:
  AWS_EC2_API TransitGatewayMeteringPolicy() = default;
  AWS_EC2_API TransitGatewayMeteringPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayMeteringPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the transit gateway metering policy.</p>
   */
  inline const Aws::String& GetTransitGatewayMeteringPolicyId() const { return m_transitGatewayMeteringPolicyId; }
  inline bool TransitGatewayMeteringPolicyIdHasBeenSet() const { return m_transitGatewayMeteringPolicyIdHasBeenSet; }
  template <typename TransitGatewayMeteringPolicyIdT = Aws::String>
  void SetTransitGatewayMeteringPolicyId(TransitGatewayMeteringPolicyIdT&& value) {
    m_transitGatewayMeteringPolicyIdHasBeenSet = true;
    m_transitGatewayMeteringPolicyId = std::forward<TransitGatewayMeteringPolicyIdT>(value);
  }
  template <typename TransitGatewayMeteringPolicyIdT = Aws::String>
  TransitGatewayMeteringPolicy& WithTransitGatewayMeteringPolicyId(TransitGatewayMeteringPolicyIdT&& value) {
    SetTransitGatewayMeteringPolicyId(std::forward<TransitGatewayMeteringPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the transit gateway associated with the metering policy.</p>
   */
  inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
  inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  TransitGatewayMeteringPolicy& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the middlebox attachments associated with the metering policy.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMiddleboxAttachmentIds() const { return m_middleboxAttachmentIds; }
  inline bool MiddleboxAttachmentIdsHasBeenSet() const { return m_middleboxAttachmentIdsHasBeenSet; }
  template <typename MiddleboxAttachmentIdsT = Aws::Vector<Aws::String>>
  void SetMiddleboxAttachmentIds(MiddleboxAttachmentIdsT&& value) {
    m_middleboxAttachmentIdsHasBeenSet = true;
    m_middleboxAttachmentIds = std::forward<MiddleboxAttachmentIdsT>(value);
  }
  template <typename MiddleboxAttachmentIdsT = Aws::Vector<Aws::String>>
  TransitGatewayMeteringPolicy& WithMiddleboxAttachmentIds(MiddleboxAttachmentIdsT&& value) {
    SetMiddleboxAttachmentIds(std::forward<MiddleboxAttachmentIdsT>(value));
    return *this;
  }
  template <typename MiddleboxAttachmentIdsT = Aws::String>
  TransitGatewayMeteringPolicy& AddMiddleboxAttachmentIds(MiddleboxAttachmentIdsT&& value) {
    m_middleboxAttachmentIdsHasBeenSet = true;
    m_middleboxAttachmentIds.emplace_back(std::forward<MiddleboxAttachmentIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the transit gateway metering policy.</p>
   */
  inline TransitGatewayMeteringPolicyState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(TransitGatewayMeteringPolicyState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline TransitGatewayMeteringPolicy& WithState(TransitGatewayMeteringPolicyState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the metering policy update becomes effective.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateEffectiveAt() const { return m_updateEffectiveAt; }
  inline bool UpdateEffectiveAtHasBeenSet() const { return m_updateEffectiveAtHasBeenSet; }
  template <typename UpdateEffectiveAtT = Aws::Utils::DateTime>
  void SetUpdateEffectiveAt(UpdateEffectiveAtT&& value) {
    m_updateEffectiveAtHasBeenSet = true;
    m_updateEffectiveAt = std::forward<UpdateEffectiveAtT>(value);
  }
  template <typename UpdateEffectiveAtT = Aws::Utils::DateTime>
  TransitGatewayMeteringPolicy& WithUpdateEffectiveAt(UpdateEffectiveAtT&& value) {
    SetUpdateEffectiveAt(std::forward<UpdateEffectiveAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the transit gateway metering policy.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  TransitGatewayMeteringPolicy& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  TransitGatewayMeteringPolicy& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayMeteringPolicyId;
  bool m_transitGatewayMeteringPolicyIdHasBeenSet = false;

  Aws::String m_transitGatewayId;
  bool m_transitGatewayIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_middleboxAttachmentIds;
  bool m_middleboxAttachmentIdsHasBeenSet = false;

  TransitGatewayMeteringPolicyState m_state{TransitGatewayMeteringPolicyState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::Utils::DateTime m_updateEffectiveAt{};
  bool m_updateEffectiveAtHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
