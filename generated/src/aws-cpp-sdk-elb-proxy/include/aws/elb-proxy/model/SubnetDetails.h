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
 * <p>The details of a subnet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/SubnetDetails">AWS
 * API Reference</a></p>
 */
class SubnetDetails {
 public:
  AWS_ELBPROXY_API SubnetDetails() = default;
  AWS_ELBPROXY_API SubnetDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API SubnetDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the subnet.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  SubnetDetails& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subnetId;
  bool m_subnetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
