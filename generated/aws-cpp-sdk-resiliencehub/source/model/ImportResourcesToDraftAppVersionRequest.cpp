﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ImportResourcesToDraftAppVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportResourcesToDraftAppVersionRequest::ImportResourcesToDraftAppVersionRequest() : 
    m_appArnHasBeenSet(false),
    m_sourceArnsHasBeenSet(false)
{
}

Aws::String ImportResourcesToDraftAppVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_sourceArnsHasBeenSet)
  {
   Array<JsonValue> sourceArnsJsonList(m_sourceArns.size());
   for(unsigned sourceArnsIndex = 0; sourceArnsIndex < sourceArnsJsonList.GetLength(); ++sourceArnsIndex)
   {
     sourceArnsJsonList[sourceArnsIndex].AsString(m_sourceArns[sourceArnsIndex]);
   }
   payload.WithArray("sourceArns", std::move(sourceArnsJsonList));

  }

  return payload.View().WriteReadable();
}




