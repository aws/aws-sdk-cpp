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

GetAttachedFileResult::GetAttachedFileResult() : 
    m_fileStatus(FileStatusType::NOT_SET),
    m_fileSizeInBytes(0),
    m_fileUseCaseType(FileUseCaseType::NOT_SET)
{
}

GetAttachedFileResult::GetAttachedFileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_fileStatus(FileStatusType::NOT_SET),
    m_fileSizeInBytes(0),
    m_fileUseCaseType(FileUseCaseType::NOT_SET)
{
  *this = result;
}

GetAttachedFileResult& GetAttachedFileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileArn"))
  {
    m_fileArn = jsonValue.GetString("FileArn");

  }

  if(jsonValue.ValueExists("FileId"))
  {
    m_fileId = jsonValue.GetString("FileId");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

  }

  if(jsonValue.ValueExists("FileStatus"))
  {
    m_fileStatus = FileStatusTypeMapper::GetFileStatusTypeForName(jsonValue.GetString("FileStatus"));

  }

  if(jsonValue.ValueExists("FileName"))
  {
    m_fileName = jsonValue.GetString("FileName");

  }

  if(jsonValue.ValueExists("FileSizeInBytes"))
  {
    m_fileSizeInBytes = jsonValue.GetInt64("FileSizeInBytes");

  }

  if(jsonValue.ValueExists("AssociatedResourceArn"))
  {
    m_associatedResourceArn = jsonValue.GetString("AssociatedResourceArn");

  }

  if(jsonValue.ValueExists("FileUseCaseType"))
  {
    m_fileUseCaseType = FileUseCaseTypeMapper::GetFileUseCaseTypeForName(jsonValue.GetString("FileUseCaseType"));

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("DownloadUrlMetadata"))
  {
    m_downloadUrlMetadata = jsonValue.GetObject("DownloadUrlMetadata");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
