/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AccessGrantType.h>
#include <aws/cloudwatchomni/model/OrganizationAccessGrantPrincipal.h>
#include <aws/cloudwatchomni/model/OrganizationGrantPermission.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>An organization-scoped access grant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/OrganizationAccessGrant">AWS
 * API Reference</a></p>
 */
class OrganizationAccessGrant {
 public:
  AWS_CLOUDWATCHOMNI_API OrganizationAccessGrant() = default;
  AWS_CLOUDWATCHOMNI_API OrganizationAccessGrant(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API OrganizationAccessGrant& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique ID of the access grant.</p>
   */
  inline const Aws::String& GetGrantId() const { return m_grantId; }
  inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }
  template <typename GrantIdT = Aws::String>
  void SetGrantId(GrantIdT&& value) {
    m_grantIdHasBeenSet = true;
    m_grantId = std::forward<GrantIdT>(value);
  }
  template <typename GrantIdT = Aws::String>
  OrganizationAccessGrant& WithGrantId(GrantIdT&& value) {
    SetGrantId(std::forward<GrantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the access grant.</p>
   */
  inline const Aws::String& GetGrantArn() const { return m_grantArn; }
  inline bool GrantArnHasBeenSet() const { return m_grantArnHasBeenSet; }
  template <typename GrantArnT = Aws::String>
  void SetGrantArn(GrantArnT&& value) {
    m_grantArnHasBeenSet = true;
    m_grantArn = std::forward<GrantArnT>(value);
  }
  template <typename GrantArnT = Aws::String>
  OrganizationAccessGrant& WithGrantArn(GrantArnT&& value) {
    SetGrantArn(std::forward<GrantArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name that identifies the access grant.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  OrganizationAccessGrant& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the organization domain the grant belongs to.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  OrganizationAccessGrant& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal receiving the grant.</p>
   */
  inline const OrganizationAccessGrantPrincipal& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = OrganizationAccessGrantPrincipal>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = OrganizationAccessGrantPrincipal>
  OrganizationAccessGrant& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission granted.</p>
   */
  inline OrganizationGrantPermission GetPermission() const { return m_permission; }
  inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
  inline void SetPermission(OrganizationGrantPermission value) {
    m_permissionHasBeenSet = true;
    m_permission = value;
  }
  inline OrganizationAccessGrant& WithPermission(OrganizationGrantPermission value) {
    SetPermission(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who manages the grant.</p>
   */
  inline AccessGrantType GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  inline void SetGrantType(AccessGrantType value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = value;
  }
  inline OrganizationAccessGrant& WithGrantType(AccessGrantType value) {
    SetGrantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal that created the grant.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  OrganizationAccessGrant& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the grant was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  OrganizationAccessGrant& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the grant was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  OrganizationAccessGrant& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_grantId;

  Aws::String m_grantArn;

  Aws::String m_name;

  Aws::String m_domainId;

  OrganizationAccessGrantPrincipal m_principal;

  OrganizationGrantPermission m_permission{OrganizationGrantPermission::NOT_SET};

  AccessGrantType m_grantType{AccessGrantType::NOT_SET};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_grantIdHasBeenSet = false;
  bool m_grantArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_principalHasBeenSet = false;
  bool m_permissionHasBeenSet = false;
  bool m_grantTypeHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
