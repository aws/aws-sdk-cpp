/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/TestConfigurationLifecycle.h>
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
   * <p>Specifies the latest version of the test configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TestConfigurationLatestVersion">AWS
   * API Reference</a></p>
   */
  class TestConfigurationLatestVersion
  {
  public:
    AWS_APPTEST_API TestConfigurationLatestVersion() = default;
    AWS_APPTEST_API TestConfigurationLatestVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TestConfigurationLatestVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the test configuration latest version.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline TestConfigurationLatestVersion& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test configuration latest version.</p>
     */
    inline TestConfigurationLifecycle GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TestConfigurationLifecycle value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestConfigurationLatestVersion& WithStatus(TestConfigurationLifecycle value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test configuration latest version.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    TestConfigurationLatestVersion& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    int m_version{0};
    bool m_versionHasBeenSet = false;

    TestConfigurationLifecycle m_status{TestConfigurationLifecycle::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
