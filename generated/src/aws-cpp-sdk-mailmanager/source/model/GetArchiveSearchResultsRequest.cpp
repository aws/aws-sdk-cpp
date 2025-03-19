/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetArchiveSearchResultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetArchiveSearchResultsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_searchIdHasBeenSet)
  {
   payload.WithString("SearchId", m_searchId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetArchiveSearchResultsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.GetArchiveSearchResults"));
  return headers;

}




