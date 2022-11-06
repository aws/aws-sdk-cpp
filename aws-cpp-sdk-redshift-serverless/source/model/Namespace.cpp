/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/Namespace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

Namespace::Namespace() : 
    m_adminUsernameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_defaultIamRoleArnHasBeenSet(false),
    m_iamRolesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_logExportsHasBeenSet(false),
    m_namespaceArnHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_status(NamespaceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Namespace::Namespace(JsonView jsonValue) : 
    m_adminUsernameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_defaultIamRoleArnHasBeenSet(false),
    m_iamRolesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_logExportsHasBeenSet(false),
    m_namespaceArnHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_status(NamespaceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Namespace& Namespace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adminUsername"))
  {
    m_adminUsername = jsonValue.GetString("adminUsername");

    m_adminUsernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetString("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dbName"))
  {
    m_dbName = jsonValue.GetString("dbName");

    m_dbNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultIamRoleArn"))
  {
    m_defaultIamRoleArn = jsonValue.GetString("defaultIamRoleArn");

    m_defaultIamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamRoles"))
  {
    Aws::Utils::Array<JsonView> iamRolesJsonList = jsonValue.GetArray("iamRoles");
    for(unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex)
    {
      m_iamRoles.push_back(iamRolesJsonList[iamRolesIndex].AsString());
    }
    m_iamRolesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logExports"))
  {
    Aws::Utils::Array<JsonView> logExportsJsonList = jsonValue.GetArray("logExports");
    for(unsigned logExportsIndex = 0; logExportsIndex < logExportsJsonList.GetLength(); ++logExportsIndex)
    {
      m_logExports.push_back(LogExportMapper::GetLogExportForName(logExportsJsonList[logExportsIndex].AsString()));
    }
    m_logExportsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceArn"))
  {
    m_namespaceArn = jsonValue.GetString("namespaceArn");

    m_namespaceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceId"))
  {
    m_namespaceId = jsonValue.GetString("namespaceId");

    m_namespaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = NamespaceStatusMapper::GetNamespaceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Namespace::Jsonize() const
{
  JsonValue payload;

  if(m_adminUsernameHasBeenSet)
  {
   payload.WithString("adminUsername", m_adminUsername);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("creationDate", m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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

  if(m_namespaceArnHasBeenSet)
  {
   payload.WithString("namespaceArn", m_namespaceArn);

  }

  if(m_namespaceIdHasBeenSet)
  {
   payload.WithString("namespaceId", m_namespaceId);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", NamespaceStatusMapper::GetNameForNamespaceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
