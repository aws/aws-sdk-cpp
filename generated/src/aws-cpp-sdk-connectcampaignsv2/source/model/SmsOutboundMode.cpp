/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/SmsOutboundMode.h>
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

SmsOutboundMode::SmsOutboundMode(JsonView jsonValue)
{
  *this = jsonValue;
}

SmsOutboundMode& SmsOutboundMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentless"))
  {
    m_agentless = jsonValue.GetObject("agentless");
    m_agentlessHasBeenSet = true;
  }
  return *this;
}

JsonValue SmsOutboundMode::Jsonize() const
{
  JsonValue payload;

  if(m_agentlessHasBeenSet)
  {
   payload.WithObject("agentless", m_agentless.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
