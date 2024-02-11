/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListSupportedInstanceTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListSupportedInstanceTypesRequest::ListSupportedInstanceTypesRequest() : 
    m_releaseLabelHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String ListSupportedInstanceTypesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("ReleaseLabel", m_releaseLabel);

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSupportedInstanceTypesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListSupportedInstanceTypes"));
  return headers;

}




