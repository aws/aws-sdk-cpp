/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/SuccessfulCampaignStateResponse.h>
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

SuccessfulCampaignStateResponse::SuccessfulCampaignStateResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

SuccessfulCampaignStateResponse& SuccessfulCampaignStateResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("campaignId"))
  {
    m_campaignId = jsonValue.GetString("campaignId");
    m_campaignIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = CampaignStateMapper::GetCampaignStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue SuccessfulCampaignStateResponse::Jsonize() const
{
  JsonValue payload;

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("campaignId", m_campaignId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", CampaignStateMapper::GetNameForCampaignState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
