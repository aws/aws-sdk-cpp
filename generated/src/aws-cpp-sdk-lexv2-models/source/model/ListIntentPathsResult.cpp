/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListIntentPathsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIntentPathsResult::ListIntentPathsResult()
{
}

ListIntentPathsResult::ListIntentPathsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIntentPathsResult& ListIntentPathsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nodeSummaries"))
  {
    Aws::Utils::Array<JsonView> nodeSummariesJsonList = jsonValue.GetArray("nodeSummaries");
    for(unsigned nodeSummariesIndex = 0; nodeSummariesIndex < nodeSummariesJsonList.GetLength(); ++nodeSummariesIndex)
    {
      m_nodeSummaries.push_back(nodeSummariesJsonList[nodeSummariesIndex].AsObject());
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
