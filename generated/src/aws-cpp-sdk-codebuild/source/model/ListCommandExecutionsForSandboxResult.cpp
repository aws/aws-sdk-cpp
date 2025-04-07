/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ListCommandExecutionsForSandboxResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCommandExecutionsForSandboxResult::ListCommandExecutionsForSandboxResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCommandExecutionsForSandboxResult& ListCommandExecutionsForSandboxResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commandExecutions"))
  {
    Aws::Utils::Array<JsonView> commandExecutionsJsonList = jsonValue.GetArray("commandExecutions");
    for(unsigned commandExecutionsIndex = 0; commandExecutionsIndex < commandExecutionsJsonList.GetLength(); ++commandExecutionsIndex)
    {
      m_commandExecutions.push_back(commandExecutionsJsonList[commandExecutionsIndex].AsObject());
    }
    m_commandExecutionsHasBeenSet = true;
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
