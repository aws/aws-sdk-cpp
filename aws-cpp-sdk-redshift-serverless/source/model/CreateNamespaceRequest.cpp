/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/CreateNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNamespaceRequest::CreateNamespaceRequest() : 
    m_adminUserPasswordHasBeenSet(false),
    m_adminUsernameHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_defaultIamRoleArnHasBeenSet(false),
    m_iamRolesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_logExportsHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateNamespaceRequest::SerializePayload() const
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

  if(m_dbNameHasBeenSet)
  {
   payload.WithString("dbName", m_dbName);

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateNamespaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.CreateNamespace"));
  return headers;

}




