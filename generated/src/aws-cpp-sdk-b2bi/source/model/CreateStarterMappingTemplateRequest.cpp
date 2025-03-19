/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CreateStarterMappingTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateStarterMappingTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_outputSampleLocationHasBeenSet)
  {
   payload.WithObject("outputSampleLocation", m_outputSampleLocation.Jsonize());

  }

  if(m_mappingTypeHasBeenSet)
  {
   payload.WithString("mappingType", MappingTypeMapper::GetNameForMappingType(m_mappingType));
  }

  if(m_templateDetailsHasBeenSet)
  {
   payload.WithObject("templateDetails", m_templateDetails.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStarterMappingTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.CreateStarterMappingTemplate"));
  return headers;

}




