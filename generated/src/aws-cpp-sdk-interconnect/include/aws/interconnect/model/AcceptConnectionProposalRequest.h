/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/interconnect/InterconnectRequest.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/AttachPoint.h>

#include <utility>

namespace Aws {
namespace Interconnect {
namespace Model {

/**
 */
class AcceptConnectionProposalRequest : public InterconnectRequest {
 public:
  AWS_INTERCONNECT_API AcceptConnectionProposalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AcceptConnectionProposal"; }

  AWS_INTERCONNECT_API Aws::String SerializePayload() const override;

  AWS_INTERCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Attach Point to which the connection should be associated.</p>
   */
  inline const AttachPoint& GetAttachPoint() const { return m_attachPoint; }
  inline bool AttachPointHasBeenSet() const { return m_attachPointHasBeenSet; }
  template <typename AttachPointT = AttachPoint>
  void SetAttachPoint(AttachPointT&& value) {
    m_attachPointHasBeenSet = true;
    m_attachPoint = std::forward<AttachPointT>(value);
  }
  template <typename AttachPointT = AttachPoint>
  AcceptConnectionProposalRequest& WithAttachPoint(AttachPointT&& value) {
    SetAttachPoint(std::forward<AttachPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Activation Key that was generated on a supported partner's portal. This
   * key captures the desired parameters from the initial creation request.</p>
   * <p>The details of this request can be described using with
   * <a>DescribeConnectionProposal</a>. </p>
   */
  inline const Aws::String& GetActivationKey() const { return m_activationKey; }
  inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }
  template <typename ActivationKeyT = Aws::String>
  void SetActivationKey(ActivationKeyT&& value) {
    m_activationKeyHasBeenSet = true;
    m_activationKey = std::forward<ActivationKeyT>(value);
  }
  template <typename ActivationKeyT = Aws::String>
  AcceptConnectionProposalRequest& WithActivationKey(ActivationKeyT&& value) {
    SetActivationKey(std::forward<ActivationKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description to distinguish this <a>Connection</a>.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AcceptConnectionProposalRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the resulting <a>Connection</a>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  AcceptConnectionProposalRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  AcceptConnectionProposalRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token used for the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AcceptConnectionProposalRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  AttachPoint m_attachPoint;

  Aws::String m_activationKey;

  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_attachPointHasBeenSet = false;
  bool m_activationKeyHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
