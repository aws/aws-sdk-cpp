/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationAggregatorSourcesStatusResult::DescribeConfigurationAggregatorSourcesStatusResult()
{
}

DescribeConfigurationAggregatorSourcesStatusResult::DescribeConfigurationAggregatorSourcesStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConfigurationAggregatorSourcesStatusResult& DescribeConfigurationAggregatorSourcesStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AggregatedSourceStatusList"))
  {
    Aws::Utils::Array<JsonView> aggregatedSourceStatusListJsonList = jsonValue.GetArray("AggregatedSourceStatusList");
    for(unsigned aggregatedSourceStatusListIndex = 0; aggregatedSourceStatusListIndex < aggregatedSourceStatusListJsonList.GetLength(); ++aggregatedSourceStatusListIndex)
    {
      m_aggregatedSourceStatusList.push_back(aggregatedSourceStatusListJsonList[aggregatedSourceStatusListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
