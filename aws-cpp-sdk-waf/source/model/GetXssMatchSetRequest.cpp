/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/waf/model/GetXssMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetXssMatchSetRequest::GetXssMatchSetRequest() : 
    m_xssMatchSetIdHasBeenSet(false)
{
}

Aws::String GetXssMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_xssMatchSetIdHasBeenSet)
  {
   payload.WithString("XssMatchSetId", m_xssMatchSetId);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetXssMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.GetXssMatchSet"));
  return headers;

}



