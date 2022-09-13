/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/UpdateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProjectRequest::UpdateProjectRequest() : 
    m_appConfigResourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_projectHasBeenSet(false)
{
}

Aws::String UpdateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appConfigResourceHasBeenSet)
  {
   payload.WithObject("appConfigResource", m_appConfigResource.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




