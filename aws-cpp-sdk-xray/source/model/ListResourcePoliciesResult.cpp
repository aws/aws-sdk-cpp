/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ListResourcePoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourcePoliciesResult::ListResourcePoliciesResult()
{
}

ListResourcePoliciesResult::ListResourcePoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourcePoliciesResult& ListResourcePoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourcePolicies"))
  {
    Aws::Utils::Array<JsonView> resourcePoliciesJsonList = jsonValue.GetArray("ResourcePolicies");
    for(unsigned resourcePoliciesIndex = 0; resourcePoliciesIndex < resourcePoliciesJsonList.GetLength(); ++resourcePoliciesIndex)
    {
      m_resourcePolicies.push_back(resourcePoliciesJsonList[resourcePoliciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
