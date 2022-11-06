/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationInstancesResult::DescribeReplicationInstancesResult()
{
}

DescribeReplicationInstancesResult::DescribeReplicationInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationInstancesResult& DescribeReplicationInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("ReplicationInstances"))
  {
    Aws::Utils::Array<JsonView> replicationInstancesJsonList = jsonValue.GetArray("ReplicationInstances");
    for(unsigned replicationInstancesIndex = 0; replicationInstancesIndex < replicationInstancesJsonList.GetLength(); ++replicationInstancesIndex)
    {
      m_replicationInstances.push_back(replicationInstancesJsonList[replicationInstancesIndex].AsObject());
    }
  }



  return *this;
}
