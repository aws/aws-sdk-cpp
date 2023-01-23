/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/ListHsmsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListHsmsRequest::ListHsmsRequest() : 
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListHsmsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListHsmsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.ListHsms"));
  return headers;

}




