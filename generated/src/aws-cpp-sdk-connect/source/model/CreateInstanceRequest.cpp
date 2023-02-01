/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInstanceRequest::CreateInstanceRequest() : 
    m_clientTokenHasBeenSet(false),
    m_identityManagementType(DirectoryType::NOT_SET),
    m_identityManagementTypeHasBeenSet(false),
    m_instanceAliasHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_inboundCallsEnabled(false),
    m_inboundCallsEnabledHasBeenSet(false),
    m_outboundCallsEnabled(false),
    m_outboundCallsEnabledHasBeenSet(false)
{
}

Aws::String CreateInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_identityManagementTypeHasBeenSet)
  {
   payload.WithString("IdentityManagementType", DirectoryTypeMapper::GetNameForDirectoryType(m_identityManagementType));
  }

  if(m_instanceAliasHasBeenSet)
  {
   payload.WithString("InstanceAlias", m_instanceAlias);

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_inboundCallsEnabledHasBeenSet)
  {
   payload.WithBool("InboundCallsEnabled", m_inboundCallsEnabled);

  }

  if(m_outboundCallsEnabledHasBeenSet)
  {
   payload.WithBool("OutboundCallsEnabled", m_outboundCallsEnabled);

  }

  return payload.View().WriteReadable();
}




