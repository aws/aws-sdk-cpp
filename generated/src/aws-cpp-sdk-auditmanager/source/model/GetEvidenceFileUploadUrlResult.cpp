/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetEvidenceFileUploadUrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEvidenceFileUploadUrlResult::GetEvidenceFileUploadUrlResult()
{
}

GetEvidenceFileUploadUrlResult::GetEvidenceFileUploadUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEvidenceFileUploadUrlResult& GetEvidenceFileUploadUrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evidenceFileName"))
  {
    m_evidenceFileName = jsonValue.GetString("evidenceFileName");

  }

  if(jsonValue.ValueExists("uploadUrl"))
  {
    m_uploadUrl = jsonValue.GetString("uploadUrl");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
