/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartAttachedFileUploadResult.h>
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

StartAttachedFileUploadResult::StartAttachedFileUploadResult() : 
    m_fileStatus(FileStatusType::NOT_SET)
{
}

StartAttachedFileUploadResult::StartAttachedFileUploadResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_fileStatus(FileStatusType::NOT_SET)
{
  *this = result;
}

StartAttachedFileUploadResult& StartAttachedFileUploadResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("UploadUrlMetadata"))
  {
    m_uploadUrlMetadata = jsonValue.GetObject("UploadUrlMetadata");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
