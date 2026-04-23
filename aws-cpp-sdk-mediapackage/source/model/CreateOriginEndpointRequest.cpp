/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediapackage/model/CreateOriginEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOriginEndpointRequest::CreateOriginEndpointRequest() : 
    m_channelIdHasBeenSet(false),
    m_cmafPackageHasBeenSet(false),
    m_dashPackageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hlsPackageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_mssPackageHasBeenSet(false),
    m_startoverWindowSeconds(0),
    m_startoverWindowSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_timeDelaySeconds(0),
    m_timeDelaySecondsHasBeenSet(false),
    m_whitelistHasBeenSet(false)
{
}

Aws::String CreateOriginEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_cmafPackageHasBeenSet)
  {
   payload.WithObject("cmafPackage", m_cmafPackage.Jsonize());

  }

  if(m_dashPackageHasBeenSet)
  {
   payload.WithObject("dashPackage", m_dashPackage.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_hlsPackageHasBeenSet)
  {
   payload.WithObject("hlsPackage", m_hlsPackage.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("manifestName", m_manifestName);

  }

  if(m_mssPackageHasBeenSet)
  {
   payload.WithObject("mssPackage", m_mssPackage.Jsonize());

  }

  if(m_startoverWindowSecondsHasBeenSet)
  {
   payload.WithInteger("startoverWindowSeconds", m_startoverWindowSeconds);

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

  if(m_timeDelaySecondsHasBeenSet)
  {
   payload.WithInteger("timeDelaySeconds", m_timeDelaySeconds);

  }

  if(m_whitelistHasBeenSet)
  {
   Array<JsonValue> whitelistJsonList(m_whitelist.size());
   for(unsigned whitelistIndex = 0; whitelistIndex < whitelistJsonList.GetLength(); ++whitelistIndex)
   {
     whitelistJsonList[whitelistIndex].AsString(m_whitelist[whitelistIndex]);
   }
   payload.WithArray("whitelist", std::move(whitelistJsonList));

  }

  return payload.View().WriteReadable();
}




