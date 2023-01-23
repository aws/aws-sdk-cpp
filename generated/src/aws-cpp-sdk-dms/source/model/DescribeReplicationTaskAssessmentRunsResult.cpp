/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationTaskAssessmentRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationTaskAssessmentRunsResult::DescribeReplicationTaskAssessmentRunsResult()
{
}

DescribeReplicationTaskAssessmentRunsResult::DescribeReplicationTaskAssessmentRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationTaskAssessmentRunsResult& DescribeReplicationTaskAssessmentRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("ReplicationTaskAssessmentRuns"))
  {
    Aws::Utils::Array<JsonView> replicationTaskAssessmentRunsJsonList = jsonValue.GetArray("ReplicationTaskAssessmentRuns");
    for(unsigned replicationTaskAssessmentRunsIndex = 0; replicationTaskAssessmentRunsIndex < replicationTaskAssessmentRunsJsonList.GetLength(); ++replicationTaskAssessmentRunsIndex)
    {
      m_replicationTaskAssessmentRuns.push_back(replicationTaskAssessmentRunsJsonList[replicationTaskAssessmentRunsIndex].AsObject());
    }
  }



  return *this;
}
