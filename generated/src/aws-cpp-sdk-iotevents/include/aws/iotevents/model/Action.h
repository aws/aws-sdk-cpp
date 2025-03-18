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
    AWS_IOTEVENTS_API Action() = default;
    AWS_IOTEVENTS_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets a variable to a specified value.</p>
     */
    inline const SetVariableAction& GetSetVariable() const { return m_setVariable; }
    inline bool SetVariableHasBeenSet() const { return m_setVariableHasBeenSet; }
    template<typename SetVariableT = SetVariableAction>
    void SetSetVariable(SetVariableT&& value) { m_setVariableHasBeenSet = true; m_setVariable = std::forward<SetVariableT>(value); }
    template<typename SetVariableT = SetVariableAction>
    Action& WithSetVariable(SetVariableT&& value) { SetSetVariable(std::forward<SetVariableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends an Amazon SNS message.</p>
     */
    inline const SNSTopicPublishAction& GetSns() const { return m_sns; }
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }
    template<typename SnsT = SNSTopicPublishAction>
    void SetSns(SnsT&& value) { m_snsHasBeenSet = true; m_sns = std::forward<SnsT>(value); }
    template<typename SnsT = SNSTopicPublishAction>
    Action& WithSns(SnsT&& value) { SetSns(std::forward<SnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publishes an MQTT message with the given topic to the AWS IoT message
     * broker.</p>
     */
    inline const IotTopicPublishAction& GetIotTopicPublish() const { return m_iotTopicPublish; }
    inline bool IotTopicPublishHasBeenSet() const { return m_iotTopicPublishHasBeenSet; }
    template<typename IotTopicPublishT = IotTopicPublishAction>
    void SetIotTopicPublish(IotTopicPublishT&& value) { m_iotTopicPublishHasBeenSet = true; m_iotTopicPublish = std::forward<IotTopicPublishT>(value); }
    template<typename IotTopicPublishT = IotTopicPublishAction>
    Action& WithIotTopicPublish(IotTopicPublishT&& value) { SetIotTopicPublish(std::forward<IotTopicPublishT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information needed to set the timer.</p>
     */
    inline const SetTimerAction& GetSetTimer() const { return m_setTimer; }
    inline bool SetTimerHasBeenSet() const { return m_setTimerHasBeenSet; }
    template<typename SetTimerT = SetTimerAction>
    void SetSetTimer(SetTimerT&& value) { m_setTimerHasBeenSet = true; m_setTimer = std::forward<SetTimerT>(value); }
    template<typename SetTimerT = SetTimerAction>
    Action& WithSetTimer(SetTimerT&& value) { SetSetTimer(std::forward<SetTimerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information needed to clear the timer.</p>
     */
    inline const ClearTimerAction& GetClearTimer() const { return m_clearTimer; }
    inline bool ClearTimerHasBeenSet() const { return m_clearTimerHasBeenSet; }
    template<typename ClearTimerT = ClearTimerAction>
    void SetClearTimer(ClearTimerT&& value) { m_clearTimerHasBeenSet = true; m_clearTimer = std::forward<ClearTimerT>(value); }
    template<typename ClearTimerT = ClearTimerAction>
    Action& WithClearTimer(ClearTimerT&& value) { SetClearTimer(std::forward<ClearTimerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information needed to reset the timer.</p>
     */
    inline const ResetTimerAction& GetResetTimer() const { return m_resetTimer; }
    inline bool ResetTimerHasBeenSet() const { return m_resetTimerHasBeenSet; }
    template<typename ResetTimerT = ResetTimerAction>
    void SetResetTimer(ResetTimerT&& value) { m_resetTimerHasBeenSet = true; m_resetTimer = std::forward<ResetTimerT>(value); }
    template<typename ResetTimerT = ResetTimerAction>
    Action& WithResetTimer(ResetTimerT&& value) { SetResetTimer(std::forward<ResetTimerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Calls a Lambda function, passing in information about the detector model
     * instance and the event that triggered the action.</p>
     */
    inline const LambdaAction& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = LambdaAction>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = LambdaAction>
    Action& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends AWS IoT Events input, which passes information about the detector model
     * instance and the event that triggered the action.</p>
     */
    inline const IotEventsAction& GetIotEvents() const { return m_iotEvents; }
    inline bool IotEventsHasBeenSet() const { return m_iotEventsHasBeenSet; }
    template<typename IotEventsT = IotEventsAction>
    void SetIotEvents(IotEventsT&& value) { m_iotEventsHasBeenSet = true; m_iotEvents = std::forward<IotEventsT>(value); }
    template<typename IotEventsT = IotEventsAction>
    Action& WithIotEvents(IotEventsT&& value) { SetIotEvents(std::forward<IotEventsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends information about the detector model instance and the event that
     * triggered the action to an Amazon SQS queue.</p>
     */
    inline const SqsAction& GetSqs() const { return m_sqs; }
    inline bool SqsHasBeenSet() const { return m_sqsHasBeenSet; }
    template<typename SqsT = SqsAction>
    void SetSqs(SqsT&& value) { m_sqsHasBeenSet = true; m_sqs = std::forward<SqsT>(value); }
    template<typename SqsT = SqsAction>
    Action& WithSqs(SqsT&& value) { SetSqs(std::forward<SqsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends information about the detector model instance and the event that
     * triggered the action to an Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline const FirehoseAction& GetFirehose() const { return m_firehose; }
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }
    template<typename FirehoseT = FirehoseAction>
    void SetFirehose(FirehoseT&& value) { m_firehoseHasBeenSet = true; m_firehose = std::forward<FirehoseT>(value); }
    template<typename FirehoseT = FirehoseAction>
    Action& WithFirehose(FirehoseT&& value) { SetFirehose(std::forward<FirehoseT>(value)); return *this;}
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
    inline const DynamoDBAction& GetDynamoDB() const { return m_dynamoDB; }
    inline bool DynamoDBHasBeenSet() const { return m_dynamoDBHasBeenSet; }
    template<typename DynamoDBT = DynamoDBAction>
    void SetDynamoDB(DynamoDBT&& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = std::forward<DynamoDBT>(value); }
    template<typename DynamoDBT = DynamoDBAction>
    Action& WithDynamoDB(DynamoDBT&& value) { SetDynamoDB(std::forward<DynamoDBT>(value)); return *this;}
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
    inline const DynamoDBv2Action& GetDynamoDBv2() const { return m_dynamoDBv2; }
    inline bool DynamoDBv2HasBeenSet() const { return m_dynamoDBv2HasBeenSet; }
    template<typename DynamoDBv2T = DynamoDBv2Action>
    void SetDynamoDBv2(DynamoDBv2T&& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = std::forward<DynamoDBv2T>(value); }
    template<typename DynamoDBv2T = DynamoDBv2Action>
    Action& WithDynamoDBv2(DynamoDBv2T&& value) { SetDynamoDBv2(std::forward<DynamoDBv2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends information about the detector model instance and the event that
     * triggered the action to an asset property in AWS IoT SiteWise .</p>
     */
    inline const IotSiteWiseAction& GetIotSiteWise() const { return m_iotSiteWise; }
    inline bool IotSiteWiseHasBeenSet() const { return m_iotSiteWiseHasBeenSet; }
    template<typename IotSiteWiseT = IotSiteWiseAction>
    void SetIotSiteWise(IotSiteWiseT&& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = std::forward<IotSiteWiseT>(value); }
    template<typename IotSiteWiseT = IotSiteWiseAction>
    Action& WithIotSiteWise(IotSiteWiseT&& value) { SetIotSiteWise(std::forward<IotSiteWiseT>(value)); return *this;}
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
