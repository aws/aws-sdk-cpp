/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AssociateWebACLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateWebACLRequest::AssociateWebACLRequest() : 
    m_webACLArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Aws::String AssociateWebACLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webACLArnHasBeenSet)
  {
   payload.WithString("WebACLArn", m_webACLArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateWebACLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.AssociateWebACL"));
  return headers;

}




