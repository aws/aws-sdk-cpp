/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/GenerateMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputFileContentHasBeenSet)
  {
   payload.WithString("inputFileContent", m_inputFileContent);

  }

  if(m_outputFileContentHasBeenSet)
  {
   payload.WithString("outputFileContent", m_outputFileContent);

  }

  if(m_mappingTypeHasBeenSet)
  {
   payload.WithString("mappingType", MappingTypeMapper::GetNameForMappingType(m_mappingType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateMappingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.GenerateMapping"));
  return headers;

}




