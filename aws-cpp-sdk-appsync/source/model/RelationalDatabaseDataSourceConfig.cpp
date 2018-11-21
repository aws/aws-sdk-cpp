/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
