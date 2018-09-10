﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/appstream/model/DescribeImagePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeImagePermissionsRequest::DescribeImagePermissionsRequest() : 
    m_nameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sharedAwsAccountIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeImagePermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_sharedAwsAccountIdsHasBeenSet)
  {
   Array<JsonValue> sharedAwsAccountIdsJsonList(m_sharedAwsAccountIds.size());
   for(unsigned sharedAwsAccountIdsIndex = 0; sharedAwsAccountIdsIndex < sharedAwsAccountIdsJsonList.GetLength(); ++sharedAwsAccountIdsIndex)
   {
     sharedAwsAccountIdsJsonList[sharedAwsAccountIdsIndex].AsString(m_sharedAwsAccountIds[sharedAwsAccountIdsIndex]);
   }
   payload.WithArray("SharedAwsAccountIds", std::move(sharedAwsAccountIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeImagePermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DescribeImagePermissions"));
  return headers;

}




