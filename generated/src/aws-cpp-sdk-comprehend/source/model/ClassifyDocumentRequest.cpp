/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ClassifyDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ClassifyDocumentRequest::ClassifyDocumentRequest() : 
    m_textHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_bytesHasBeenSet(false),
    m_documentReaderConfigHasBeenSet(false)
{
}

Aws::String ClassifyDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_bytesHasBeenSet)
  {
   payload.WithString("Bytes", HashingUtils::Base64Encode(m_bytes));
  }

  if(m_documentReaderConfigHasBeenSet)
  {
   payload.WithObject("DocumentReaderConfig", m_documentReaderConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ClassifyDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.ClassifyDocument"));
  return headers;

}




