/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/DeleteGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGrantRequest::DeleteGrantRequest() : 
    m_grantArnHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String DeleteGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grantArnHasBeenSet)
  {
   payload.WithString("GrantArn", m_grantArn);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteGrantRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.DeleteGrant"));
  return headers;

}




