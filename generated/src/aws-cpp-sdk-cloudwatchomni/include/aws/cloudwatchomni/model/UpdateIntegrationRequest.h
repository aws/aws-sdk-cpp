/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/IntegrationCredential.h>
#include <aws/cloudwatchomni/model/IntegrationIdentifier.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>The request for updating an existing integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateIntegrationInput">AWS
 * API Reference</a></p>
 */
class UpdateIntegrationRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API UpdateIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateIntegration"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Identifies the integration to update — exactly one of integrationId,
   * integrationArn, or integrationName.</p>
   */
  inline const IntegrationIdentifier& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = IntegrationIdentifier>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = IntegrationIdentifier>
  UpdateIntegrationRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replacement credential used to authenticate with the provider.</p>
   */
  inline const IntegrationCredential& GetCredential() const { return m_credential; }
  inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
  template <typename CredentialT = IntegrationCredential>
  void SetCredential(CredentialT&& value) {
    m_credentialHasBeenSet = true;
    m_credential = std::forward<CredentialT>(value);
  }
  template <typename CredentialT = IntegrationCredential>
  UpdateIntegrationRequest& WithCredential(CredentialT&& value) {
    SetCredential(std::forward<CredentialT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific attributes to associate with the integration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetIntegrationAttributes() const { return m_integrationAttributes; }
  inline bool IntegrationAttributesHasBeenSet() const { return m_integrationAttributesHasBeenSet; }
  template <typename IntegrationAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetIntegrationAttributes(IntegrationAttributesT&& value) {
    m_integrationAttributesHasBeenSet = true;
    m_integrationAttributes = std::forward<IntegrationAttributesT>(value);
  }
  template <typename IntegrationAttributesT = Aws::Map<Aws::String, Aws::String>>
  UpdateIntegrationRequest& WithIntegrationAttributes(IntegrationAttributesT&& value) {
    SetIntegrationAttributes(std::forward<IntegrationAttributesT>(value));
    return *this;
  }
  template <typename IntegrationAttributesKeyT = Aws::String, typename IntegrationAttributesValueT = Aws::String>
  UpdateIntegrationRequest& AddIntegrationAttributes(IntegrationAttributesKeyT&& key, IntegrationAttributesValueT&& value) {
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
  UpdateIntegrationRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  IntegrationIdentifier m_identifier;

  IntegrationCredential m_credential;

  Aws::Map<Aws::String, Aws::String> m_integrationAttributes;

  Aws::String m_roleArn;
  bool m_identifierHasBeenSet = false;
  bool m_credentialHasBeenSet = false;
  bool m_integrationAttributesHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
