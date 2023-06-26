/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetBlueprintRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBlueprintRequest::GetBlueprintRequest() : 
    m_nameHasBeenSet(false),
    m_includeBlueprint(false),
    m_includeBlueprintHasBeenSet(false),
    m_includeParameterSpec(false),
    m_includeParameterSpecHasBeenSet(false)
{
}

Aws::String GetBlueprintRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_includeBlueprintHasBeenSet)
  {
   payload.WithBool("IncludeBlueprint", m_includeBlueprint);

  }

  if(m_includeParameterSpecHasBeenSet)
  {
   payload.WithBool("IncludeParameterSpec", m_includeParameterSpec);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBlueprintRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetBlueprint"));
  return headers;

}




