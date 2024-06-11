/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/SetVariableAction.h>
#include <aws/iotevents/model/SNSTopicPublishAction.h>
#include <aws/iotevents/model/IotTopicPublishAction.h>
#include <aws/iotevents/model/SetTimerAction.h>
#include <aws/iotevents/model/ClearTimerAction.h>
#include <aws/iotevents/model/ResetTimerAction.h>
#include <aws/iotevents/model/LambdaAction.h>
#include <aws/iotevents/model/IotEventsAction.h>
#include <aws/iotevents/model/SqsAction.h>
#include <aws/iotevents/model/FirehoseAction.h>
#include <aws/iotevents/model/DynamoDBAction.h>
#include <aws/iotevents/model/DynamoDBv2Action.h>
#include <aws/iotevents/model/IotSiteWiseAction.h>
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
   * <p>An action to be performed when the <code>condition</code> is
   * TRUE.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_IOTEVENTS_API Action();
    AWS_IOTEVENTS_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets a variable to a specified value.</p>
     */
    inline const SetVariableAction& GetSetVariable() const{ return m_setVariable; }
    inline bool SetVariableHasBeenSet() const { return m_setVariableHasBeenSet; }
    inline void SetSetVariable(const SetVariableAction& value) { m_setVariableHasBeenSet = true; m_setVariable = value; }
    inline void SetSetVariable(SetVariableAction&& value) { m_setVariableHasBeenSet = true; m_setVariable = std::move(value); }
    inline Action& WithSetVariable(const SetVariableAction& value) { SetSetVariable(value); return *this;}
    inline Action& WithSetVariable(SetVariableAction&& value) { SetSetVariable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends an Amazon SNS message.</p>
     */
    inline const SNSTopicPublishAction& GetSns() const{ return m_sns; }
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }
    inline void SetSns(const SNSTopicPublishAction& value) { m_snsHasBeenSet = true; m_sns = value; }
    inline void SetSns(SNSTopicPublishAction&& value) { m_snsHasBeenSet = true; m_sns = std::move(value); }
    inline Action& WithSns(const SNSTopicPublishAction& value) { SetSns(value); return *this;}
    inline Action& WithSns(SNSTopicPublishAction&& value) { SetSns(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publishes an MQTT message with the given topic to the AWS IoT message
     * broker.</p>
     */
    inline const IotTopicPublishAction& GetIotTopicPublish() const{ return m_iotTopicPublish; }
    inline bool IotTopicPublishHasBeenSet() const { return m_iotTopicPublishHasBeenSet; }
    inline void SetIotTopicPublish(const IotTopicPublishAction& value) { m_iotTopicPublishHasBeenSet = true; m_iotTopicPublish = value; }
    inline void SetIotTopicPublish(IotTopicPublishAction&& value) { m_iotTopicPublishHasBeenSet = true; m_iotTopicPublish = std::move(value); }
    inline Action& WithIotTopicPublish(const IotTopicPublishAction& value) { SetIotTopicPublish(value); return *this;}
    inline Action& WithIotTopicPublish(IotTopicPublishAction&& value) { SetIotTopicPublish(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information needed to set the timer.</p>
     */
    inline const SetTimerAction& GetSetTimer() const{ return m_setTimer; }
    inline bool SetTimerHasBeenSet() const { return m_setTimerHasBeenSet; }
    inline void SetSetTimer(const SetTimerAction& value) { m_setTimerHasBeenSet = true; m_setTimer = value; }
    inline void SetSetTimer(SetTimerAction&& value) { m_setTimerHasBeenSet = true; m_setTimer = std::move(value); }
    inline Action& WithSetTimer(const SetTimerAction& value) { SetSetTimer(value); return *this;}
    inline Action& WithSetTimer(SetTimerAction&& value) { SetSetTimer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information needed to clear the timer.</p>
     */
    inline const ClearTimerAction& GetClearTimer() const{ return m_clearTimer; }
    inline bool ClearTimerHasBeenSet() const { return m_clearTimerHasBeenSet; }
    inline void SetClearTimer(const ClearTimerAction& value) { m_clearTimerHasBeenSet = true; m_clearTimer = value; }
    inline void SetClearTimer(ClearTimerAction&& value) { m_clearTimerHasBeenSet = true; m_clearTimer = std::move(value); }
    inline Action& WithClearTimer(const ClearTimerAction& value) { SetClearTimer(value); return *this;}
    inline Action& WithClearTimer(ClearTimerAction&& value) { SetClearTimer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information needed to reset the timer.</p>
     */
    inline const ResetTimerAction& GetResetTimer() const{ return m_resetTimer; }
    inline bool ResetTimerHasBeenSet() const { return m_resetTimerHasBeenSet; }
    inline void SetResetTimer(const ResetTimerAction& value) { m_resetTimerHasBeenSet = true; m_resetTimer = value; }
    inline void SetResetTimer(ResetTimerAction&& value) { m_resetTimerHasBeenSet = true; m_resetTimer = std::move(value); }
    inline Action& WithResetTimer(const ResetTimerAction& value) { SetResetTimer(value); return *this;}
    inline Action& WithResetTimer(ResetTimerAction&& value) { SetResetTimer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Calls a Lambda function, passing in information about the detector model
     * instance and the event that triggered the action.</p>
     */
    inline const LambdaAction& GetLambda() const{ return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    inline void SetLambda(const LambdaAction& value) { m_lambdaHasBeenSet = true; m_lambda = value; }
    inline void SetLambda(LambdaAction&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }
    inline Action& WithLambda(const LambdaAction& value) { SetLambda(value); return *this;}
    inline Action& WithLambda(LambdaAction&& value) { SetLambda(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends AWS IoT Events input, which passes information about the detector model
     * instance and the event that triggered the action.</p>
     */
    inline const IotEventsAction& GetIotEvents() const{ return m_iotEvents; }
    inline bool IotEventsHasBeenSet() const { return m_iotEventsHasBeenSet; }
    inline void SetIotEvents(const IotEventsAction& value) { m_iotEventsHasBeenSet = true; m_iotEvents = value; }
    inline void SetIotEvents(IotEventsAction&& value) { m_iotEventsHasBeenSet = true; m_iotEvents = std::move(value); }
    inline Action& WithIotEvents(const IotEventsAction& value) { SetIotEvents(value); return *this;}
    inline Action& WithIotEvents(IotEventsAction&& value) { SetIotEvents(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends information about the detector model instance and the event that
     * triggered the action to an Amazon SQS queue.</p>
     */
    inline const SqsAction& GetSqs() const{ return m_sqs; }
    inline bool SqsHasBeenSet() const { return m_sqsHasBeenSet; }
    inline void SetSqs(const SqsAction& value) { m_sqsHasBeenSet = true; m_sqs = value; }
    inline void SetSqs(SqsAction&& value) { m_sqsHasBeenSet = true; m_sqs = std::move(value); }
    inline Action& WithSqs(const SqsAction& value) { SetSqs(value); return *this;}
    inline Action& WithSqs(SqsAction&& value) { SetSqs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends information about the detector model instance and the event that
     * triggered the action to an Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline const FirehoseAction& GetFirehose() const{ return m_firehose; }
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }
    inline void SetFirehose(const FirehoseAction& value) { m_firehoseHasBeenSet = true; m_firehose = value; }
    inline void SetFirehose(FirehoseAction&& value) { m_firehoseHasBeenSet = true; m_firehose = std::move(value); }
    inline Action& WithFirehose(const FirehoseAction& value) { SetFirehose(value); return *this;}
    inline Action& WithFirehose(FirehoseAction&& value) { SetFirehose(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Writes to the DynamoDB table that you created. The default action payload
     * contains all attribute-value pairs that have the information about the detector
     * model instance and the event that triggered the action. You can customize the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Payload.html">payload</a>.
     * One column of the DynamoDB table receives all attribute-value pairs in the
     * payload that you specify. For more information, see <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-event-actions.html">Actions</a>
     * in <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline const DynamoDBAction& GetDynamoDB() const{ return m_dynamoDB; }
    inline bool DynamoDBHasBeenSet() const { return m_dynamoDBHasBeenSet; }
    inline void SetDynamoDB(const DynamoDBAction& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = value; }
    inline void SetDynamoDB(DynamoDBAction&& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = std::move(value); }
    inline Action& WithDynamoDB(const DynamoDBAction& value) { SetDynamoDB(value); return *this;}
    inline Action& WithDynamoDB(DynamoDBAction&& value) { SetDynamoDB(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Writes to the DynamoDB table that you created. The default action payload
     * contains all attribute-value pairs that have the information about the detector
     * model instance and the event that triggered the action. You can customize the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Payload.html">payload</a>.
     * A separate column of the DynamoDB table receives one attribute-value pair in the
     * payload that you specify. For more information, see <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-event-actions.html">Actions</a>
     * in <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline const DynamoDBv2Action& GetDynamoDBv2() const{ return m_dynamoDBv2; }
    inline bool DynamoDBv2HasBeenSet() const { return m_dynamoDBv2HasBeenSet; }
    inline void SetDynamoDBv2(const DynamoDBv2Action& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = value; }
    inline void SetDynamoDBv2(DynamoDBv2Action&& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = std::move(value); }
    inline Action& WithDynamoDBv2(const DynamoDBv2Action& value) { SetDynamoDBv2(value); return *this;}
    inline Action& WithDynamoDBv2(DynamoDBv2Action&& value) { SetDynamoDBv2(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends information about the detector model instance and the event that
     * triggered the action to an asset property in AWS IoT SiteWise .</p>
     */
    inline const IotSiteWiseAction& GetIotSiteWise() const{ return m_iotSiteWise; }
    inline bool IotSiteWiseHasBeenSet() const { return m_iotSiteWiseHasBeenSet; }
    inline void SetIotSiteWise(const IotSiteWiseAction& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = value; }
    inline void SetIotSiteWise(IotSiteWiseAction&& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = std::move(value); }
    inline Action& WithIotSiteWise(const IotSiteWiseAction& value) { SetIotSiteWise(value); return *this;}
    inline Action& WithIotSiteWise(IotSiteWiseAction&& value) { SetIotSiteWise(std::move(value)); return *this;}
    ///@}
  private:

    SetVariableAction m_setVariable;
    bool m_setVariableHasBeenSet = false;

    SNSTopicPublishAction m_sns;
    bool m_snsHasBeenSet = false;

    IotTopicPublishAction m_iotTopicPublish;
    bool m_iotTopicPublishHasBeenSet = false;

    SetTimerAction m_setTimer;
    bool m_setTimerHasBeenSet = false;

    ClearTimerAction m_clearTimer;
    bool m_clearTimerHasBeenSet = false;

    ResetTimerAction m_resetTimer;
    bool m_resetTimerHasBeenSet = false;

    LambdaAction m_lambda;
    bool m_lambdaHasBeenSet = false;

    IotEventsAction m_iotEvents;
    bool m_iotEventsHasBeenSet = false;

    SqsAction m_sqs;
    bool m_sqsHasBeenSet = false;

    FirehoseAction m_firehose;
    bool m_firehoseHasBeenSet = false;

    DynamoDBAction m_dynamoDB;
    bool m_dynamoDBHasBeenSet = false;

    DynamoDBv2Action m_dynamoDBv2;
    bool m_dynamoDBv2HasBeenSet = false;

    IotSiteWiseAction m_iotSiteWise;
    bool m_iotSiteWiseHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
