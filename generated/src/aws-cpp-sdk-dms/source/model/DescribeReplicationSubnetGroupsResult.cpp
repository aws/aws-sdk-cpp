/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationSubnetGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationSubnetGroupsResult::DescribeReplicationSubnetGroupsResult()
{
}

DescribeReplicationSubnetGroupsResult::DescribeReplicationSubnetGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationSubnetGroupsResult& DescribeReplicationSubnetGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("ReplicationSubnetGroups"))
  {
    Aws::Utils::Array<JsonView> replicationSubnetGroupsJsonList = jsonValue.GetArray("ReplicationSubnetGroups");
    for(unsigned replicationSubnetGroupsIndex = 0; replicationSubnetGroupsIndex < replicationSubnetGroupsJsonList.GetLength(); ++replicationSubnetGroupsIndex)
    {
      m_replicationSubnetGroups.push_back(replicationSubnetGroupsJsonList[replicationSubnetGroupsIndex].AsObject());
    }
  }



  return *this;
}
