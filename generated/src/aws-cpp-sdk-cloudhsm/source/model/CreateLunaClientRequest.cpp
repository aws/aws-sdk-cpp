/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/CreateLunaClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLunaClientRequest::CreateLunaClientRequest() : 
    m_labelHasBeenSet(false),
    m_certificateHasBeenSet(false)
{
}

Aws::String CreateLunaClientRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLunaClientRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.CreateLunaClient"));
  return headers;

}




