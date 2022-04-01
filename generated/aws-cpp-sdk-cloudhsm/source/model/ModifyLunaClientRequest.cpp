/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/ModifyLunaClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyLunaClientRequest::ModifyLunaClientRequest() : 
    m_clientArnHasBeenSet(false),
    m_certificateHasBeenSet(false)
{
}

Aws::String ModifyLunaClientRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientArnHasBeenSet)
  {
   payload.WithString("ClientArn", m_clientArn);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyLunaClientRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.ModifyLunaClient"));
  return headers;

}




