/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ListClientVpcConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClientVpcConnectionsResult::ListClientVpcConnectionsResult()
{
}

ListClientVpcConnectionsResult::ListClientVpcConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClientVpcConnectionsResult& ListClientVpcConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clientVpcConnections"))
  {
    Aws::Utils::Array<JsonView> clientVpcConnectionsJsonList = jsonValue.GetArray("clientVpcConnections");
    for(unsigned clientVpcConnectionsIndex = 0; clientVpcConnectionsIndex < clientVpcConnectionsJsonList.GetLength(); ++clientVpcConnectionsIndex)
    {
      m_clientVpcConnections.push_back(clientVpcConnectionsJsonList[clientVpcConnectionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
