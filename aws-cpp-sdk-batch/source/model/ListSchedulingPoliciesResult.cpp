/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ListSchedulingPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSchedulingPoliciesResult::ListSchedulingPoliciesResult()
{
}

ListSchedulingPoliciesResult::ListSchedulingPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSchedulingPoliciesResult& ListSchedulingPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("schedulingPolicies"))
  {
    Aws::Utils::Array<JsonView> schedulingPoliciesJsonList = jsonValue.GetArray("schedulingPolicies");
    for(unsigned schedulingPoliciesIndex = 0; schedulingPoliciesIndex < schedulingPoliciesJsonList.GetLength(); ++schedulingPoliciesIndex)
    {
      m_schedulingPolicies.push_back(schedulingPoliciesJsonList[schedulingPoliciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
