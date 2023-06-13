/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/CreateSourceNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSourceNetworkRequest::CreateSourceNetworkRequest() : 
    m_originAccountIDHasBeenSet(false),
    m_originRegionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIDHasBeenSet(false)
{
}

Aws::String CreateSourceNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_originAccountIDHasBeenSet)
  {
   payload.WithString("originAccountID", m_originAccountID);

  }

  if(m_originRegionHasBeenSet)
  {
   payload.WithString("originRegion", m_originRegion);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_vpcIDHasBeenSet)
  {
   payload.WithString("vpcID", m_vpcID);

  }

  return payload.View().WriteReadable();
}




