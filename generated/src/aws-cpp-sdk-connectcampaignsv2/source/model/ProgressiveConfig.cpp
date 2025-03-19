/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/ProgressiveConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

ProgressiveConfig::ProgressiveConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ProgressiveConfig& ProgressiveConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bandwidthAllocation"))
  {
    m_bandwidthAllocation = jsonValue.GetDouble("bandwidthAllocation");
    m_bandwidthAllocationHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgressiveConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bandwidthAllocationHasBeenSet)
  {
   payload.WithDouble("bandwidthAllocation", m_bandwidthAllocation);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
