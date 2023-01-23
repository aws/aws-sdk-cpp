/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelModerator.h>
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

ChannelModerator::ChannelModerator() : 
    m_moderatorHasBeenSet(false),
    m_channelArnHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
}

ChannelModerator::ChannelModerator(JsonView jsonValue) : 
    m_moderatorHasBeenSet(false),
    m_channelArnHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelModerator& ChannelModerator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Moderator"))
  {
    m_moderator = jsonValue.GetObject("Moderator");

    m_moderatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");

    m_channelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelModerator::Jsonize() const
{
  JsonValue payload;

  if(m_moderatorHasBeenSet)
  {
   payload.WithObject("Moderator", m_moderator.Jsonize());

  }

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("ChannelArn", m_channelArn);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
