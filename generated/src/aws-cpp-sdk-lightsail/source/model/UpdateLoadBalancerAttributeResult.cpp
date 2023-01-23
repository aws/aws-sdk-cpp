/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/UpdateLoadBalancerAttributeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLoadBalancerAttributeResult::UpdateLoadBalancerAttributeResult()
{
}

UpdateLoadBalancerAttributeResult::UpdateLoadBalancerAttributeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateLoadBalancerAttributeResult& UpdateLoadBalancerAttributeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("operations"))
  {
    Aws::Utils::Array<JsonView> operationsJsonList = jsonValue.GetArray("operations");
    for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
    {
      m_operations.push_back(operationsJsonList[operationsIndex].AsObject());
    }
  }



  return *this;
}
