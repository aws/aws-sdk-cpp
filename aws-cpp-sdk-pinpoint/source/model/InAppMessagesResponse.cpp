/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppMessagesResponse.h>
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

InAppMessagesResponse::InAppMessagesResponse() : 
    m_inAppMessageCampaignsHasBeenSet(false)
{
}

InAppMessagesResponse::InAppMessagesResponse(JsonView jsonValue) : 
    m_inAppMessageCampaignsHasBeenSet(false)
{
  *this = jsonValue;
}

InAppMessagesResponse& InAppMessagesResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InAppMessageCampaigns"))
  {
    Aws::Utils::Array<JsonView> inAppMessageCampaignsJsonList = jsonValue.GetArray("InAppMessageCampaigns");
    for(unsigned inAppMessageCampaignsIndex = 0; inAppMessageCampaignsIndex < inAppMessageCampaignsJsonList.GetLength(); ++inAppMessageCampaignsIndex)
    {
      m_inAppMessageCampaigns.push_back(inAppMessageCampaignsJsonList[inAppMessageCampaignsIndex].AsObject());
    }
    m_inAppMessageCampaignsHasBeenSet = true;
  }

  return *this;
}

JsonValue InAppMessagesResponse::Jsonize() const
{
  JsonValue payload;

  if(m_inAppMessageCampaignsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inAppMessageCampaignsJsonList(m_inAppMessageCampaigns.size());
   for(unsigned inAppMessageCampaignsIndex = 0; inAppMessageCampaignsIndex < inAppMessageCampaignsJsonList.GetLength(); ++inAppMessageCampaignsIndex)
   {
     inAppMessageCampaignsJsonList[inAppMessageCampaignsIndex].AsObject(m_inAppMessageCampaigns[inAppMessageCampaignsIndex].Jsonize());
   }
   payload.WithArray("InAppMessageCampaigns", std::move(inAppMessageCampaignsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
