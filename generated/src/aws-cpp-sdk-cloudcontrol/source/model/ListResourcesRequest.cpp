/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/ListResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudControlApi::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListResourcesRequest::ListResourcesRequest() : 
    m_typeNameHasBeenSet(false),
    m_typeVersionIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_resourceModelHasBeenSet(false)
{
}

Aws::String ListResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_typeVersionIdHasBeenSet)
  {
   payload.WithString("TypeVersionId", m_typeVersionId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_resourceModelHasBeenSet)
  {
   payload.WithString("ResourceModel", m_resourceModel);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudApiService.ListResources"));
  return headers;

}




