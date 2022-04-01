/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/SuccessfulCampaignStateResponse.h>
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

SuccessfulCampaignStateResponse::SuccessfulCampaignStateResponse() : 
    m_campaignIdHasBeenSet(false),
    m_state(CampaignState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

SuccessfulCampaignStateResponse::SuccessfulCampaignStateResponse(JsonView jsonValue) : 
    m_campaignIdHasBeenSet(false),
    m_state(CampaignState::NOT_SET),
    m_stateHasBeenSet(false)
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
} // namespace ConnectCampaigns
} // namespace Aws
