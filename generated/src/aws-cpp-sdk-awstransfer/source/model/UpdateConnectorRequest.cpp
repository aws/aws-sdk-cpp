/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectorRequest::UpdateConnectorRequest() : 
    m_connectorIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_as2ConfigHasBeenSet(false),
    m_accessRoleHasBeenSet(false),
    m_loggingRoleHasBeenSet(false),
    m_sftpConfigHasBeenSet(false)
{
}

Aws::String UpdateConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("ConnectorId", m_connectorId);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_as2ConfigHasBeenSet)
  {
   payload.WithObject("As2Config", m_as2Config.Jsonize());

  }

  if(m_accessRoleHasBeenSet)
  {
   payload.WithString("AccessRole", m_accessRole);

  }

  if(m_loggingRoleHasBeenSet)
  {
   payload.WithString("LoggingRole", m_loggingRole);

  }

  if(m_sftpConfigHasBeenSet)
  {
   payload.WithObject("SftpConfig", m_sftpConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateConnectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.UpdateConnector"));
  return headers;

}




