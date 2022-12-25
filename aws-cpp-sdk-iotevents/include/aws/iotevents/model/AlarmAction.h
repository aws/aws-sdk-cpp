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
    AWS_IOTEVENTS_API AlarmAction();
    AWS_IOTEVENTS_API AlarmAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SNSTopicPublishAction& GetSns() const{ return m_sns; }

    
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }

    
    inline void SetSns(const SNSTopicPublishAction& value) { m_snsHasBeenSet = true; m_sns = value; }

    
    inline void SetSns(SNSTopicPublishAction&& value) { m_snsHasBeenSet = true; m_sns = std::move(value); }

    
    inline AlarmAction& WithSns(const SNSTopicPublishAction& value) { SetSns(value); return *this;}

    
    inline AlarmAction& WithSns(SNSTopicPublishAction&& value) { SetSns(std::move(value)); return *this;}


    
    inline const IotTopicPublishAction& GetIotTopicPublish() const{ return m_iotTopicPublish; }

    
    inline bool IotTopicPublishHasBeenSet() const { return m_iotTopicPublishHasBeenSet; }

    
    inline void SetIotTopicPublish(const IotTopicPublishAction& value) { m_iotTopicPublishHasBeenSet = true; m_iotTopicPublish = value; }

    
    inline void SetIotTopicPublish(IotTopicPublishAction&& value) { m_iotTopicPublishHasBeenSet = true; m_iotTopicPublish = std::move(value); }

    
    inline AlarmAction& WithIotTopicPublish(const IotTopicPublishAction& value) { SetIotTopicPublish(value); return *this;}

    
    inline AlarmAction& WithIotTopicPublish(IotTopicPublishAction&& value) { SetIotTopicPublish(std::move(value)); return *this;}


    
    inline const LambdaAction& GetLambda() const{ return m_lambda; }

    
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    
    inline void SetLambda(const LambdaAction& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    
    inline void SetLambda(LambdaAction&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    
    inline AlarmAction& WithLambda(const LambdaAction& value) { SetLambda(value); return *this;}

    
    inline AlarmAction& WithLambda(LambdaAction&& value) { SetLambda(std::move(value)); return *this;}


    
    inline const IotEventsAction& GetIotEvents() const{ return m_iotEvents; }

    
    inline bool IotEventsHasBeenSet() const { return m_iotEventsHasBeenSet; }

    
    inline void SetIotEvents(const IotEventsAction& value) { m_iotEventsHasBeenSet = true; m_iotEvents = value; }

    
    inline void SetIotEvents(IotEventsAction&& value) { m_iotEventsHasBeenSet = true; m_iotEvents = std::move(value); }

    
    inline AlarmAction& WithIotEvents(const IotEventsAction& value) { SetIotEvents(value); return *this;}

    
    inline AlarmAction& WithIotEvents(IotEventsAction&& value) { SetIotEvents(std::move(value)); return *this;}


    
    inline const SqsAction& GetSqs() const{ return m_sqs; }

    
    inline bool SqsHasBeenSet() const { return m_sqsHasBeenSet; }

    
    inline void SetSqs(const SqsAction& value) { m_sqsHasBeenSet = true; m_sqs = value; }

    
    inline void SetSqs(SqsAction&& value) { m_sqsHasBeenSet = true; m_sqs = std::move(value); }

    
    inline AlarmAction& WithSqs(const SqsAction& value) { SetSqs(value); return *this;}

    
    inline AlarmAction& WithSqs(SqsAction&& value) { SetSqs(std::move(value)); return *this;}


    
    inline const FirehoseAction& GetFirehose() const{ return m_firehose; }

    
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }

    
    inline void SetFirehose(const FirehoseAction& value) { m_firehoseHasBeenSet = true; m_firehose = value; }

    
    inline void SetFirehose(FirehoseAction&& value) { m_firehoseHasBeenSet = true; m_firehose = std::move(value); }

    
    inline AlarmAction& WithFirehose(const FirehoseAction& value) { SetFirehose(value); return *this;}

    
    inline AlarmAction& WithFirehose(FirehoseAction&& value) { SetFirehose(std::move(value)); return *this;}


    
    inline const DynamoDBAction& GetDynamoDB() const{ return m_dynamoDB; }

    
    inline bool DynamoDBHasBeenSet() const { return m_dynamoDBHasBeenSet; }

    
    inline void SetDynamoDB(const DynamoDBAction& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = value; }

    
    inline void SetDynamoDB(DynamoDBAction&& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = std::move(value); }

    
    inline AlarmAction& WithDynamoDB(const DynamoDBAction& value) { SetDynamoDB(value); return *this;}

    
    inline AlarmAction& WithDynamoDB(DynamoDBAction&& value) { SetDynamoDB(std::move(value)); return *this;}


    
    inline const DynamoDBv2Action& GetDynamoDBv2() const{ return m_dynamoDBv2; }

    
    inline bool DynamoDBv2HasBeenSet() const { return m_dynamoDBv2HasBeenSet; }

    
    inline void SetDynamoDBv2(const DynamoDBv2Action& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = value; }

    
    inline void SetDynamoDBv2(DynamoDBv2Action&& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = std::move(value); }

    
    inline AlarmAction& WithDynamoDBv2(const DynamoDBv2Action& value) { SetDynamoDBv2(value); return *this;}

    
    inline AlarmAction& WithDynamoDBv2(DynamoDBv2Action&& value) { SetDynamoDBv2(std::move(value)); return *this;}


    
    inline const IotSiteWiseAction& GetIotSiteWise() const{ return m_iotSiteWise; }

    
    inline bool IotSiteWiseHasBeenSet() const { return m_iotSiteWiseHasBeenSet; }

    
    inline void SetIotSiteWise(const IotSiteWiseAction& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = value; }

    
    inline void SetIotSiteWise(IotSiteWiseAction&& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = std::move(value); }

    
    inline AlarmAction& WithIotSiteWise(const IotSiteWiseAction& value) { SetIotSiteWise(value); return *this;}

    
    inline AlarmAction& WithIotSiteWise(IotSiteWiseAction&& value) { SetIotSiteWise(std::move(value)); return *this;}

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
