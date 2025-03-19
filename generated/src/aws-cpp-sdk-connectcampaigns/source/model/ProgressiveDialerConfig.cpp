/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/ProgressiveDialerConfig.h>
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

ProgressiveDialerConfig::ProgressiveDialerConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ProgressiveDialerConfig& ProgressiveDialerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bandwidthAllocation"))
  {
    m_bandwidthAllocation = jsonValue.GetDouble("bandwidthAllocation");
    m_bandwidthAllocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dialingCapacity"))
  {
    m_dialingCapacity = jsonValue.GetDouble("dialingCapacity");
    m_dialingCapacityHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgressiveDialerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bandwidthAllocationHasBeenSet)
  {
   payload.WithDouble("bandwidthAllocation", m_bandwidthAllocation);

  }

  if(m_dialingCapacityHasBeenSet)
  {
   payload.WithDouble("dialingCapacity", m_dialingCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
