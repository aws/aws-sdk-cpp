﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetsResult.h>
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

ListCollaborationPrivacyBudgetsResult::ListCollaborationPrivacyBudgetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollaborationPrivacyBudgetsResult& ListCollaborationPrivacyBudgetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("collaborationPrivacyBudgetSummaries"))
  {
    Aws::Utils::Array<JsonView> collaborationPrivacyBudgetSummariesJsonList = jsonValue.GetArray("collaborationPrivacyBudgetSummaries");
    for(unsigned collaborationPrivacyBudgetSummariesIndex = 0; collaborationPrivacyBudgetSummariesIndex < collaborationPrivacyBudgetSummariesJsonList.GetLength(); ++collaborationPrivacyBudgetSummariesIndex)
    {
      m_collaborationPrivacyBudgetSummaries.push_back(collaborationPrivacyBudgetSummariesJsonList[collaborationPrivacyBudgetSummariesIndex].AsObject());
    }
    m_collaborationPrivacyBudgetSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
