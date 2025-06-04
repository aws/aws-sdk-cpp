/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/ListEnvironmentVlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnvironmentVlansResult::ListEnvironmentVlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEnvironmentVlansResult& ListEnvironmentVlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentVlans"))
  {
    Aws::Utils::Array<JsonView> environmentVlansJsonList = jsonValue.GetArray("environmentVlans");
    for(unsigned environmentVlansIndex = 0; environmentVlansIndex < environmentVlansJsonList.GetLength(); ++environmentVlansIndex)
    {
      m_environmentVlans.push_back(environmentVlansJsonList[environmentVlansIndex].AsObject());
    }
    m_environmentVlansHasBeenSet = true;
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
