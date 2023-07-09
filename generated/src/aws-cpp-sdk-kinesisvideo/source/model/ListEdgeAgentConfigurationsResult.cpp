/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEdgeAgentConfigurationsResult::ListEdgeAgentConfigurationsResult()
{
}

ListEdgeAgentConfigurationsResult::ListEdgeAgentConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEdgeAgentConfigurationsResult& ListEdgeAgentConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EdgeConfigs"))
  {
    Aws::Utils::Array<JsonView> edgeConfigsJsonList = jsonValue.GetArray("EdgeConfigs");
    for(unsigned edgeConfigsIndex = 0; edgeConfigsIndex < edgeConfigsJsonList.GetLength(); ++edgeConfigsIndex)
    {
      m_edgeConfigs.push_back(edgeConfigsJsonList[edgeConfigsIndex].AsObject());
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
