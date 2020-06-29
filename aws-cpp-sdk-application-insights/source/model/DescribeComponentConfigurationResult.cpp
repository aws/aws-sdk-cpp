/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/DescribeComponentConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeComponentConfigurationResult::DescribeComponentConfigurationResult() : 
    m_monitor(false),
    m_tier(Tier::NOT_SET)
{
}

DescribeComponentConfigurationResult::DescribeComponentConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_monitor(false),
    m_tier(Tier::NOT_SET)
{
  *this = result;
}

DescribeComponentConfigurationResult& DescribeComponentConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Monitor"))
  {
    m_monitor = jsonValue.GetBool("Monitor");

  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = TierMapper::GetTierForName(jsonValue.GetString("Tier"));

  }

  if(jsonValue.ValueExists("ComponentConfiguration"))
  {
    m_componentConfiguration = jsonValue.GetString("ComponentConfiguration");

  }



  return *this;
}
