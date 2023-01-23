/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UntagResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UntagResourceRequest::UntagResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagKeyListHasBeenSet(false)
{
}

Aws::String UntagResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagKeyListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeyListJsonList(m_tagKeyList.size());
   for(unsigned tagKeyListIndex = 0; tagKeyListIndex < tagKeyListJsonList.GetLength(); ++tagKeyListIndex)
   {
     tagKeyListJsonList[tagKeyListIndex].AsString(m_tagKeyList[tagKeyListIndex]);
   }
   payload.WithArray("TagKeyList", std::move(tagKeyListJsonList));

  }

  return payload.View().WriteReadable();
}




