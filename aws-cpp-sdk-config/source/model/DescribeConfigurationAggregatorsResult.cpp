/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigurationAggregatorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationAggregatorsResult::DescribeConfigurationAggregatorsResult()
{
}

DescribeConfigurationAggregatorsResult::DescribeConfigurationAggregatorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConfigurationAggregatorsResult& DescribeConfigurationAggregatorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationAggregators"))
  {
    Aws::Utils::Array<JsonView> configurationAggregatorsJsonList = jsonValue.GetArray("ConfigurationAggregators");
    for(unsigned configurationAggregatorsIndex = 0; configurationAggregatorsIndex < configurationAggregatorsJsonList.GetLength(); ++configurationAggregatorsIndex)
    {
      m_configurationAggregators.push_back(configurationAggregatorsJsonList[configurationAggregatorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
