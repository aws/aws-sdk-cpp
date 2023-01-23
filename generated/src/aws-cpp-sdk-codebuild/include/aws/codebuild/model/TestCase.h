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
    AWS_CODEBUILD_API TestCase();
    AWS_CODEBUILD_API TestCase(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API TestCase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline const Aws::String& GetReportArn() const{ return m_reportArn; }

    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline bool ReportArnHasBeenSet() const { return m_reportArnHasBeenSet; }

    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline void SetReportArn(const Aws::String& value) { m_reportArnHasBeenSet = true; m_reportArn = value; }

    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline void SetReportArn(Aws::String&& value) { m_reportArnHasBeenSet = true; m_reportArn = std::move(value); }

    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline void SetReportArn(const char* value) { m_reportArnHasBeenSet = true; m_reportArn.assign(value); }

    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline TestCase& WithReportArn(const Aws::String& value) { SetReportArn(value); return *this;}

    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline TestCase& WithReportArn(Aws::String&& value) { SetReportArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline TestCase& WithReportArn(const char* value) { SetReportArn(value); return *this;}


    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline const Aws::String& GetTestRawDataPath() const{ return m_testRawDataPath; }

    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline bool TestRawDataPathHasBeenSet() const { return m_testRawDataPathHasBeenSet; }

    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline void SetTestRawDataPath(const Aws::String& value) { m_testRawDataPathHasBeenSet = true; m_testRawDataPath = value; }

    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline void SetTestRawDataPath(Aws::String&& value) { m_testRawDataPathHasBeenSet = true; m_testRawDataPath = std::move(value); }

    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline void SetTestRawDataPath(const char* value) { m_testRawDataPathHasBeenSet = true; m_testRawDataPath.assign(value); }

    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline TestCase& WithTestRawDataPath(const Aws::String& value) { SetTestRawDataPath(value); return *this;}

    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline TestCase& WithTestRawDataPath(Aws::String&& value) { SetTestRawDataPath(std::move(value)); return *this;}

    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline TestCase& WithTestRawDataPath(const char* value) { SetTestRawDataPath(value); return *this;}


    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline TestCase& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline TestCase& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline TestCase& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p> The name of the test case. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the test case. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the test case. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the test case. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the test case. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the test case. </p>
     */
    inline TestCase& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the test case. </p>
     */
    inline TestCase& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the test case. </p>
     */
    inline TestCase& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline TestCase& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline TestCase& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline TestCase& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p> The number of nanoseconds it took to run this test case. </p>
     */
    inline long long GetDurationInNanoSeconds() const{ return m_durationInNanoSeconds; }

    /**
     * <p> The number of nanoseconds it took to run this test case. </p>
     */
    inline bool DurationInNanoSecondsHasBeenSet() const { return m_durationInNanoSecondsHasBeenSet; }

    /**
     * <p> The number of nanoseconds it took to run this test case. </p>
     */
    inline void SetDurationInNanoSeconds(long long value) { m_durationInNanoSecondsHasBeenSet = true; m_durationInNanoSeconds = value; }

    /**
     * <p> The number of nanoseconds it took to run this test case. </p>
     */
    inline TestCase& WithDurationInNanoSeconds(long long value) { SetDurationInNanoSeconds(value); return *this;}


    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline TestCase& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline TestCase& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline TestCase& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p> The date and time a test case expires. A test case expires 30 days after it
     * is created. An expired test case is not available to view in CodeBuild. </p>
     */
    inline const Aws::Utils::DateTime& GetExpired() const{ return m_expired; }

    /**
     * <p> The date and time a test case expires. A test case expires 30 days after it
     * is created. An expired test case is not available to view in CodeBuild. </p>
     */
    inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }

    /**
     * <p> The date and time a test case expires. A test case expires 30 days after it
     * is created. An expired test case is not available to view in CodeBuild. </p>
     */
    inline void SetExpired(const Aws::Utils::DateTime& value) { m_expiredHasBeenSet = true; m_expired = value; }

    /**
     * <p> The date and time a test case expires. A test case expires 30 days after it
     * is created. An expired test case is not available to view in CodeBuild. </p>
     */
    inline void SetExpired(Aws::Utils::DateTime&& value) { m_expiredHasBeenSet = true; m_expired = std::move(value); }

    /**
     * <p> The date and time a test case expires. A test case expires 30 days after it
     * is created. An expired test case is not available to view in CodeBuild. </p>
     */
    inline TestCase& WithExpired(const Aws::Utils::DateTime& value) { SetExpired(value); return *this;}

    /**
     * <p> The date and time a test case expires. A test case expires 30 days after it
     * is created. An expired test case is not available to view in CodeBuild. </p>
     */
    inline TestCase& WithExpired(Aws::Utils::DateTime&& value) { SetExpired(std::move(value)); return *this;}

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

    long long m_durationInNanoSeconds;
    bool m_durationInNanoSecondsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_expired;
    bool m_expiredHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
