/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {

/**
 * <p>Identifies an attach point to use with a Connection.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/AttachPoint">AWS
 * API Reference</a></p>
 */
class AttachPoint {
 public:
  AWS_INTERCONNECT_API AttachPoint() = default;
  AWS_INTERCONNECT_API AttachPoint(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API AttachPoint& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Identifies an DirectConnect Gateway attach point by
   * DirectConnectGatewayID.</p>
   */
  inline const Aws::String& GetDirectConnectGateway() const { return m_directConnectGateway; }
  inline bool DirectConnectGatewayHasBeenSet() const { return m_directConnectGatewayHasBeenSet; }
  template <typename DirectConnectGatewayT = Aws::String>
  void SetDirectConnectGateway(DirectConnectGatewayT&& value) {
    m_directConnectGatewayHasBeenSet = true;
    m_directConnectGateway = std::forward<DirectConnectGatewayT>(value);
  }
  template <typename DirectConnectGatewayT = Aws::String>
  AttachPoint& WithDirectConnectGateway(DirectConnectGatewayT&& value) {
    SetDirectConnectGateway(std::forward<DirectConnectGatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifies an attach point by full ARN.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  AttachPoint& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_directConnectGateway;

  Aws::String m_arn;
  bool m_directConnectGatewayHasBeenSet = false;
  bool m_arnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
