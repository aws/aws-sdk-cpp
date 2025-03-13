/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the configuration information of an alarm created in an IoT SiteWise
   * Monitor portal. You can use the alarm to monitor an asset property and get
   * notified when the asset property value is outside a specified range. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/appguide/monitor-alarms.html">Monitoring
   * with alarms</a> in the <i>IoT SiteWise Application Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Alarms">AWS
   * API Reference</a></p>
   */
  class Alarms
  {
  public:
    AWS_IOTSITEWISE_API Alarms() = default;
    AWS_IOTSITEWISE_API Alarms(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Alarms& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access Amazon Web
     * Services resources and services, such as IoT Events.</p>
     */
    inline const Aws::String& GetAlarmRoleArn() const { return m_alarmRoleArn; }
    inline bool AlarmRoleArnHasBeenSet() const { return m_alarmRoleArnHasBeenSet; }
    template<typename AlarmRoleArnT = Aws::String>
    void SetAlarmRoleArn(AlarmRoleArnT&& value) { m_alarmRoleArnHasBeenSet = true; m_alarmRoleArn = std::forward<AlarmRoleArnT>(value); }
    template<typename AlarmRoleArnT = Aws::String>
    Alarms& WithAlarmRoleArn(AlarmRoleArnT&& value) { SetAlarmRoleArn(std::forward<AlarmRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function that manages alarm notifications. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">Managing
     * alarm notifications</a> in the <i>IoT Events Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNotificationLambdaArn() const { return m_notificationLambdaArn; }
    inline bool NotificationLambdaArnHasBeenSet() const { return m_notificationLambdaArnHasBeenSet; }
    template<typename NotificationLambdaArnT = Aws::String>
    void SetNotificationLambdaArn(NotificationLambdaArnT&& value) { m_notificationLambdaArnHasBeenSet = true; m_notificationLambdaArn = std::forward<NotificationLambdaArnT>(value); }
    template<typename NotificationLambdaArnT = Aws::String>
    Alarms& WithNotificationLambdaArn(NotificationLambdaArnT&& value) { SetNotificationLambdaArn(std::forward<NotificationLambdaArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmRoleArn;
    bool m_alarmRoleArnHasBeenSet = false;

    Aws::String m_notificationLambdaArn;
    bool m_notificationLambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
