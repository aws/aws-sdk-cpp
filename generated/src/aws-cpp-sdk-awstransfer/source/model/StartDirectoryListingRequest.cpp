/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/StartDirectoryListingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDirectoryListingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("ConnectorId", m_connectorId);

  }

  if(m_remoteDirectoryPathHasBeenSet)
  {
   payload.WithString("RemoteDirectoryPath", m_remoteDirectoryPath);

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  if(m_outputDirectoryPathHasBeenSet)
  {
   payload.WithString("OutputDirectoryPath", m_outputDirectoryPath);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDirectoryListingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.StartDirectoryListing"));
  return headers;

}




