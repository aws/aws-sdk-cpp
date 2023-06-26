/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CreateConnectorProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectorProfileRequest::CreateConnectorProfileRequest() : 
    m_connectorProfileNameHasBeenSet(false),
    m_kmsArnHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorLabelHasBeenSet(false),
    m_connectionMode(ConnectionMode::NOT_SET),
    m_connectionModeHasBeenSet(false),
    m_connectorProfileConfigHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateConnectorProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("connectorProfileName", m_connectorProfileName);

  }

  if(m_kmsArnHasBeenSet)
  {
   payload.WithString("kmsArn", m_kmsArn);

  }

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("connectorType", ConnectorTypeMapper::GetNameForConnectorType(m_connectorType));
  }

  if(m_connectorLabelHasBeenSet)
  {
   payload.WithString("connectorLabel", m_connectorLabel);

  }

  if(m_connectionModeHasBeenSet)
  {
   payload.WithString("connectionMode", ConnectionModeMapper::GetNameForConnectionMode(m_connectionMode));
  }

  if(m_connectorProfileConfigHasBeenSet)
  {
   payload.WithObject("connectorProfileConfig", m_connectorProfileConfig.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




