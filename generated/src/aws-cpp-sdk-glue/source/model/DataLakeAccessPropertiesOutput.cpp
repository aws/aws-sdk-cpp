/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataLakeAccessPropertiesOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataLakeAccessPropertiesOutput::DataLakeAccessPropertiesOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLakeAccessPropertiesOutput& DataLakeAccessPropertiesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataLakeAccess"))
  {
    m_dataLakeAccess = jsonValue.GetBool("DataLakeAccess");
    m_dataLakeAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataTransferRole"))
  {
    m_dataTransferRole = jsonValue.GetString("DataTransferRole");
    m_dataTransferRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");
    m_kmsKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedWorkgroupName"))
  {
    m_managedWorkgroupName = jsonValue.GetString("ManagedWorkgroupName");
    m_managedWorkgroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedWorkgroupStatus"))
  {
    m_managedWorkgroupStatus = jsonValue.GetString("ManagedWorkgroupStatus");
    m_managedWorkgroupStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedshiftDatabaseName"))
  {
    m_redshiftDatabaseName = jsonValue.GetString("RedshiftDatabaseName");
    m_redshiftDatabaseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CatalogType"))
  {
    m_catalogType = jsonValue.GetString("CatalogType");
    m_catalogTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakeAccessPropertiesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_dataLakeAccessHasBeenSet)
  {
   payload.WithBool("DataLakeAccess", m_dataLakeAccess);

  }

  if(m_dataTransferRoleHasBeenSet)
  {
   payload.WithString("DataTransferRole", m_dataTransferRole);

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  if(m_managedWorkgroupNameHasBeenSet)
  {
   payload.WithString("ManagedWorkgroupName", m_managedWorkgroupName);

  }

  if(m_managedWorkgroupStatusHasBeenSet)
  {
   payload.WithString("ManagedWorkgroupStatus", m_managedWorkgroupStatus);

  }

  if(m_redshiftDatabaseNameHasBeenSet)
  {
   payload.WithString("RedshiftDatabaseName", m_redshiftDatabaseName);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_catalogTypeHasBeenSet)
  {
   payload.WithString("CatalogType", m_catalogType);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
