/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint/model/CampaignState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

CampaignState::CampaignState() : 
    m_campaignStatus(CampaignStatus::NOT_SET),
    m_campaignStatusHasBeenSet(false)
{
}

CampaignState::CampaignState(const JsonValue& jsonValue) : 
    m_campaignStatus(CampaignStatus::NOT_SET),
    m_campaignStatusHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignState& CampaignState::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CampaignStatus"))
  {
    m_campaignStatus = CampaignStatusMapper::GetCampaignStatusForName(jsonValue.GetString("CampaignStatus"));

    m_campaignStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignState::Jsonize() const
{
  JsonValue payload;

  if(m_campaignStatusHasBeenSet)
  {
   payload.WithString("CampaignStatus", CampaignStatusMapper::GetNameForCampaignStatus(m_campaignStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
