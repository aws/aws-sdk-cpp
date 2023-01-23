/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/CreateEnvironmentEC2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Cloud9::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentEC2Request::CreateEnvironmentEC2Request() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_automaticStopTimeMinutes(0),
    m_automaticStopTimeMinutesHasBeenSet(false),
    m_ownerArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateEnvironmentEC2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("imageId", m_imageId);

  }

  if(m_automaticStopTimeMinutesHasBeenSet)
  {
   payload.WithInteger("automaticStopTimeMinutes", m_automaticStopTimeMinutes);

  }

  if(m_ownerArnHasBeenSet)
  {
   payload.WithString("ownerArn", m_ownerArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("connectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("dryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEnvironmentEC2Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCloud9WorkspaceManagementService.CreateEnvironmentEC2"));
  return headers;

}




