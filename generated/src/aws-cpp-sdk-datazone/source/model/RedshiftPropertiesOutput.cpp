/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftPropertiesOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RedshiftPropertiesOutput::RedshiftPropertiesOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftPropertiesOutput& RedshiftPropertiesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("credentials"))
  {
    m_credentials = jsonValue.GetObject("credentials");
    m_credentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");
    m_databaseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isProvisionedSecret"))
  {
    m_isProvisionedSecret = jsonValue.GetBool("isProvisionedSecret");
    m_isProvisionedSecretHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jdbcIamUrl"))
  {
    m_jdbcIamUrl = jsonValue.GetString("jdbcIamUrl");
    m_jdbcIamUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jdbcUrl"))
  {
    m_jdbcUrl = jsonValue.GetString("jdbcUrl");
    m_jdbcUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineageSync"))
  {
    m_lineageSync = jsonValue.GetObject("lineageSync");
    m_lineageSyncHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redshiftTempDir"))
  {
    m_redshiftTempDir = jsonValue.GetString("redshiftTempDir");
    m_redshiftTempDirHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storage"))
  {
    m_storage = jsonValue.GetObject("storage");
    m_storageHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftPropertiesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("credentials", m_credentials.Jsonize());

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_isProvisionedSecretHasBeenSet)
  {
   payload.WithBool("isProvisionedSecret", m_isProvisionedSecret);

  }

  if(m_jdbcIamUrlHasBeenSet)
  {
   payload.WithString("jdbcIamUrl", m_jdbcIamUrl);

  }

  if(m_jdbcUrlHasBeenSet)
  {
   payload.WithString("jdbcUrl", m_jdbcUrl);

  }

  if(m_lineageSyncHasBeenSet)
  {
   payload.WithObject("lineageSync", m_lineageSync.Jsonize());

  }

  if(m_redshiftTempDirHasBeenSet)
  {
   payload.WithString("redshiftTempDir", m_redshiftTempDir);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ConnectionStatusMapper::GetNameForConnectionStatus(m_status));
  }

  if(m_storageHasBeenSet)
  {
   payload.WithObject("storage", m_storage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
