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
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_changeSetTagsHasBeenSet(false)
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
   Aws::Utils::Array<JsonValue> changeSetJsonList(m_changeSet.size());
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

  if(m_changeSetTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> changeSetTagsJsonList(m_changeSetTags.size());
   for(unsigned changeSetTagsIndex = 0; changeSetTagsIndex < changeSetTagsJsonList.GetLength(); ++changeSetTagsIndex)
   {
     changeSetTagsJsonList[changeSetTagsIndex].AsObject(m_changeSetTags[changeSetTagsIndex].Jsonize());
   }
   payload.WithArray("ChangeSetTags", std::move(changeSetTagsJsonList));

  }

  return payload.View().WriteReadable();
}




