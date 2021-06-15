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
   * <p>Contains the configuration information of an alarm created in an AWS IoT
   * SiteWise Monitor portal. You can use the alarm to monitor an asset property and
   * get notified when the asset property value is outside a specified range. For
   * more information, see .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Alarms">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API Alarms
  {
  public:
    Alarms();
    Alarms(Aws::Utils::Json::JsonView jsonValue);
    Alarms& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access AWS
     * resources, including AWS IoT Events.</p>
     */
    inline const Aws::String& GetAlarmRoleArn() const{ return m_alarmRoleArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access AWS
     * resources, including AWS IoT Events.</p>
     */
    inline bool AlarmRoleArnHasBeenSet() const { return m_alarmRoleArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access AWS
     * resources, including AWS IoT Events.</p>
     */
    inline void SetAlarmRoleArn(const Aws::String& value) { m_alarmRoleArnHasBeenSet = true; m_alarmRoleArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access AWS
     * resources, including AWS IoT Events.</p>
     */
    inline void SetAlarmRoleArn(Aws::String&& value) { m_alarmRoleArnHasBeenSet = true; m_alarmRoleArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access AWS
     * resources, including AWS IoT Events.</p>
     */
    inline void SetAlarmRoleArn(const char* value) { m_alarmRoleArnHasBeenSet = true; m_alarmRoleArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access AWS
     * resources, including AWS IoT Events.</p>
     */
    inline Alarms& WithAlarmRoleArn(const Aws::String& value) { SetAlarmRoleArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access AWS
     * resources, including AWS IoT Events.</p>
     */
    inline Alarms& WithAlarmRoleArn(Aws::String&& value) { SetAlarmRoleArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IAM role that allows the alarm to perform actions and access AWS
     * resources, including AWS IoT Events.</p>
     */
    inline Alarms& WithAlarmRoleArn(const char* value) { SetAlarmRoleArn(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS Lambda function that manages alarm notifications. For more
     * information, see <a href="https://docs.aws.amazon.com/">Managing alarm
     * notifications</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNotificationLambdaArn() const{ return m_notificationLambdaArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS Lambda function that manages alarm notifications. For more
     * information, see <a href="https://docs.aws.amazon.com/">Managing alarm
     * notifications</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline bool NotificationLambdaArnHasBeenSet() const { return m_notificationLambdaArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS Lambda function that manages alarm notifications. For more
     * information, see <a href="https://docs.aws.amazon.com/">Managing alarm
     * notifications</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline void SetNotificationLambdaArn(const Aws::String& value) { m_notificationLambdaArnHasBeenSet = true; m_notificationLambdaArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS Lambda function that manages alarm notifications. For more
     * information, see <a href="https://docs.aws.amazon.com/">Managing alarm
     * notifications</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline void SetNotificationLambdaArn(Aws::String&& value) { m_notificationLambdaArnHasBeenSet = true; m_notificationLambdaArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS Lambda function that manages alarm notifications. For more
     * information, see <a href="https://docs.aws.amazon.com/">Managing alarm
     * notifications</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline void SetNotificationLambdaArn(const char* value) { m_notificationLambdaArnHasBeenSet = true; m_notificationLambdaArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS Lambda function that manages alarm notifications. For more
     * information, see <a href="https://docs.aws.amazon.com/">Managing alarm
     * notifications</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline Alarms& WithNotificationLambdaArn(const Aws::String& value) { SetNotificationLambdaArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS Lambda function that manages alarm notifications. For more
     * information, see <a href="https://docs.aws.amazon.com/">Managing alarm
     * notifications</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline Alarms& WithNotificationLambdaArn(Aws::String&& value) { SetNotificationLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS Lambda function that manages alarm notifications. For more
     * information, see <a href="https://docs.aws.amazon.com/">Managing alarm
     * notifications</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline Alarms& WithNotificationLambdaArn(const char* value) { SetNotificationLambdaArn(value); return *this;}

  private:

    Aws::String m_alarmRoleArn;
    bool m_alarmRoleArnHasBeenSet;

    Aws::String m_notificationLambdaArn;
    bool m_notificationLambdaArnHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
