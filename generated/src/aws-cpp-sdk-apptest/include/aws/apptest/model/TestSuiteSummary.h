/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestSuiteLifecycle.h>
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
   * <p>Specifies the test suite summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestSuiteSummary">AWS
   * API Reference</a></p>
   */
  class TestSuiteSummary
  {
  public:
    AWS_APPTEST_API TestSuiteSummary();
    AWS_APPTEST_API TestSuiteSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestSuiteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test suite ID of the test suite summary.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId.assign(value); }
    inline TestSuiteSummary& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline TestSuiteSummary& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline TestSuiteSummary& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test suite summary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TestSuiteSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TestSuiteSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TestSuiteSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test suite summary.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline TestSuiteSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline TestSuiteSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline TestSuiteSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the test suite summary.</p>
     */
    inline int GetLatestVersion() const{ return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }
    inline TestSuiteSummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test suite Amazon Resource Name (ARN) of the test suite summary.</p>
     */
    inline const Aws::String& GetTestSuiteArn() const{ return m_testSuiteArn; }
    inline bool TestSuiteArnHasBeenSet() const { return m_testSuiteArnHasBeenSet; }
    inline void SetTestSuiteArn(const Aws::String& value) { m_testSuiteArnHasBeenSet = true; m_testSuiteArn = value; }
    inline void SetTestSuiteArn(Aws::String&& value) { m_testSuiteArnHasBeenSet = true; m_testSuiteArn = std::move(value); }
    inline void SetTestSuiteArn(const char* value) { m_testSuiteArnHasBeenSet = true; m_testSuiteArn.assign(value); }
    inline TestSuiteSummary& WithTestSuiteArn(const Aws::String& value) { SetTestSuiteArn(value); return *this;}
    inline TestSuiteSummary& WithTestSuiteArn(Aws::String&& value) { SetTestSuiteArn(std::move(value)); return *this;}
    inline TestSuiteSummary& WithTestSuiteArn(const char* value) { SetTestSuiteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test suite summary.</p>
     */
    inline const TestSuiteLifecycle& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TestSuiteLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TestSuiteLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestSuiteSummary& WithStatus(const TestSuiteLifecycle& value) { SetStatus(value); return *this;}
    inline TestSuiteSummary& WithStatus(TestSuiteLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the test suite summary.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TestSuiteSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TestSuiteSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the test suite summary.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline TestSuiteSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline TestSuiteSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    int m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    Aws::String m_testSuiteArn;
    bool m_testSuiteArnHasBeenSet = false;

    TestSuiteLifecycle m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
