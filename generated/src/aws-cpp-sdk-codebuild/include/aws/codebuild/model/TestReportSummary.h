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
    AWS_CODEBUILD_API TestReportSummary();
    AWS_CODEBUILD_API TestReportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API TestReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of test cases in this <code>TestReportSummary</code>. The total
     * includes truncated test cases. </p>
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * <p> The number of test cases in this <code>TestReportSummary</code>. The total
     * includes truncated test cases. </p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p> The number of test cases in this <code>TestReportSummary</code>. The total
     * includes truncated test cases. </p>
     */
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p> The number of test cases in this <code>TestReportSummary</code>. The total
     * includes truncated test cases. </p>
     */
    inline TestReportSummary& WithTotal(int value) { SetTotal(value); return *this;}


    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline const Aws::Map<Aws::String, int>& GetStatusCounts() const{ return m_statusCounts; }

    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline bool StatusCountsHasBeenSet() const { return m_statusCountsHasBeenSet; }

    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline void SetStatusCounts(const Aws::Map<Aws::String, int>& value) { m_statusCountsHasBeenSet = true; m_statusCounts = value; }

    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline void SetStatusCounts(Aws::Map<Aws::String, int>&& value) { m_statusCountsHasBeenSet = true; m_statusCounts = std::move(value); }

    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline TestReportSummary& WithStatusCounts(const Aws::Map<Aws::String, int>& value) { SetStatusCounts(value); return *this;}

    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline TestReportSummary& WithStatusCounts(Aws::Map<Aws::String, int>&& value) { SetStatusCounts(std::move(value)); return *this;}

    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline TestReportSummary& AddStatusCounts(const Aws::String& key, int value) { m_statusCountsHasBeenSet = true; m_statusCounts.emplace(key, value); return *this; }

    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline TestReportSummary& AddStatusCounts(Aws::String&& key, int value) { m_statusCountsHasBeenSet = true; m_statusCounts.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains the number of each type of status returned by the test
     * results in this <code>TestReportSummary</code>. </p>
     */
    inline TestReportSummary& AddStatusCounts(const char* key, int value) { m_statusCountsHasBeenSet = true; m_statusCounts.emplace(key, value); return *this; }


    /**
     * <p> The number of nanoseconds it took to run all of the test cases in this
     * report. </p>
     */
    inline long long GetDurationInNanoSeconds() const{ return m_durationInNanoSeconds; }

    /**
     * <p> The number of nanoseconds it took to run all of the test cases in this
     * report. </p>
     */
    inline bool DurationInNanoSecondsHasBeenSet() const { return m_durationInNanoSecondsHasBeenSet; }

    /**
     * <p> The number of nanoseconds it took to run all of the test cases in this
     * report. </p>
     */
    inline void SetDurationInNanoSeconds(long long value) { m_durationInNanoSecondsHasBeenSet = true; m_durationInNanoSeconds = value; }

    /**
     * <p> The number of nanoseconds it took to run all of the test cases in this
     * report. </p>
     */
    inline TestReportSummary& WithDurationInNanoSeconds(long long value) { SetDurationInNanoSeconds(value); return *this;}

  private:

    int m_total;
    bool m_totalHasBeenSet = false;

    Aws::Map<Aws::String, int> m_statusCounts;
    bool m_statusCountsHasBeenSet = false;

    long long m_durationInNanoSeconds;
    bool m_durationInNanoSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
