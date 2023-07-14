﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BatchChannelMemberships.h>
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

BatchChannelMemberships::BatchChannelMemberships() : 
    m_invitedByHasBeenSet(false),
    m_type(ChannelMembershipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_channelArnHasBeenSet(false)
{
}

BatchChannelMemberships::BatchChannelMemberships(JsonView jsonValue) : 
    m_invitedByHasBeenSet(false),
    m_type(ChannelMembershipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_channelArnHasBeenSet(false)
{
  *this = jsonValue;
}

BatchChannelMemberships& BatchChannelMemberships::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvitedBy"))
  {
    m_invitedBy = jsonValue.GetObject("InvitedBy");

    m_invitedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChannelMembershipTypeMapper::GetChannelMembershipTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Members"))
  {
    Array<JsonView> membersJsonList = jsonValue.GetArray("Members");
    for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
    {
      m_members.push_back(membersJsonList[membersIndex].AsObject());
    }
    m_membersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");

    m_channelArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchChannelMemberships::Jsonize() const
{
  JsonValue payload;

  if(m_invitedByHasBeenSet)
  {
   payload.WithObject("InvitedBy", m_invitedBy.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChannelMembershipTypeMapper::GetNameForChannelMembershipType(m_type));
  }

  if(m_membersHasBeenSet)
  {
   Array<JsonValue> membersJsonList(m_members.size());
   for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
   {
     membersJsonList[membersIndex].AsObject(m_members[membersIndex].Jsonize());
   }
   payload.WithArray("Members", std::move(membersJsonList));

  }

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("ChannelArn", m_channelArn);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
