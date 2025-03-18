/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftPropertiesPatch.h>
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

RedshiftPropertiesPatch::RedshiftPropertiesPatch(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftPropertiesPatch& RedshiftPropertiesPatch::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("host"))
  {
    m_host = jsonValue.GetString("host");
    m_hostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineageSync"))
  {
    m_lineageSync = jsonValue.GetObject("lineageSync");
    m_lineageSyncHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storage"))
  {
    m_storage = jsonValue.GetObject("storage");
    m_storageHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftPropertiesPatch::Jsonize() const
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

  if(m_hostHasBeenSet)
  {
   payload.WithString("host", m_host);

  }

  if(m_lineageSyncHasBeenSet)
  {
   payload.WithObject("lineageSync", m_lineageSync.Jsonize());

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

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
