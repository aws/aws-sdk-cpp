/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateWorkloadIdentityRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateWorkloadIdentityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWorkloadIdentity"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workload identity. The name must be unique within your
   * account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateWorkloadIdentityRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of allowed OAuth2 return URLs for resources associated with this
   * workload identity.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedResourceOauth2ReturnUrls() const { return m_allowedResourceOauth2ReturnUrls; }
  inline bool AllowedResourceOauth2ReturnUrlsHasBeenSet() const { return m_allowedResourceOauth2ReturnUrlsHasBeenSet; }
  template <typename AllowedResourceOauth2ReturnUrlsT = Aws::Vector<Aws::String>>
  void SetAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) {
    m_allowedResourceOauth2ReturnUrlsHasBeenSet = true;
    m_allowedResourceOauth2ReturnUrls = std::forward<AllowedResourceOauth2ReturnUrlsT>(value);
  }
  template <typename AllowedResourceOauth2ReturnUrlsT = Aws::Vector<Aws::String>>
  CreateWorkloadIdentityRequest& WithAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) {
    SetAllowedResourceOauth2ReturnUrls(std::forward<AllowedResourceOauth2ReturnUrlsT>(value));
    return *this;
  }
  template <typename AllowedResourceOauth2ReturnUrlsT = Aws::String>
  CreateWorkloadIdentityRequest& AddAllowedResourceOauth2ReturnUrls(AllowedResourceOauth2ReturnUrlsT&& value) {
    m_allowedResourceOauth2ReturnUrlsHasBeenSet = true;
    m_allowedResourceOauth2ReturnUrls.emplace_back(std::forward<AllowedResourceOauth2ReturnUrlsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys and values to assign to the workload identity. Tags enable
   * you to categorize your resources in different ways, for example, by purpose,
   * owner, or environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateWorkloadIdentityRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateWorkloadIdentityRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::Vector<Aws::String> m_allowedResourceOauth2ReturnUrls;
  bool m_allowedResourceOauth2ReturnUrlsHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
