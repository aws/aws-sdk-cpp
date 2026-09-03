/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalIdpConfig.h>
#include <aws/bedrock-agentcore-control/model/ConsentPortalSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateConsentPortalRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateConsentPortalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateConsentPortal"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the consent portal
   * assumes to access the resources defined in its sources.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  CreateConsentPortalRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity provider configuration that the consent portal uses to
   * authenticate end users.</p>
   */
  inline const ConsentPortalIdpConfig& GetIdpConfig() const { return m_idpConfig; }
  inline bool IdpConfigHasBeenSet() const { return m_idpConfigHasBeenSet; }
  template <typename IdpConfigT = ConsentPortalIdpConfig>
  void SetIdpConfig(IdpConfigT&& value) {
    m_idpConfigHasBeenSet = true;
    m_idpConfig = std::forward<IdpConfigT>(value);
  }
  template <typename IdpConfigT = ConsentPortalIdpConfig>
  CreateConsentPortalRequest& WithIdpConfig(IdpConfigT&& value) {
    SetIdpConfig(std::forward<IdpConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the consent portal. The name must be unique within your
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
  CreateConsentPortalRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources served by the consent portal. Currently, we only support type
   * <code>agentcore-gateway</code>.</p>
   */
  inline const Aws::Vector<ConsentPortalSource>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<ConsentPortalSource>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<ConsentPortalSource>>
  CreateConsentPortalRequest& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  template <typename SourcesT = ConsentPortalSource>
  CreateConsentPortalRequest& AddSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources.emplace_back(std::forward<SourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the consent portal.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateConsentPortalRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys and values to assign to the consent portal. Tags enable you
   * to categorize your resources in different ways, for example, by purpose, owner,
   * or environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateConsentPortalRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateConsentPortalRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_executionRoleArn;

  ConsentPortalIdpConfig m_idpConfig;

  Aws::String m_name;

  Aws::Vector<ConsentPortalSource> m_sources;

  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_idpConfigHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
