/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/PredictiveDialerConfig.h>
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

PredictiveDialerConfig::PredictiveDialerConfig() : 
    m_bandwidthAllocation(0.0),
    m_bandwidthAllocationHasBeenSet(false)
{
}

PredictiveDialerConfig::PredictiveDialerConfig(JsonView jsonValue) : 
    m_bandwidthAllocation(0.0),
    m_bandwidthAllocationHasBeenSet(false)
{
  *this = jsonValue;
}

PredictiveDialerConfig& PredictiveDialerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bandwidthAllocation"))
  {
    m_bandwidthAllocation = jsonValue.GetDouble("bandwidthAllocation");

    m_bandwidthAllocationHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictiveDialerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bandwidthAllocationHasBeenSet)
  {
   payload.WithDouble("bandwidthAllocation", m_bandwidthAllocation);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
