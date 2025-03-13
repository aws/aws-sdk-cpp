/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Information about a test case created using a framework such as NUnit or
   * Cucumber. A test case might be a unit test or a configuration test.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/TestCase">AWS
   * API Reference</a></p>
   */
  class TestCase
  {
  public:
    AWS_CODEBUILD_API TestCase() = default;
    AWS_CODEBUILD_API TestCase(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API TestCase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline const Aws::String& GetReportArn() const { return m_reportArn; }
    inline bool ReportArnHasBeenSet() const { return m_reportArnHasBeenSet; }
    template<typename ReportArnT = Aws::String>
    void SetReportArn(ReportArnT&& value) { m_reportArnHasBeenSet = true; m_reportArn = std::forward<ReportArnT>(value); }
    template<typename ReportArnT = Aws::String>
    TestCase& WithReportArn(ReportArnT&& value) { SetReportArn(std::forward<ReportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline const Aws::String& GetTestRawDataPath() const { return m_testRawDataPath; }
    inline bool TestRawDataPathHasBeenSet() const { return m_testRawDataPathHasBeenSet; }
    template<typename TestRawDataPathT = Aws::String>
    void SetTestRawDataPath(TestRawDataPathT&& value) { m_testRawDataPathHasBeenSet = true; m_testRawDataPath = std::forward<TestRawDataPathT>(value); }
    template<typename TestRawDataPathT = Aws::String>
    TestCase& WithTestRawDataPath(TestRawDataPathT&& value) { SetTestRawDataPath(std::forward<TestRawDataPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    TestCase& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the test case. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TestCase& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TestCase& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of nanoseconds it took to run this test case. </p>
     */
    inline long long GetDurationInNanoSeconds() const { return m_durationInNanoSeconds; }
    inline bool DurationInNanoSecondsHasBeenSet() const { return m_durationInNanoSecondsHasBeenSet; }
    inline void SetDurationInNanoSeconds(long long value) { m_durationInNanoSecondsHasBeenSet = true; m_durationInNanoSeconds = value; }
    inline TestCase& WithDurationInNanoSeconds(long long value) { SetDurationInNanoSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TestCase& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time a test case expires. A test case expires 30 days after it
     * is created. An expired test case is not available to view in CodeBuild. </p>
     */
    inline const Aws::Utils::DateTime& GetExpired() const { return m_expired; }
    inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }
    template<typename ExpiredT = Aws::Utils::DateTime>
    void SetExpired(ExpiredT&& value) { m_expiredHasBeenSet = true; m_expired = std::forward<ExpiredT>(value); }
    template<typename ExpiredT = Aws::Utils::DateTime>
    TestCase& WithExpired(ExpiredT&& value) { SetExpired(std::forward<ExpiredT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test suite that the test case is a part of.</p>
     */
    inline const Aws::String& GetTestSuiteName() const { return m_testSuiteName; }
    inline bool TestSuiteNameHasBeenSet() const { return m_testSuiteNameHasBeenSet; }
    template<typename TestSuiteNameT = Aws::String>
    void SetTestSuiteName(TestSuiteNameT&& value) { m_testSuiteNameHasBeenSet = true; m_testSuiteName = std::forward<TestSuiteNameT>(value); }
    template<typename TestSuiteNameT = Aws::String>
    TestCase& WithTestSuiteName(TestSuiteNameT&& value) { SetTestSuiteName(std::forward<TestSuiteNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportArn;
    bool m_reportArnHasBeenSet = false;

    Aws::String m_testRawDataPath;
    bool m_testRawDataPathHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    long long m_durationInNanoSeconds{0};
    bool m_durationInNanoSecondsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_expired{};
    bool m_expiredHasBeenSet = false;

    Aws::String m_testSuiteName;
    bool m_testSuiteNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
