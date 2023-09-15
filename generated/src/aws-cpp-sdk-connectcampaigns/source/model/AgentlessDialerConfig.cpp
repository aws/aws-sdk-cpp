/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/AgentlessDialerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

AgentlessDialerConfig::AgentlessDialerConfig() : 
    m_dialingCapacity(0.0),
    m_dialingCapacityHasBeenSet(false)
{
}

AgentlessDialerConfig::AgentlessDialerConfig(JsonView jsonValue) : 
    m_dialingCapacity(0.0),
    m_dialingCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

AgentlessDialerConfig& AgentlessDialerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dialingCapacity"))
  {
    m_dialingCapacity = jsonValue.GetDouble("dialingCapacity");

    m_dialingCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentlessDialerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dialingCapacityHasBeenSet)
  {
   payload.WithDouble("dialingCapacity", m_dialingCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
