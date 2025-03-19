/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/TelephonyOutboundMode.h>
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

TelephonyOutboundMode::TelephonyOutboundMode(JsonView jsonValue)
{
  *this = jsonValue;
}

TelephonyOutboundMode& TelephonyOutboundMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("progressive"))
  {
    m_progressive = jsonValue.GetObject("progressive");
    m_progressiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("predictive"))
  {
    m_predictive = jsonValue.GetObject("predictive");
    m_predictiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentless"))
  {
    m_agentless = jsonValue.GetObject("agentless");
    m_agentlessHasBeenSet = true;
  }
  return *this;
}

JsonValue TelephonyOutboundMode::Jsonize() const
{
  JsonValue payload;

  if(m_progressiveHasBeenSet)
  {
   payload.WithObject("progressive", m_progressive.Jsonize());

  }

  if(m_predictiveHasBeenSet)
  {
   payload.WithObject("predictive", m_predictive.Jsonize());

  }

  if(m_agentlessHasBeenSet)
  {
   payload.WithObject("agentless", m_agentless.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
