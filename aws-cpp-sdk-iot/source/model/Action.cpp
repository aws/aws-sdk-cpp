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
    m_elasticsearchHasBeenSet(false)
{
}

Action::Action(const JsonValue& jsonValue) : 
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
    m_elasticsearchHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("elasticsearch"))
  {
    m_elasticsearch = jsonValue.GetObject("elasticsearch");

    m_elasticsearchHasBeenSet = true;
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

  if(m_elasticsearchHasBeenSet)
  {
   payload.WithObject("elasticsearch", m_elasticsearch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws