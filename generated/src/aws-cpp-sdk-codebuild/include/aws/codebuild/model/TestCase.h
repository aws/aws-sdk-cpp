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


    ///@{
    /**
     * <p> The ARN of the report to which the test case belongs. </p>
     */
    inline const Aws::String& GetReportArn() const{ return m_reportArn; }
    inline bool ReportArnHasBeenSet() const { return m_reportArnHasBeenSet; }
    inline void SetReportArn(const Aws::String& value) { m_reportArnHasBeenSet = true; m_reportArn = value; }
    inline void SetReportArn(Aws::String&& value) { m_reportArnHasBeenSet = true; m_reportArn = std::move(value); }
    inline void SetReportArn(const char* value) { m_reportArnHasBeenSet = true; m_reportArn.assign(value); }
    inline TestCase& WithReportArn(const Aws::String& value) { SetReportArn(value); return *this;}
    inline TestCase& WithReportArn(Aws::String&& value) { SetReportArn(std::move(value)); return *this;}
    inline TestCase& WithReportArn(const char* value) { SetReportArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The path to the raw data file that contains the test result. </p>
     */
    inline const Aws::String& GetTestRawDataPath() const{ return m_testRawDataPath; }
    inline bool TestRawDataPathHasBeenSet() const { return m_testRawDataPathHasBeenSet; }
    inline void SetTestRawDataPath(const Aws::String& value) { m_testRawDataPathHasBeenSet = true; m_testRawDataPath = value; }
    inline void SetTestRawDataPath(Aws::String&& value) { m_testRawDataPathHasBeenSet = true; m_testRawDataPath = std::move(value); }
    inline void SetTestRawDataPath(const char* value) { m_testRawDataPathHasBeenSet = true; m_testRawDataPath.assign(value); }
    inline TestCase& WithTestRawDataPath(const Aws::String& value) { SetTestRawDataPath(value); return *this;}
    inline TestCase& WithTestRawDataPath(Aws::String&& value) { SetTestRawDataPath(std::move(value)); return *this;}
    inline TestCase& WithTestRawDataPath(const char* value) { SetTestRawDataPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that is applied to a series of related test cases. CodeBuild
     * generates the prefix. The prefix depends on the framework used to generate the
     * tests. </p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline TestCase& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline TestCase& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline TestCase& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the test case. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TestCase& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TestCase& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TestCase& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status returned by the test case after it was run. Valid statuses are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>ERROR</code>,
     * <code>SKIPPED</code>, and <code>UNKNOWN</code>. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline TestCase& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline TestCase& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline TestCase& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of nanoseconds it took to run this test case. </p>
     */
    inline long long GetDurationInNanoSeconds() const{ return m_durationInNanoSeconds; }
    inline bool DurationInNanoSecondsHasBeenSet() const { return m_durationInNanoSecondsHasBeenSet; }
    inline void SetDurationInNanoSeconds(long long value) { m_durationInNanoSecondsHasBeenSet = true; m_durationInNanoSeconds = value; }
    inline TestCase& WithDurationInNanoSeconds(long long value) { SetDurationInNanoSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message associated with a test case. For example, an error message or
     * stack trace. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline TestCase& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline TestCase& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline TestCase& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time a test case expires. A test case expires 30 days after it
     * is created. An expired test case is not available to view in CodeBuild. </p>
     */
    inline const Aws::Utils::DateTime& GetExpired() const{ return m_expired; }
    inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }
    inline void SetExpired(const Aws::Utils::DateTime& value) { m_expiredHasBeenSet = true; m_expired = value; }
    inline void SetExpired(Aws::Utils::DateTime&& value) { m_expiredHasBeenSet = true; m_expired = std::move(value); }
    inline TestCase& WithExpired(const Aws::Utils::DateTime& value) { SetExpired(value); return *this;}
    inline TestCase& WithExpired(Aws::Utils::DateTime&& value) { SetExpired(std::move(value)); return *this;}
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
