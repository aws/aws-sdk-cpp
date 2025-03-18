/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ListAllowedRepositoriesForGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAllowedRepositoriesForGroupResult::ListAllowedRepositoriesForGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAllowedRepositoriesForGroupResult& ListAllowedRepositoriesForGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("allowedRepositories"))
  {
    Aws::Utils::Array<JsonView> allowedRepositoriesJsonList = jsonValue.GetArray("allowedRepositories");
    for(unsigned allowedRepositoriesIndex = 0; allowedRepositoriesIndex < allowedRepositoriesJsonList.GetLength(); ++allowedRepositoriesIndex)
    {
      m_allowedRepositories.push_back(allowedRepositoriesJsonList[allowedRepositoriesIndex].AsString());
    }
    m_allowedRepositoriesHasBeenSet = true;
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
