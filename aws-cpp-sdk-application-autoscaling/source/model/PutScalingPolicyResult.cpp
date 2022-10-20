/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PutScalingPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutScalingPolicyResult::PutScalingPolicyResult()
{
}

PutScalingPolicyResult::PutScalingPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutScalingPolicyResult& PutScalingPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PolicyARN"))
  {
    m_policyARN = jsonValue.GetString("PolicyARN");

  }

  if(jsonValue.ValueExists("Alarms"))
  {
    Aws::Utils::Array<JsonView> alarmsJsonList = jsonValue.GetArray("Alarms");
    for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
    {
      m_alarms.push_back(alarmsJsonList[alarmsIndex].AsObject());
    }
  }



  return *this;
}
