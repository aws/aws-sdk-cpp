/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestConfigurationLifecycle.h>
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
   * <p>Specifies a test configuration summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class TestConfigurationSummary
  {
  public:
    AWS_APPTEST_API TestConfigurationSummary();
    AWS_APPTEST_API TestConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The test configuration ID of the test configuration summary.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const{ return m_testConfigurationId; }
    inline bool TestConfigurationIdHasBeenSet() const { return m_testConfigurationIdHasBeenSet; }
    inline void SetTestConfigurationId(const Aws::String& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = value; }
    inline void SetTestConfigurationId(Aws::String&& value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId = std::move(value); }
    inline void SetTestConfigurationId(const char* value) { m_testConfigurationIdHasBeenSet = true; m_testConfigurationId.assign(value); }
    inline TestConfigurationSummary& WithTestConfigurationId(const Aws::String& value) { SetTestConfigurationId(value); return *this;}
    inline TestConfigurationSummary& WithTestConfigurationId(Aws::String&& value) { SetTestConfigurationId(std::move(value)); return *this;}
    inline TestConfigurationSummary& WithTestConfigurationId(const char* value) { SetTestConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test configuration summary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TestConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TestConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TestConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test configuration summary.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline TestConfigurationSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline TestConfigurationSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline TestConfigurationSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the test configuration summary.</p>
     */
    inline int GetLatestVersion() const{ return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }
    inline TestConfigurationSummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration ARN of the test configuration summary.</p>
     */
    inline const Aws::String& GetTestConfigurationArn() const{ return m_testConfigurationArn; }
    inline bool TestConfigurationArnHasBeenSet() const { return m_testConfigurationArnHasBeenSet; }
    inline void SetTestConfigurationArn(const Aws::String& value) { m_testConfigurationArnHasBeenSet = true; m_testConfigurationArn = value; }
    inline void SetTestConfigurationArn(Aws::String&& value) { m_testConfigurationArnHasBeenSet = true; m_testConfigurationArn = std::move(value); }
    inline void SetTestConfigurationArn(const char* value) { m_testConfigurationArnHasBeenSet = true; m_testConfigurationArn.assign(value); }
    inline TestConfigurationSummary& WithTestConfigurationArn(const Aws::String& value) { SetTestConfigurationArn(value); return *this;}
    inline TestConfigurationSummary& WithTestConfigurationArn(Aws::String&& value) { SetTestConfigurationArn(std::move(value)); return *this;}
    inline TestConfigurationSummary& WithTestConfigurationArn(const char* value) { SetTestConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test configuration summary.</p>
     */
    inline const TestConfigurationLifecycle& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TestConfigurationLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TestConfigurationLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TestConfigurationSummary& WithStatus(const TestConfigurationLifecycle& value) { SetStatus(value); return *this;}
    inline TestConfigurationSummary& WithStatus(TestConfigurationLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the test configuration summary.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TestConfigurationSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TestConfigurationSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the test configuration summary.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline TestConfigurationSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline TestConfigurationSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_testConfigurationId;
    bool m_testConfigurationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    int m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    Aws::String m_testConfigurationArn;
    bool m_testConfigurationArnHasBeenSet = false;

    TestConfigurationLifecycle m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
