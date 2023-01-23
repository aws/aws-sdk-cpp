/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The configuration for an application to automatically stop after a certain
   * amount of time being idle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/AutoStopConfig">AWS
   * API Reference</a></p>
   */
  class AutoStopConfig
  {
  public:
    AWS_EMRSERVERLESS_API AutoStopConfig();
    AWS_EMRSERVERLESS_API AutoStopConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API AutoStopConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables the application to automatically stop after a certain amount of time
     * being idle. Defaults to true.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables the application to automatically stop after a certain amount of time
     * being idle. Defaults to true.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables the application to automatically stop after a certain amount of time
     * being idle. Defaults to true.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables the application to automatically stop after a certain amount of time
     * being idle. Defaults to true.</p>
     */
    inline AutoStopConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The amount of idle time in minutes after which your application will
     * automatically stop. Defaults to 15 minutes.</p>
     */
    inline int GetIdleTimeoutMinutes() const{ return m_idleTimeoutMinutes; }

    /**
     * <p>The amount of idle time in minutes after which your application will
     * automatically stop. Defaults to 15 minutes.</p>
     */
    inline bool IdleTimeoutMinutesHasBeenSet() const { return m_idleTimeoutMinutesHasBeenSet; }

    /**
     * <p>The amount of idle time in minutes after which your application will
     * automatically stop. Defaults to 15 minutes.</p>
     */
    inline void SetIdleTimeoutMinutes(int value) { m_idleTimeoutMinutesHasBeenSet = true; m_idleTimeoutMinutes = value; }

    /**
     * <p>The amount of idle time in minutes after which your application will
     * automatically stop. Defaults to 15 minutes.</p>
     */
    inline AutoStopConfig& WithIdleTimeoutMinutes(int value) { SetIdleTimeoutMinutes(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_idleTimeoutMinutes;
    bool m_idleTimeoutMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
