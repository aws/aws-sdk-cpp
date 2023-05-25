/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/StartAttachmentUploadResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartAttachmentUploadResult::StartAttachmentUploadResult()
{
}

StartAttachmentUploadResult::StartAttachmentUploadResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartAttachmentUploadResult& StartAttachmentUploadResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AttachmentId"))
  {
    m_attachmentId = jsonValue.GetString("AttachmentId");

  }

  if(jsonValue.ValueExists("UploadMetadata"))
  {
    m_uploadMetadata = jsonValue.GetObject("UploadMetadata");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
