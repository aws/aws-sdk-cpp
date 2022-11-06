/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/CreateLaunchProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLaunchProfileRequest::CreateLaunchProfileRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_ec2SubnetIdsHasBeenSet(false),
    m_launchProfileProtocolVersionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_streamConfigurationHasBeenSet(false),
    m_studioComponentIdsHasBeenSet(false),
    m_studioIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLaunchProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_ec2SubnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2SubnetIdsJsonList(m_ec2SubnetIds.size());
   for(unsigned ec2SubnetIdsIndex = 0; ec2SubnetIdsIndex < ec2SubnetIdsJsonList.GetLength(); ++ec2SubnetIdsIndex)
   {
     ec2SubnetIdsJsonList[ec2SubnetIdsIndex].AsString(m_ec2SubnetIds[ec2SubnetIdsIndex]);
   }
   payload.WithArray("ec2SubnetIds", std::move(ec2SubnetIdsJsonList));

  }

  if(m_launchProfileProtocolVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> launchProfileProtocolVersionsJsonList(m_launchProfileProtocolVersions.size());
   for(unsigned launchProfileProtocolVersionsIndex = 0; launchProfileProtocolVersionsIndex < launchProfileProtocolVersionsJsonList.GetLength(); ++launchProfileProtocolVersionsIndex)
   {
     launchProfileProtocolVersionsJsonList[launchProfileProtocolVersionsIndex].AsString(m_launchProfileProtocolVersions[launchProfileProtocolVersionsIndex]);
   }
   payload.WithArray("launchProfileProtocolVersions", std::move(launchProfileProtocolVersionsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_streamConfigurationHasBeenSet)
  {
   payload.WithObject("streamConfiguration", m_streamConfiguration.Jsonize());

  }

  if(m_studioComponentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> studioComponentIdsJsonList(m_studioComponentIds.size());
   for(unsigned studioComponentIdsIndex = 0; studioComponentIdsIndex < studioComponentIdsJsonList.GetLength(); ++studioComponentIdsIndex)
   {
     studioComponentIdsJsonList[studioComponentIdsIndex].AsString(m_studioComponentIds[studioComponentIdsIndex]);
   }
   payload.WithArray("studioComponentIds", std::move(studioComponentIdsJsonList));

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLaunchProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




