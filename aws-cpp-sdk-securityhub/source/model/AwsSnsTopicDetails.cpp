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
    m_ownerHasBeenSet(false)
{
}

AwsSnsTopicDetails::AwsSnsTopicDetails(JsonView jsonValue) : 
    m_kmsMasterKeyIdHasBeenSet(false),
    m_subscriptionHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_ownerHasBeenSet(false)
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
    Array<JsonView> subscriptionJsonList = jsonValue.GetArray("Subscription");
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
   Array<JsonValue> subscriptionJsonList(m_subscription.size());
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

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
