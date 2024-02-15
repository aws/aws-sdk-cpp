/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/GetTermForReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Artifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTermForReportResult::GetTermForReportResult()
{
}

GetTermForReportResult::GetTermForReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTermForReportResult& GetTermForReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("documentPresignedUrl"))
  {
    m_documentPresignedUrl = jsonValue.GetString("documentPresignedUrl");

  }

  if(jsonValue.ValueExists("termToken"))
  {
    m_termToken = jsonValue.GetString("termToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
