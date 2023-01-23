/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeOrderableReplicationInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrderableReplicationInstancesResult::DescribeOrderableReplicationInstancesResult()
{
}

DescribeOrderableReplicationInstancesResult::DescribeOrderableReplicationInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOrderableReplicationInstancesResult& DescribeOrderableReplicationInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrderableReplicationInstances"))
  {
    Aws::Utils::Array<JsonView> orderableReplicationInstancesJsonList = jsonValue.GetArray("OrderableReplicationInstances");
    for(unsigned orderableReplicationInstancesIndex = 0; orderableReplicationInstancesIndex < orderableReplicationInstancesJsonList.GetLength(); ++orderableReplicationInstancesIndex)
    {
      m_orderableReplicationInstances.push_back(orderableReplicationInstancesJsonList[orderableReplicationInstancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
