/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateParticipantRoleConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateParticipantRoleConfigRequest::UpdateParticipantRoleConfigRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_channelConfigurationHasBeenSet(false)
{
}

Aws::String UpdateParticipantRoleConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelConfigurationHasBeenSet)
  {
   payload.WithObject("ChannelConfiguration", m_channelConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




