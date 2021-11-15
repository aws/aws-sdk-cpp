/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

ServerSummary::ServerSummary() : 
    m_serverOsType(ServerOsType::NOT_SET),
    m_serverOsTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

ServerSummary::ServerSummary(JsonView jsonValue) : 
    m_serverOsType(ServerOsType::NOT_SET),
    m_serverOsTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

ServerSummary& ServerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerOsType"))
  {
    m_serverOsType = ServerOsTypeMapper::GetServerOsTypeForName(jsonValue.GetString("ServerOsType"));

    m_serverOsTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_serverOsTypeHasBeenSet)
  {
   payload.WithString("ServerOsType", ServerOsTypeMapper::GetNameForServerOsType(m_serverOsType));
  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
