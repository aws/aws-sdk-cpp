/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/VersionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

VersionInfo::VersionInfo() : 
    m_agentVersionHasBeenSet(false),
    m_agentHashHasBeenSet(false),
    m_dockerVersionHasBeenSet(false)
{
}

VersionInfo::VersionInfo(JsonView jsonValue) : 
    m_agentVersionHasBeenSet(false),
    m_agentHashHasBeenSet(false),
    m_dockerVersionHasBeenSet(false)
{
  *this = jsonValue;
}

VersionInfo& VersionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHash"))
  {
    m_agentHash = jsonValue.GetString("agentHash");

    m_agentHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dockerVersion"))
  {
    m_dockerVersion = jsonValue.GetString("dockerVersion");

    m_dockerVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_agentHashHasBeenSet)
  {
   payload.WithString("agentHash", m_agentHash);

  }

  if(m_dockerVersionHasBeenSet)
  {
   payload.WithString("dockerVersion", m_dockerVersion);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
