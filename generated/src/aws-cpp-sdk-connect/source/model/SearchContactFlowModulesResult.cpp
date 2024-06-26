/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchContactFlowModulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchContactFlowModulesResult::SearchContactFlowModulesResult() : 
    m_approximateTotalCount(0)
{
}

SearchContactFlowModulesResult::SearchContactFlowModulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SearchContactFlowModulesResult()
{
  *this = result;
}

SearchContactFlowModulesResult& SearchContactFlowModulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactFlowModules"))
  {
    Aws::Utils::Array<JsonView> contactFlowModulesJsonList = jsonValue.GetArray("ContactFlowModules");
    for(unsigned contactFlowModulesIndex = 0; contactFlowModulesIndex < contactFlowModulesJsonList.GetLength(); ++contactFlowModulesIndex)
    {
      m_contactFlowModules.push_back(contactFlowModulesJsonList[contactFlowModulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
