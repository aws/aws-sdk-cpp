/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CreateWorkspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkspaceRequest::CreateWorkspaceRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWorkspaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithString("s3Location", m_s3Location);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", m_role);

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




