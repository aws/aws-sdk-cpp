/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/OutboundRequest.h>
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

OutboundRequest::OutboundRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

OutboundRequest& OutboundRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expirationTime"))
  {
    m_expirationTime = jsonValue.GetString("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelSubtypeParameters"))
  {
    m_channelSubtypeParameters = jsonValue.GetObject("channelSubtypeParameters");
    m_channelSubtypeParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue OutboundRequest::Jsonize() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("expirationTime", m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_channelSubtypeParametersHasBeenSet)
  {
   payload.WithObject("channelSubtypeParameters", m_channelSubtypeParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
