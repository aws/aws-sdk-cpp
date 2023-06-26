/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotevents/model/AlarmModelVersionStatus.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains a summary of an alarm model version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AlarmModelVersionSummary">AWS
   * API Reference</a></p>
   */
  class AlarmModelVersionSummary
  {
  public:
    AWS_IOTEVENTS_API AlarmModelVersionSummary();
    AWS_IOTEVENTS_API AlarmModelVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmModelVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const{ return m_alarmModelName; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const Aws::String& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = value; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(Aws::String&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::move(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const char* value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName.assign(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}


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
    inline bool AlarmModelArnHasBeenSet() const { return m_alarmModelArnHasBeenSet; }

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAlarmModelArn(const Aws::String& value) { m_alarmModelArnHasBeenSet = true; m_alarmModelArn = value; }

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAlarmModelArn(Aws::String&& value) { m_alarmModelArnHasBeenSet = true; m_alarmModelArn = std::move(value); }

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAlarmModelArn(const char* value) { m_alarmModelArnHasBeenSet = true; m_alarmModelArn.assign(value); }

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelArn(const Aws::String& value) { SetAlarmModelArn(value); return *this;}

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelArn(Aws::String&& value) { SetAlarmModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelArn(const char* value) { SetAlarmModelArn(value); return *this;}


    /**
     * <p>The version of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelVersion() const{ return m_alarmModelVersion; }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline bool AlarmModelVersionHasBeenSet() const { return m_alarmModelVersionHasBeenSet; }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(const Aws::String& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = value; }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(Aws::String&& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = std::move(value); }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(const char* value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion.assign(value); }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelVersion(const Aws::String& value) { SetAlarmModelVersion(value); return *this;}

    /**
     * <p>The version of the alarm model.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelVersion(Aws::String&& value) { SetAlarmModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the alarm model.</p>
     */
    inline AlarmModelVersionSummary& WithAlarmModelVersion(const char* value) { SetAlarmModelVersion(value); return *this;}


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
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AlarmModelVersionSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AlarmModelVersionSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AlarmModelVersionSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline AlarmModelVersionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline AlarmModelVersionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline AlarmModelVersionSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline AlarmModelVersionSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const AlarmModelVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(AlarmModelVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline AlarmModelVersionSummary& WithStatus(const AlarmModelVersionStatus& value) { SetStatus(value); return *this;}

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
    inline AlarmModelVersionSummary& WithStatus(AlarmModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline AlarmModelVersionSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline AlarmModelVersionSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline AlarmModelVersionSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelArn;
    bool m_alarmModelArnHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    AlarmModelVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
