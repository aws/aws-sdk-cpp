/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/OrganizationEventFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

OrganizationEventFilter::OrganizationEventFilter() : 
    m_eventTypeCodesHasBeenSet(false),
    m_awsAccountIdsHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_entityArnsHasBeenSet(false),
    m_entityValuesHasBeenSet(false),
    m_eventTypeCategoriesHasBeenSet(false),
    m_eventStatusCodesHasBeenSet(false)
{
}

OrganizationEventFilter::OrganizationEventFilter(JsonView jsonValue) : 
    m_eventTypeCodesHasBeenSet(false),
    m_awsAccountIdsHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_entityArnsHasBeenSet(false),
    m_entityValuesHasBeenSet(false),
    m_eventTypeCategoriesHasBeenSet(false),
    m_eventStatusCodesHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationEventFilter& OrganizationEventFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventTypeCodes"))
  {
    Aws::Utils::Array<JsonView> eventTypeCodesJsonList = jsonValue.GetArray("eventTypeCodes");
    for(unsigned eventTypeCodesIndex = 0; eventTypeCodesIndex < eventTypeCodesJsonList.GetLength(); ++eventTypeCodesIndex)
    {
      m_eventTypeCodes.push_back(eventTypeCodesJsonList[eventTypeCodesIndex].AsString());
    }
    m_eventTypeCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountIds"))
  {
    Aws::Utils::Array<JsonView> awsAccountIdsJsonList = jsonValue.GetArray("awsAccountIds");
    for(unsigned awsAccountIdsIndex = 0; awsAccountIdsIndex < awsAccountIdsJsonList.GetLength(); ++awsAccountIdsIndex)
    {
      m_awsAccountIds.push_back(awsAccountIdsJsonList[awsAccountIdsIndex].AsString());
    }
    m_awsAccountIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("services"))
  {
    Aws::Utils::Array<JsonView> servicesJsonList = jsonValue.GetArray("services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsString());
    }
    m_servicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetObject("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetObject("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetObject("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityArns"))
  {
    Aws::Utils::Array<JsonView> entityArnsJsonList = jsonValue.GetArray("entityArns");
    for(unsigned entityArnsIndex = 0; entityArnsIndex < entityArnsJsonList.GetLength(); ++entityArnsIndex)
    {
      m_entityArns.push_back(entityArnsJsonList[entityArnsIndex].AsString());
    }
    m_entityArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityValues"))
  {
    Aws::Utils::Array<JsonView> entityValuesJsonList = jsonValue.GetArray("entityValues");
    for(unsigned entityValuesIndex = 0; entityValuesIndex < entityValuesJsonList.GetLength(); ++entityValuesIndex)
    {
      m_entityValues.push_back(entityValuesJsonList[entityValuesIndex].AsString());
    }
    m_entityValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTypeCategories"))
  {
    Aws::Utils::Array<JsonView> eventTypeCategoriesJsonList = jsonValue.GetArray("eventTypeCategories");
    for(unsigned eventTypeCategoriesIndex = 0; eventTypeCategoriesIndex < eventTypeCategoriesJsonList.GetLength(); ++eventTypeCategoriesIndex)
    {
      m_eventTypeCategories.push_back(EventTypeCategoryMapper::GetEventTypeCategoryForName(eventTypeCategoriesJsonList[eventTypeCategoriesIndex].AsString()));
    }
    m_eventTypeCategoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventStatusCodes"))
  {
    Aws::Utils::Array<JsonView> eventStatusCodesJsonList = jsonValue.GetArray("eventStatusCodes");
    for(unsigned eventStatusCodesIndex = 0; eventStatusCodesIndex < eventStatusCodesJsonList.GetLength(); ++eventStatusCodesIndex)
    {
      m_eventStatusCodes.push_back(EventStatusCodeMapper::GetEventStatusCodeForName(eventStatusCodesJsonList[eventStatusCodesIndex].AsString()));
    }
    m_eventStatusCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationEventFilter::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTypeCodesJsonList(m_eventTypeCodes.size());
   for(unsigned eventTypeCodesIndex = 0; eventTypeCodesIndex < eventTypeCodesJsonList.GetLength(); ++eventTypeCodesIndex)
   {
     eventTypeCodesJsonList[eventTypeCodesIndex].AsString(m_eventTypeCodes[eventTypeCodesIndex]);
   }
   payload.WithArray("eventTypeCodes", std::move(eventTypeCodesJsonList));

  }

  if(m_awsAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsAccountIdsJsonList(m_awsAccountIds.size());
   for(unsigned awsAccountIdsIndex = 0; awsAccountIdsIndex < awsAccountIdsJsonList.GetLength(); ++awsAccountIdsIndex)
   {
     awsAccountIdsJsonList[awsAccountIdsIndex].AsString(m_awsAccountIds[awsAccountIdsIndex]);
   }
   payload.WithArray("awsAccountIds", std::move(awsAccountIdsJsonList));

  }

  if(m_servicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsString(m_services[servicesIndex]);
   }
   payload.WithArray("services", std::move(servicesJsonList));

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithObject("startTime", m_startTime.Jsonize());

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithObject("endTime", m_endTime.Jsonize());

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithObject("lastUpdatedTime", m_lastUpdatedTime.Jsonize());

  }

  if(m_entityArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityArnsJsonList(m_entityArns.size());
   for(unsigned entityArnsIndex = 0; entityArnsIndex < entityArnsJsonList.GetLength(); ++entityArnsIndex)
   {
     entityArnsJsonList[entityArnsIndex].AsString(m_entityArns[entityArnsIndex]);
   }
   payload.WithArray("entityArns", std::move(entityArnsJsonList));

  }

  if(m_entityValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityValuesJsonList(m_entityValues.size());
   for(unsigned entityValuesIndex = 0; entityValuesIndex < entityValuesJsonList.GetLength(); ++entityValuesIndex)
   {
     entityValuesJsonList[entityValuesIndex].AsString(m_entityValues[entityValuesIndex]);
   }
   payload.WithArray("entityValues", std::move(entityValuesJsonList));

  }

  if(m_eventTypeCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTypeCategoriesJsonList(m_eventTypeCategories.size());
   for(unsigned eventTypeCategoriesIndex = 0; eventTypeCategoriesIndex < eventTypeCategoriesJsonList.GetLength(); ++eventTypeCategoriesIndex)
   {
     eventTypeCategoriesJsonList[eventTypeCategoriesIndex].AsString(EventTypeCategoryMapper::GetNameForEventTypeCategory(m_eventTypeCategories[eventTypeCategoriesIndex]));
   }
   payload.WithArray("eventTypeCategories", std::move(eventTypeCategoriesJsonList));

  }

  if(m_eventStatusCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventStatusCodesJsonList(m_eventStatusCodes.size());
   for(unsigned eventStatusCodesIndex = 0; eventStatusCodesIndex < eventStatusCodesJsonList.GetLength(); ++eventStatusCodesIndex)
   {
     eventStatusCodesJsonList[eventStatusCodesIndex].AsString(EventStatusCodeMapper::GetNameForEventStatusCode(m_eventStatusCodes[eventStatusCodesIndex]));
   }
   payload.WithArray("eventStatusCodes", std::move(eventStatusCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
