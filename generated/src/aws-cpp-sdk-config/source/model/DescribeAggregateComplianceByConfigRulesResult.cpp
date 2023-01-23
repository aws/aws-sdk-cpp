/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeAggregateComplianceByConfigRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAggregateComplianceByConfigRulesResult::DescribeAggregateComplianceByConfigRulesResult()
{
}

DescribeAggregateComplianceByConfigRulesResult::DescribeAggregateComplianceByConfigRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAggregateComplianceByConfigRulesResult& DescribeAggregateComplianceByConfigRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AggregateComplianceByConfigRules"))
  {
    Aws::Utils::Array<JsonView> aggregateComplianceByConfigRulesJsonList = jsonValue.GetArray("AggregateComplianceByConfigRules");
    for(unsigned aggregateComplianceByConfigRulesIndex = 0; aggregateComplianceByConfigRulesIndex < aggregateComplianceByConfigRulesJsonList.GetLength(); ++aggregateComplianceByConfigRulesIndex)
    {
      m_aggregateComplianceByConfigRules.push_back(aggregateComplianceByConfigRulesJsonList[aggregateComplianceByConfigRulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
