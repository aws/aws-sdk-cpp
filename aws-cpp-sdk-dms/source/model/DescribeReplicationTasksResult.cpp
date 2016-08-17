/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/dms/model/DescribeReplicationTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationTasksResult::DescribeReplicationTasksResult()
{
}

DescribeReplicationTasksResult::DescribeReplicationTasksResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationTasksResult& DescribeReplicationTasksResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("ReplicationTasks"))
  {
    Array<JsonValue> replicationTasksJsonList = jsonValue.GetArray("ReplicationTasks");
    for(unsigned replicationTasksIndex = 0; replicationTasksIndex < replicationTasksJsonList.GetLength(); ++replicationTasksIndex)
    {
      m_replicationTasks.push_back(replicationTasksJsonList[replicationTasksIndex].AsObject());
    }
  }



  return *this;
}
