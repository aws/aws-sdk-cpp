/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/DescribeProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProjectRequest::DescribeProjectRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DescribeProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeStar_20170419.DescribeProject"));
  return headers;

}




