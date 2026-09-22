/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AccessGrantPermission.h>
#include <aws/cloudwatchomni/model/AccessGrantPrincipal.h>
#include <aws/cloudwatchomni/model/AccessGrantType.h>
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
 * <p>Summary of an AccessGrant. Call GetAccessGrant for the full
 * grant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/AccessGrantSummary">AWS
 * API Reference</a></p>
 */
class AccessGrantSummary {
 public:
  AWS_CLOUDWATCHOMNI_API AccessGrantSummary() = default;
  AWS_CLOUDWATCHOMNI_API AccessGrantSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API AccessGrantSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  AccessGrantSummary& WithGrantId(GrantIdT&& value) {
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
  AccessGrantSummary& WithGrantArn(GrantArnT&& value) {
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
  AccessGrantSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the domain the grant belongs to.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  AccessGrantSummary& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal receiving the grant.</p>
   */
  inline const AccessGrantPrincipal& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = AccessGrantPrincipal>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = AccessGrantPrincipal>
  AccessGrantSummary& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission granted.</p>
   */
  inline AccessGrantPermission GetPermission() const { return m_permission; }
  inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
  inline void SetPermission(AccessGrantPermission value) {
    m_permissionHasBeenSet = true;
    m_permission = value;
  }
  inline AccessGrantSummary& WithPermission(AccessGrantPermission value) {
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
  inline AccessGrantSummary& WithGrantType(AccessGrantType value) {
    SetGrantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The space this grant applies to. Domain-scoped grants are returned by
   * ListDomainAccessGrantsForOrganization instead.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  AccessGrantSummary& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_grantId;

  Aws::String m_grantArn;

  Aws::String m_name;

  Aws::String m_domainId;

  AccessGrantPrincipal m_principal;

  AccessGrantPermission m_permission{AccessGrantPermission::NOT_SET};

  AccessGrantType m_grantType{AccessGrantType::NOT_SET};

  Aws::String m_spaceId;
  bool m_grantIdHasBeenSet = false;
  bool m_grantArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_principalHasBeenSet = false;
  bool m_permissionHasBeenSet = false;
  bool m_grantTypeHasBeenSet = false;
  bool m_spaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
