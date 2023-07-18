/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateBlueprintRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBlueprintRequest::UpdateBlueprintRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_blueprintLocationHasBeenSet(false)
{
}

Aws::String UpdateBlueprintRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_blueprintLocationHasBeenSet)
  {
   payload.WithString("BlueprintLocation", m_blueprintLocation);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBlueprintRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateBlueprint"));
  return headers;

}




