/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DescribeDocumentClassifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDocumentClassifierRequest::DescribeDocumentClassifierRequest() : 
    m_documentClassifierArnHasBeenSet(false)
{
}

Aws::String DescribeDocumentClassifierRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentClassifierArnHasBeenSet)
  {
   payload.WithString("DocumentClassifierArn", m_documentClassifierArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDocumentClassifierRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DescribeDocumentClassifier"));
  return headers;

}




