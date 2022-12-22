/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnomalySubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

AnomalySubscription::AnomalySubscription() : 
    m_subscriptionArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_monitorArnListHasBeenSet(false),
    m_subscribersHasBeenSet(false),
    m_frequency(AnomalySubscriptionFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_thresholdExpressionHasBeenSet(false)
{
}

AnomalySubscription::AnomalySubscription(JsonView jsonValue) : 
    m_subscriptionArnHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_monitorArnListHasBeenSet(false),
    m_subscribersHasBeenSet(false),
    m_frequency(AnomalySubscriptionFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_thresholdExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalySubscription& AnomalySubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubscriptionArn"))
  {
    m_subscriptionArn = jsonValue.GetString("SubscriptionArn");

    m_subscriptionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorArnList"))
  {
    Aws::Utils::Array<JsonView> monitorArnListJsonList = jsonValue.GetArray("MonitorArnList");
    for(unsigned monitorArnListIndex = 0; monitorArnListIndex < monitorArnListJsonList.GetLength(); ++monitorArnListIndex)
    {
      m_monitorArnList.push_back(monitorArnListJsonList[monitorArnListIndex].AsString());
    }
    m_monitorArnListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subscribers"))
  {
    Aws::Utils::Array<JsonView> subscribersJsonList = jsonValue.GetArray("Subscribers");
    for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
    {
      m_subscribers.push_back(subscribersJsonList[subscribersIndex].AsObject());
    }
    m_subscribersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Frequency"))
  {
    m_frequency = AnomalySubscriptionFrequencyMapper::GetAnomalySubscriptionFrequencyForName(jsonValue.GetString("Frequency"));

    m_frequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionName"))
  {
    m_subscriptionName = jsonValue.GetString("SubscriptionName");

    m_subscriptionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdExpression"))
  {
    m_thresholdExpression = jsonValue.GetObject("ThresholdExpression");

    m_thresholdExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalySubscription::Jsonize() const
{
  JsonValue payload;

  if(m_subscriptionArnHasBeenSet)
  {
   payload.WithString("SubscriptionArn", m_subscriptionArn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_monitorArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitorArnListJsonList(m_monitorArnList.size());
   for(unsigned monitorArnListIndex = 0; monitorArnListIndex < monitorArnListJsonList.GetLength(); ++monitorArnListIndex)
   {
     monitorArnListJsonList[monitorArnListIndex].AsString(m_monitorArnList[monitorArnListIndex]);
   }
   payload.WithArray("MonitorArnList", std::move(monitorArnListJsonList));

  }

  if(m_subscribersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribersJsonList(m_subscribers.size());
   for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
   {
     subscribersJsonList[subscribersIndex].AsObject(m_subscribers[subscribersIndex].Jsonize());
   }
   payload.WithArray("Subscribers", std::move(subscribersJsonList));

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("Frequency", AnomalySubscriptionFrequencyMapper::GetNameForAnomalySubscriptionFrequency(m_frequency));
  }

  if(m_subscriptionNameHasBeenSet)
  {
   payload.WithString("SubscriptionName", m_subscriptionName);

  }

  if(m_thresholdExpressionHasBeenSet)
  {
   payload.WithObject("ThresholdExpression", m_thresholdExpression.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
