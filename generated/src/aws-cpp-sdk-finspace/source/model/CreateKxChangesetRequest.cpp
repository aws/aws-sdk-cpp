/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateKxChangesetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateKxChangesetRequest::CreateKxChangesetRequest() : 
    m_environmentIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_changeRequestsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateKxChangesetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_changeRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> changeRequestsJsonList(m_changeRequests.size());
   for(unsigned changeRequestsIndex = 0; changeRequestsIndex < changeRequestsJsonList.GetLength(); ++changeRequestsIndex)
   {
     changeRequestsJsonList[changeRequestsIndex].AsObject(m_changeRequests[changeRequestsIndex].Jsonize());
   }
   payload.WithArray("changeRequests", std::move(changeRequestsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




