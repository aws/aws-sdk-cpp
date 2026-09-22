/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AuthType.h>
#include <aws/cloudwatchomni/model/IntegrationStatus.h>
#include <aws/cloudwatchomni/model/IntegrationType.h>
#include <aws/cloudwatchomni/model/Scope.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>A connection between CloudWatch and an external system — such as a source of
 * telemetry or configuration data, a messaging destination, or a model
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/Integration">AWS
 * API Reference</a></p>
 */
class Integration {
 public:
  AWS_CLOUDWATCHOMNI_API Integration() = default;
  AWS_CLOUDWATCHOMNI_API Integration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API Integration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the integration.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  Integration& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the integration.</p>
   */
  inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
  inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
  template <typename IntegrationArnT = Aws::String>
  void SetIntegrationArn(IntegrationArnT&& value) {
    m_integrationArnHasBeenSet = true;
    m_integrationArn = std::forward<IntegrationArnT>(value);
  }
  template <typename IntegrationArnT = Aws::String>
  Integration& WithIntegrationArn(IntegrationArnT&& value) {
    SetIntegrationArn(std::forward<IntegrationArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline IntegrationType GetIntegrationType() const { return m_integrationType; }
  inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
  inline void SetIntegrationType(IntegrationType value) {
    m_integrationTypeHasBeenSet = true;
    m_integrationType = value;
  }
  inline Integration& WithIntegrationType(IntegrationType value) {
    SetIntegrationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-provided name of the integration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Integration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline IntegrationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IntegrationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Integration& WithStatus(IntegrationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline AuthType GetAuthType() const { return m_authType; }
  inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
  inline void SetAuthType(AuthType value) {
    m_authTypeHasBeenSet = true;
    m_authType = value;
  }
  inline Integration& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the secret that stores the integration's
   * credentials.</p>
   */
  inline const Aws::String& GetCredentialArn() const { return m_credentialArn; }
  inline bool CredentialArnHasBeenSet() const { return m_credentialArnHasBeenSet; }
  template <typename CredentialArnT = Aws::String>
  void SetCredentialArn(CredentialArnT&& value) {
    m_credentialArnHasBeenSet = true;
    m_credentialArn = std::forward<CredentialArnT>(value);
  }
  template <typename CredentialArnT = Aws::String>
  Integration& WithCredentialArn(CredentialArnT&& value) {
    SetCredentialArn(std::forward<CredentialArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that CloudWatch assumes to
   * access the external system.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  Integration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provider-specific key/value attributes that configure the integration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetIntegrationAttributes() const { return m_integrationAttributes; }
  inline bool IntegrationAttributesHasBeenSet() const { return m_integrationAttributesHasBeenSet; }
  template <typename IntegrationAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetIntegrationAttributes(IntegrationAttributesT&& value) {
    m_integrationAttributesHasBeenSet = true;
    m_integrationAttributes = std::forward<IntegrationAttributesT>(value);
  }
  template <typename IntegrationAttributesT = Aws::Map<Aws::String, Aws::String>>
  Integration& WithIntegrationAttributes(IntegrationAttributesT&& value) {
    SetIntegrationAttributes(std::forward<IntegrationAttributesT>(value));
    return *this;
  }
  template <typename IntegrationAttributesKeyT = Aws::String, typename IntegrationAttributesValueT = Aws::String>
  Integration& AddIntegrationAttributes(IntegrationAttributesKeyT&& key, IntegrationAttributesValueT&& value) {
    m_integrationAttributesHasBeenSet = true;
    m_integrationAttributes.emplace(std::forward<IntegrationAttributesKeyT>(key), std::forward<IntegrationAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL the customer visits to authorize the integration. Present while an
   * OAuth authorization is pending.</p>
   */
  inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
  inline bool AuthorizationUrlHasBeenSet() const { return m_authorizationUrlHasBeenSet; }
  template <typename AuthorizationUrlT = Aws::String>
  void SetAuthorizationUrl(AuthorizationUrlT&& value) {
    m_authorizationUrlHasBeenSet = true;
    m_authorizationUrl = std::forward<AuthorizationUrlT>(value);
  }
  template <typename AuthorizationUrlT = Aws::String>
  Integration& WithAuthorizationUrl(AuthorizationUrlT&& value) {
    SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of why the integration is in an ERROR or FAILED
   * state. Present only when the integration has failed.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  Integration& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the integration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Integration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the integration was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Integration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether this integration is account-scoped (ACCOUNT, customer-created) or
   * organization-scoped (ORGANIZATION, created by an org-enablement rule). Absent on
   * legacy records is treated as ACCOUNT.</p>
   */
  inline Scope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline Integration& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_integrationArn;

  IntegrationType m_integrationType{IntegrationType::NOT_SET};

  Aws::String m_name;

  IntegrationStatus m_status{IntegrationStatus::NOT_SET};

  AuthType m_authType{AuthType::NOT_SET};

  Aws::String m_credentialArn;

  Aws::String m_roleArn;

  Aws::Map<Aws::String, Aws::String> m_integrationAttributes;

  Aws::String m_authorizationUrl;

  Aws::String m_errorMessage;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Scope m_scope{Scope::NOT_SET};
  bool m_integrationIdHasBeenSet = false;
  bool m_integrationArnHasBeenSet = false;
  bool m_integrationTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_authTypeHasBeenSet = false;
  bool m_credentialArnHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_integrationAttributesHasBeenSet = false;
  bool m_authorizationUrlHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
