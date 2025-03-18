/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about a test report. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/TestReportSummary">AWS
   * API Reference</a></p>
   */
  class TestReportSummary
  {
  public:
    AWS_CODEBUILD_API TestReportSummary() = default;
    AWS_CODEBUILD_API TestReportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API TestReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of test cases in this <code>TestReportSummary</code>. The total
     * includes truncated test cases. </p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline TestReportSummary& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline const Aws::Map<Aws::String, int>& GetStatusCounts() const { return m_statusCounts; }
    inline bool StatusCountsHasBeenSet() const { return m_statusCountsHasBeenSet; }
    template<typename StatusCountsT = Aws::Map<Aws::String, int>>
    void SetStatusCounts(StatusCountsT&& value) { m_statusCountsHasBeenSet = true; m_statusCounts = std::forward<StatusCountsT>(value); }
    template<typename StatusCountsT = Aws::Map<Aws::String, int>>
    TestReportSummary& WithStatusCounts(StatusCountsT&& value) { SetStatusCounts(std::forward<StatusCountsT>(value)); return *this;}
    inline TestReportSummary& AddStatusCounts(Aws::String key, int value) {
      m_statusCountsHasBeenSet = true; m_statusCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The number of nanoseconds it took to run all of the test cases in this
     * report. </p>
     */
    inline long long GetDurationInNanoSeconds() const { return m_durationInNanoSeconds; }
    inline bool DurationInNanoSecondsHasBeenSet() const { return m_durationInNanoSecondsHasBeenSet; }
    inline void SetDurationInNanoSeconds(long long value) { m_durationInNanoSecondsHasBeenSet = true; m_durationInNanoSeconds = value; }
    inline TestReportSummary& WithDurationInNanoSeconds(long long value) { SetDurationInNanoSeconds(value); return *this;}
    ///@}
  private:

    int m_total{0};
    bool m_totalHasBeenSet = false;

    Aws::Map<Aws::String, int> m_statusCounts;
    bool m_statusCountsHasBeenSet = false;

    long long m_durationInNanoSeconds{0};
    bool m_durationInNanoSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
