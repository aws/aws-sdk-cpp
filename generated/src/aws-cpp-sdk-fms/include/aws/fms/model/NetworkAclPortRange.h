/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/FMS_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace FMS {
namespace Model {

/**
 * <p>TCP or UDP protocols: The range of ports the rule applies to.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkAclPortRange">AWS
 * API Reference</a></p>
 */
class NetworkAclPortRange {
 public:
  AWS_FMS_API NetworkAclPortRange() = default;
  AWS_FMS_API NetworkAclPortRange(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_FMS_API NetworkAclPortRange& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_FMS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The beginning port number of the range. </p>
   */
  inline int64_t GetFrom() const { return m_from; }
  inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
  inline void SetFrom(int64_t value) {
    m_fromHasBeenSet = true;
    m_from = value;
  }
  inline NetworkAclPortRange& WithFrom(int64_t value) {
    SetFrom(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ending port number of the range. </p>
   */
  inline int64_t GetTo() const { return m_to; }
  inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
  inline void SetTo(int64_t value) {
    m_toHasBeenSet = true;
    m_to = value;
  }
  inline NetworkAclPortRange& WithTo(int64_t value) {
    SetTo(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_from{0};

  int64_t m_to{0};
  bool m_fromHasBeenSet = false;
  bool m_toHasBeenSet = false;
};

}  // namespace Model
}  // namespace FMS
}  // namespace Aws
