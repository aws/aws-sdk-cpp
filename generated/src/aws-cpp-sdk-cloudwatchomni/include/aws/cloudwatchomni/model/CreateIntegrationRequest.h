/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/IntegrationCredential.h>
#include <aws/cloudwatchomni/model/IntegrationType.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>The request for creating an integration with a third-party
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateIntegrationInput">AWS
 * API Reference</a></p>
 */
class CreateIntegrationRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API CreateIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIntegration"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The type of third-party provider to integrate with.</p>
   */
  inline IntegrationType GetIntegrationType() const { return m_integrationType; }
  inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
  inline void SetIntegrationType(IntegrationType value) {
    m_integrationTypeHasBeenSet = true;
    m_integrationType = value;
  }
  inline CreateIntegrationRequest& WithIntegrationType(IntegrationType value) {
    SetIntegrationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the new integration; unique within the account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateIntegrationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential used to authenticate with the third-party provider.</p>
   */
  inline const IntegrationCredential& GetCredential() const { return m_credential; }
  inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
  template <typename CredentialT = IntegrationCredential>
  void SetCredential(CredentialT&& value) {
    m_credentialHasBeenSet = true;
    m_credential = std::forward<CredentialT>(value);
  }
  template <typename CredentialT = IntegrationCredential>
  CreateIntegrationRequest& WithCredential(CredentialT&& value) {
    SetCredential(std::forward<CredentialT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provider-specific attributes to associate with the integration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetIntegrationAttributes() const { return m_integrationAttributes; }
  inline bool IntegrationAttributesHasBeenSet() const { return m_integrationAttributesHasBeenSet; }
  template <typename IntegrationAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetIntegrationAttributes(IntegrationAttributesT&& value) {
    m_integrationAttributesHasBeenSet = true;
    m_integrationAttributes = std::forward<IntegrationAttributesT>(value);
  }
  template <typename IntegrationAttributesT = Aws::Map<Aws::String, Aws::String>>
  CreateIntegrationRequest& WithIntegrationAttributes(IntegrationAttributesT&& value) {
    SetIntegrationAttributes(std::forward<IntegrationAttributesT>(value));
    return *this;
  }
  template <typename IntegrationAttributesKeyT = Aws::String, typename IntegrationAttributesValueT = Aws::String>
  CreateIntegrationRequest& AddIntegrationAttributes(IntegrationAttributesKeyT&& key, IntegrationAttributesValueT&& value) {
    m_integrationAttributesHasBeenSet = true;
    m_integrationAttributes.emplace(std::forward<IntegrationAttributesKeyT>(key), std::forward<IntegrationAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name of the IAM role assumed to access the
   * integration.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateIntegrationRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to apply to the integration at creation time (Tagris tag-on-create).</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateIntegrationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateIntegrationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for safe retries. Retrying with the same token returns the
   * original integration instead of creating a duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateIntegrationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  IntegrationType m_integrationType{IntegrationType::NOT_SET};

  Aws::String m_name;

  IntegrationCredential m_credential;

  Aws::Map<Aws::String, Aws::String> m_integrationAttributes;

  Aws::String m_roleArn;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_integrationTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_credentialHasBeenSet = false;
  bool m_integrationAttributesHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
