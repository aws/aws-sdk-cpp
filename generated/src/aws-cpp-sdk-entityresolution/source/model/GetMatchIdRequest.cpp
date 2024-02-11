/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/GetMatchIdRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMatchIdRequest::GetMatchIdRequest() : 
    m_recordHasBeenSet(false),
    m_workflowNameHasBeenSet(false)
{
}

Aws::String GetMatchIdRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recordHasBeenSet)
  {
   JsonValue recordJsonMap;
   for(auto& recordItem : m_record)
   {
     recordJsonMap.WithString(recordItem.first, recordItem.second);
   }
   payload.WithObject("record", std::move(recordJsonMap));

  }

  return payload.View().WriteReadable();
}




