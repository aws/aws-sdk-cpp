/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateGrantVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGrantVersionRequest::CreateGrantVersionRequest() : 
    m_clientTokenHasBeenSet(false),
    m_grantArnHasBeenSet(false),
    m_grantNameHasBeenSet(false),
    m_allowedOperationsHasBeenSet(false),
    m_status(GrantStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
}

Aws::String CreateGrantVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_grantArnHasBeenSet)
  {
   payload.WithString("GrantArn", m_grantArn);

  }

  if(m_grantNameHasBeenSet)
  {
   payload.WithString("GrantName", m_grantName);

  }

  if(m_allowedOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedOperationsJsonList(m_allowedOperations.size());
   for(unsigned allowedOperationsIndex = 0; allowedOperationsIndex < allowedOperationsJsonList.GetLength(); ++allowedOperationsIndex)
   {
     allowedOperationsJsonList[allowedOperationsIndex].AsString(AllowedOperationMapper::GetNameForAllowedOperation(m_allowedOperations[allowedOperationsIndex]));
   }
   payload.WithArray("AllowedOperations", std::move(allowedOperationsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", GrantStatusMapper::GetNameForGrantStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("SourceVersion", m_sourceVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGrantVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CreateGrantVersion"));
  return headers;

}




