/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationConfigurationsResult::DescribeReplicationConfigurationsResult()
{
}

DescribeReplicationConfigurationsResult::DescribeReplicationConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationConfigurationsResult& DescribeReplicationConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Replications"))
  {
    Aws::Utils::Array<JsonView> replicationsJsonList = jsonValue.GetArray("Replications");
    for(unsigned replicationsIndex = 0; replicationsIndex < replicationsJsonList.GetLength(); ++replicationsIndex)
    {
      m_replications.push_back(replicationsJsonList[replicationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
