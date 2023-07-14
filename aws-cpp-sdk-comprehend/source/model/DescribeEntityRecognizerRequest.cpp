/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DescribeEntityRecognizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEntityRecognizerRequest::DescribeEntityRecognizerRequest() : 
    m_entityRecognizerArnHasBeenSet(false)
{
}

Aws::String DescribeEntityRecognizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entityRecognizerArnHasBeenSet)
  {
   payload.WithString("EntityRecognizerArn", m_entityRecognizerArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEntityRecognizerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DescribeEntityRecognizer"));
  return headers;

}




