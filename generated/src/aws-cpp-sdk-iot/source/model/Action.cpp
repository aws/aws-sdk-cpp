/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

Action::Action() : 
    m_dynamoDBHasBeenSet(false),
    m_dynamoDBv2HasBeenSet(false),
    m_lambdaHasBeenSet(false),
    m_snsHasBeenSet(false),
    m_sqsHasBeenSet(false),
    m_kinesisHasBeenSet(false),
    m_republishHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_firehoseHasBeenSet(false),
    m_cloudwatchMetricHasBeenSet(false),
    m_cloudwatchAlarmHasBeenSet(false),
    m_cloudwatchLogsHasBeenSet(false),
    m_elasticsearchHasBeenSet(false),
    m_salesforceHasBeenSet(false),
    m_iotAnalyticsHasBeenSet(false),
    m_iotEventsHasBeenSet(false),
    m_iotSiteWiseHasBeenSet(false),
    m_stepFunctionsHasBeenSet(false),
    m_timestreamHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_kafkaHasBeenSet(false),
    m_openSearchHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_dynamoDBHasBeenSet(false),
    m_dynamoDBv2HasBeenSet(false),
    m_lambdaHasBeenSet(false),
    m_snsHasBeenSet(false),
    m_sqsHasBeenSet(false),
    m_kinesisHasBeenSet(false),
    m_republishHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_firehoseHasBeenSet(false),
    m_cloudwatchMetricHasBeenSet(false),
    m_cloudwatchAlarmHasBeenSet(false),
    m_cloudwatchLogsHasBeenSet(false),
    m_elasticsearchHasBeenSet(false),
    m_salesforceHasBeenSet(false),
    m_iotAnalyticsHasBeenSet(false),
    m_iotEventsHasBeenSet(false),
    m_iotSiteWiseHasBeenSet(false),
    m_stepFunctionsHasBeenSet(false),
    m_timestreamHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_kafkaHasBeenSet(false),
    m_openSearchHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dynamoDB"))
  {
    m_dynamoDB = jsonValue.GetObject("dynamoDB");

    m_dynamoDBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamoDBv2"))
  {
    m_dynamoDBv2 = jsonValue.GetObject("dynamoDBv2");

    m_dynamoDBv2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetObject("lambda");

    m_lambdaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sns"))
  {
    m_sns = jsonValue.GetObject("sns");

    m_snsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sqs"))
  {
    m_sqs = jsonValue.GetObject("sqs");

    m_sqsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kinesis"))
  {
    m_kinesis = jsonValue.GetObject("kinesis");

    m_kinesisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("republish"))
  {
    m_republish = jsonValue.GetObject("republish");

    m_republishHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");

    m_s3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("firehose"))
  {
    m_firehose = jsonValue.GetObject("firehose");

    m_firehoseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudwatchMetric"))
  {
    m_cloudwatchMetric = jsonValue.GetObject("cloudwatchMetric");

    m_cloudwatchMetricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudwatchAlarm"))
  {
    m_cloudwatchAlarm = jsonValue.GetObject("cloudwatchAlarm");

    m_cloudwatchAlarmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudwatchLogs"))
  {
    m_cloudwatchLogs = jsonValue.GetObject("cloudwatchLogs");

    m_cloudwatchLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elasticsearch"))
  {
    m_elasticsearch = jsonValue.GetObject("elasticsearch");

    m_elasticsearchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("salesforce"))
  {
    m_salesforce = jsonValue.GetObject("salesforce");

    m_salesforceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotAnalytics"))
  {
    m_iotAnalytics = jsonValue.GetObject("iotAnalytics");

    m_iotAnalyticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotEvents"))
  {
    m_iotEvents = jsonValue.GetObject("iotEvents");

    m_iotEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotSiteWise"))
  {
    m_iotSiteWise = jsonValue.GetObject("iotSiteWise");

    m_iotSiteWiseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepFunctions"))
  {
    m_stepFunctions = jsonValue.GetObject("stepFunctions");

    m_stepFunctionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestream"))
  {
    m_timestream = jsonValue.GetObject("timestream");

    m_timestreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("http"))
  {
    m_http = jsonValue.GetObject("http");

    m_httpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafka"))
  {
    m_kafka = jsonValue.GetObject("kafka");

    m_kafkaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openSearch"))
  {
    m_openSearch = jsonValue.GetObject("openSearch");

    m_openSearchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_dynamoDBHasBeenSet)
  {
   payload.WithObject("dynamoDB", m_dynamoDB.Jsonize());

  }

  if(m_dynamoDBv2HasBeenSet)
  {
   payload.WithObject("dynamoDBv2", m_dynamoDBv2.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("lambda", m_lambda.Jsonize());

  }

  if(m_snsHasBeenSet)
  {
   payload.WithObject("sns", m_sns.Jsonize());

  }

  if(m_sqsHasBeenSet)
  {
   payload.WithObject("sqs", m_sqs.Jsonize());

  }

  if(m_kinesisHasBeenSet)
  {
   payload.WithObject("kinesis", m_kinesis.Jsonize());

  }

  if(m_republishHasBeenSet)
  {
   payload.WithObject("republish", m_republish.Jsonize());

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  if(m_firehoseHasBeenSet)
  {
   payload.WithObject("firehose", m_firehose.Jsonize());

  }

  if(m_cloudwatchMetricHasBeenSet)
  {
   payload.WithObject("cloudwatchMetric", m_cloudwatchMetric.Jsonize());

  }

  if(m_cloudwatchAlarmHasBeenSet)
  {
   payload.WithObject("cloudwatchAlarm", m_cloudwatchAlarm.Jsonize());

  }

  if(m_cloudwatchLogsHasBeenSet)
  {
   payload.WithObject("cloudwatchLogs", m_cloudwatchLogs.Jsonize());

  }

  if(m_elasticsearchHasBeenSet)
  {
   payload.WithObject("elasticsearch", m_elasticsearch.Jsonize());

  }

  if(m_salesforceHasBeenSet)
  {
   payload.WithObject("salesforce", m_salesforce.Jsonize());

  }

  if(m_iotAnalyticsHasBeenSet)
  {
   payload.WithObject("iotAnalytics", m_iotAnalytics.Jsonize());

  }

  if(m_iotEventsHasBeenSet)
  {
   payload.WithObject("iotEvents", m_iotEvents.Jsonize());

  }

  if(m_iotSiteWiseHasBeenSet)
  {
   payload.WithObject("iotSiteWise", m_iotSiteWise.Jsonize());

  }

  if(m_stepFunctionsHasBeenSet)
  {
   payload.WithObject("stepFunctions", m_stepFunctions.Jsonize());

  }

  if(m_timestreamHasBeenSet)
  {
   payload.WithObject("timestream", m_timestream.Jsonize());

  }

  if(m_httpHasBeenSet)
  {
   payload.WithObject("http", m_http.Jsonize());

  }

  if(m_kafkaHasBeenSet)
  {
   payload.WithObject("kafka", m_kafka.Jsonize());

  }

  if(m_openSearchHasBeenSet)
  {
   payload.WithObject("openSearch", m_openSearch.Jsonize());

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
