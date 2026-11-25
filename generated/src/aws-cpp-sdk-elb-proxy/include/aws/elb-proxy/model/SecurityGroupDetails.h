/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {

/**
 * <p>The details of a security group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/SecurityGroupDetails">AWS
 * API Reference</a></p>
 */
class SecurityGroupDetails {
 public:
  AWS_ELBPROXY_API SecurityGroupDetails() = default;
  AWS_ELBPROXY_API SecurityGroupDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API SecurityGroupDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the security group.</p>
   */
  inline const Aws::String& GetSecurityGroupId() const { return m_securityGroupId; }
  inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
  template <typename SecurityGroupIdT = Aws::String>
  void SetSecurityGroupId(SecurityGroupIdT&& value) {
    m_securityGroupIdHasBeenSet = true;
    m_securityGroupId = std::forward<SecurityGroupIdT>(value);
  }
  template <typename SecurityGroupIdT = Aws::String>
  SecurityGroupDetails& WithSecurityGroupId(SecurityGroupIdT&& value) {
    SetSecurityGroupId(std::forward<SecurityGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_securityGroupId;
  bool m_securityGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
