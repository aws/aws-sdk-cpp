/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/iot/model/CloudwatchLogsAction.h>
#include <aws/iot/model/ElasticsearchAction.h>
#include <aws/iot/model/SalesforceAction.h>
#include <aws/iot/model/IotAnalyticsAction.h>
#include <aws/iot/model/IotEventsAction.h>
#include <aws/iot/model/IotSiteWiseAction.h>
#include <aws/iot/model/StepFunctionsAction.h>
#include <aws/iot/model/TimestreamAction.h>
#include <aws/iot/model/HttpAction.h>
#include <aws/iot/model/KafkaAction.h>
#include <aws/iot/model/OpenSearchAction.h>
#include <aws/iot/model/LocationAction.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes the actions associated with a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Action">AWS API
   * Reference</a></p>
   */
  class Action
  {
  public:
    AWS_IOT_API Action();
    AWS_IOT_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline const DynamoDBAction& GetDynamoDB() const{ return m_dynamoDB; }

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline bool DynamoDBHasBeenSet() const { return m_dynamoDBHasBeenSet; }

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline void SetDynamoDB(const DynamoDBAction& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = value; }

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline void SetDynamoDB(DynamoDBAction&& value) { m_dynamoDBHasBeenSet = true; m_dynamoDB = std::move(value); }

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline Action& WithDynamoDB(const DynamoDBAction& value) { SetDynamoDB(value); return *this;}

    /**
     * <p>Write to a DynamoDB table.</p>
     */
    inline Action& WithDynamoDB(DynamoDBAction&& value) { SetDynamoDB(std::move(value)); return *this;}


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
    inline bool DynamoDBv2HasBeenSet() const { return m_dynamoDBv2HasBeenSet; }

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
    inline void SetDynamoDBv2(DynamoDBv2Action&& value) { m_dynamoDBv2HasBeenSet = true; m_dynamoDBv2 = std::move(value); }

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
    inline Action& WithDynamoDBv2(DynamoDBv2Action&& value) { SetDynamoDBv2(std::move(value)); return *this;}


    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline const LambdaAction& GetLambda() const{ return m_lambda; }

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline void SetLambda(const LambdaAction& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline void SetLambda(LambdaAction&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline Action& WithLambda(const LambdaAction& value) { SetLambda(value); return *this;}

    /**
     * <p>Invoke a Lambda function.</p>
     */
    inline Action& WithLambda(LambdaAction&& value) { SetLambda(std::move(value)); return *this;}


    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline const SnsAction& GetSns() const{ return m_sns; }

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline void SetSns(const SnsAction& value) { m_snsHasBeenSet = true; m_sns = value; }

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline void SetSns(SnsAction&& value) { m_snsHasBeenSet = true; m_sns = std::move(value); }

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline Action& WithSns(const SnsAction& value) { SetSns(value); return *this;}

    /**
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline Action& WithSns(SnsAction&& value) { SetSns(std::move(value)); return *this;}


    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline const SqsAction& GetSqs() const{ return m_sqs; }

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline bool SqsHasBeenSet() const { return m_sqsHasBeenSet; }

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline void SetSqs(const SqsAction& value) { m_sqsHasBeenSet = true; m_sqs = value; }

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline void SetSqs(SqsAction&& value) { m_sqsHasBeenSet = true; m_sqs = std::move(value); }

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline Action& WithSqs(const SqsAction& value) { SetSqs(value); return *this;}

    /**
     * <p>Publish to an Amazon SQS queue.</p>
     */
    inline Action& WithSqs(SqsAction&& value) { SetSqs(std::move(value)); return *this;}


    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline const KinesisAction& GetKinesis() const{ return m_kinesis; }

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline bool KinesisHasBeenSet() const { return m_kinesisHasBeenSet; }

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline void SetKinesis(const KinesisAction& value) { m_kinesisHasBeenSet = true; m_kinesis = value; }

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline void SetKinesis(KinesisAction&& value) { m_kinesisHasBeenSet = true; m_kinesis = std::move(value); }

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline Action& WithKinesis(const KinesisAction& value) { SetKinesis(value); return *this;}

    /**
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline Action& WithKinesis(KinesisAction&& value) { SetKinesis(std::move(value)); return *this;}


    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline const RepublishAction& GetRepublish() const{ return m_republish; }

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline bool RepublishHasBeenSet() const { return m_republishHasBeenSet; }

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline void SetRepublish(const RepublishAction& value) { m_republishHasBeenSet = true; m_republish = value; }

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline void SetRepublish(RepublishAction&& value) { m_republishHasBeenSet = true; m_republish = std::move(value); }

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline Action& WithRepublish(const RepublishAction& value) { SetRepublish(value); return *this;}

    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline Action& WithRepublish(RepublishAction&& value) { SetRepublish(std::move(value)); return *this;}


    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline const S3Action& GetS3() const{ return m_s3; }

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline void SetS3(const S3Action& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline void SetS3(S3Action&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline Action& WithS3(const S3Action& value) { SetS3(value); return *this;}

    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline Action& WithS3(S3Action&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline const FirehoseAction& GetFirehose() const{ return m_firehose; }

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline bool FirehoseHasBeenSet() const { return m_firehoseHasBeenSet; }

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline void SetFirehose(const FirehoseAction& value) { m_firehoseHasBeenSet = true; m_firehose = value; }

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline void SetFirehose(FirehoseAction&& value) { m_firehoseHasBeenSet = true; m_firehose = std::move(value); }

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline Action& WithFirehose(const FirehoseAction& value) { SetFirehose(value); return *this;}

    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
     */
    inline Action& WithFirehose(FirehoseAction&& value) { SetFirehose(std::move(value)); return *this;}


    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline const CloudwatchMetricAction& GetCloudwatchMetric() const{ return m_cloudwatchMetric; }

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline bool CloudwatchMetricHasBeenSet() const { return m_cloudwatchMetricHasBeenSet; }

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline void SetCloudwatchMetric(const CloudwatchMetricAction& value) { m_cloudwatchMetricHasBeenSet = true; m_cloudwatchMetric = value; }

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline void SetCloudwatchMetric(CloudwatchMetricAction&& value) { m_cloudwatchMetricHasBeenSet = true; m_cloudwatchMetric = std::move(value); }

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline Action& WithCloudwatchMetric(const CloudwatchMetricAction& value) { SetCloudwatchMetric(value); return *this;}

    /**
     * <p>Capture a CloudWatch metric.</p>
     */
    inline Action& WithCloudwatchMetric(CloudwatchMetricAction&& value) { SetCloudwatchMetric(std::move(value)); return *this;}


    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline const CloudwatchAlarmAction& GetCloudwatchAlarm() const{ return m_cloudwatchAlarm; }

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline bool CloudwatchAlarmHasBeenSet() const { return m_cloudwatchAlarmHasBeenSet; }

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline void SetCloudwatchAlarm(const CloudwatchAlarmAction& value) { m_cloudwatchAlarmHasBeenSet = true; m_cloudwatchAlarm = value; }

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline void SetCloudwatchAlarm(CloudwatchAlarmAction&& value) { m_cloudwatchAlarmHasBeenSet = true; m_cloudwatchAlarm = std::move(value); }

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline Action& WithCloudwatchAlarm(const CloudwatchAlarmAction& value) { SetCloudwatchAlarm(value); return *this;}

    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline Action& WithCloudwatchAlarm(CloudwatchAlarmAction&& value) { SetCloudwatchAlarm(std::move(value)); return *this;}


    /**
     * <p>Send data to CloudWatch Logs.</p>
     */
    inline const CloudwatchLogsAction& GetCloudwatchLogs() const{ return m_cloudwatchLogs; }

    /**
     * <p>Send data to CloudWatch Logs.</p>
     */
    inline bool CloudwatchLogsHasBeenSet() const { return m_cloudwatchLogsHasBeenSet; }

    /**
     * <p>Send data to CloudWatch Logs.</p>
     */
    inline void SetCloudwatchLogs(const CloudwatchLogsAction& value) { m_cloudwatchLogsHasBeenSet = true; m_cloudwatchLogs = value; }

    /**
     * <p>Send data to CloudWatch Logs.</p>
     */
    inline void SetCloudwatchLogs(CloudwatchLogsAction&& value) { m_cloudwatchLogsHasBeenSet = true; m_cloudwatchLogs = std::move(value); }

    /**
     * <p>Send data to CloudWatch Logs.</p>
     */
    inline Action& WithCloudwatchLogs(const CloudwatchLogsAction& value) { SetCloudwatchLogs(value); return *this;}

    /**
     * <p>Send data to CloudWatch Logs.</p>
     */
    inline Action& WithCloudwatchLogs(CloudwatchLogsAction&& value) { SetCloudwatchLogs(std::move(value)); return *this;}


    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>  <p>The
     * <code>Elasticsearch</code> action can only be used by existing rule actions. To
     * create a new rule action or to update an existing rule action, use the
     * <code>OpenSearch</code> rule action instead. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_OpenSearchAction.html">OpenSearchAction</a>.</p>
     * 
     */
    inline const ElasticsearchAction& GetElasticsearch() const{ return m_elasticsearch; }

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>  <p>The
     * <code>Elasticsearch</code> action can only be used by existing rule actions. To
     * create a new rule action or to update an existing rule action, use the
     * <code>OpenSearch</code> rule action instead. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_OpenSearchAction.html">OpenSearchAction</a>.</p>
     * 
     */
    inline bool ElasticsearchHasBeenSet() const { return m_elasticsearchHasBeenSet; }

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>  <p>The
     * <code>Elasticsearch</code> action can only be used by existing rule actions. To
     * create a new rule action or to update an existing rule action, use the
     * <code>OpenSearch</code> rule action instead. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_OpenSearchAction.html">OpenSearchAction</a>.</p>
     * 
     */
    inline void SetElasticsearch(const ElasticsearchAction& value) { m_elasticsearchHasBeenSet = true; m_elasticsearch = value; }

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>  <p>The
     * <code>Elasticsearch</code> action can only be used by existing rule actions. To
     * create a new rule action or to update an existing rule action, use the
     * <code>OpenSearch</code> rule action instead. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_OpenSearchAction.html">OpenSearchAction</a>.</p>
     * 
     */
    inline void SetElasticsearch(ElasticsearchAction&& value) { m_elasticsearchHasBeenSet = true; m_elasticsearch = std::move(value); }

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>  <p>The
     * <code>Elasticsearch</code> action can only be used by existing rule actions. To
     * create a new rule action or to update an existing rule action, use the
     * <code>OpenSearch</code> rule action instead. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_OpenSearchAction.html">OpenSearchAction</a>.</p>
     * 
     */
    inline Action& WithElasticsearch(const ElasticsearchAction& value) { SetElasticsearch(value); return *this;}

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>  <p>The
     * <code>Elasticsearch</code> action can only be used by existing rule actions. To
     * create a new rule action or to update an existing rule action, use the
     * <code>OpenSearch</code> rule action instead. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_OpenSearchAction.html">OpenSearchAction</a>.</p>
     * 
     */
    inline Action& WithElasticsearch(ElasticsearchAction&& value) { SetElasticsearch(std::move(value)); return *this;}


    /**
     * <p>Send a message to a Salesforce IoT Cloud Input Stream.</p>
     */
    inline const SalesforceAction& GetSalesforce() const{ return m_salesforce; }

    /**
     * <p>Send a message to a Salesforce IoT Cloud Input Stream.</p>
     */
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    /**
     * <p>Send a message to a Salesforce IoT Cloud Input Stream.</p>
     */
    inline void SetSalesforce(const SalesforceAction& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    /**
     * <p>Send a message to a Salesforce IoT Cloud Input Stream.</p>
     */
    inline void SetSalesforce(SalesforceAction&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    /**
     * <p>Send a message to a Salesforce IoT Cloud Input Stream.</p>
     */
    inline Action& WithSalesforce(const SalesforceAction& value) { SetSalesforce(value); return *this;}

    /**
     * <p>Send a message to a Salesforce IoT Cloud Input Stream.</p>
     */
    inline Action& WithSalesforce(SalesforceAction&& value) { SetSalesforce(std::move(value)); return *this;}


    /**
     * <p>Sends message data to an IoT Analytics channel.</p>
     */
    inline const IotAnalyticsAction& GetIotAnalytics() const{ return m_iotAnalytics; }

    /**
     * <p>Sends message data to an IoT Analytics channel.</p>
     */
    inline bool IotAnalyticsHasBeenSet() const { return m_iotAnalyticsHasBeenSet; }

    /**
     * <p>Sends message data to an IoT Analytics channel.</p>
     */
    inline void SetIotAnalytics(const IotAnalyticsAction& value) { m_iotAnalyticsHasBeenSet = true; m_iotAnalytics = value; }

    /**
     * <p>Sends message data to an IoT Analytics channel.</p>
     */
    inline void SetIotAnalytics(IotAnalyticsAction&& value) { m_iotAnalyticsHasBeenSet = true; m_iotAnalytics = std::move(value); }

    /**
     * <p>Sends message data to an IoT Analytics channel.</p>
     */
    inline Action& WithIotAnalytics(const IotAnalyticsAction& value) { SetIotAnalytics(value); return *this;}

    /**
     * <p>Sends message data to an IoT Analytics channel.</p>
     */
    inline Action& WithIotAnalytics(IotAnalyticsAction&& value) { SetIotAnalytics(std::move(value)); return *this;}


    /**
     * <p>Sends an input to an IoT Events detector.</p>
     */
    inline const IotEventsAction& GetIotEvents() const{ return m_iotEvents; }

    /**
     * <p>Sends an input to an IoT Events detector.</p>
     */
    inline bool IotEventsHasBeenSet() const { return m_iotEventsHasBeenSet; }

    /**
     * <p>Sends an input to an IoT Events detector.</p>
     */
    inline void SetIotEvents(const IotEventsAction& value) { m_iotEventsHasBeenSet = true; m_iotEvents = value; }

    /**
     * <p>Sends an input to an IoT Events detector.</p>
     */
    inline void SetIotEvents(IotEventsAction&& value) { m_iotEventsHasBeenSet = true; m_iotEvents = std::move(value); }

    /**
     * <p>Sends an input to an IoT Events detector.</p>
     */
    inline Action& WithIotEvents(const IotEventsAction& value) { SetIotEvents(value); return *this;}

    /**
     * <p>Sends an input to an IoT Events detector.</p>
     */
    inline Action& WithIotEvents(IotEventsAction&& value) { SetIotEvents(std::move(value)); return *this;}


    /**
     * <p>Sends data from the MQTT message that triggered the rule to IoT SiteWise
     * asset properties.</p>
     */
    inline const IotSiteWiseAction& GetIotSiteWise() const{ return m_iotSiteWise; }

    /**
     * <p>Sends data from the MQTT message that triggered the rule to IoT SiteWise
     * asset properties.</p>
     */
    inline bool IotSiteWiseHasBeenSet() const { return m_iotSiteWiseHasBeenSet; }

    /**
     * <p>Sends data from the MQTT message that triggered the rule to IoT SiteWise
     * asset properties.</p>
     */
    inline void SetIotSiteWise(const IotSiteWiseAction& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = value; }

    /**
     * <p>Sends data from the MQTT message that triggered the rule to IoT SiteWise
     * asset properties.</p>
     */
    inline void SetIotSiteWise(IotSiteWiseAction&& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = std::move(value); }

    /**
     * <p>Sends data from the MQTT message that triggered the rule to IoT SiteWise
     * asset properties.</p>
     */
    inline Action& WithIotSiteWise(const IotSiteWiseAction& value) { SetIotSiteWise(value); return *this;}

    /**
     * <p>Sends data from the MQTT message that triggered the rule to IoT SiteWise
     * asset properties.</p>
     */
    inline Action& WithIotSiteWise(IotSiteWiseAction&& value) { SetIotSiteWise(std::move(value)); return *this;}


    /**
     * <p>Starts execution of a Step Functions state machine.</p>
     */
    inline const StepFunctionsAction& GetStepFunctions() const{ return m_stepFunctions; }

    /**
     * <p>Starts execution of a Step Functions state machine.</p>
     */
    inline bool StepFunctionsHasBeenSet() const { return m_stepFunctionsHasBeenSet; }

    /**
     * <p>Starts execution of a Step Functions state machine.</p>
     */
    inline void SetStepFunctions(const StepFunctionsAction& value) { m_stepFunctionsHasBeenSet = true; m_stepFunctions = value; }

    /**
     * <p>Starts execution of a Step Functions state machine.</p>
     */
    inline void SetStepFunctions(StepFunctionsAction&& value) { m_stepFunctionsHasBeenSet = true; m_stepFunctions = std::move(value); }

    /**
     * <p>Starts execution of a Step Functions state machine.</p>
     */
    inline Action& WithStepFunctions(const StepFunctionsAction& value) { SetStepFunctions(value); return *this;}

    /**
     * <p>Starts execution of a Step Functions state machine.</p>
     */
    inline Action& WithStepFunctions(StepFunctionsAction&& value) { SetStepFunctions(std::move(value)); return *this;}


    /**
     * <p>The Timestream rule action writes attributes (measures) from an MQTT message
     * into an Amazon Timestream table. For more information, see the <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/timestream-rule-action.html">Timestream</a>
     * topic rule action documentation.</p>
     */
    inline const TimestreamAction& GetTimestream() const{ return m_timestream; }

    /**
     * <p>The Timestream rule action writes attributes (measures) from an MQTT message
     * into an Amazon Timestream table. For more information, see the <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/timestream-rule-action.html">Timestream</a>
     * topic rule action documentation.</p>
     */
    inline bool TimestreamHasBeenSet() const { return m_timestreamHasBeenSet; }

    /**
     * <p>The Timestream rule action writes attributes (measures) from an MQTT message
     * into an Amazon Timestream table. For more information, see the <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/timestream-rule-action.html">Timestream</a>
     * topic rule action documentation.</p>
     */
    inline void SetTimestream(const TimestreamAction& value) { m_timestreamHasBeenSet = true; m_timestream = value; }

    /**
     * <p>The Timestream rule action writes attributes (measures) from an MQTT message
     * into an Amazon Timestream table. For more information, see the <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/timestream-rule-action.html">Timestream</a>
     * topic rule action documentation.</p>
     */
    inline void SetTimestream(TimestreamAction&& value) { m_timestreamHasBeenSet = true; m_timestream = std::move(value); }

    /**
     * <p>The Timestream rule action writes attributes (measures) from an MQTT message
     * into an Amazon Timestream table. For more information, see the <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/timestream-rule-action.html">Timestream</a>
     * topic rule action documentation.</p>
     */
    inline Action& WithTimestream(const TimestreamAction& value) { SetTimestream(value); return *this;}

    /**
     * <p>The Timestream rule action writes attributes (measures) from an MQTT message
     * into an Amazon Timestream table. For more information, see the <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/timestream-rule-action.html">Timestream</a>
     * topic rule action documentation.</p>
     */
    inline Action& WithTimestream(TimestreamAction&& value) { SetTimestream(std::move(value)); return *this;}


    /**
     * <p>Send data to an HTTPS endpoint.</p>
     */
    inline const HttpAction& GetHttp() const{ return m_http; }

    /**
     * <p>Send data to an HTTPS endpoint.</p>
     */
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }

    /**
     * <p>Send data to an HTTPS endpoint.</p>
     */
    inline void SetHttp(const HttpAction& value) { m_httpHasBeenSet = true; m_http = value; }

    /**
     * <p>Send data to an HTTPS endpoint.</p>
     */
    inline void SetHttp(HttpAction&& value) { m_httpHasBeenSet = true; m_http = std::move(value); }

    /**
     * <p>Send data to an HTTPS endpoint.</p>
     */
    inline Action& WithHttp(const HttpAction& value) { SetHttp(value); return *this;}

    /**
     * <p>Send data to an HTTPS endpoint.</p>
     */
    inline Action& WithHttp(HttpAction&& value) { SetHttp(std::move(value)); return *this;}


    /**
     * <p>Send messages to an Amazon Managed Streaming for Apache Kafka (Amazon MSK) or
     * self-managed Apache Kafka cluster.</p>
     */
    inline const KafkaAction& GetKafka() const{ return m_kafka; }

    /**
     * <p>Send messages to an Amazon Managed Streaming for Apache Kafka (Amazon MSK) or
     * self-managed Apache Kafka cluster.</p>
     */
    inline bool KafkaHasBeenSet() const { return m_kafkaHasBeenSet; }

    /**
     * <p>Send messages to an Amazon Managed Streaming for Apache Kafka (Amazon MSK) or
     * self-managed Apache Kafka cluster.</p>
     */
    inline void SetKafka(const KafkaAction& value) { m_kafkaHasBeenSet = true; m_kafka = value; }

    /**
     * <p>Send messages to an Amazon Managed Streaming for Apache Kafka (Amazon MSK) or
     * self-managed Apache Kafka cluster.</p>
     */
    inline void SetKafka(KafkaAction&& value) { m_kafkaHasBeenSet = true; m_kafka = std::move(value); }

    /**
     * <p>Send messages to an Amazon Managed Streaming for Apache Kafka (Amazon MSK) or
     * self-managed Apache Kafka cluster.</p>
     */
    inline Action& WithKafka(const KafkaAction& value) { SetKafka(value); return *this;}

    /**
     * <p>Send messages to an Amazon Managed Streaming for Apache Kafka (Amazon MSK) or
     * self-managed Apache Kafka cluster.</p>
     */
    inline Action& WithKafka(KafkaAction&& value) { SetKafka(std::move(value)); return *this;}


    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>
     */
    inline const OpenSearchAction& GetOpenSearch() const{ return m_openSearch; }

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>
     */
    inline bool OpenSearchHasBeenSet() const { return m_openSearchHasBeenSet; }

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>
     */
    inline void SetOpenSearch(const OpenSearchAction& value) { m_openSearchHasBeenSet = true; m_openSearch = value; }

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>
     */
    inline void SetOpenSearch(OpenSearchAction&& value) { m_openSearchHasBeenSet = true; m_openSearch = std::move(value); }

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>
     */
    inline Action& WithOpenSearch(const OpenSearchAction& value) { SetOpenSearch(value); return *this;}

    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>
     */
    inline Action& WithOpenSearch(OpenSearchAction&& value) { SetOpenSearch(std::move(value)); return *this;}


    /**
     * <p>The Amazon Location Service rule action sends device location updates from an
     * MQTT message to an Amazon Location tracker resource.</p>
     */
    inline const LocationAction& GetLocation() const{ return m_location; }

    /**
     * <p>The Amazon Location Service rule action sends device location updates from an
     * MQTT message to an Amazon Location tracker resource.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The Amazon Location Service rule action sends device location updates from an
     * MQTT message to an Amazon Location tracker resource.</p>
     */
    inline void SetLocation(const LocationAction& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The Amazon Location Service rule action sends device location updates from an
     * MQTT message to an Amazon Location tracker resource.</p>
     */
    inline void SetLocation(LocationAction&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The Amazon Location Service rule action sends device location updates from an
     * MQTT message to an Amazon Location tracker resource.</p>
     */
    inline Action& WithLocation(const LocationAction& value) { SetLocation(value); return *this;}

    /**
     * <p>The Amazon Location Service rule action sends device location updates from an
     * MQTT message to an Amazon Location tracker resource.</p>
     */
    inline Action& WithLocation(LocationAction&& value) { SetLocation(std::move(value)); return *this;}

  private:

    DynamoDBAction m_dynamoDB;
    bool m_dynamoDBHasBeenSet = false;

    DynamoDBv2Action m_dynamoDBv2;
    bool m_dynamoDBv2HasBeenSet = false;

    LambdaAction m_lambda;
    bool m_lambdaHasBeenSet = false;

    SnsAction m_sns;
    bool m_snsHasBeenSet = false;

    SqsAction m_sqs;
    bool m_sqsHasBeenSet = false;

    KinesisAction m_kinesis;
    bool m_kinesisHasBeenSet = false;

    RepublishAction m_republish;
    bool m_republishHasBeenSet = false;

    S3Action m_s3;
    bool m_s3HasBeenSet = false;

    FirehoseAction m_firehose;
    bool m_firehoseHasBeenSet = false;

    CloudwatchMetricAction m_cloudwatchMetric;
    bool m_cloudwatchMetricHasBeenSet = false;

    CloudwatchAlarmAction m_cloudwatchAlarm;
    bool m_cloudwatchAlarmHasBeenSet = false;

    CloudwatchLogsAction m_cloudwatchLogs;
    bool m_cloudwatchLogsHasBeenSet = false;

    ElasticsearchAction m_elasticsearch;
    bool m_elasticsearchHasBeenSet = false;

    SalesforceAction m_salesforce;
    bool m_salesforceHasBeenSet = false;

    IotAnalyticsAction m_iotAnalytics;
    bool m_iotAnalyticsHasBeenSet = false;

    IotEventsAction m_iotEvents;
    bool m_iotEventsHasBeenSet = false;

    IotSiteWiseAction m_iotSiteWise;
    bool m_iotSiteWiseHasBeenSet = false;

    StepFunctionsAction m_stepFunctions;
    bool m_stepFunctionsHasBeenSet = false;

    TimestreamAction m_timestream;
    bool m_timestreamHasBeenSet = false;

    HttpAction m_http;
    bool m_httpHasBeenSet = false;

    KafkaAction m_kafka;
    bool m_kafkaHasBeenSet = false;

    OpenSearchAction m_openSearch;
    bool m_openSearchHasBeenSet = false;

    LocationAction m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
