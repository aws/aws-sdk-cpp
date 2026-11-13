/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeBuild {
namespace Model {

/**
 * <p> Information about a test report. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/TestReportSummary">AWS
 * API Reference</a></p>
 */
class TestReportSummary {
 public:
  AWS_CODEBUILD_API TestReportSummary() = default;
  AWS_CODEBUILD_API TestReportSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API TestReportSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The number of test cases in this <code>TestReportSummary</code>. The total
   * includes truncated test cases. </p>
   */
  inline int64_t GetTotal() const { return m_total; }
  inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
  inline void SetTotal(int64_t value) {
    m_totalHasBeenSet = true;
    m_total = value;
  }
  inline TestReportSummary& WithTotal(int64_t value) {
    SetTotal(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A map that contains the number of each type of status returned by the test
   * results in this <code>TestReportSummary</code>. </p>
   */
  inline const Aws::Map<Aws::String, int64_t>& GetStatusCounts() const { return m_statusCounts; }
  inline bool StatusCountsHasBeenSet() const { return m_statusCountsHasBeenSet; }
  template <typename StatusCountsT = Aws::Map<Aws::String, int64_t>>
  void SetStatusCounts(StatusCountsT&& value) {
    m_statusCountsHasBeenSet = true;
    m_statusCounts = std::forward<StatusCountsT>(value);
  }
  template <typename StatusCountsT = Aws::Map<Aws::String, int64_t>>
  TestReportSummary& WithStatusCounts(StatusCountsT&& value) {
    SetStatusCounts(std::forward<StatusCountsT>(value));
    return *this;
  }
  inline TestReportSummary& AddStatusCounts(Aws::String key, int64_t value) {
    m_statusCountsHasBeenSet = true;
    m_statusCounts.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of nanoseconds it took to run all of the test cases in this
   * report. </p>
   */
  inline long long GetDurationInNanoSeconds() const { return m_durationInNanoSeconds; }
  inline bool DurationInNanoSecondsHasBeenSet() const { return m_durationInNanoSecondsHasBeenSet; }
  inline void SetDurationInNanoSeconds(long long value) {
    m_durationInNanoSecondsHasBeenSet = true;
    m_durationInNanoSeconds = value;
  }
  inline TestReportSummary& WithDurationInNanoSeconds(long long value) {
    SetDurationInNanoSeconds(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_total{0};

  Aws::Map<Aws::String, int64_t> m_statusCounts;

  long long m_durationInNanoSeconds{0};
  bool m_totalHasBeenSet = false;
  bool m_statusCountsHasBeenSet = false;
  bool m_durationInNanoSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
