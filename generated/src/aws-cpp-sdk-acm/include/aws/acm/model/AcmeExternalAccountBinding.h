/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Contains detailed information about an ACME external account
 * binding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AcmeExternalAccountBinding">AWS
 * API Reference</a></p>
 */
class AcmeExternalAccountBinding {
 public:
  AWS_ACM_API AcmeExternalAccountBinding() = default;
  AWS_ACM_API AcmeExternalAccountBinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API AcmeExternalAccountBinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME external account binding.</p>
   */
  inline const Aws::String& GetAcmeExternalAccountBindingArn() const { return m_acmeExternalAccountBindingArn; }
  inline bool AcmeExternalAccountBindingArnHasBeenSet() const { return m_acmeExternalAccountBindingArnHasBeenSet; }
  template <typename AcmeExternalAccountBindingArnT = Aws::String>
  void SetAcmeExternalAccountBindingArn(AcmeExternalAccountBindingArnT&& value) {
    m_acmeExternalAccountBindingArnHasBeenSet = true;
    m_acmeExternalAccountBindingArn = std::forward<AcmeExternalAccountBindingArnT>(value);
  }
  template <typename AcmeExternalAccountBindingArnT = Aws::String>
  AcmeExternalAccountBinding& WithAcmeExternalAccountBindingArn(AcmeExternalAccountBindingArnT&& value) {
    SetAcmeExternalAccountBindingArn(std::forward<AcmeExternalAccountBindingArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME endpoint.</p>
   */
  inline const Aws::String& GetAcmeEndpointArn() const { return m_acmeEndpointArn; }
  inline bool AcmeEndpointArnHasBeenSet() const { return m_acmeEndpointArnHasBeenSet; }
  template <typename AcmeEndpointArnT = Aws::String>
  void SetAcmeEndpointArn(AcmeEndpointArnT&& value) {
    m_acmeEndpointArnHasBeenSet = true;
    m_acmeEndpointArn = std::forward<AcmeEndpointArnT>(value);
  }
  template <typename AcmeEndpointArnT = Aws::String>
  AcmeExternalAccountBinding& WithAcmeEndpointArn(AcmeEndpointArnT&& value) {
    SetAcmeEndpointArn(std::forward<AcmeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role associated with the external
   * account binding.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  AcmeExternalAccountBinding& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the external account binding expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  AcmeExternalAccountBinding& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the external account binding was revoked.</p>
   */
  inline const Aws::Utils::DateTime& GetRevokedAt() const { return m_revokedAt; }
  inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
  template <typename RevokedAtT = Aws::Utils::DateTime>
  void SetRevokedAt(RevokedAtT&& value) {
    m_revokedAtHasBeenSet = true;
    m_revokedAt = std::forward<RevokedAtT>(value);
  }
  template <typename RevokedAtT = Aws::Utils::DateTime>
  AcmeExternalAccountBinding& WithRevokedAt(RevokedAtT&& value) {
    SetRevokedAt(std::forward<RevokedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the external account binding was last used.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUsedAt() const { return m_lastUsedAt; }
  inline bool LastUsedAtHasBeenSet() const { return m_lastUsedAtHasBeenSet; }
  template <typename LastUsedAtT = Aws::Utils::DateTime>
  void SetLastUsedAt(LastUsedAtT&& value) {
    m_lastUsedAtHasBeenSet = true;
    m_lastUsedAt = std::forward<LastUsedAtT>(value);
  }
  template <typename LastUsedAtT = Aws::Utils::DateTime>
  AcmeExternalAccountBinding& WithLastUsedAt(LastUsedAtT&& value) {
    SetLastUsedAt(std::forward<LastUsedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the external account binding was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AcmeExternalAccountBinding& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the external account binding was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AcmeExternalAccountBinding& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmeExternalAccountBindingArn;

  Aws::String m_acmeEndpointArn;

  Aws::String m_roleArn;

  Aws::Utils::DateTime m_expiresAt{};

  Aws::Utils::DateTime m_revokedAt{};

  Aws::Utils::DateTime m_lastUsedAt{};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_acmeExternalAccountBindingArnHasBeenSet = false;
  bool m_acmeEndpointArnHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_revokedAtHasBeenSet = false;
  bool m_lastUsedAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
