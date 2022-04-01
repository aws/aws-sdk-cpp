/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/UpdateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProjectRequest::UpdateProjectRequest() : 
    m_projectNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_placementTemplateHasBeenSet(false)
{
}

Aws::String UpdateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_placementTemplateHasBeenSet)
  {
   payload.WithObject("placementTemplate", m_placementTemplate.Jsonize());

  }

  return payload.View().WriteReadable();
}




