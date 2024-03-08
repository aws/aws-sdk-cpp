/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/ListRepositorySyncDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRepositorySyncDefinitionsResult::ListRepositorySyncDefinitionsResult()
{
}

ListRepositorySyncDefinitionsResult::ListRepositorySyncDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRepositorySyncDefinitionsResult& ListRepositorySyncDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RepositorySyncDefinitions"))
  {
    Aws::Utils::Array<JsonView> repositorySyncDefinitionsJsonList = jsonValue.GetArray("RepositorySyncDefinitions");
    for(unsigned repositorySyncDefinitionsIndex = 0; repositorySyncDefinitionsIndex < repositorySyncDefinitionsJsonList.GetLength(); ++repositorySyncDefinitionsIndex)
    {
      m_repositorySyncDefinitions.push_back(repositorySyncDefinitionsJsonList[repositorySyncDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
