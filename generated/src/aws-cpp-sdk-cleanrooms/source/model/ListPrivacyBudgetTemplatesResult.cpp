/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListPrivacyBudgetTemplatesResult.h>
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

ListPrivacyBudgetTemplatesResult::ListPrivacyBudgetTemplatesResult()
{
}

ListPrivacyBudgetTemplatesResult::ListPrivacyBudgetTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPrivacyBudgetTemplatesResult& ListPrivacyBudgetTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("privacyBudgetTemplateSummaries"))
  {
    Aws::Utils::Array<JsonView> privacyBudgetTemplateSummariesJsonList = jsonValue.GetArray("privacyBudgetTemplateSummaries");
    for(unsigned privacyBudgetTemplateSummariesIndex = 0; privacyBudgetTemplateSummariesIndex < privacyBudgetTemplateSummariesJsonList.GetLength(); ++privacyBudgetTemplateSummariesIndex)
    {
      m_privacyBudgetTemplateSummaries.push_back(privacyBudgetTemplateSummariesJsonList[privacyBudgetTemplateSummariesIndex].AsObject());
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
