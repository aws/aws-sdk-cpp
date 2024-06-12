/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/TestCaseLifecycle.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the latest version of a test case.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestCaseLatestVersion">AWS
   * API Reference</a></p>
   */
  class TestCaseLatestVersion
  {
  public:
    AWS_APPTEST_API TestCaseLatestVersion();
    AWS_APPTEST_API TestCaseLatestVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestCaseLatestVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the test case latest version.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline TestCaseLatestVersion& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test case latest version.</p>
     */
    inline const TestCaseLifecycle& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TestCaseLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TestCaseLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestCaseLatestVersion& WithStatus(const TestCaseLifecycle& value) { SetStatus(value); return *this;}
    inline TestCaseLatestVersion& WithStatus(TestCaseLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test case latest version.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline TestCaseLatestVersion& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline TestCaseLatestVersion& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline TestCaseLatestVersion& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    int m_version;
    bool m_versionHasBeenSet = false;

    TestCaseLifecycle m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
