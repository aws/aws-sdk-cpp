/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeFleetAdvisorCollectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetAdvisorCollectorsResult::DescribeFleetAdvisorCollectorsResult()
{
}

DescribeFleetAdvisorCollectorsResult::DescribeFleetAdvisorCollectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetAdvisorCollectorsResult& DescribeFleetAdvisorCollectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Collectors"))
  {
    Aws::Utils::Array<JsonView> collectorsJsonList = jsonValue.GetArray("Collectors");
    for(unsigned collectorsIndex = 0; collectorsIndex < collectorsJsonList.GetLength(); ++collectorsIndex)
    {
      m_collectors.push_back(collectorsJsonList[collectorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
