/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/UpdateWorkspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkspaceRequest::UpdateWorkspaceRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

Aws::String UpdateWorkspaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", m_role);

  }

  return payload.View().WriteReadable();
}




