/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/CreateHapgRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHapgRequest::CreateHapgRequest() : 
    m_labelHasBeenSet(false)
{
}

Aws::String CreateHapgRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateHapgRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.CreateHapg"));
  return headers;

}




