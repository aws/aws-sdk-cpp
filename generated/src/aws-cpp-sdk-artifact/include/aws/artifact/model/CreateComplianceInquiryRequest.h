/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactRequest.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/InquiryContent.h>
#include <aws/artifact/model/InquirySupportMode.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Artifact {
namespace Model {

/**
 */
class CreateComplianceInquiryRequest : public ArtifactRequest {
 public:
  AWS_ARTIFACT_API CreateComplianceInquiryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateComplianceInquiry"; }

  AWS_ARTIFACT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Title of the inquiry.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateComplianceInquiryRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Content for creating a compliance inquiry - either a single query or file
   * content.</p>
   */
  inline const InquiryContent& GetInquiryContent() const { return m_inquiryContent; }
  inline bool InquiryContentHasBeenSet() const { return m_inquiryContentHasBeenSet; }
  template <typename InquiryContentT = InquiryContent>
  void SetInquiryContent(InquiryContentT&& value) {
    m_inquiryContentHasBeenSet = true;
    m_inquiryContent = std::forward<InquiryContentT>(value);
  }
  template <typename InquiryContentT = InquiryContent>
  CreateComplianceInquiryRequest& WithInquiryContent(InquiryContentT&& value) {
    SetInquiryContent(std::forward<InquiryContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateComplianceInquiryRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Support mode for inquiry processing. Only supported for file upload mode.
   * Defaults to AI_ONLY if not specified.</p>
   */
  inline InquirySupportMode GetSupportMode() const { return m_supportMode; }
  inline bool SupportModeHasBeenSet() const { return m_supportModeHasBeenSet; }
  inline void SetSupportMode(InquirySupportMode value) {
    m_supportModeHasBeenSet = true;
    m_supportMode = value;
  }
  inline CreateComplianceInquiryRequest& WithSupportMode(InquirySupportMode value) {
    SetSupportMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the compliance inquiry resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateComplianceInquiryRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateComplianceInquiryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  InquiryContent m_inquiryContent;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  InquirySupportMode m_supportMode{InquirySupportMode::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_inquiryContentHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_supportModeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
