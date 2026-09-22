/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
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
 * <p>Identity Center specific configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/IdentityCenterConfiguration">AWS
 * API Reference</a></p>
 */
class IdentityCenterConfiguration {
 public:
  AWS_CLOUDWATCHOMNI_API IdentityCenterConfiguration() = default;
  AWS_CLOUDWATCHOMNI_API IdentityCenterConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API IdentityCenterConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Identity Center instance ARN</p>
   */
  inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
  inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }
  template <typename IdentityCenterInstanceArnT = Aws::String>
  void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) {
    m_identityCenterInstanceArnHasBeenSet = true;
    m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value);
  }
  template <typename IdentityCenterInstanceArnT = Aws::String>
  IdentityCenterConfiguration& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) {
    SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identityCenterInstanceArn;
  bool m_identityCenterInstanceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
