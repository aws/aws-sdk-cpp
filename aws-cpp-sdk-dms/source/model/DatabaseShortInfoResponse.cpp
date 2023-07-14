/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DatabaseShortInfoResponse.h>
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

DatabaseShortInfoResponse::DatabaseShortInfoResponse() : 
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseIpAddressHasBeenSet(false),
    m_databaseEngineHasBeenSet(false)
{
}

DatabaseShortInfoResponse::DatabaseShortInfoResponse(JsonView jsonValue) : 
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseIpAddressHasBeenSet(false),
    m_databaseEngineHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseShortInfoResponse& DatabaseShortInfoResponse::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("DatabaseEngine"))
  {
    m_databaseEngine = jsonValue.GetString("DatabaseEngine");

    m_databaseEngineHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseShortInfoResponse::Jsonize() const
{
  JsonValue payload;

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

  if(m_databaseEngineHasBeenSet)
  {
   payload.WithString("DatabaseEngine", m_databaseEngine);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
