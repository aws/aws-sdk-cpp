﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/ListWorkspaceServiceAccountTokensResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkspaceServiceAccountTokensResult::ListWorkspaceServiceAccountTokensResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkspaceServiceAccountTokensResult& ListWorkspaceServiceAccountTokensResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceAccountId"))
  {
    m_serviceAccountId = jsonValue.GetString("serviceAccountId");
    m_serviceAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceAccountTokens"))
  {
    Aws::Utils::Array<JsonView> serviceAccountTokensJsonList = jsonValue.GetArray("serviceAccountTokens");
    for(unsigned serviceAccountTokensIndex = 0; serviceAccountTokensIndex < serviceAccountTokensJsonList.GetLength(); ++serviceAccountTokensIndex)
    {
      m_serviceAccountTokens.push_back(serviceAccountTokensJsonList[serviceAccountTokensIndex].AsObject());
    }
    m_serviceAccountTokensHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");
    m_workspaceIdHasBeenSet = true;
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
