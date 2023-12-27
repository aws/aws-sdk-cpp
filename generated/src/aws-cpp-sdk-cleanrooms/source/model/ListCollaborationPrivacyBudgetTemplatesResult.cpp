/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetTemplatesResult.h>
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

ListCollaborationPrivacyBudgetTemplatesResult::ListCollaborationPrivacyBudgetTemplatesResult()
{
}

ListCollaborationPrivacyBudgetTemplatesResult::ListCollaborationPrivacyBudgetTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollaborationPrivacyBudgetTemplatesResult& ListCollaborationPrivacyBudgetTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("collaborationPrivacyBudgetTemplateSummaries"))
  {
    Aws::Utils::Array<JsonView> collaborationPrivacyBudgetTemplateSummariesJsonList = jsonValue.GetArray("collaborationPrivacyBudgetTemplateSummaries");
    for(unsigned collaborationPrivacyBudgetTemplateSummariesIndex = 0; collaborationPrivacyBudgetTemplateSummariesIndex < collaborationPrivacyBudgetTemplateSummariesJsonList.GetLength(); ++collaborationPrivacyBudgetTemplateSummariesIndex)
    {
      m_collaborationPrivacyBudgetTemplateSummaries.push_back(collaborationPrivacyBudgetTemplateSummariesJsonList[collaborationPrivacyBudgetTemplateSummariesIndex].AsObject());
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
