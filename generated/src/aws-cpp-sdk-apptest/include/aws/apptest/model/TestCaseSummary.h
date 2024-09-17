/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestCaseLifecycle.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies a test case summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestCaseSummary">AWS
   * API Reference</a></p>
   */
  class TestCaseSummary
  {
  public:
    AWS_APPTEST_API TestCaseSummary();
    AWS_APPTEST_API TestCaseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestCaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test case ID of the test case summary.</p>
     */
    inline const Aws::String& GetTestCaseId() const{ return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    inline void SetTestCaseId(const Aws::String& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = value; }
    inline void SetTestCaseId(Aws::String&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::move(value); }
    inline void SetTestCaseId(const char* value) { m_testCaseIdHasBeenSet = true; m_testCaseId.assign(value); }
    inline TestCaseSummary& WithTestCaseId(const Aws::String& value) { SetTestCaseId(value); return *this;}
    inline TestCaseSummary& WithTestCaseId(Aws::String&& value) { SetTestCaseId(std::move(value)); return *this;}
    inline TestCaseSummary& WithTestCaseId(const char* value) { SetTestCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case Amazon Resource Name (ARN) of the test case summary.</p>
     */
    inline const Aws::String& GetTestCaseArn() const{ return m_testCaseArn; }
    inline bool TestCaseArnHasBeenSet() const { return m_testCaseArnHasBeenSet; }
    inline void SetTestCaseArn(const Aws::String& value) { m_testCaseArnHasBeenSet = true; m_testCaseArn = value; }
    inline void SetTestCaseArn(Aws::String&& value) { m_testCaseArnHasBeenSet = true; m_testCaseArn = std::move(value); }
    inline void SetTestCaseArn(const char* value) { m_testCaseArnHasBeenSet = true; m_testCaseArn.assign(value); }
    inline TestCaseSummary& WithTestCaseArn(const Aws::String& value) { SetTestCaseArn(value); return *this;}
    inline TestCaseSummary& WithTestCaseArn(Aws::String&& value) { SetTestCaseArn(std::move(value)); return *this;}
    inline TestCaseSummary& WithTestCaseArn(const char* value) { SetTestCaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test case summary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TestCaseSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TestCaseSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TestCaseSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test case summary.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline TestCaseSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline TestCaseSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline TestCaseSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the test case summary.</p>
     */
    inline int GetLatestVersion() const{ return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }
    inline TestCaseSummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test case summary.</p>
     */
    inline const TestCaseLifecycle& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TestCaseLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TestCaseLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestCaseSummary& WithStatus(const TestCaseLifecycle& value) { SetStatus(value); return *this;}
    inline TestCaseSummary& WithStatus(TestCaseLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the test case summary.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TestCaseSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TestCaseSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the test case summary.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline TestCaseSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline TestCaseSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_testCaseId;
    bool m_testCaseIdHasBeenSet = false;

    Aws::String m_testCaseArn;
    bool m_testCaseArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    int m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    TestCaseLifecycle m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
