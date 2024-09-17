/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BatchGetAttachedFileMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

BatchGetAttachedFileMetadataRequest::BatchGetAttachedFileMetadataRequest() : 
    m_fileIdsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_associatedResourceArnHasBeenSet(false)
{
}

Aws::String BatchGetAttachedFileMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileIdsJsonList(m_fileIds.size());
   for(unsigned fileIdsIndex = 0; fileIdsIndex < fileIdsJsonList.GetLength(); ++fileIdsIndex)
   {
     fileIdsJsonList[fileIdsIndex].AsString(m_fileIds[fileIdsIndex]);
   }
   payload.WithArray("FileIds", std::move(fileIdsJsonList));

  }

  return payload.View().WriteReadable();
}

void BatchGetAttachedFileMetadataRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_associatedResourceArnHasBeenSet)
    {
      ss << m_associatedResourceArn;
      uri.AddQueryStringParameter("associatedResourceArn", ss.str());
      ss.str("");
    }

}



