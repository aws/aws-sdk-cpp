/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

VersionInfo::VersionInfo(const JsonValue& jsonValue) : 
    m_agentVersionHasBeenSet(false),
    m_agentHashHasBeenSet(false),
    m_dockerVersionHasBeenSet(false)
{
  *this = jsonValue;
}

VersionInfo& VersionInfo::operator =(const JsonValue& jsonValue)
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