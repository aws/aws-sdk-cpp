/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationTasksResult::DescribeReplicationTasksResult()
{
}

DescribeReplicationTasksResult::DescribeReplicationTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationTasksResult& DescribeReplicationTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("ReplicationTasks"))
  {
    Aws::Utils::Array<JsonView> replicationTasksJsonList = jsonValue.GetArray("ReplicationTasks");
    for(unsigned replicationTasksIndex = 0; replicationTasksIndex < replicationTasksJsonList.GetLength(); ++replicationTasksIndex)
    {
      m_replicationTasks.push_back(replicationTasksJsonList[replicationTasksIndex].AsObject());
    }
  }



  return *this;
}
