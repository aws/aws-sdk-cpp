/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DatabaseResponse.h>
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

DatabaseResponse::DatabaseResponse() : 
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_numberOfSchemas(0),
    m_numberOfSchemasHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_softwareDetailsHasBeenSet(false),
    m_collectorsHasBeenSet(false)
{
}

DatabaseResponse::DatabaseResponse(JsonView jsonValue) : 
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_numberOfSchemas(0),
    m_numberOfSchemasHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_softwareDetailsHasBeenSet(false),
    m_collectorsHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseResponse& DatabaseResponse::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfSchemas"))
  {
    m_numberOfSchemas = jsonValue.GetInt64("NumberOfSchemas");

    m_numberOfSchemasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Server"))
  {
    m_server = jsonValue.GetObject("Server");

    m_serverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SoftwareDetails"))
  {
    m_softwareDetails = jsonValue.GetObject("SoftwareDetails");

    m_softwareDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Collectors"))
  {
    Aws::Utils::Array<JsonView> collectorsJsonList = jsonValue.GetArray("Collectors");
    for(unsigned collectorsIndex = 0; collectorsIndex < collectorsJsonList.GetLength(); ++collectorsIndex)
    {
      m_collectors.push_back(collectorsJsonList[collectorsIndex].AsObject());
    }
    m_collectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseResponse::Jsonize() const
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

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_numberOfSchemasHasBeenSet)
  {
   payload.WithInt64("NumberOfSchemas", m_numberOfSchemas);

  }

  if(m_serverHasBeenSet)
  {
   payload.WithObject("Server", m_server.Jsonize());

  }

  if(m_softwareDetailsHasBeenSet)
  {
   payload.WithObject("SoftwareDetails", m_softwareDetails.Jsonize());

  }

  if(m_collectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> collectorsJsonList(m_collectors.size());
   for(unsigned collectorsIndex = 0; collectorsIndex < collectorsJsonList.GetLength(); ++collectorsIndex)
   {
     collectorsJsonList[collectorsIndex].AsObject(m_collectors[collectorsIndex].Jsonize());
   }
   payload.WithArray("Collectors", std::move(collectorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
