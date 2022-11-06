/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ListGitHubAccountTokenNamesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGitHubAccountTokenNamesResult::ListGitHubAccountTokenNamesResult()
{
}

ListGitHubAccountTokenNamesResult::ListGitHubAccountTokenNamesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGitHubAccountTokenNamesResult& ListGitHubAccountTokenNamesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tokenNameList"))
  {
    Aws::Utils::Array<JsonView> tokenNameListJsonList = jsonValue.GetArray("tokenNameList");
    for(unsigned tokenNameListIndex = 0; tokenNameListIndex < tokenNameListJsonList.GetLength(); ++tokenNameListIndex)
    {
      m_tokenNameList.push_back(tokenNameListJsonList[tokenNameListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
