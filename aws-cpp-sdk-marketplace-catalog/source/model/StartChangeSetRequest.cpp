/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/StartChangeSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartChangeSetRequest::StartChangeSetRequest() : 
    m_catalogHasBeenSet(false),
    m_changeSetHasBeenSet(false),
    m_changeSetNameHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String StartChangeSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_changeSetHasBeenSet)
  {
   Array<JsonValue> changeSetJsonList(m_changeSet.size());
   for(unsigned changeSetIndex = 0; changeSetIndex < changeSetJsonList.GetLength(); ++changeSetIndex)
   {
     changeSetJsonList[changeSetIndex].AsObject(m_changeSet[changeSetIndex].Jsonize());
   }
   payload.WithArray("ChangeSet", std::move(changeSetJsonList));

  }

  if(m_changeSetNameHasBeenSet)
  {
   payload.WithString("ChangeSetName", m_changeSetName);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




