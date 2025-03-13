/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/FailedCampaignStateResponse.h>
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

FailedCampaignStateResponse::FailedCampaignStateResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

FailedCampaignStateResponse& FailedCampaignStateResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("campaignId"))
  {
    m_campaignId = jsonValue.GetString("campaignId");
    m_campaignIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = GetCampaignStateBatchFailureCodeMapper::GetGetCampaignStateBatchFailureCodeForName(jsonValue.GetString("failureCode"));
    m_failureCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedCampaignStateResponse::Jsonize() const
{
  JsonValue payload;

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("campaignId", m_campaignId);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", GetCampaignStateBatchFailureCodeMapper::GetNameForGetCampaignStateBatchFailureCode(m_failureCode));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
