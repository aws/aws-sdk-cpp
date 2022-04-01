/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/UpdatePlaceIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePlaceIndexRequest::UpdatePlaceIndexRequest() : 
    m_dataSourceConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_indexNameHasBeenSet(false)
{
}

Aws::String UpdatePlaceIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceConfigurationHasBeenSet)
  {
   payload.WithObject("DataSourceConfiguration", m_dataSourceConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}




