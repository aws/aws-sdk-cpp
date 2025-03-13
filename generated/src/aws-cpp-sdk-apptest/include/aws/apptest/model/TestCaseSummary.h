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
    AWS_APPTEST_API TestCaseSummary() = default;
    AWS_APPTEST_API TestCaseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestCaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test case ID of the test case summary.</p>
     */
    inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
    inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
    template<typename TestCaseIdT = Aws::String>
    void SetTestCaseId(TestCaseIdT&& value) { m_testCaseIdHasBeenSet = true; m_testCaseId = std::forward<TestCaseIdT>(value); }
    template<typename TestCaseIdT = Aws::String>
    TestCaseSummary& WithTestCaseId(TestCaseIdT&& value) { SetTestCaseId(std::forward<TestCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test case Amazon Resource Name (ARN) of the test case summary.</p>
     */
    inline const Aws::String& GetTestCaseArn() const { return m_testCaseArn; }
    inline bool TestCaseArnHasBeenSet() const { return m_testCaseArnHasBeenSet; }
    template<typename TestCaseArnT = Aws::String>
    void SetTestCaseArn(TestCaseArnT&& value) { m_testCaseArnHasBeenSet = true; m_testCaseArn = std::forward<TestCaseArnT>(value); }
    template<typename TestCaseArnT = Aws::String>
    TestCaseSummary& WithTestCaseArn(TestCaseArnT&& value) { SetTestCaseArn(std::forward<TestCaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test case summary.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TestCaseSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test case summary.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    TestCaseSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the test case summary.</p>
     */
    inline int GetLatestVersion() const { return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }
    inline TestCaseSummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test case summary.</p>
     */
    inline TestCaseLifecycle GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TestCaseLifecycle value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestCaseSummary& WithStatus(TestCaseLifecycle value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the test case summary.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TestCaseSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the test case summary.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    TestCaseSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
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

    int m_latestVersion{0};
    bool m_latestVersionHasBeenSet = false;

    TestCaseLifecycle m_status{TestCaseLifecycle::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
