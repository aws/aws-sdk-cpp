/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/RedshiftSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

RedshiftSourceConfig::RedshiftSourceConfig() : 
    m_clusterIdentifierHasBeenSet(false),
    m_databaseHostHasBeenSet(false),
    m_databasePort(0),
    m_databasePortHasBeenSet(false),
    m_secretManagerArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
}

RedshiftSourceConfig::RedshiftSourceConfig(JsonView jsonValue) : 
    m_clusterIdentifierHasBeenSet(false),
    m_databaseHostHasBeenSet(false),
    m_databasePort(0),
    m_databasePortHasBeenSet(false),
    m_secretManagerArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftSourceConfig& RedshiftSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("ClusterIdentifier");

    m_clusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseHost"))
  {
    m_databaseHost = jsonValue.GetString("DatabaseHost");

    m_databaseHostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabasePort"))
  {
    m_databasePort = jsonValue.GetInteger("DatabasePort");

    m_databasePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretManagerArn"))
  {
    m_secretManagerArn = jsonValue.GetString("SecretManagerArn");

    m_secretManagerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("ClusterIdentifier", m_clusterIdentifier);

  }

  if(m_databaseHostHasBeenSet)
  {
   payload.WithString("DatabaseHost", m_databaseHost);

  }

  if(m_databasePortHasBeenSet)
  {
   payload.WithInteger("DatabasePort", m_databasePort);

  }

  if(m_secretManagerArnHasBeenSet)
  {
   payload.WithString("SecretManagerArn", m_secretManagerArn);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
