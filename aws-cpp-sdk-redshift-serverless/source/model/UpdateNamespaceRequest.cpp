/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UpdateNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNamespaceRequest::UpdateNamespaceRequest() : 
    m_adminUserPasswordHasBeenSet(false),
    m_adminUsernameHasBeenSet(false),
    m_defaultIamRoleArnHasBeenSet(false),
    m_iamRolesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_logExportsHasBeenSet(false),
    m_namespaceNameHasBeenSet(false)
{
}

Aws::String UpdateNamespaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adminUserPasswordHasBeenSet)
  {
   payload.WithString("adminUserPassword", m_adminUserPassword);

  }

  if(m_adminUsernameHasBeenSet)
  {
   payload.WithString("adminUsername", m_adminUsername);

  }

  if(m_defaultIamRoleArnHasBeenSet)
  {
   payload.WithString("defaultIamRoleArn", m_defaultIamRoleArn);

  }

  if(m_iamRolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> iamRolesJsonList(m_iamRoles.size());
   for(unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex)
   {
     iamRolesJsonList[iamRolesIndex].AsString(m_iamRoles[iamRolesIndex]);
   }
   payload.WithArray("iamRoles", std::move(iamRolesJsonList));

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_logExportsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logExportsJsonList(m_logExports.size());
   for(unsigned logExportsIndex = 0; logExportsIndex < logExportsJsonList.GetLength(); ++logExportsIndex)
   {
     logExportsJsonList[logExportsIndex].AsString(LogExportMapper::GetNameForLogExport(m_logExports[logExportsIndex]));
   }
   payload.WithArray("logExports", std::move(logExportsJsonList));

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNamespaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateNamespace"));
  return headers;

}




