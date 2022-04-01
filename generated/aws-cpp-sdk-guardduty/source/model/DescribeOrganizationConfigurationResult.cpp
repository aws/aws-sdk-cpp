/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DescribeOrganizationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationConfigurationResult::DescribeOrganizationConfigurationResult() : 
    m_autoEnable(false),
    m_memberAccountLimitReached(false)
{
}

DescribeOrganizationConfigurationResult::DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoEnable(false),
    m_memberAccountLimitReached(false)
{
  *this = result;
}

DescribeOrganizationConfigurationResult& DescribeOrganizationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("autoEnable"))
  {
    m_autoEnable = jsonValue.GetBool("autoEnable");

  }

  if(jsonValue.ValueExists("memberAccountLimitReached"))
  {
    m_memberAccountLimitReached = jsonValue.GetBool("memberAccountLimitReached");

  }

  if(jsonValue.ValueExists("dataSources"))
  {
    m_dataSources = jsonValue.GetObject("dataSources");

  }



  return *this;
}
