/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/StartRemoteMoveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartRemoteMoveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("ConnectorId", m_connectorId);

  }

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("SourcePath", m_sourcePath);

  }

  if(m_targetPathHasBeenSet)
  {
   payload.WithString("TargetPath", m_targetPath);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartRemoteMoveRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.StartRemoteMove"));
  return headers;

}




