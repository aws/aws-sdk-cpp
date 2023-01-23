/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AlarmModelVersionStatus.h>
#include <aws/iotevents/model/AlarmRule.h>
#include <aws/iotevents/model/AlarmNotification.h>
#include <aws/iotevents/model/AlarmEventActions.h>
#include <aws/iotevents/model/AlarmCapabilities.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTEvents
{
namespace Model
{
  class DescribeAlarmModelResult
  {
  public:
    AWS_IOTEVENTS_API DescribeAlarmModelResult();
    AWS_IOTEVENTS_API DescribeAlarmModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API DescribeAlarmModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline DescribeAlarmModelResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline DescribeAlarmModelResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAlarmModelArn() const{ return m_alarmModelArn; }

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAlarmModelArn(const Aws::String& value) { m_alarmModelArn = value; }

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAlarmModelArn(Aws::String&& value) { m_alarmModelArn = std::move(value); }

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAlarmModelArn(const char* value) { m_alarmModelArn.assign(value); }

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelArn(const Aws::String& value) { SetAlarmModelArn(value); return *this;}

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelArn(Aws::String&& value) { SetAlarmModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelArn(const char* value) { SetAlarmModelArn(value); return *this;}


    /**
     * <p>The version of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelVersion() const{ return m_alarmModelVersion; }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(const Aws::String& value) { m_alarmModelVersion = value; }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(Aws::String&& value) { m_alarmModelVersion = std::move(value); }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(const char* value) { m_alarmModelVersion.assign(value); }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelVersion(const Aws::String& value) { SetAlarmModelVersion(value); return *this;}

    /**
     * <p>The version of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelVersion(Aws::String&& value) { SetAlarmModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelVersion(const char* value) { SetAlarmModelVersion(value); return *this;}


    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTime = value; }

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTime = std::move(value); }

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline DescribeAlarmModelResult& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline DescribeAlarmModelResult& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The status of the alarm model. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The alarm model is active and
     * it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVATING</code> - AWS
     * IoT Events is activating your alarm model. Activating an alarm model can take up
     * to a few minutes.</p> </li> <li> <p> <code>INACTIVE</code> - The alarm model is
     * inactive, so it isn't ready to evaluate data. Check your alarm model information
     * and update the alarm model.</p> </li> <li> <p> <code>FAILED</code> - You
     * couldn't create or update the alarm model. Check your alarm model information
     * and try again.</p> </li> </ul>
     */
    inline const AlarmModelVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the alarm model. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The alarm model is active and
     * it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVATING</code> - AWS
     * IoT Events is activating your alarm model. Activating an alarm model can take up
     * to a few minutes.</p> </li> <li> <p> <code>INACTIVE</code> - The alarm model is
     * inactive, so it isn't ready to evaluate data. Check your alarm model information
     * and update the alarm model.</p> </li> <li> <p> <code>FAILED</code> - You
     * couldn't create or update the alarm model. Check your alarm model information
     * and try again.</p> </li> </ul>
     */
    inline void SetStatus(const AlarmModelVersionStatus& value) { m_status = value; }

    /**
     * <p>The status of the alarm model. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The alarm model is active and
     * it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVATING</code> - AWS
     * IoT Events is activating your alarm model. Activating an alarm model can take up
     * to a few minutes.</p> </li> <li> <p> <code>INACTIVE</code> - The alarm model is
     * inactive, so it isn't ready to evaluate data. Check your alarm model information
     * and update the alarm model.</p> </li> <li> <p> <code>FAILED</code> - You
     * couldn't create or update the alarm model. Check your alarm model information
     * and try again.</p> </li> </ul>
     */
    inline void SetStatus(AlarmModelVersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the alarm model. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The alarm model is active and
     * it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVATING</code> - AWS
     * IoT Events is activating your alarm model. Activating an alarm model can take up
     * to a few minutes.</p> </li> <li> <p> <code>INACTIVE</code> - The alarm model is
     * inactive, so it isn't ready to evaluate data. Check your alarm model information
     * and update the alarm model.</p> </li> <li> <p> <code>FAILED</code> - You
     * couldn't create or update the alarm model. Check your alarm model information
     * and try again.</p> </li> </ul>
     */
    inline DescribeAlarmModelResult& WithStatus(const AlarmModelVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the alarm model. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The alarm model is active and
     * it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVATING</code> - AWS
     * IoT Events is activating your alarm model. Activating an alarm model can take up
     * to a few minutes.</p> </li> <li> <p> <code>INACTIVE</code> - The alarm model is
     * inactive, so it isn't ready to evaluate data. Check your alarm model information
     * and update the alarm model.</p> </li> <li> <p> <code>FAILED</code> - You
     * couldn't create or update the alarm model. Check your alarm model information
     * and try again.</p> </li> </ul>
     */
    inline DescribeAlarmModelResult& WithStatus(AlarmModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Contains information about the status of the alarm model. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> Contains information about the status of the alarm model. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p> Contains information about the status of the alarm model. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p> Contains information about the status of the alarm model. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p> Contains information about the status of the alarm model. </p>
     */
    inline DescribeAlarmModelResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> Contains information about the status of the alarm model. </p>
     */
    inline DescribeAlarmModelResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> Contains information about the status of the alarm model. </p>
     */
    inline DescribeAlarmModelResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const{ return m_alarmModelName; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const Aws::String& value) { m_alarmModelName = value; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(Aws::String&& value) { m_alarmModelName = std::move(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const char* value) { m_alarmModelName.assign(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}


    /**
     * <p>The description of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelDescription() const{ return m_alarmModelDescription; }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(const Aws::String& value) { m_alarmModelDescription = value; }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(Aws::String&& value) { m_alarmModelDescription = std::move(value); }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(const char* value) { m_alarmModelDescription.assign(value); }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelDescription(const Aws::String& value) { SetAlarmModelDescription(value); return *this;}

    /**
     * <p>The description of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelDescription(Aws::String&& value) { SetAlarmModelDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the alarm model.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmModelDescription(const char* value) { SetAlarmModelDescription(value); return *this;}


    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeAlarmModelResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeAlarmModelResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeAlarmModelResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline void SetKey(const Aws::String& value) { m_key = value; }

    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline void SetKey(Aws::String&& value) { m_key = std::move(value); }

    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline void SetKey(const char* value) { m_key.assign(value); }

    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline DescribeAlarmModelResult& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline DescribeAlarmModelResult& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline DescribeAlarmModelResult& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline int GetSeverity() const{ return m_severity; }

    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline void SetSeverity(int value) { m_severity = value; }

    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline DescribeAlarmModelResult& WithSeverity(int value) { SetSeverity(value); return *this;}


    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline const AlarmRule& GetAlarmRule() const{ return m_alarmRule; }

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline void SetAlarmRule(const AlarmRule& value) { m_alarmRule = value; }

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline void SetAlarmRule(AlarmRule&& value) { m_alarmRule = std::move(value); }

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmRule(const AlarmRule& value) { SetAlarmRule(value); return *this;}

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmRule(AlarmRule&& value) { SetAlarmRule(std::move(value)); return *this;}


    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline const AlarmNotification& GetAlarmNotification() const{ return m_alarmNotification; }

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline void SetAlarmNotification(const AlarmNotification& value) { m_alarmNotification = value; }

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline void SetAlarmNotification(AlarmNotification&& value) { m_alarmNotification = std::move(value); }

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmNotification(const AlarmNotification& value) { SetAlarmNotification(value); return *this;}

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmNotification(AlarmNotification&& value) { SetAlarmNotification(std::move(value)); return *this;}


    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline const AlarmEventActions& GetAlarmEventActions() const{ return m_alarmEventActions; }

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline void SetAlarmEventActions(const AlarmEventActions& value) { m_alarmEventActions = value; }

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline void SetAlarmEventActions(AlarmEventActions&& value) { m_alarmEventActions = std::move(value); }

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmEventActions(const AlarmEventActions& value) { SetAlarmEventActions(value); return *this;}

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmEventActions(AlarmEventActions&& value) { SetAlarmEventActions(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline const AlarmCapabilities& GetAlarmCapabilities() const{ return m_alarmCapabilities; }

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline void SetAlarmCapabilities(const AlarmCapabilities& value) { m_alarmCapabilities = value; }

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline void SetAlarmCapabilities(AlarmCapabilities&& value) { m_alarmCapabilities = std::move(value); }

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmCapabilities(const AlarmCapabilities& value) { SetAlarmCapabilities(value); return *this;}

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline DescribeAlarmModelResult& WithAlarmCapabilities(AlarmCapabilities&& value) { SetAlarmCapabilities(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_alarmModelArn;

    Aws::String m_alarmModelVersion;

    Aws::Utils::DateTime m_lastUpdateTime;

    AlarmModelVersionStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_alarmModelName;

    Aws::String m_alarmModelDescription;

    Aws::String m_roleArn;

    Aws::String m_key;

    int m_severity;

    AlarmRule m_alarmRule;

    AlarmNotification m_alarmNotification;

    AlarmEventActions m_alarmEventActions;

    AlarmCapabilities m_alarmCapabilities;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
