/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspaceImagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspaceImagesRequest::DescribeWorkspaceImagesRequest() : 
    m_imageIdsHasBeenSet(false),
    m_imageType(ImageType::NOT_SET),
    m_imageTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeWorkspaceImagesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageIdsJsonList(m_imageIds.size());
   for(unsigned imageIdsIndex = 0; imageIdsIndex < imageIdsJsonList.GetLength(); ++imageIdsIndex)
   {
     imageIdsJsonList[imageIdsIndex].AsString(m_imageIds[imageIdsIndex]);
   }
   payload.WithArray("ImageIds", std::move(imageIdsJsonList));

  }

  if(m_imageTypeHasBeenSet)
  {
   payload.WithString("ImageType", ImageTypeMapper::GetNameForImageType(m_imageType));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkspaceImagesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeWorkspaceImages"));
  return headers;

}




