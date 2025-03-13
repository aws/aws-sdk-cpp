/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents configuration information about a test run, such as the execution
   * timeout (in minutes).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ExecutionConfiguration">AWS
   * API Reference</a></p>
   */
  class ExecutionConfiguration
  {
  public:
    AWS_DEVICEFARM_API ExecutionConfiguration() = default;
    AWS_DEVICEFARM_API ExecutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API ExecutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of minutes a test run executes before it times out.</p>
     */
    inline int GetJobTimeoutMinutes() const { return m_jobTimeoutMinutes; }
    inline bool JobTimeoutMinutesHasBeenSet() const { return m_jobTimeoutMinutesHasBeenSet; }
    inline void SetJobTimeoutMinutes(int value) { m_jobTimeoutMinutesHasBeenSet = true; m_jobTimeoutMinutes = value; }
    inline ExecutionConfiguration& WithJobTimeoutMinutes(int value) { SetJobTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if account cleanup is enabled at the beginning of the test. Otherwise,
     * false.</p>
     */
    inline bool GetAccountsCleanup() const { return m_accountsCleanup; }
    inline bool AccountsCleanupHasBeenSet() const { return m_accountsCleanupHasBeenSet; }
    inline void SetAccountsCleanup(bool value) { m_accountsCleanupHasBeenSet = true; m_accountsCleanup = value; }
    inline ExecutionConfiguration& WithAccountsCleanup(bool value) { SetAccountsCleanup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if app package cleanup is enabled at the beginning of the test.
     * Otherwise, false.</p>
     */
    inline bool GetAppPackagesCleanup() const { return m_appPackagesCleanup; }
    inline bool AppPackagesCleanupHasBeenSet() const { return m_appPackagesCleanupHasBeenSet; }
    inline void SetAppPackagesCleanup(bool value) { m_appPackagesCleanupHasBeenSet = true; m_appPackagesCleanup = value; }
    inline ExecutionConfiguration& WithAppPackagesCleanup(bool value) { SetAppPackagesCleanup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true to enable video capture. Otherwise, set to false. The default is
     * true.</p>
     */
    inline bool GetVideoCapture() const { return m_videoCapture; }
    inline bool VideoCaptureHasBeenSet() const { return m_videoCaptureHasBeenSet; }
    inline void SetVideoCapture(bool value) { m_videoCaptureHasBeenSet = true; m_videoCapture = value; }
    inline ExecutionConfiguration& WithVideoCapture(bool value) { SetVideoCapture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const { return m_skipAppResign; }
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }
    inline ExecutionConfiguration& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}
    ///@}
  private:

    int m_jobTimeoutMinutes{0};
    bool m_jobTimeoutMinutesHasBeenSet = false;

    bool m_accountsCleanup{false};
    bool m_accountsCleanupHasBeenSet = false;

    bool m_appPackagesCleanup{false};
    bool m_appPackagesCleanupHasBeenSet = false;

    bool m_videoCapture{false};
    bool m_videoCaptureHasBeenSet = false;

    bool m_skipAppResign{false};
    bool m_skipAppResignHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
