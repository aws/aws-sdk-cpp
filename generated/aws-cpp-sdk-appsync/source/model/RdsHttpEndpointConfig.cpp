/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/RdsHttpEndpointConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

RdsHttpEndpointConfig::RdsHttpEndpointConfig() : 
    m_awsRegionHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_awsSecretStoreArnHasBeenSet(false)
{
}

RdsHttpEndpointConfig::RdsHttpEndpointConfig(JsonView jsonValue) : 
    m_awsRegionHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_awsSecretStoreArnHasBeenSet(false)
{
  *this = jsonValue;
}

RdsHttpEndpointConfig& RdsHttpEndpointConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dbClusterIdentifier"))
  {
    m_dbClusterIdentifier = jsonValue.GetString("dbClusterIdentifier");

    m_dbClusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schema"))
  {
    m_schema = jsonValue.GetString("schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsSecretStoreArn"))
  {
    m_awsSecretStoreArn = jsonValue.GetString("awsSecretStoreArn");

    m_awsSecretStoreArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsHttpEndpointConfig::Jsonize() const
{
  JsonValue payload;

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_dbClusterIdentifierHasBeenSet)
  {
   payload.WithString("dbClusterIdentifier", m_dbClusterIdentifier);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_awsSecretStoreArnHasBeenSet)
  {
   payload.WithString("awsSecretStoreArn", m_awsSecretStoreArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
