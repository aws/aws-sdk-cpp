﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ConfigurationEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

ConfigurationEvent::ConfigurationEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationEvent& ConfigurationEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("ResourceGroupName");
    m_resourceGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MonitoredResourceARN"))
  {
    m_monitoredResourceARN = jsonValue.GetString("MonitoredResourceARN");
    m_monitoredResourceARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventStatus"))
  {
    m_eventStatus = ConfigurationEventStatusMapper::GetConfigurationEventStatusForName(jsonValue.GetString("EventStatus"));
    m_eventStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventResourceType"))
  {
    m_eventResourceType = ConfigurationEventResourceTypeMapper::GetConfigurationEventResourceTypeForName(jsonValue.GetString("EventResourceType"));
    m_eventResourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventTime"))
  {
    m_eventTime = jsonValue.GetDouble("EventTime");
    m_eventTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventDetail"))
  {
    m_eventDetail = jsonValue.GetString("EventDetail");
    m_eventDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventResourceName"))
  {
    m_eventResourceName = jsonValue.GetString("EventResourceName");
    m_eventResourceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationEvent::Jsonize() const
{
  JsonValue payload;

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("ResourceGroupName", m_resourceGroupName);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_monitoredResourceARNHasBeenSet)
  {
   payload.WithString("MonitoredResourceARN", m_monitoredResourceARN);

  }

  if(m_eventStatusHasBeenSet)
  {
   payload.WithString("EventStatus", ConfigurationEventStatusMapper::GetNameForConfigurationEventStatus(m_eventStatus));
  }

  if(m_eventResourceTypeHasBeenSet)
  {
   payload.WithString("EventResourceType", ConfigurationEventResourceTypeMapper::GetNameForConfigurationEventResourceType(m_eventResourceType));
  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("EventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_eventDetailHasBeenSet)
  {
   payload.WithString("EventDetail", m_eventDetail);

  }

  if(m_eventResourceNameHasBeenSet)
  {
   payload.WithString("EventResourceName", m_eventResourceName);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
