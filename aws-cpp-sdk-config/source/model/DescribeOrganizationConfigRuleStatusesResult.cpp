/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeOrganizationConfigRuleStatusesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationConfigRuleStatusesResult::DescribeOrganizationConfigRuleStatusesResult()
{
}

DescribeOrganizationConfigRuleStatusesResult::DescribeOrganizationConfigRuleStatusesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOrganizationConfigRuleStatusesResult& DescribeOrganizationConfigRuleStatusesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationConfigRuleStatuses"))
  {
    Aws::Utils::Array<JsonView> organizationConfigRuleStatusesJsonList = jsonValue.GetArray("OrganizationConfigRuleStatuses");
    for(unsigned organizationConfigRuleStatusesIndex = 0; organizationConfigRuleStatusesIndex < organizationConfigRuleStatusesJsonList.GetLength(); ++organizationConfigRuleStatusesIndex)
    {
      m_organizationConfigRuleStatuses.push_back(organizationConfigRuleStatusesJsonList[organizationConfigRuleStatusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
