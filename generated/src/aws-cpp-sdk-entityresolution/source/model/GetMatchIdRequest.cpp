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

  if(m_applyNormalizationHasBeenSet)
  {
   payload.WithBool("applyNormalization", m_applyNormalization);

  }

  return payload.View().WriteReadable();
}




