/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ListContainerGroupDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContainerGroupDefinitionsResult::ListContainerGroupDefinitionsResult()
{
}

ListContainerGroupDefinitionsResult::ListContainerGroupDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContainerGroupDefinitionsResult& ListContainerGroupDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContainerGroupDefinitions"))
  {
    Aws::Utils::Array<JsonView> containerGroupDefinitionsJsonList = jsonValue.GetArray("ContainerGroupDefinitions");
    for(unsigned containerGroupDefinitionsIndex = 0; containerGroupDefinitionsIndex < containerGroupDefinitionsJsonList.GetLength(); ++containerGroupDefinitionsIndex)
    {
      m_containerGroupDefinitions.push_back(containerGroupDefinitionsJsonList[containerGroupDefinitionsIndex].AsObject());
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
