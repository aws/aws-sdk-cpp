/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DynamodbDataSourceConfig.h>
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

DynamodbDataSourceConfig::DynamodbDataSourceConfig() : 
    m_tableNameHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_useCallerCredentials(false),
    m_useCallerCredentialsHasBeenSet(false),
    m_deltaSyncConfigHasBeenSet(false),
    m_versioned(false),
    m_versionedHasBeenSet(false)
{
}

DynamodbDataSourceConfig::DynamodbDataSourceConfig(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_useCallerCredentials(false),
    m_useCallerCredentialsHasBeenSet(false),
    m_deltaSyncConfigHasBeenSet(false),
    m_versioned(false),
    m_versionedHasBeenSet(false)
{
  *this = jsonValue;
}

DynamodbDataSourceConfig& DynamodbDataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useCallerCredentials"))
  {
    m_useCallerCredentials = jsonValue.GetBool("useCallerCredentials");

    m_useCallerCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deltaSyncConfig"))
  {
    m_deltaSyncConfig = jsonValue.GetObject("deltaSyncConfig");

    m_deltaSyncConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versioned"))
  {
    m_versioned = jsonValue.GetBool("versioned");

    m_versionedHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamodbDataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_useCallerCredentialsHasBeenSet)
  {
   payload.WithBool("useCallerCredentials", m_useCallerCredentials);

  }

  if(m_deltaSyncConfigHasBeenSet)
  {
   payload.WithObject("deltaSyncConfig", m_deltaSyncConfig.Jsonize());

  }

  if(m_versionedHasBeenSet)
  {
   payload.WithBool("versioned", m_versioned);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
