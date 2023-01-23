/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetLoadBalancerTlsPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLoadBalancerTlsPoliciesResult::GetLoadBalancerTlsPoliciesResult()
{
}

GetLoadBalancerTlsPoliciesResult::GetLoadBalancerTlsPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLoadBalancerTlsPoliciesResult& GetLoadBalancerTlsPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tlsPolicies"))
  {
    Aws::Utils::Array<JsonView> tlsPoliciesJsonList = jsonValue.GetArray("tlsPolicies");
    for(unsigned tlsPoliciesIndex = 0; tlsPoliciesIndex < tlsPoliciesJsonList.GetLength(); ++tlsPoliciesIndex)
    {
      m_tlsPolicies.push_back(tlsPoliciesJsonList[tlsPoliciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
