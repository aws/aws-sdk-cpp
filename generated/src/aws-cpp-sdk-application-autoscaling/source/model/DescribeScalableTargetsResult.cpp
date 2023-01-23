/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/DescribeScalableTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScalableTargetsResult::DescribeScalableTargetsResult()
{
}

DescribeScalableTargetsResult::DescribeScalableTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScalableTargetsResult& DescribeScalableTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScalableTargets"))
  {
    Aws::Utils::Array<JsonView> scalableTargetsJsonList = jsonValue.GetArray("ScalableTargets");
    for(unsigned scalableTargetsIndex = 0; scalableTargetsIndex < scalableTargetsJsonList.GetLength(); ++scalableTargetsIndex)
    {
      m_scalableTargets.push_back(scalableTargetsJsonList[scalableTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
