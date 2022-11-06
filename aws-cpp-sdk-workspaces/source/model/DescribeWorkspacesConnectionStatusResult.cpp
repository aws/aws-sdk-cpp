/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWorkspacesConnectionStatusResult::DescribeWorkspacesConnectionStatusResult()
{
}

DescribeWorkspacesConnectionStatusResult::DescribeWorkspacesConnectionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeWorkspacesConnectionStatusResult& DescribeWorkspacesConnectionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkspacesConnectionStatus"))
  {
    Aws::Utils::Array<JsonView> workspacesConnectionStatusJsonList = jsonValue.GetArray("WorkspacesConnectionStatus");
    for(unsigned workspacesConnectionStatusIndex = 0; workspacesConnectionStatusIndex < workspacesConnectionStatusJsonList.GetLength(); ++workspacesConnectionStatusIndex)
    {
      m_workspacesConnectionStatus.push_back(workspacesConnectionStatusJsonList[workspacesConnectionStatusIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
