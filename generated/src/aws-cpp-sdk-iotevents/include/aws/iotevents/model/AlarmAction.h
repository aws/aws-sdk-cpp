/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/SNSTopicPublishAction.h>
#include <aws/iotevents/model/IotTopicPublishAction.h>
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
   * <p>Specifies one of the following actions to receive notifications when the
   * alarm state changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AlarmAction">AWS
   * API Reference</a></p>
   */
  class AlarmAction
  {
  public:
    AWS_IOTEVENTS_API AlarmAction() = default;
    AWS_IOTEVENTS_API AlarmAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SNSTopicPublishAction& GetSns() const { return m_sns; }
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }
    template<typename SnsT = SNSTopicPublishAction>
    void SetSns(SnsT&& value) { m_snsHasBeenSet = true; m_sns = std::forward<SnsT>(value); }
    template<typename SnsT = SNSTopicPublishAction>
    AlarmAction& WithSns(SnsT&& value) { SetSns(std::forward<SnsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IotTopicPublishAction& GetIotTopicPublish() const { return m_iotTopicPublish; }
    inline bool IotTopicPublishHasBeenSet() const { return m_iotTopicPublishHasBeenSet; }
    template<typename IotTopicPublishT = IotTopicPublishAction>
    void SetIotTopicPublish(IotTopicPublishT&& value) { m_iotTopicPublishHasBeenSet = true; m_iotTopicPublish = std::forward<IotTopicPublishT>(value); }
    template<typename IotTopicPublishT = IotTopicPublishAction>
    AlarmAction& WithIotTopicPublish(IotTopicPublishT&& value) { SetIotTopicPublish(std::forward<IotTopicPublishT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaAction& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = LambdaAction>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = LambdaAction>
    AlarmAction& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IotEventsAction& GetIotEvents() const { return m_iotEvents; }
    inline bool IotEventsHasBeenSet() const { return m_iotEventsHasBeenSet; }
    template<typename IotEventsT = IotEventsAction>
    void SetIotEvents(IotEventsT&& value) { m_iotEventsHasBeenSet = true; m_iotEvents = std::forward<IotEventsT>(value); }
    template<typename IotEventsT = IotEventsAction>
    AlarmAction& WithIotEvents(IotEventsT&& value) { SetIotEvents(std::forward<IotEventsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SqsAction& GetSqs() const { return m_sqs; }
    inline bool SqsHasBeenSet() const { return m_sqsHasBeenSet; }
    template<typename SqsT = SqsAction>
    void SetSqs(SqsT&& value) { m_sqsHasBeenSet = true; m_sqs = std::forward<SqsT>(value); }
    template<typename SqsT = SqsAction>
    AlarmAction& WithSqs(SqsT&& value) { SetSqs(std::forward<SqsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FirehoseAction& GetFirehose() const { return m_firehose; }
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }
    template<typename FirehoseT = FirehoseAction>
    void SetFirehose(FirehoseT&& value) { m_firehoseHasBeenSet = true; m_firehose = std::forward<FirehoseT>(value); }
    template<typename FirehoseT = FirehoseAction>
    AlarmAction& WithFirehose(FirehoseT&& value) { SetFirehose(std::forward<FirehoseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DynamoDBAction& GetDynamoDB() const { return m_dynamoDB; }
    inline bool DynamoDBHasBeenSet() const { return m_dynamoDBHasBeenSet; }
    template<typename DynamoDBT = DynamoDBAction>
    void SetDynamoDB(DynamoDBT&& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = std::forward<DynamoDBT>(value); }
    template<typename DynamoDBT = DynamoDBAction>
    AlarmAction& WithDynamoDB(DynamoDBT&& value) { SetDynamoDB(std::forward<DynamoDBT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DynamoDBv2Action& GetDynamoDBv2() const { return m_dynamoDBv2; }
    inline bool DynamoDBv2HasBeenSet() const { return m_dynamoDBv2HasBeenSet; }
    template<typename DynamoDBv2T = DynamoDBv2Action>
    void SetDynamoDBv2(DynamoDBv2T&& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = std::forward<DynamoDBv2T>(value); }
    template<typename DynamoDBv2T = DynamoDBv2Action>
    AlarmAction& WithDynamoDBv2(DynamoDBv2T&& value) { SetDynamoDBv2(std::forward<DynamoDBv2T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IotSiteWiseAction& GetIotSiteWise() const { return m_iotSiteWise; }
    inline bool IotSiteWiseHasBeenSet() const { return m_iotSiteWiseHasBeenSet; }
    template<typename IotSiteWiseT = IotSiteWiseAction>
    void SetIotSiteWise(IotSiteWiseT&& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = std::forward<IotSiteWiseT>(value); }
    template<typename IotSiteWiseT = IotSiteWiseAction>
    AlarmAction& WithIotSiteWise(IotSiteWiseT&& value) { SetIotSiteWise(std::forward<IotSiteWiseT>(value)); return *this;}
    ///@}
  private:

    SNSTopicPublishAction m_sns;
    bool m_snsHasBeenSet = false;

    IotTopicPublishAction m_iotTopicPublish;
    bool m_iotTopicPublishHasBeenSet = false;

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
