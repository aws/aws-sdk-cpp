/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/UpdateLFTagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLFTagRequest::UpdateLFTagRequest() : 
    m_catalogIdHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValuesToDeleteHasBeenSet(false),
    m_tagValuesToAddHasBeenSet(false)
{
}

Aws::String UpdateLFTagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_tagValuesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagValuesToDeleteJsonList(m_tagValuesToDelete.size());
   for(unsigned tagValuesToDeleteIndex = 0; tagValuesToDeleteIndex < tagValuesToDeleteJsonList.GetLength(); ++tagValuesToDeleteIndex)
   {
     tagValuesToDeleteJsonList[tagValuesToDeleteIndex].AsString(m_tagValuesToDelete[tagValuesToDeleteIndex]);
   }
   payload.WithArray("TagValuesToDelete", std::move(tagValuesToDeleteJsonList));

  }

  if(m_tagValuesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagValuesToAddJsonList(m_tagValuesToAdd.size());
   for(unsigned tagValuesToAddIndex = 0; tagValuesToAddIndex < tagValuesToAddJsonList.GetLength(); ++tagValuesToAddIndex)
   {
     tagValuesToAddJsonList[tagValuesToAddIndex].AsString(m_tagValuesToAdd[tagValuesToAddIndex]);
   }
   payload.WithArray("TagValuesToAdd", std::move(tagValuesToAddJsonList));

  }

  return payload.View().WriteReadable();
}




