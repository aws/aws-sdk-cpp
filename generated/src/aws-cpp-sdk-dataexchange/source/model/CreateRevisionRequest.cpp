/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/CreateRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRevisionRequest::CreateRevisionRequest() : 
    m_commentHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




