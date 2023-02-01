/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CreatePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePermissionRequest::CreatePermissionRequest() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_sourceAccountHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

Aws::String CreatePermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("Principal", m_principal);

  }

  if(m_sourceAccountHasBeenSet)
  {
   payload.WithString("SourceAccount", m_sourceAccount);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(ActionTypeMapper::GetNameForActionType(m_actions[actionsIndex]));
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.CreatePermission"));
  return headers;

}




