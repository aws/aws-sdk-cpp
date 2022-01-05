/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/EventDataStore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

EventDataStore::EventDataStore() : 
    m_eventDataStoreArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_terminationProtectionEnabled(false),
    m_terminationProtectionEnabledHasBeenSet(false),
    m_status(EventDataStoreStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_advancedEventSelectorsHasBeenSet(false),
    m_multiRegionEnabled(false),
    m_multiRegionEnabledHasBeenSet(false),
    m_organizationEnabled(false),
    m_organizationEnabledHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

EventDataStore::EventDataStore(JsonView jsonValue) : 
    m_eventDataStoreArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_terminationProtectionEnabled(false),
    m_terminationProtectionEnabledHasBeenSet(false),
    m_status(EventDataStoreStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_advancedEventSelectorsHasBeenSet(false),
    m_multiRegionEnabled(false),
    m_multiRegionEnabledHasBeenSet(false),
    m_organizationEnabled(false),
    m_organizationEnabledHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

EventDataStore& EventDataStore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventDataStoreArn"))
  {
    m_eventDataStoreArn = jsonValue.GetString("EventDataStoreArn");

    m_eventDataStoreArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminationProtectionEnabled"))
  {
    m_terminationProtectionEnabled = jsonValue.GetBool("TerminationProtectionEnabled");

    m_terminationProtectionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EventDataStoreStatusMapper::GetEventDataStoreStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedEventSelectors"))
  {
    Array<JsonView> advancedEventSelectorsJsonList = jsonValue.GetArray("AdvancedEventSelectors");
    for(unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength(); ++advancedEventSelectorsIndex)
    {
      m_advancedEventSelectors.push_back(advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject());
    }
    m_advancedEventSelectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiRegionEnabled"))
  {
    m_multiRegionEnabled = jsonValue.GetBool("MultiRegionEnabled");

    m_multiRegionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationEnabled"))
  {
    m_organizationEnabled = jsonValue.GetBool("OrganizationEnabled");

    m_organizationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetInteger("RetentionPeriod");

    m_retentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetDouble("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDataStore::Jsonize() const
{
  JsonValue payload;

  if(m_eventDataStoreArnHasBeenSet)
  {
   payload.WithString("EventDataStoreArn", m_eventDataStoreArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_terminationProtectionEnabledHasBeenSet)
  {
   payload.WithBool("TerminationProtectionEnabled", m_terminationProtectionEnabled);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EventDataStoreStatusMapper::GetNameForEventDataStoreStatus(m_status));
  }

  if(m_advancedEventSelectorsHasBeenSet)
  {
   Array<JsonValue> advancedEventSelectorsJsonList(m_advancedEventSelectors.size());
   for(unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength(); ++advancedEventSelectorsIndex)
   {
     advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject(m_advancedEventSelectors[advancedEventSelectorsIndex].Jsonize());
   }
   payload.WithArray("AdvancedEventSelectors", std::move(advancedEventSelectorsJsonList));

  }

  if(m_multiRegionEnabledHasBeenSet)
  {
   payload.WithBool("MultiRegionEnabled", m_multiRegionEnabled);

  }

  if(m_organizationEnabledHasBeenSet)
  {
   payload.WithBool("OrganizationEnabled", m_organizationEnabled);

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithInteger("RetentionPeriod", m_retentionPeriod);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithDouble("UpdatedTimestamp", m_updatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
