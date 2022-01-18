/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CreatePlaceIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePlaceIndexRequest::CreatePlaceIndexRequest() : 
    m_dataSourceHasBeenSet(false),
    m_dataSourceConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePlaceIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", m_dataSource);

  }

  if(m_dataSourceConfigurationHasBeenSet)
  {
   payload.WithObject("DataSourceConfiguration", m_dataSourceConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

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

  return payload.View().WriteReadable();
}




