/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/UpdateTrackerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTrackerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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




