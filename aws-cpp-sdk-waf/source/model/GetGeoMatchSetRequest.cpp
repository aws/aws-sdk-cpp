/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetGeoMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetGeoMatchSetRequest::GetGeoMatchSetRequest() : 
    m_geoMatchSetIdHasBeenSet(false)
{
}

Aws::String GetGeoMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_geoMatchSetIdHasBeenSet)
  {
   payload.WithString("GeoMatchSetId", m_geoMatchSetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetGeoMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.GetGeoMatchSet"));
  return headers;

}




