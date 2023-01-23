/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationTaskIndividualAssessmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationTaskIndividualAssessmentsResult::DescribeReplicationTaskIndividualAssessmentsResult()
{
}

DescribeReplicationTaskIndividualAssessmentsResult::DescribeReplicationTaskIndividualAssessmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationTaskIndividualAssessmentsResult& DescribeReplicationTaskIndividualAssessmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("ReplicationTaskIndividualAssessments"))
  {
    Aws::Utils::Array<JsonView> replicationTaskIndividualAssessmentsJsonList = jsonValue.GetArray("ReplicationTaskIndividualAssessments");
    for(unsigned replicationTaskIndividualAssessmentsIndex = 0; replicationTaskIndividualAssessmentsIndex < replicationTaskIndividualAssessmentsJsonList.GetLength(); ++replicationTaskIndividualAssessmentsIndex)
    {
      m_replicationTaskIndividualAssessments.push_back(replicationTaskIndividualAssessmentsJsonList[replicationTaskIndividualAssessmentsIndex].AsObject());
    }
  }



  return *this;
}
