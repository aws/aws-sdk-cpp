/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SchemaShortInfoResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

SchemaShortInfoResponse::SchemaShortInfoResponse() : 
    m_schemaIdHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseIpAddressHasBeenSet(false)
{
}

SchemaShortInfoResponse::SchemaShortInfoResponse(JsonView jsonValue) : 
    m_schemaIdHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseIpAddressHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaShortInfoResponse& SchemaShortInfoResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaId"))
  {
    m_schemaId = jsonValue.GetString("SchemaId");

    m_schemaIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseId"))
  {
    m_databaseId = jsonValue.GetString("DatabaseId");

    m_databaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseIpAddress"))
  {
    m_databaseIpAddress = jsonValue.GetString("DatabaseIpAddress");

    m_databaseIpAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaShortInfoResponse::Jsonize() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithString("SchemaId", m_schemaId);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_databaseIdHasBeenSet)
  {
   payload.WithString("DatabaseId", m_databaseId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_databaseIpAddressHasBeenSet)
  {
   payload.WithString("DatabaseIpAddress", m_databaseIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
