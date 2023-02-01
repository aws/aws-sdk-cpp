/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeOrganizationConfigRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationConfigRulesResult::DescribeOrganizationConfigRulesResult()
{
}

DescribeOrganizationConfigRulesResult::DescribeOrganizationConfigRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOrganizationConfigRulesResult& DescribeOrganizationConfigRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationConfigRules"))
  {
    Aws::Utils::Array<JsonView> organizationConfigRulesJsonList = jsonValue.GetArray("OrganizationConfigRules");
    for(unsigned organizationConfigRulesIndex = 0; organizationConfigRulesIndex < organizationConfigRulesJsonList.GetLength(); ++organizationConfigRulesIndex)
    {
      m_organizationConfigRules.push_back(organizationConfigRulesJsonList[organizationConfigRulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
