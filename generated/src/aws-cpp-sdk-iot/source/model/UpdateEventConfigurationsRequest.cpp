/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateEventConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventConfigurationsRequest::UpdateEventConfigurationsRequest() : 
    m_eventConfigurationsHasBeenSet(false)
{
}

Aws::String UpdateEventConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventConfigurationsHasBeenSet)
  {
   JsonValue eventConfigurationsJsonMap;
   for(auto& eventConfigurationsItem : m_eventConfigurations)
   {
     eventConfigurationsJsonMap.WithObject(EventTypeMapper::GetNameForEventType(eventConfigurationsItem.first), eventConfigurationsItem.second.Jsonize());
   }
   payload.WithObject("eventConfigurations", std::move(eventConfigurationsJsonMap));

  }

  return payload.View().WriteReadable();
}




