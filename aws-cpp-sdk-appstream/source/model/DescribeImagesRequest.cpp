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
#include <aws/appstream/model/DescribeImagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeImagesRequest::DescribeImagesRequest() : 
    m_namesHasBeenSet(false)
{
}

Aws::String DescribeImagesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namesHasBeenSet)
  {
   Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeImagesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DescribeImages"));
  return headers;

}




