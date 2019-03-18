/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DEVICEFARM_API ExecutionConfiguration
  {
  public:
    ExecutionConfiguration();
    ExecutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ExecutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of minutes a test run will execute before it times out.</p>
     */
    inline int GetJobTimeoutMinutes() const{ return m_jobTimeoutMinutes; }

    /**
     * <p>The number of minutes a test run will execute before it times out.</p>
     */
    inline bool JobTimeoutMinutesHasBeenSet() const { return m_jobTimeoutMinutesHasBeenSet; }

    /**
     * <p>The number of minutes a test run will execute before it times out.</p>
     */
    inline void SetJobTimeoutMinutes(int value) { m_jobTimeoutMinutesHasBeenSet = true; m_jobTimeoutMinutes = value; }

    /**
     * <p>The number of minutes a test run will execute before it times out.</p>
     */
    inline ExecutionConfiguration& WithJobTimeoutMinutes(int value) { SetJobTimeoutMinutes(value); return *this;}


    /**
     * <p>True if account cleanup is enabled at the beginning of the test; otherwise,
     * false.</p>
     */
    inline bool GetAccountsCleanup() const{ return m_accountsCleanup; }

    /**
     * <p>True if account cleanup is enabled at the beginning of the test; otherwise,
     * false.</p>
     */
    inline bool AccountsCleanupHasBeenSet() const { return m_accountsCleanupHasBeenSet; }

    /**
     * <p>True if account cleanup is enabled at the beginning of the test; otherwise,
     * false.</p>
     */
    inline void SetAccountsCleanup(bool value) { m_accountsCleanupHasBeenSet = true; m_accountsCleanup = value; }

    /**
     * <p>True if account cleanup is enabled at the beginning of the test; otherwise,
     * false.</p>
     */
    inline ExecutionConfiguration& WithAccountsCleanup(bool value) { SetAccountsCleanup(value); return *this;}


    /**
     * <p>True if app package cleanup is enabled at the beginning of the test;
     * otherwise, false.</p>
     */
    inline bool GetAppPackagesCleanup() const{ return m_appPackagesCleanup; }

    /**
     * <p>True if app package cleanup is enabled at the beginning of the test;
     * otherwise, false.</p>
     */
    inline bool AppPackagesCleanupHasBeenSet() const { return m_appPackagesCleanupHasBeenSet; }

    /**
     * <p>True if app package cleanup is enabled at the beginning of the test;
     * otherwise, false.</p>
     */
    inline void SetAppPackagesCleanup(bool value) { m_appPackagesCleanupHasBeenSet = true; m_appPackagesCleanup = value; }

    /**
     * <p>True if app package cleanup is enabled at the beginning of the test;
     * otherwise, false.</p>
     */
    inline ExecutionConfiguration& WithAppPackagesCleanup(bool value) { SetAppPackagesCleanup(value); return *this;}


    /**
     * <p>Set to true to enable video capture; otherwise, set to false. The default is
     * true.</p>
     */
    inline bool GetVideoCapture() const{ return m_videoCapture; }

    /**
     * <p>Set to true to enable video capture; otherwise, set to false. The default is
     * true.</p>
     */
    inline bool VideoCaptureHasBeenSet() const { return m_videoCaptureHasBeenSet; }

    /**
     * <p>Set to true to enable video capture; otherwise, set to false. The default is
     * true.</p>
     */
    inline void SetVideoCapture(bool value) { m_videoCaptureHasBeenSet = true; m_videoCapture = value; }

    /**
     * <p>Set to true to enable video capture; otherwise, set to false. The default is
     * true.</p>
     */
    inline ExecutionConfiguration& WithVideoCapture(bool value) { SetVideoCapture(value); return *this;}


    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const{ return m_skipAppResign; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline ExecutionConfiguration& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}

  private:

    int m_jobTimeoutMinutes;
    bool m_jobTimeoutMinutesHasBeenSet;

    bool m_accountsCleanup;
    bool m_accountsCleanupHasBeenSet;

    bool m_appPackagesCleanup;
    bool m_appPackagesCleanupHasBeenSet;

    bool m_videoCapture;
    bool m_videoCaptureHasBeenSet;

    bool m_skipAppResign;
    bool m_skipAppResignHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
