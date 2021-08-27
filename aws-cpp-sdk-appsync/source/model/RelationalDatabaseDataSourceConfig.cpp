/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/RelationalDatabaseDataSourceConfig.h>
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

RelationalDatabaseDataSourceConfig::RelationalDatabaseDataSourceConfig() : 
    m_relationalDatabaseSourceType(RelationalDatabaseSourceType::NOT_SET),
    m_relationalDatabaseSourceTypeHasBeenSet(false),
    m_rdsHttpEndpointConfigHasBeenSet(false)
{
}

RelationalDatabaseDataSourceConfig::RelationalDatabaseDataSourceConfig(JsonView jsonValue) : 
    m_relationalDatabaseSourceType(RelationalDatabaseSourceType::NOT_SET),
    m_relationalDatabaseSourceTypeHasBeenSet(false),
    m_rdsHttpEndpointConfigHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabaseDataSourceConfig& RelationalDatabaseDataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relationalDatabaseSourceType"))
  {
    m_relationalDatabaseSourceType = RelationalDatabaseSourceTypeMapper::GetRelationalDatabaseSourceTypeForName(jsonValue.GetString("relationalDatabaseSourceType"));

    m_relationalDatabaseSourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rdsHttpEndpointConfig"))
  {
    m_rdsHttpEndpointConfig = jsonValue.GetObject("rdsHttpEndpointConfig");

    m_rdsHttpEndpointConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabaseDataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_relationalDatabaseSourceTypeHasBeenSet)
  {
   payload.WithString("relationalDatabaseSourceType", RelationalDatabaseSourceTypeMapper::GetNameForRelationalDatabaseSourceType(m_relationalDatabaseSourceType));
  }

  if(m_rdsHttpEndpointConfigHasBeenSet)
  {
   payload.WithObject("rdsHttpEndpointConfig", m_rdsHttpEndpointConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
