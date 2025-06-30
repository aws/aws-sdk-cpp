/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/TestParsingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TestParsingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputFileHasBeenSet)
  {
   payload.WithObject("inputFile", m_inputFile.Jsonize());

  }

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", FileFormatMapper::GetNameForFileFormat(m_fileFormat));
  }

  if(m_ediTypeHasBeenSet)
  {
   payload.WithObject("ediType", m_ediType.Jsonize());

  }

  if(m_advancedOptionsHasBeenSet)
  {
   payload.WithObject("advancedOptions", m_advancedOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TestParsingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.TestParsing"));
  return headers;

}




