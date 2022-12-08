/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>Amazon CloudWatch alarms to monitor during the deployment
   * process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/Monitor">AWS
   * API Reference</a></p>
   */
  class Monitor
  {
  public:
    AWS_APPCONFIG_API Monitor();
    AWS_APPCONFIG_API Monitor(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Monitor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline const Aws::String& GetAlarmArn() const{ return m_alarmArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline void SetAlarmArn(const Aws::String& value) { m_alarmArnHasBeenSet = true; m_alarmArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline void SetAlarmArn(Aws::String&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline void SetAlarmArn(const char* value) { m_alarmArnHasBeenSet = true; m_alarmArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline Monitor& WithAlarmArn(const Aws::String& value) { SetAlarmArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline Monitor& WithAlarmArn(Aws::String&& value) { SetAlarmArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon CloudWatch alarm.</p>
     */
    inline Monitor& WithAlarmArn(const char* value) { SetAlarmArn(value); return *this;}


    /**
     * <p>ARN of an Identity and Access Management (IAM) role for AppConfig to monitor
     * <code>AlarmArn</code>.</p>
     */
    inline const Aws::String& GetAlarmRoleArn() const{ return m_alarmRoleArn; }

    /**
     * <p>ARN of an Identity and Access Management (IAM) role for AppConfig to monitor
     * <code>AlarmArn</code>.</p>
     */
    inline bool AlarmRoleArnHasBeenSet() const { return m_alarmRoleArnHasBeenSet; }

    /**
     * <p>ARN of an Identity and Access Management (IAM) role for AppConfig to monitor
     * <code>AlarmArn</code>.</p>
     */
    inline void SetAlarmRoleArn(const Aws::String& value) { m_alarmRoleArnHasBeenSet = true; m_alarmRoleArn = value; }

    /**
     * <p>ARN of an Identity and Access Management (IAM) role for AppConfig to monitor
     * <code>AlarmArn</code>.</p>
     */
    inline void SetAlarmRoleArn(Aws::String&& value) { m_alarmRoleArnHasBeenSet = true; m_alarmRoleArn = std::move(value); }

    /**
     * <p>ARN of an Identity and Access Management (IAM) role for AppConfig to monitor
     * <code>AlarmArn</code>.</p>
     */
    inline void SetAlarmRoleArn(const char* value) { m_alarmRoleArnHasBeenSet = true; m_alarmRoleArn.assign(value); }

    /**
     * <p>ARN of an Identity and Access Management (IAM) role for AppConfig to monitor
     * <code>AlarmArn</code>.</p>
     */
    inline Monitor& WithAlarmRoleArn(const Aws::String& value) { SetAlarmRoleArn(value); return *this;}

    /**
     * <p>ARN of an Identity and Access Management (IAM) role for AppConfig to monitor
     * <code>AlarmArn</code>.</p>
     */
    inline Monitor& WithAlarmRoleArn(Aws::String&& value) { SetAlarmRoleArn(std::move(value)); return *this;}

    /**
     * <p>ARN of an Identity and Access Management (IAM) role for AppConfig to monitor
     * <code>AlarmArn</code>.</p>
     */
    inline Monitor& WithAlarmRoleArn(const char* value) { SetAlarmRoleArn(value); return *this;}

  private:

    Aws::String m_alarmArn;
    bool m_alarmArnHasBeenSet = false;

    Aws::String m_alarmRoleArn;
    bool m_alarmRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
