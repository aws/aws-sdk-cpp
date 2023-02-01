/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectionsResult::DescribeConnectionsResult()
{
}

DescribeConnectionsResult::DescribeConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectionsResult& DescribeConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("Connections"))
  {
    Aws::Utils::Array<JsonView> connectionsJsonList = jsonValue.GetArray("Connections");
    for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
    {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsObject());
    }
  }



  return *this;
}
