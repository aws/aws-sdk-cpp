/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/GetCallAnalyticsCategoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCallAnalyticsCategoryRequest::GetCallAnalyticsCategoryRequest() : 
    m_categoryNameHasBeenSet(false)
{
}

Aws::String GetCallAnalyticsCategoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_categoryNameHasBeenSet)
  {
   payload.WithString("CategoryName", m_categoryName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCallAnalyticsCategoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Transcribe.GetCallAnalyticsCategory"));
  return headers;

}




