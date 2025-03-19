/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/DescribeComponentConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeComponentConfigurationResult::DescribeComponentConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeComponentConfigurationResult& DescribeComponentConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Monitor"))
  {
    m_monitor = jsonValue.GetBool("Monitor");
    m_monitorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = TierMapper::GetTierForName(jsonValue.GetString("Tier"));
    m_tierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComponentConfiguration"))
  {
    m_componentConfiguration = jsonValue.GetString("ComponentConfiguration");
    m_componentConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
