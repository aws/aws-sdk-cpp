﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationTaskAssessmentResultsResult.h>
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

DescribeReplicationTaskAssessmentResultsResult::DescribeReplicationTaskAssessmentResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationTaskAssessmentResultsResult& DescribeReplicationTaskAssessmentResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");
    m_bucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationTaskAssessmentResults"))
  {
    Aws::Utils::Array<JsonView> replicationTaskAssessmentResultsJsonList = jsonValue.GetArray("ReplicationTaskAssessmentResults");
    for(unsigned replicationTaskAssessmentResultsIndex = 0; replicationTaskAssessmentResultsIndex < replicationTaskAssessmentResultsJsonList.GetLength(); ++replicationTaskAssessmentResultsIndex)
    {
      m_replicationTaskAssessmentResults.push_back(replicationTaskAssessmentResultsJsonList[replicationTaskAssessmentResultsIndex].AsObject());
    }
    m_replicationTaskAssessmentResultsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
