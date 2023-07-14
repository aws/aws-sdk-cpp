/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AlarmAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

AlarmAction::AlarmAction() : 
    m_snsHasBeenSet(false),
    m_iotTopicPublishHasBeenSet(false),
    m_lambdaHasBeenSet(false),
    m_iotEventsHasBeenSet(false),
    m_sqsHasBeenSet(false),
    m_firehoseHasBeenSet(false),
    m_dynamoDBHasBeenSet(false),
    m_dynamoDBv2HasBeenSet(false),
    m_iotSiteWiseHasBeenSet(false)
{
}

AlarmAction::AlarmAction(JsonView jsonValue) : 
    m_snsHasBeenSet(false),
    m_iotTopicPublishHasBeenSet(false),
    m_lambdaHasBeenSet(false),
    m_iotEventsHasBeenSet(false),
    m_sqsHasBeenSet(false),
    m_firehoseHasBeenSet(false),
    m_dynamoDBHasBeenSet(false),
    m_dynamoDBv2HasBeenSet(false),
    m_iotSiteWiseHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmAction& AlarmAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sns"))
  {
    m_sns = jsonValue.GetObject("sns");

    m_snsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotTopicPublish"))
  {
    m_iotTopicPublish = jsonValue.GetObject("iotTopicPublish");

    m_iotTopicPublishHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetObject("lambda");

    m_lambdaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotEvents"))
  {
    m_iotEvents = jsonValue.GetObject("iotEvents");

    m_iotEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sqs"))
  {
    m_sqs = jsonValue.GetObject("sqs");

    m_sqsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firehose"))
  {
    m_firehose = jsonValue.GetObject("firehose");

    m_firehoseHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("iotSiteWise"))
  {
    m_iotSiteWise = jsonValue.GetObject("iotSiteWise");

    m_iotSiteWiseHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmAction::Jsonize() const
{
  JsonValue payload;

  if(m_snsHasBeenSet)
  {
   payload.WithObject("sns", m_sns.Jsonize());

  }

  if(m_iotTopicPublishHasBeenSet)
  {
   payload.WithObject("iotTopicPublish", m_iotTopicPublish.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("lambda", m_lambda.Jsonize());

  }

  if(m_iotEventsHasBeenSet)
  {
   payload.WithObject("iotEvents", m_iotEvents.Jsonize());

  }

  if(m_sqsHasBeenSet)
  {
   payload.WithObject("sqs", m_sqs.Jsonize());

  }

  if(m_firehoseHasBeenSet)
  {
   payload.WithObject("firehose", m_firehose.Jsonize());

  }

  if(m_dynamoDBHasBeenSet)
  {
   payload.WithObject("dynamoDB", m_dynamoDB.Jsonize());

  }

  if(m_dynamoDBv2HasBeenSet)
  {
   payload.WithObject("dynamoDBv2", m_dynamoDBv2.Jsonize());

  }

  if(m_iotSiteWiseHasBeenSet)
  {
   payload.WithObject("iotSiteWise", m_iotSiteWise.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
