/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConformancePackComplianceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConformancePackComplianceResult::DescribeConformancePackComplianceResult()
{
}

DescribeConformancePackComplianceResult::DescribeConformancePackComplianceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConformancePackComplianceResult& DescribeConformancePackComplianceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConformancePackName"))
  {
    m_conformancePackName = jsonValue.GetString("ConformancePackName");

  }

  if(jsonValue.ValueExists("ConformancePackRuleComplianceList"))
  {
    Aws::Utils::Array<JsonView> conformancePackRuleComplianceListJsonList = jsonValue.GetArray("ConformancePackRuleComplianceList");
    for(unsigned conformancePackRuleComplianceListIndex = 0; conformancePackRuleComplianceListIndex < conformancePackRuleComplianceListJsonList.GetLength(); ++conformancePackRuleComplianceListIndex)
    {
      m_conformancePackRuleComplianceList.push_back(conformancePackRuleComplianceListJsonList[conformancePackRuleComplianceListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
