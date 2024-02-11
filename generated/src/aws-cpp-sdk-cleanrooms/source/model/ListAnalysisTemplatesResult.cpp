/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListAnalysisTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnalysisTemplatesResult::ListAnalysisTemplatesResult()
{
}

ListAnalysisTemplatesResult::ListAnalysisTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnalysisTemplatesResult& ListAnalysisTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("analysisTemplateSummaries"))
  {
    Aws::Utils::Array<JsonView> analysisTemplateSummariesJsonList = jsonValue.GetArray("analysisTemplateSummaries");
    for(unsigned analysisTemplateSummariesIndex = 0; analysisTemplateSummariesIndex < analysisTemplateSummariesJsonList.GetLength(); ++analysisTemplateSummariesIndex)
    {
      m_analysisTemplateSummaries.push_back(analysisTemplateSummariesJsonList[analysisTemplateSummariesIndex].AsObject());
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
