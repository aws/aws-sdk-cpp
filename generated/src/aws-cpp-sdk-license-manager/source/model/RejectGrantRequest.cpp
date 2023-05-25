/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/RejectGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectGrantRequest::RejectGrantRequest() : 
    m_grantArnHasBeenSet(false)
{
}

Aws::String RejectGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grantArnHasBeenSet)
  {
   payload.WithString("GrantArn", m_grantArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RejectGrantRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.RejectGrant"));
  return headers;

}




