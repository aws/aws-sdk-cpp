/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
