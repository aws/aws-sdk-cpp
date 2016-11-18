/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/DynamoDBAction.h>
#include <aws/iot/model/DynamoDBv2Action.h>
#include <aws/iot/model/LambdaAction.h>
#include <aws/iot/model/SnsAction.h>
#include <aws/iot/model/SqsAction.h>
#include <aws/iot/model/KinesisAction.h>
#include <aws/iot/model/RepublishAction.h>
#include <aws/iot/model/S3Action.h>
#include <aws/iot/model/FirehoseAction.h>
#include <aws/iot/model/CloudwatchMetricAction.h>
#include <aws/iot/model/CloudwatchAlarmAction.h>
#include <aws/iot/model/ElasticsearchAction.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes the actions associated with a rule.</p>
   */
  class AWS_IOT_API Action
  {
  public:
    Action();
    Action(const Aws::Utils::Json::JsonValue& jsonValue);
    Action& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline const DynamoDBAction& GetDynamoDB() const{ return m_dynamoDB; }

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline void SetDynamoDB(const DynamoDBAction& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = value; }

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline void SetDynamoDB(DynamoDBAction&& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = value; }

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline Action& WithDynamoDB(const DynamoDBAction& value) { SetDynamoDB(value); return *this;}

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline Action& WithDynamoDB(DynamoDBAction&& value) { SetDynamoDB(value); return *this;}

    /**
     * <p>Write to a DynamoDB table. This is a new version of the DynamoDB action. It
     * allows you to write each attribute in an MQTT message payload into a separate
     * DynamoDB column.</p>
     */
    inline const DynamoDBv2Action& GetDynamoDBv2() const{ return m_dynamoDBv2; }

    /**
     * <p>Write to a DynamoDB table. This is a new version of the DynamoDB action. It
     * allows you to write each attribute in an MQTT message payload into a separate
     * DynamoDB column.</p>
     */
    inline void SetDynamoDBv2(const DynamoDBv2Action& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = value; }

    /**
     * <p>Write to a DynamoDB table. This is a new version of the DynamoDB action. It
     * allows you to write each attribute in an MQTT message payload into a separate
     * DynamoDB column.</p>
     */
    inline void SetDynamoDBv2(DynamoDBv2Action&& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = value; }

    /**
     * <p>Write to a DynamoDB table. This is a new version of the DynamoDB action. It
     * allows you to write each attribute in an MQTT message payload into a separate
     * DynamoDB column.</p>
     */
    inline Action& WithDynamoDBv2(const DynamoDBv2Action& value) { SetDynamoDBv2(value); return *this;}

    /**
     * <p>Write to a DynamoDB table. This is a new version of the DynamoDB action. It
     * allows you to write each attribute in an MQTT message payload into a separate
     * DynamoDB column.</p>
     */
    inline Action& WithDynamoDBv2(DynamoDBv2Action&& value) { SetDynamoDBv2(value); return *this;}

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline const LambdaAction& GetLambda() const{ return m_lambda; }

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline void SetLambda(const LambdaAction& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline void SetLambda(LambdaAction&& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline Action& WithLambda(const LambdaAction& value) { SetLambda(value); return *this;}

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline Action& WithLambda(LambdaAction&& value) { SetLambda(value); return *this;}

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline const SnsAction& GetSns() const{ return m_sns; }

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline void SetSns(const SnsAction& value) { m_snsHasBeenSet = true; m_sns = value; }

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline void SetSns(SnsAction&& value) { m_snsHasBeenSet = true; m_sns = value; }

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline Action& WithSns(const SnsAction& value) { SetSns(value); return *this;}

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline Action& WithSns(SnsAction&& value) { SetSns(value); return *this;}

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline const SqsAction& GetSqs() const{ return m_sqs; }

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline void SetSqs(const SqsAction& value) { m_sqsHasBeenSet = true; m_sqs = value; }

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline void SetSqs(SqsAction&& value) { m_sqsHasBeenSet = true; m_sqs = value; }

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline Action& WithSqs(const SqsAction& value) { SetSqs(value); return *this;}

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline Action& WithSqs(SqsAction&& value) { SetSqs(value); return *this;}

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline const KinesisAction& GetKinesis() const{ return m_kinesis; }

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline void SetKinesis(const KinesisAction& value) { m_kinesisHasBeenSet = true; m_kinesis = value; }

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline void SetKinesis(KinesisAction&& value) { m_kinesisHasBeenSet = true; m_kinesis = value; }

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline Action& WithKinesis(const KinesisAction& value) { SetKinesis(value); return *this;}

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline Action& WithKinesis(KinesisAction&& value) { SetKinesis(value); return *this;}

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline const RepublishAction& GetRepublish() const{ return m_republish; }

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline void SetRepublish(const RepublishAction& value) { m_republishHasBeenSet = true; m_republish = value; }

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline void SetRepublish(RepublishAction&& value) { m_republishHasBeenSet = true; m_republish = value; }

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline Action& WithRepublish(const RepublishAction& value) { SetRepublish(value); return *this;}

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline Action& WithRepublish(RepublishAction&& value) { SetRepublish(value); return *this;}

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline const S3Action& GetS3() const{ return m_s3; }

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline void SetS3(const S3Action& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline void SetS3(S3Action&& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline Action& WithS3(const S3Action& value) { SetS3(value); return *this;}

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline Action& WithS3(S3Action&& value) { SetS3(value); return *this;}

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline const FirehoseAction& GetFirehose() const{ return m_firehose; }

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline void SetFirehose(const FirehoseAction& value) { m_firehoseHasBeenSet = true; m_firehose = value; }

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline void SetFirehose(FirehoseAction&& value) { m_firehoseHasBeenSet = true; m_firehose = value; }

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline Action& WithFirehose(const FirehoseAction& value) { SetFirehose(value); return *this;}

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline Action& WithFirehose(FirehoseAction&& value) { SetFirehose(value); return *this;}

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline const CloudwatchMetricAction& GetCloudwatchMetric() const{ return m_cloudwatchMetric; }

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline void SetCloudwatchMetric(const CloudwatchMetricAction& value) { m_cloudwatchMetricHasBeenSet = true; m_cloudwatchMetric = value; }

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline void SetCloudwatchMetric(CloudwatchMetricAction&& value) { m_cloudwatchMetricHasBeenSet = true; m_cloudwatchMetric = value; }

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline Action& WithCloudwatchMetric(const CloudwatchMetricAction& value) { SetCloudwatchMetric(value); return *this;}

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline Action& WithCloudwatchMetric(CloudwatchMetricAction&& value) { SetCloudwatchMetric(value); return *this;}

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline const CloudwatchAlarmAction& GetCloudwatchAlarm() const{ return m_cloudwatchAlarm; }

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline void SetCloudwatchAlarm(const CloudwatchAlarmAction& value) { m_cloudwatchAlarmHasBeenSet = true; m_cloudwatchAlarm = value; }

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline void SetCloudwatchAlarm(CloudwatchAlarmAction&& value) { m_cloudwatchAlarmHasBeenSet = true; m_cloudwatchAlarm = value; }

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline Action& WithCloudwatchAlarm(const CloudwatchAlarmAction& value) { SetCloudwatchAlarm(value); return *this;}

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline Action& WithCloudwatchAlarm(CloudwatchAlarmAction&& value) { SetCloudwatchAlarm(value); return *this;}

    /**
     * <p>Write data to an Amazon Elasticsearch Service domain.</p>
     */
    inline const ElasticsearchAction& GetElasticsearch() const{ return m_elasticsearch; }

    /**
     * <p>Write data to an Amazon Elasticsearch Service domain.</p>
     */
    inline void SetElasticsearch(const ElasticsearchAction& value) { m_elasticsearchHasBeenSet = true; m_elasticsearch = value; }

    /**
     * <p>Write data to an Amazon Elasticsearch Service domain.</p>
     */
    inline void SetElasticsearch(ElasticsearchAction&& value) { m_elasticsearchHasBeenSet = true; m_elasticsearch = value; }

    /**
     * <p>Write data to an Amazon Elasticsearch Service domain.</p>
     */
    inline Action& WithElasticsearch(const ElasticsearchAction& value) { SetElasticsearch(value); return *this;}

    /**
     * <p>Write data to an Amazon Elasticsearch Service domain.</p>
     */
    inline Action& WithElasticsearch(ElasticsearchAction&& value) { SetElasticsearch(value); return *this;}

  private:
    DynamoDBAction m_dynamoDB;
    bool m_dynamoDBHasBeenSet;
    DynamoDBv2Action m_dynamoDBv2;
    bool m_dynamoDBv2HasBeenSet;
    LambdaAction m_lambda;
    bool m_lambdaHasBeenSet;
    SnsAction m_sns;
    bool m_snsHasBeenSet;
    SqsAction m_sqs;
    bool m_sqsHasBeenSet;
    KinesisAction m_kinesis;
    bool m_kinesisHasBeenSet;
    RepublishAction m_republish;
    bool m_republishHasBeenSet;
    S3Action m_s3;
    bool m_s3HasBeenSet;
    FirehoseAction m_firehose;
    bool m_firehoseHasBeenSet;
    CloudwatchMetricAction m_cloudwatchMetric;
    bool m_cloudwatchMetricHasBeenSet;
    CloudwatchAlarmAction m_cloudwatchAlarm;
    bool m_cloudwatchAlarmHasBeenSet;
    ElasticsearchAction m_elasticsearch;
    bool m_elasticsearchHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
