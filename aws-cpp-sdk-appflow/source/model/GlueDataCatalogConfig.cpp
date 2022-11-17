/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/GlueDataCatalogConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

GlueDataCatalogConfig::GlueDataCatalogConfig() : 
    m_roleArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tablePrefixHasBeenSet(false)
{
}

GlueDataCatalogConfig::GlueDataCatalogConfig(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tablePrefixHasBeenSet(false)
{
  *this = jsonValue;
}

GlueDataCatalogConfig& GlueDataCatalogConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tablePrefix"))
  {
    m_tablePrefix = jsonValue.GetString("tablePrefix");

    m_tablePrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue GlueDataCatalogConfig::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_tablePrefixHasBeenSet)
  {
   payload.WithString("tablePrefix", m_tablePrefix);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
