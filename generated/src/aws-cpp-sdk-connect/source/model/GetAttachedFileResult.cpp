/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetAttachedFileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAttachedFileResult::GetAttachedFileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAttachedFileResult& GetAttachedFileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileArn"))
  {
    m_fileArn = jsonValue.GetString("FileArn");
    m_fileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileId"))
  {
    m_fileId = jsonValue.GetString("FileId");
    m_fileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileStatus"))
  {
    m_fileStatus = FileStatusTypeMapper::GetFileStatusTypeForName(jsonValue.GetString("FileStatus"));
    m_fileStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileName"))
  {
    m_fileName = jsonValue.GetString("FileName");
    m_fileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSizeInBytes"))
  {
    m_fileSizeInBytes = jsonValue.GetInt64("FileSizeInBytes");
    m_fileSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociatedResourceArn"))
  {
    m_associatedResourceArn = jsonValue.GetString("AssociatedResourceArn");
    m_associatedResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileUseCaseType"))
  {
    m_fileUseCaseType = FileUseCaseTypeMapper::GetFileUseCaseTypeForName(jsonValue.GetString("FileUseCaseType"));
    m_fileUseCaseTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DownloadUrlMetadata"))
  {
    m_downloadUrlMetadata = jsonValue.GetObject("DownloadUrlMetadata");
    m_downloadUrlMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
