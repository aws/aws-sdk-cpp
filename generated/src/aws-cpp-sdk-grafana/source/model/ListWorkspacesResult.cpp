/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/ListWorkspacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
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
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workspaces"))
  {
    Aws::Utils::Array<JsonView> workspacesJsonList = jsonValue.GetArray("workspaces");
    for(unsigned workspacesIndex = 0; workspacesIndex < workspacesJsonList.GetLength(); ++workspacesIndex)
    {
      m_workspaces.push_back(workspacesJsonList[workspacesIndex].AsObject());
    }
  }



  return *this;
}
