/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/MinimumHealthyHostsPerZoneType.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeDeploy {
namespace Model {

/**
 * <p>Information about the minimum number of healthy instances per Availability
 * Zone.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/MinimumHealthyHostsPerZone">AWS
 * API Reference</a></p>
 */
class MinimumHealthyHostsPerZone {
 public:
  AWS_CODEDEPLOY_API MinimumHealthyHostsPerZone() = default;
  AWS_CODEDEPLOY_API MinimumHealthyHostsPerZone(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API MinimumHealthyHostsPerZone& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The <code>type</code> associated with the
   * <code>MinimumHealthyHostsPerZone</code> option.</p>
   */
  inline MinimumHealthyHostsPerZoneType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MinimumHealthyHostsPerZoneType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MinimumHealthyHostsPerZone& WithType(MinimumHealthyHostsPerZoneType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>value</code> associated with the
   * <code>MinimumHealthyHostsPerZone</code> option.</p>
   */
  inline int64_t GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(int64_t value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline MinimumHealthyHostsPerZone& WithValue(int64_t value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  MinimumHealthyHostsPerZoneType m_type{MinimumHealthyHostsPerZoneType::NOT_SET};

  int64_t m_value{0};
  bool m_typeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
