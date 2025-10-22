/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/TimeoutConfig.h>
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

TimeoutConfig::TimeoutConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeoutConfig& TimeoutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("durationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("durationInSeconds");
    m_durationInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeoutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("durationInSeconds", m_durationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
