/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/TopicPreference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

TopicPreference::TopicPreference() : 
    m_topicNameHasBeenSet(false),
    m_subscriptionStatus(SubscriptionStatus::NOT_SET),
    m_subscriptionStatusHasBeenSet(false)
{
}

TopicPreference::TopicPreference(JsonView jsonValue) : 
    m_topicNameHasBeenSet(false),
    m_subscriptionStatus(SubscriptionStatus::NOT_SET),
    m_subscriptionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

TopicPreference& TopicPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionStatus"))
  {
    m_subscriptionStatus = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("SubscriptionStatus"));

    m_subscriptionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicPreference::Jsonize() const
{
  JsonValue payload;

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_subscriptionStatusHasBeenSet)
  {
   payload.WithString("SubscriptionStatus", SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_subscriptionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
