/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Campaign.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Campaign::Campaign() : 
    m_campaignIdHasBeenSet(false)
{
}

Campaign::Campaign(JsonView jsonValue) : 
    m_campaignIdHasBeenSet(false)
{
  *this = jsonValue;
}

Campaign& Campaign::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CampaignId"))
  {
    m_campaignId = jsonValue.GetString("CampaignId");

    m_campaignIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Campaign::Jsonize() const
{
  JsonValue payload;

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("CampaignId", m_campaignId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
