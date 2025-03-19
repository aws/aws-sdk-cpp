/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CreateTrackerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTrackerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trackerNameHasBeenSet)
  {
   payload.WithString("TrackerName", m_trackerName);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_positionFilteringHasBeenSet)
  {
   payload.WithString("PositionFiltering", PositionFilteringMapper::GetNameForPositionFiltering(m_positionFiltering));
  }

  if(m_eventBridgeEnabledHasBeenSet)
  {
   payload.WithBool("EventBridgeEnabled", m_eventBridgeEnabled);

  }

  if(m_kmsKeyEnableGeospatialQueriesHasBeenSet)
  {
   payload.WithBool("KmsKeyEnableGeospatialQueries", m_kmsKeyEnableGeospatialQueries);

  }

  return payload.View().WriteReadable();
}




