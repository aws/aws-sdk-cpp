/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/TestMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestMappingRequest::TestMappingRequest() : 
    m_inputFileContentHasBeenSet(false),
    m_mappingTemplateHasBeenSet(false),
    m_fileFormat(FileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false)
{
}

Aws::String TestMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputFileContentHasBeenSet)
  {
   payload.WithString("inputFileContent", m_inputFileContent);

  }

  if(m_mappingTemplateHasBeenSet)
  {
   payload.WithString("mappingTemplate", m_mappingTemplate);

  }

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", FileFormatMapper::GetNameForFileFormat(m_fileFormat));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TestMappingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.TestMapping"));
  return headers;

}




