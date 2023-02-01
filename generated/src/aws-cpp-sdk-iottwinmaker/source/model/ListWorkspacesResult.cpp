/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListWorkspacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkspacesResult::ListWorkspacesResult()
{
}

ListWorkspacesResult::ListWorkspacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkspacesResult& ListWorkspacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workspaceSummaries"))
  {
    Aws::Utils::Array<JsonView> workspaceSummariesJsonList = jsonValue.GetArray("workspaceSummaries");
    for(unsigned workspaceSummariesIndex = 0; workspaceSummariesIndex < workspaceSummariesJsonList.GetLength(); ++workspaceSummariesIndex)
    {
      m_workspaceSummaries.push_back(workspaceSummariesJsonList[workspaceSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
