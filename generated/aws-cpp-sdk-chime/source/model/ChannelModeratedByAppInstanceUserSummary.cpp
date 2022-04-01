/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelModeratedByAppInstanceUserSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

ChannelModeratedByAppInstanceUserSummary::ChannelModeratedByAppInstanceUserSummary() : 
    m_channelSummaryHasBeenSet(false)
{
}

ChannelModeratedByAppInstanceUserSummary::ChannelModeratedByAppInstanceUserSummary(JsonView jsonValue) : 
    m_channelSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelModeratedByAppInstanceUserSummary& ChannelModeratedByAppInstanceUserSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelSummary"))
  {
    m_channelSummary = jsonValue.GetObject("ChannelSummary");

    m_channelSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelModeratedByAppInstanceUserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_channelSummaryHasBeenSet)
  {
   payload.WithObject("ChannelSummary", m_channelSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
