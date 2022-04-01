/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DeltaSyncConfig.h>
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

DeltaSyncConfig::DeltaSyncConfig() : 
    m_baseTableTTL(0),
    m_baseTableTTLHasBeenSet(false),
    m_deltaSyncTableNameHasBeenSet(false),
    m_deltaSyncTableTTL(0),
    m_deltaSyncTableTTLHasBeenSet(false)
{
}

DeltaSyncConfig::DeltaSyncConfig(JsonView jsonValue) : 
    m_baseTableTTL(0),
    m_baseTableTTLHasBeenSet(false),
    m_deltaSyncTableNameHasBeenSet(false),
    m_deltaSyncTableTTL(0),
    m_deltaSyncTableTTLHasBeenSet(false)
{
  *this = jsonValue;
}

DeltaSyncConfig& DeltaSyncConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("baseTableTTL"))
  {
    m_baseTableTTL = jsonValue.GetInt64("baseTableTTL");

    m_baseTableTTLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deltaSyncTableName"))
  {
    m_deltaSyncTableName = jsonValue.GetString("deltaSyncTableName");

    m_deltaSyncTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deltaSyncTableTTL"))
  {
    m_deltaSyncTableTTL = jsonValue.GetInt64("deltaSyncTableTTL");

    m_deltaSyncTableTTLHasBeenSet = true;
  }

  return *this;
}

JsonValue DeltaSyncConfig::Jsonize() const
{
  JsonValue payload;

  if(m_baseTableTTLHasBeenSet)
  {
   payload.WithInt64("baseTableTTL", m_baseTableTTL);

  }

  if(m_deltaSyncTableNameHasBeenSet)
  {
   payload.WithString("deltaSyncTableName", m_deltaSyncTableName);

  }

  if(m_deltaSyncTableTTLHasBeenSet)
  {
   payload.WithInt64("deltaSyncTableTTL", m_deltaSyncTableTTL);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
