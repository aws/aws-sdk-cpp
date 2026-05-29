/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SecretReference.h>
#include <aws/bedrock-agentcore-control/model/SecretSourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateApiKeyCredentialProviderRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateApiKeyCredentialProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateApiKeyCredentialProvider"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the API key credential provider. The name must be unique within
   * your account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateApiKeyCredentialProviderRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API key to use for authentication. This value is encrypted and stored
   * securely.</p>
   */
  inline const Aws::String& GetApiKey() const { return m_apiKey; }
  inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
  template <typename ApiKeyT = Aws::String>
  void SetApiKey(ApiKeyT&& value) {
    m_apiKeyHasBeenSet = true;
    m_apiKey = std::forward<ApiKeyT>(value);
  }
  template <typename ApiKeyT = Aws::String>
  CreateApiKeyCredentialProviderRequest& WithApiKey(ApiKeyT&& value) {
    SetApiKey(std::forward<ApiKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reference to the AWS Secrets Manager secret that stores the API key. This
   * includes the secret ID and the JSON key used to extract the API key value from
   * the secret. Required when <code>apiKeySecretSource</code> is set to
   * <code>EXTERNAL</code>.</p>
   */
  inline const SecretReference& GetApiKeySecretConfig() const { return m_apiKeySecretConfig; }
  inline bool ApiKeySecretConfigHasBeenSet() const { return m_apiKeySecretConfigHasBeenSet; }
  template <typename ApiKeySecretConfigT = SecretReference>
  void SetApiKeySecretConfig(ApiKeySecretConfigT&& value) {
    m_apiKeySecretConfigHasBeenSet = true;
    m_apiKeySecretConfig = std::forward<ApiKeySecretConfigT>(value);
  }
  template <typename ApiKeySecretConfigT = SecretReference>
  CreateApiKeyCredentialProviderRequest& WithApiKeySecretConfig(ApiKeySecretConfigT&& value) {
    SetApiKeySecretConfig(std::forward<ApiKeySecretConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type of the API key secret. Use <code>MANAGED</code> if the secret
   * is managed by the service, or <code>EXTERNAL</code> if you manage the secret
   * yourself in AWS Secrets Manager.</p>
   */
  inline SecretSourceType GetApiKeySecretSource() const { return m_apiKeySecretSource; }
  inline bool ApiKeySecretSourceHasBeenSet() const { return m_apiKeySecretSourceHasBeenSet; }
  inline void SetApiKeySecretSource(SecretSourceType value) {
    m_apiKeySecretSourceHasBeenSet = true;
    m_apiKeySecretSource = value;
  }
  inline CreateApiKeyCredentialProviderRequest& WithApiKeySecretSource(SecretSourceType value) {
    SetApiKeySecretSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys and values to assign to the API key credential provider.
   * Tags enable you to categorize your resources in different ways, for example, by
   * purpose, owner, or environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateApiKeyCredentialProviderRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateApiKeyCredentialProviderRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_apiKey;

  SecretReference m_apiKeySecretConfig;

  SecretSourceType m_apiKeySecretSource{SecretSourceType::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_apiKeyHasBeenSet = false;
  bool m_apiKeySecretConfigHasBeenSet = false;
  bool m_apiKeySecretSourceHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
