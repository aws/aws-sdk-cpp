/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeTableStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTableStatisticsResult::DescribeTableStatisticsResult()
{
}

DescribeTableStatisticsResult::DescribeTableStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTableStatisticsResult& DescribeTableStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplicationTaskArn"))
  {
    m_replicationTaskArn = jsonValue.GetString("ReplicationTaskArn");

  }

  if(jsonValue.ValueExists("TableStatistics"))
  {
    Aws::Utils::Array<JsonView> tableStatisticsJsonList = jsonValue.GetArray("TableStatistics");
    for(unsigned tableStatisticsIndex = 0; tableStatisticsIndex < tableStatisticsJsonList.GetLength(); ++tableStatisticsIndex)
    {
      m_tableStatistics.push_back(tableStatisticsJsonList[tableStatisticsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
