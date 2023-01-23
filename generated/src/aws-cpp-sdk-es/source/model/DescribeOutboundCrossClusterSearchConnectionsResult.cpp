/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeOutboundCrossClusterSearchConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOutboundCrossClusterSearchConnectionsResult::DescribeOutboundCrossClusterSearchConnectionsResult()
{
}

DescribeOutboundCrossClusterSearchConnectionsResult::DescribeOutboundCrossClusterSearchConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOutboundCrossClusterSearchConnectionsResult& DescribeOutboundCrossClusterSearchConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CrossClusterSearchConnections"))
  {
    Aws::Utils::Array<JsonView> crossClusterSearchConnectionsJsonList = jsonValue.GetArray("CrossClusterSearchConnections");
    for(unsigned crossClusterSearchConnectionsIndex = 0; crossClusterSearchConnectionsIndex < crossClusterSearchConnectionsJsonList.GetLength(); ++crossClusterSearchConnectionsIndex)
    {
      m_crossClusterSearchConnections.push_back(crossClusterSearchConnectionsJsonList[crossClusterSearchConnectionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
