/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/UpdateConnectorProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectorProfileRequest::UpdateConnectorProfileRequest() : 
    m_connectorProfileNameHasBeenSet(false),
    m_connectionMode(ConnectionMode::NOT_SET),
    m_connectionModeHasBeenSet(false),
    m_connectorProfileConfigHasBeenSet(false)
{
}

Aws::String UpdateConnectorProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("connectorProfileName", m_connectorProfileName);

  }

  if(m_connectionModeHasBeenSet)
  {
   payload.WithString("connectionMode", ConnectionModeMapper::GetNameForConnectionMode(m_connectionMode));
  }

  if(m_connectorProfileConfigHasBeenSet)
  {
   payload.WithObject("connectorProfileConfig", m_connectorProfileConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




