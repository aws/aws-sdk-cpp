/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/CreateDataSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataSetRequest::CreateDataSetRequest() : 
    m_assetType(AssetType::NOT_SET),
    m_assetTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDataSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetTypeHasBeenSet)
  {
   payload.WithString("AssetType", AssetTypeMapper::GetNameForAssetType(m_assetType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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




