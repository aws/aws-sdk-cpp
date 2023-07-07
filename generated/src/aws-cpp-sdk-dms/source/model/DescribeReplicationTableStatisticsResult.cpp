/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationTableStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationTableStatisticsResult::DescribeReplicationTableStatisticsResult()
{
}

DescribeReplicationTableStatisticsResult::DescribeReplicationTableStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationTableStatisticsResult& DescribeReplicationTableStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplicationConfigArn"))
  {
    m_replicationConfigArn = jsonValue.GetString("ReplicationConfigArn");

  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("ReplicationTableStatistics"))
  {
    Aws::Utils::Array<JsonView> replicationTableStatisticsJsonList = jsonValue.GetArray("ReplicationTableStatistics");
    for(unsigned replicationTableStatisticsIndex = 0; replicationTableStatisticsIndex < replicationTableStatisticsJsonList.GetLength(); ++replicationTableStatisticsIndex)
    {
      m_replicationTableStatistics.push_back(replicationTableStatisticsJsonList[replicationTableStatisticsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
