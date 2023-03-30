/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeFeaturedResultsSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFeaturedResultsSetRequest::DescribeFeaturedResultsSetRequest() : 
    m_indexIdHasBeenSet(false),
    m_featuredResultsSetIdHasBeenSet(false)
{
}

Aws::String DescribeFeaturedResultsSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_featuredResultsSetIdHasBeenSet)
  {
   payload.WithString("FeaturedResultsSetId", m_featuredResultsSetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFeaturedResultsSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.DescribeFeaturedResultsSet"));
  return headers;

}




