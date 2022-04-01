/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AssociateAdminAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateAdminAccountRequest::AssociateAdminAccountRequest() : 
    m_adminAccountHasBeenSet(false)
{
}

Aws::String AssociateAdminAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adminAccountHasBeenSet)
  {
   payload.WithString("AdminAccount", m_adminAccount);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateAdminAccountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.AssociateAdminAccount"));
  return headers;

}




