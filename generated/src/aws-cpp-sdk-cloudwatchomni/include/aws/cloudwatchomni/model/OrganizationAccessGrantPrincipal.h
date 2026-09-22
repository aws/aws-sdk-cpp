/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AccessGrantPrincipalAttribute.h>
#include <aws/cloudwatchomni/model/OrganizationGrantPrincipalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>The principal receiving an organization-level domain access grant. Specify
 * principalId, principalAttributes, or both.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/OrganizationAccessGrantPrincipal">AWS
 * API Reference</a></p>
 */
class OrganizationAccessGrantPrincipal {
 public:
  AWS_CLOUDWATCHOMNI_API OrganizationAccessGrantPrincipal() = default;
  AWS_CLOUDWATCHOMNI_API OrganizationAccessGrantPrincipal(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API OrganizationAccessGrantPrincipal& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of principal receiving the grant.</p>
   */
  inline OrganizationGrantPrincipalType GetPrincipalType() const { return m_principalType; }
  inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
  inline void SetPrincipalType(OrganizationGrantPrincipalType value) {
    m_principalTypeHasBeenSet = true;
    m_principalType = value;
  }
  inline OrganizationAccessGrantPrincipal& WithPrincipalType(OrganizationGrantPrincipalType value) {
    SetPrincipalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the principal receiving the grant.</p>
   */
  inline const Aws::String& GetPrincipalId() const { return m_principalId; }
  inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
  template <typename PrincipalIdT = Aws::String>
  void SetPrincipalId(PrincipalIdT&& value) {
    m_principalIdHasBeenSet = true;
    m_principalId = std::forward<PrincipalIdT>(value);
  }
  template <typename PrincipalIdT = Aws::String>
  OrganizationAccessGrantPrincipal& WithPrincipalId(PrincipalIdT&& value) {
    SetPrincipalId(std::forward<PrincipalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Attribute conditions for attribute-based access. When provided, the grant
   * targets any principal matching all specified conditions. Supported only for
   * IDC_USER principals.</p>
   */
  inline const Aws::Vector<AccessGrantPrincipalAttribute>& GetPrincipalAttributes() const { return m_principalAttributes; }
  inline bool PrincipalAttributesHasBeenSet() const { return m_principalAttributesHasBeenSet; }
  template <typename PrincipalAttributesT = Aws::Vector<AccessGrantPrincipalAttribute>>
  void SetPrincipalAttributes(PrincipalAttributesT&& value) {
    m_principalAttributesHasBeenSet = true;
    m_principalAttributes = std::forward<PrincipalAttributesT>(value);
  }
  template <typename PrincipalAttributesT = Aws::Vector<AccessGrantPrincipalAttribute>>
  OrganizationAccessGrantPrincipal& WithPrincipalAttributes(PrincipalAttributesT&& value) {
    SetPrincipalAttributes(std::forward<PrincipalAttributesT>(value));
    return *this;
  }
  template <typename PrincipalAttributesT = AccessGrantPrincipalAttribute>
  OrganizationAccessGrantPrincipal& AddPrincipalAttributes(PrincipalAttributesT&& value) {
    m_principalAttributesHasBeenSet = true;
    m_principalAttributes.emplace_back(std::forward<PrincipalAttributesT>(value));
    return *this;
  }
  ///@}
 private:
  OrganizationGrantPrincipalType m_principalType{OrganizationGrantPrincipalType::NOT_SET};

  Aws::String m_principalId;

  Aws::Vector<AccessGrantPrincipalAttribute> m_principalAttributes;
  bool m_principalTypeHasBeenSet = false;
  bool m_principalIdHasBeenSet = false;
  bool m_principalAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
