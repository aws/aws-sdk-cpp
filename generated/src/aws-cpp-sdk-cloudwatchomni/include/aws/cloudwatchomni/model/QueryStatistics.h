/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/PartialResults.h>
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
 * <p>Statistics about a telemetry query execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/QueryStatistics">AWS
 * API Reference</a></p>
 */
class QueryStatistics {
 public:
  AWS_CLOUDWATCHOMNI_API QueryStatistics() = default;
  AWS_CLOUDWATCHOMNI_API QueryStatistics(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API QueryStatistics& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of bytes scanned by the query.</p>
   */
  inline double GetBytesScanned() const { return m_bytesScanned; }
  inline bool BytesScannedHasBeenSet() const { return m_bytesScannedHasBeenSet; }
  inline void SetBytesScanned(double value) {
    m_bytesScannedHasBeenSet = true;
    m_bytesScanned = value;
  }
  inline QueryStatistics& WithBytesScanned(double value) {
    SetBytesScanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the query that has completed.</p>
   */
  inline int64_t GetPercentComplete() const { return m_percentComplete; }
  inline bool PercentCompleteHasBeenSet() const { return m_percentCompleteHasBeenSet; }
  inline void SetPercentComplete(int64_t value) {
    m_percentCompleteHasBeenSet = true;
    m_percentComplete = value;
  }
  inline QueryStatistics& WithPercentComplete(int64_t value) {
    SetPercentComplete(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of records scanned.</p>
   */
  inline long long GetRecordsScanned() const { return m_recordsScanned; }
  inline bool RecordsScannedHasBeenSet() const { return m_recordsScannedHasBeenSet; }
  inline void SetRecordsScanned(long long value) {
    m_recordsScannedHasBeenSet = true;
    m_recordsScanned = value;
  }
  inline QueryStatistics& WithRecordsScanned(long long value) {
    SetRecordsScanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of records that matched the query criteria.</p>
   */
  inline long long GetRecordsMatched() const { return m_recordsMatched; }
  inline bool RecordsMatchedHasBeenSet() const { return m_recordsMatchedHasBeenSet; }
  inline void SetRecordsMatched(long long value) {
    m_recordsMatchedHasBeenSet = true;
    m_recordsMatched = value;
  }
  inline QueryStatistics& WithRecordsMatched(long long value) {
    SetRecordsMatched(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about whether the query returned partial results.</p>
   */
  inline const PartialResults& GetPartialResults() const { return m_partialResults; }
  inline bool PartialResultsHasBeenSet() const { return m_partialResultsHasBeenSet; }
  template <typename PartialResultsT = PartialResults>
  void SetPartialResults(PartialResultsT&& value) {
    m_partialResultsHasBeenSet = true;
    m_partialResults = std::forward<PartialResultsT>(value);
  }
  template <typename PartialResultsT = PartialResults>
  QueryStatistics& WithPartialResults(PartialResultsT&& value) {
    SetPartialResults(std::forward<PartialResultsT>(value));
    return *this;
  }
  ///@}
 private:
  double m_bytesScanned{0.0};

  int64_t m_percentComplete{0};

  long long m_recordsScanned{0};

  long long m_recordsMatched{0};

  PartialResults m_partialResults;
  bool m_bytesScannedHasBeenSet = false;
  bool m_percentCompleteHasBeenSet = false;
  bool m_recordsScannedHasBeenSet = false;
  bool m_recordsMatchedHasBeenSet = false;
  bool m_partialResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
