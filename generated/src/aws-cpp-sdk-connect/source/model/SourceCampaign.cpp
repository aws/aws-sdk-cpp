/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SourceCampaign.h>
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

SourceCampaign::SourceCampaign(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceCampaign& SourceCampaign::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CampaignId"))
  {
    m_campaignId = jsonValue.GetString("CampaignId");
    m_campaignIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutboundRequestId"))
  {
    m_outboundRequestId = jsonValue.GetString("OutboundRequestId");
    m_outboundRequestIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceCampaign::Jsonize() const
{
  JsonValue payload;

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("CampaignId", m_campaignId);

  }

  if(m_outboundRequestIdHasBeenSet)
  {
   payload.WithString("OutboundRequestId", m_outboundRequestId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
