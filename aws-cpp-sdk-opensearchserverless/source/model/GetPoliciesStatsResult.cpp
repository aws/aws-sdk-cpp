/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/GetPoliciesStatsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPoliciesStatsResult::GetPoliciesStatsResult() : 
    m_totalPolicyCount(0)
{
}

GetPoliciesStatsResult::GetPoliciesStatsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalPolicyCount(0)
{
  *this = result;
}

GetPoliciesStatsResult& GetPoliciesStatsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessPolicyStats"))
  {
    m_accessPolicyStats = jsonValue.GetObject("AccessPolicyStats");

  }

  if(jsonValue.ValueExists("SecurityConfigStats"))
  {
    m_securityConfigStats = jsonValue.GetObject("SecurityConfigStats");

  }

  if(jsonValue.ValueExists("SecurityPolicyStats"))
  {
    m_securityPolicyStats = jsonValue.GetObject("SecurityPolicyStats");

  }

  if(jsonValue.ValueExists("TotalPolicyCount"))
  {
    m_totalPolicyCount = jsonValue.GetInt64("TotalPolicyCount");

  }



  return *this;
}
