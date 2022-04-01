/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/DeleteHsmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHsmRequest::DeleteHsmRequest() : 
    m_hsmArnHasBeenSet(false)
{
}

Aws::String DeleteHsmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hsmArnHasBeenSet)
  {
   payload.WithString("HsmArn", m_hsmArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteHsmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.DeleteHsm"));
  return headers;

}




