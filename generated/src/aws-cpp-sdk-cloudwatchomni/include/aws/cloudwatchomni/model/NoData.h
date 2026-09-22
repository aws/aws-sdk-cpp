/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AlertState.h>
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
 * <p>Configures how the alert reacts when an evaluation produces no data. {@code
 * treatAs} carries the resulting state; defaults to {@code NODATA} when
 * omitted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/NoData">AWS
 * API Reference</a></p>
 */
class NoData {
 public:
  AWS_CLOUDWATCHOMNI_API NoData() = default;
  AWS_CLOUDWATCHOMNI_API NoData(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API NoData& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The state to report when an evaluation produces no data.</p>
   */
  inline AlertState GetTreatAs() const { return m_treatAs; }
  inline bool TreatAsHasBeenSet() const { return m_treatAsHasBeenSet; }
  inline void SetTreatAs(AlertState value) {
    m_treatAsHasBeenSet = true;
    m_treatAs = value;
  }
  inline NoData& WithTreatAs(AlertState value) {
    SetTreatAs(value);
    return *this;
  }
  ///@}
 private:
  AlertState m_treatAs{AlertState::NOT_SET};
  bool m_treatAsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
