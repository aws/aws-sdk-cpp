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
    AWS_IOT_API Action() = default;
    AWS_IOT_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Write to a DynamoDB table.</p>
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
     * <p>Write to a DynamoDB table. This is a new version of the DynamoDB action. It
     * allows you to write each attribute in an MQTT message payload into a separate
     * DynamoDB column.</p>
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
     * <p>Invoke a Lambda function.</p>
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
     * <p>Publish to an Amazon SNS topic.</p>
     */
    inline const SnsAction& GetSns() const { return m_sns; }
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }
    template<typename SnsT = SnsAction>
    void SetSns(SnsT&& value) { m_snsHasBeenSet = true; m_sns = std::forward<SnsT>(value); }
    template<typename SnsT = SnsAction>
    Action& WithSns(SnsT&& value) { SetSns(std::forward<SnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publish to an Amazon SQS queue.</p>
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
     * <p>Write data to an Amazon Kinesis stream.</p>
     */
    inline const KinesisAction& GetKinesis() const { return m_kinesis; }
    inline bool KinesisHasBeenSet() const { return m_kinesisHasBeenSet; }
    template<typename KinesisT = KinesisAction>
    void SetKinesis(KinesisT&& value) { m_kinesisHasBeenSet = true; m_kinesis = std::forward<KinesisT>(value); }
    template<typename KinesisT = KinesisAction>
    Action& WithKinesis(KinesisT&& value) { SetKinesis(std::forward<KinesisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Publish to another MQTT topic.</p>
     */
    inline const RepublishAction& GetRepublish() const { return m_republish; }
    inline bool RepublishHasBeenSet() const { return m_republishHasBeenSet; }
    template<typename RepublishT = RepublishAction>
    void SetRepublish(RepublishT&& value) { m_republishHasBeenSet = true; m_republish = std::forward<RepublishT>(value); }
    template<typename RepublishT = RepublishAction>
    Action& WithRepublish(RepublishT&& value) { SetRepublish(std::forward<RepublishT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Write to an Amazon S3 bucket.</p>
     */
    inline const S3Action& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3Action>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3Action>
    Action& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Write to an Amazon Kinesis Firehose stream.</p>
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
     * <p>Capture a CloudWatch metric.</p>
     */
    inline const CloudwatchMetricAction& GetCloudwatchMetric() const { return m_cloudwatchMetric; }
    inline bool CloudwatchMetricHasBeenSet() const { return m_cloudwatchMetricHasBeenSet; }
    template<typename CloudwatchMetricT = CloudwatchMetricAction>
    void SetCloudwatchMetric(CloudwatchMetricT&& value) { m_cloudwatchMetricHasBeenSet = true; m_cloudwatchMetric = std::forward<CloudwatchMetricT>(value); }
    template<typename CloudwatchMetricT = CloudwatchMetricAction>
    Action& WithCloudwatchMetric(CloudwatchMetricT&& value) { SetCloudwatchMetric(std::forward<CloudwatchMetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Change the state of a CloudWatch alarm.</p>
     */
    inline const CloudwatchAlarmAction& GetCloudwatchAlarm() const { return m_cloudwatchAlarm; }
    inline bool CloudwatchAlarmHasBeenSet() const { return m_cloudwatchAlarmHasBeenSet; }
    template<typename CloudwatchAlarmT = CloudwatchAlarmAction>
    void SetCloudwatchAlarm(CloudwatchAlarmT&& value) { m_cloudwatchAlarmHasBeenSet = true; m_cloudwatchAlarm = std::forward<CloudwatchAlarmT>(value); }
    template<typename CloudwatchAlarmT = CloudwatchAlarmAction>
    Action& WithCloudwatchAlarm(CloudwatchAlarmT&& value) { SetCloudwatchAlarm(std::forward<CloudwatchAlarmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Send data to CloudWatch Logs.</p>
     */
    inline const CloudwatchLogsAction& GetCloudwatchLogs() const { return m_cloudwatchLogs; }
    inline bool CloudwatchLogsHasBeenSet() const { return m_cloudwatchLogsHasBeenSet; }
    template<typename CloudwatchLogsT = CloudwatchLogsAction>
    void SetCloudwatchLogs(CloudwatchLogsT&& value) { m_cloudwatchLogsHasBeenSet = true; m_cloudwatchLogs = std::forward<CloudwatchLogsT>(value); }
    template<typename CloudwatchLogsT = CloudwatchLogsAction>
    Action& WithCloudwatchLogs(CloudwatchLogsT&& value) { SetCloudwatchLogs(std::forward<CloudwatchLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>  <p>The
     * <code>Elasticsearch</code> action can only be used by existing rule actions. To
     * create a new rule action or to update an existing rule action, use the
     * <code>OpenSearch</code> rule action instead. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/apireference/API_OpenSearchAction.html">OpenSearchAction</a>.</p>
     * 
     */
    inline const ElasticsearchAction& GetElasticsearch() const { return m_elasticsearch; }
    inline bool ElasticsearchHasBeenSet() const { return m_elasticsearchHasBeenSet; }
    template<typename ElasticsearchT = ElasticsearchAction>
    void SetElasticsearch(ElasticsearchT&& value) { m_elasticsearchHasBeenSet = true; m_elasticsearch = std::forward<ElasticsearchT>(value); }
    template<typename ElasticsearchT = ElasticsearchAction>
    Action& WithElasticsearch(ElasticsearchT&& value) { SetElasticsearch(std::forward<ElasticsearchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Send a message to a Salesforce IoT Cloud Input Stream.</p>
     */
    inline const SalesforceAction& GetSalesforce() const { return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    template<typename SalesforceT = SalesforceAction>
    void SetSalesforce(SalesforceT&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::forward<SalesforceT>(value); }
    template<typename SalesforceT = SalesforceAction>
    Action& WithSalesforce(SalesforceT&& value) { SetSalesforce(std::forward<SalesforceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends message data to an IoT Analytics channel.</p>
     */
    inline const IotAnalyticsAction& GetIotAnalytics() const { return m_iotAnalytics; }
    inline bool IotAnalyticsHasBeenSet() const { return m_iotAnalyticsHasBeenSet; }
    template<typename IotAnalyticsT = IotAnalyticsAction>
    void SetIotAnalytics(IotAnalyticsT&& value) { m_iotAnalyticsHasBeenSet = true; m_iotAnalytics = std::forward<IotAnalyticsT>(value); }
    template<typename IotAnalyticsT = IotAnalyticsAction>
    Action& WithIotAnalytics(IotAnalyticsT&& value) { SetIotAnalytics(std::forward<IotAnalyticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sends an input to an IoT Events detector.</p>
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
     * <p>Sends data from the MQTT message that triggered the rule to IoT SiteWise
     * asset properties.</p>
     */
    inline const IotSiteWiseAction& GetIotSiteWise() const { return m_iotSiteWise; }
    inline bool IotSiteWiseHasBeenSet() const { return m_iotSiteWiseHasBeenSet; }
    template<typename IotSiteWiseT = IotSiteWiseAction>
    void SetIotSiteWise(IotSiteWiseT&& value) { m_iotSiteWiseHasBeenSet = true; m_iotSiteWise = std::forward<IotSiteWiseT>(value); }
    template<typename IotSiteWiseT = IotSiteWiseAction>
    Action& WithIotSiteWise(IotSiteWiseT&& value) { SetIotSiteWise(std::forward<IotSiteWiseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Starts execution of a Step Functions state machine.</p>
     */
    inline const StepFunctionsAction& GetStepFunctions() const { return m_stepFunctions; }
    inline bool StepFunctionsHasBeenSet() const { return m_stepFunctionsHasBeenSet; }
    template<typename StepFunctionsT = StepFunctionsAction>
    void SetStepFunctions(StepFunctionsT&& value) { m_stepFunctionsHasBeenSet = true; m_stepFunctions = std::forward<StepFunctionsT>(value); }
    template<typename StepFunctionsT = StepFunctionsAction>
    Action& WithStepFunctions(StepFunctionsT&& value) { SetStepFunctions(std::forward<StepFunctionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream rule action writes attributes (measures) from an MQTT message
     * into an Amazon Timestream table. For more information, see the <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/timestream-rule-action.html">Timestream</a>
     * topic rule action documentation.</p>
     */
    inline const TimestreamAction& GetTimestream() const { return m_timestream; }
    inline bool TimestreamHasBeenSet() const { return m_timestreamHasBeenSet; }
    template<typename TimestreamT = TimestreamAction>
    void SetTimestream(TimestreamT&& value) { m_timestreamHasBeenSet = true; m_timestream = std::forward<TimestreamT>(value); }
    template<typename TimestreamT = TimestreamAction>
    Action& WithTimestream(TimestreamT&& value) { SetTimestream(std::forward<TimestreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Send data to an HTTPS endpoint.</p>
     */
    inline const HttpAction& GetHttp() const { return m_http; }
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }
    template<typename HttpT = HttpAction>
    void SetHttp(HttpT&& value) { m_httpHasBeenSet = true; m_http = std::forward<HttpT>(value); }
    template<typename HttpT = HttpAction>
    Action& WithHttp(HttpT&& value) { SetHttp(std::forward<HttpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Send messages to an Amazon Managed Streaming for Apache Kafka (Amazon MSK) or
     * self-managed Apache Kafka cluster.</p>
     */
    inline const KafkaAction& GetKafka() const { return m_kafka; }
    inline bool KafkaHasBeenSet() const { return m_kafkaHasBeenSet; }
    template<typename KafkaT = KafkaAction>
    void SetKafka(KafkaT&& value) { m_kafkaHasBeenSet = true; m_kafka = std::forward<KafkaT>(value); }
    template<typename KafkaT = KafkaAction>
    Action& WithKafka(KafkaT&& value) { SetKafka(std::forward<KafkaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Write data to an Amazon OpenSearch Service domain.</p>
     */
    inline const OpenSearchAction& GetOpenSearch() const { return m_openSearch; }
    inline bool OpenSearchHasBeenSet() const { return m_openSearchHasBeenSet; }
    template<typename OpenSearchT = OpenSearchAction>
    void SetOpenSearch(OpenSearchT&& value) { m_openSearchHasBeenSet = true; m_openSearch = std::forward<OpenSearchT>(value); }
    template<typename OpenSearchT = OpenSearchAction>
    Action& WithOpenSearch(OpenSearchT&& value) { SetOpenSearch(std::forward<OpenSearchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Location Service rule action sends device location updates from an
     * MQTT message to an Amazon Location tracker resource.</p>
     */
    inline const LocationAction& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = LocationAction>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = LocationAction>
    Action& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
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
