/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/ProfileOutboundRequest.h>
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

ProfileOutboundRequest::ProfileOutboundRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

ProfileOutboundRequest& ProfileOutboundRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileId"))
  {
    m_profileId = jsonValue.GetString("profileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expirationTime"))
  {
    m_expirationTime = jsonValue.GetString("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileOutboundRequest::Jsonize() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("profileId", m_profileId);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("expirationTime", m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
