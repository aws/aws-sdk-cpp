/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateChannelMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChannelMembershipRequest::CreateChannelMembershipRequest() : 
    m_channelArnHasBeenSet(false),
    m_memberArnHasBeenSet(false),
    m_type(ChannelMembershipType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateChannelMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberArnHasBeenSet)
  {
   payload.WithString("MemberArn", m_memberArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChannelMembershipTypeMapper::GetNameForChannelMembershipType(m_type));
  }

  return payload.View().WriteReadable();
}




