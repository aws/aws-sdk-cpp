/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSnsTopicDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsSnsTopicDetails::AwsSnsTopicDetails() : 
    m_kmsMasterKeyIdHasBeenSet(false),
    m_subscriptionHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_sqsSuccessFeedbackRoleArnHasBeenSet(false),
    m_sqsFailureFeedbackRoleArnHasBeenSet(false),
    m_applicationSuccessFeedbackRoleArnHasBeenSet(false),
    m_firehoseSuccessFeedbackRoleArnHasBeenSet(false),
    m_firehoseFailureFeedbackRoleArnHasBeenSet(false),
    m_httpSuccessFeedbackRoleArnHasBeenSet(false),
    m_httpFailureFeedbackRoleArnHasBeenSet(false)
{
}

AwsSnsTopicDetails::AwsSnsTopicDetails(JsonView jsonValue) : 
    m_kmsMasterKeyIdHasBeenSet(false),
    m_subscriptionHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_sqsSuccessFeedbackRoleArnHasBeenSet(false),
    m_sqsFailureFeedbackRoleArnHasBeenSet(false),
    m_applicationSuccessFeedbackRoleArnHasBeenSet(false),
    m_firehoseSuccessFeedbackRoleArnHasBeenSet(false),
    m_firehoseFailureFeedbackRoleArnHasBeenSet(false),
    m_httpSuccessFeedbackRoleArnHasBeenSet(false),
    m_httpFailureFeedbackRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSnsTopicDetails& AwsSnsTopicDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsMasterKeyId"))
  {
    m_kmsMasterKeyId = jsonValue.GetString("KmsMasterKeyId");

    m_kmsMasterKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subscription"))
  {
    Aws::Utils::Array<JsonView> subscriptionJsonList = jsonValue.GetArray("Subscription");
    for(unsigned subscriptionIndex = 0; subscriptionIndex < subscriptionJsonList.GetLength(); ++subscriptionIndex)
    {
      m_subscription.push_back(subscriptionJsonList[subscriptionIndex].AsObject());
    }
    m_subscriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqsSuccessFeedbackRoleArn"))
  {
    m_sqsSuccessFeedbackRoleArn = jsonValue.GetString("SqsSuccessFeedbackRoleArn");

    m_sqsSuccessFeedbackRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqsFailureFeedbackRoleArn"))
  {
    m_sqsFailureFeedbackRoleArn = jsonValue.GetString("SqsFailureFeedbackRoleArn");

    m_sqsFailureFeedbackRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSuccessFeedbackRoleArn"))
  {
    m_applicationSuccessFeedbackRoleArn = jsonValue.GetString("ApplicationSuccessFeedbackRoleArn");

    m_applicationSuccessFeedbackRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirehoseSuccessFeedbackRoleArn"))
  {
    m_firehoseSuccessFeedbackRoleArn = jsonValue.GetString("FirehoseSuccessFeedbackRoleArn");

    m_firehoseSuccessFeedbackRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirehoseFailureFeedbackRoleArn"))
  {
    m_firehoseFailureFeedbackRoleArn = jsonValue.GetString("FirehoseFailureFeedbackRoleArn");

    m_firehoseFailureFeedbackRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpSuccessFeedbackRoleArn"))
  {
    m_httpSuccessFeedbackRoleArn = jsonValue.GetString("HttpSuccessFeedbackRoleArn");

    m_httpSuccessFeedbackRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpFailureFeedbackRoleArn"))
  {
    m_httpFailureFeedbackRoleArn = jsonValue.GetString("HttpFailureFeedbackRoleArn");

    m_httpFailureFeedbackRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSnsTopicDetails::Jsonize() const
{
  JsonValue payload;

  if(m_kmsMasterKeyIdHasBeenSet)
  {
   payload.WithString("KmsMasterKeyId", m_kmsMasterKeyId);

  }

  if(m_subscriptionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscriptionJsonList(m_subscription.size());
   for(unsigned subscriptionIndex = 0; subscriptionIndex < subscriptionJsonList.GetLength(); ++subscriptionIndex)
   {
     subscriptionJsonList[subscriptionIndex].AsObject(m_subscription[subscriptionIndex].Jsonize());
   }
   payload.WithArray("Subscription", std::move(subscriptionJsonList));

  }

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_sqsSuccessFeedbackRoleArnHasBeenSet)
  {
   payload.WithString("SqsSuccessFeedbackRoleArn", m_sqsSuccessFeedbackRoleArn);

  }

  if(m_sqsFailureFeedbackRoleArnHasBeenSet)
  {
   payload.WithString("SqsFailureFeedbackRoleArn", m_sqsFailureFeedbackRoleArn);

  }

  if(m_applicationSuccessFeedbackRoleArnHasBeenSet)
  {
   payload.WithString("ApplicationSuccessFeedbackRoleArn", m_applicationSuccessFeedbackRoleArn);

  }

  if(m_firehoseSuccessFeedbackRoleArnHasBeenSet)
  {
   payload.WithString("FirehoseSuccessFeedbackRoleArn", m_firehoseSuccessFeedbackRoleArn);

  }

  if(m_firehoseFailureFeedbackRoleArnHasBeenSet)
  {
   payload.WithString("FirehoseFailureFeedbackRoleArn", m_firehoseFailureFeedbackRoleArn);

  }

  if(m_httpSuccessFeedbackRoleArnHasBeenSet)
  {
   payload.WithString("HttpSuccessFeedbackRoleArn", m_httpSuccessFeedbackRoleArn);

  }

  if(m_httpFailureFeedbackRoleArnHasBeenSet)
  {
   payload.WithString("HttpFailureFeedbackRoleArn", m_httpFailureFeedbackRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
