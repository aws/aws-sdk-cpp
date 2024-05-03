/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartAttachedFileUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

StartAttachedFileUploadRequest::StartAttachedFileUploadRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_instanceIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeInBytes(0),
    m_fileSizeInBytesHasBeenSet(false),
    m_urlExpiryInSeconds(0),
    m_urlExpiryInSecondsHasBeenSet(false),
    m_fileUseCaseType(FileUseCaseType::NOT_SET),
    m_fileUseCaseTypeHasBeenSet(false),
    m_associatedResourceArnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartAttachedFileUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("FileName", m_fileName);

  }

  if(m_fileSizeInBytesHasBeenSet)
  {
   payload.WithInt64("FileSizeInBytes", m_fileSizeInBytes);

  }

  if(m_urlExpiryInSecondsHasBeenSet)
  {
   payload.WithInteger("UrlExpiryInSeconds", m_urlExpiryInSeconds);

  }

  if(m_fileUseCaseTypeHasBeenSet)
  {
   payload.WithString("FileUseCaseType", FileUseCaseTypeMapper::GetNameForFileUseCaseType(m_fileUseCaseType));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

void StartAttachedFileUploadRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_associatedResourceArnHasBeenSet)
    {
      ss << m_associatedResourceArn;
      uri.AddQueryStringParameter("associatedResourceArn", ss.str());
      ss.str("");
    }

}



