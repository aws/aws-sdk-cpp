/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Indicates whether a query returned partial results.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/PartialResults">AWS
 * API Reference</a></p>
 */
class PartialResults {
 public:
  AWS_CLOUDWATCHOMNI_API PartialResults() = default;
  AWS_CLOUDWATCHOMNI_API PartialResults(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API PartialResults& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>True when the query returned partial results (some data could not be
   * read).</p>
   */
  inline bool GetPartialResultsDetected() const { return m_partialResultsDetected; }
  inline bool PartialResultsDetectedHasBeenSet() const { return m_partialResultsDetectedHasBeenSet; }
  inline void SetPartialResultsDetected(bool value) {
    m_partialResultsDetectedHasBeenSet = true;
    m_partialResultsDetected = value;
  }
  inline PartialResults& WithPartialResultsDetected(bool value) {
    SetPartialResultsDetected(value);
    return *this;
  }
  ///@}
 private:
  bool m_partialResultsDetected{false};
  bool m_partialResultsDetectedHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
