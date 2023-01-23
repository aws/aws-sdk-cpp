/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/EventSubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

EventSubscription::EventSubscription() : 
    m_customerAwsIdHasBeenSet(false),
    m_custSubscriptionIdHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subscriptionCreationTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdsListHasBeenSet(false),
    m_eventCategoriesListHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

EventSubscription::EventSubscription(JsonView jsonValue) : 
    m_customerAwsIdHasBeenSet(false),
    m_custSubscriptionIdHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subscriptionCreationTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdsListHasBeenSet(false),
    m_eventCategoriesListHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

EventSubscription& EventSubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomerAwsId"))
  {
    m_customerAwsId = jsonValue.GetString("CustomerAwsId");

    m_customerAwsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustSubscriptionId"))
  {
    m_custSubscriptionId = jsonValue.GetString("CustSubscriptionId");

    m_custSubscriptionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionCreationTime"))
  {
    m_subscriptionCreationTime = jsonValue.GetString("SubscriptionCreationTime");

    m_subscriptionCreationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceIdsList"))
  {
    Aws::Utils::Array<JsonView> sourceIdsListJsonList = jsonValue.GetArray("SourceIdsList");
    for(unsigned sourceIdsListIndex = 0; sourceIdsListIndex < sourceIdsListJsonList.GetLength(); ++sourceIdsListIndex)
    {
      m_sourceIdsList.push_back(sourceIdsListJsonList[sourceIdsListIndex].AsString());
    }
    m_sourceIdsListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventCategoriesList"))
  {
    Aws::Utils::Array<JsonView> eventCategoriesListJsonList = jsonValue.GetArray("EventCategoriesList");
    for(unsigned eventCategoriesListIndex = 0; eventCategoriesListIndex < eventCategoriesListJsonList.GetLength(); ++eventCategoriesListIndex)
    {
      m_eventCategoriesList.push_back(eventCategoriesListJsonList[eventCategoriesListIndex].AsString());
    }
    m_eventCategoriesListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_customerAwsIdHasBeenSet)
  {
   payload.WithString("CustomerAwsId", m_customerAwsId);

  }

  if(m_custSubscriptionIdHasBeenSet)
  {
   payload.WithString("CustSubscriptionId", m_custSubscriptionId);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_subscriptionCreationTimeHasBeenSet)
  {
   payload.WithString("SubscriptionCreationTime", m_subscriptionCreationTime);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_sourceIdsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceIdsListJsonList(m_sourceIdsList.size());
   for(unsigned sourceIdsListIndex = 0; sourceIdsListIndex < sourceIdsListJsonList.GetLength(); ++sourceIdsListIndex)
   {
     sourceIdsListJsonList[sourceIdsListIndex].AsString(m_sourceIdsList[sourceIdsListIndex]);
   }
   payload.WithArray("SourceIdsList", std::move(sourceIdsListJsonList));

  }

  if(m_eventCategoriesListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventCategoriesListJsonList(m_eventCategoriesList.size());
   for(unsigned eventCategoriesListIndex = 0; eventCategoriesListIndex < eventCategoriesListJsonList.GetLength(); ++eventCategoriesListIndex)
   {
     eventCategoriesListJsonList[eventCategoriesListIndex].AsString(m_eventCategoriesList[eventCategoriesListIndex]);
   }
   payload.WithArray("EventCategoriesList", std::move(eventCategoriesListJsonList));

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
