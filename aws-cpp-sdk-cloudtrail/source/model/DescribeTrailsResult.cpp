/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DescribeTrailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrailsResult::DescribeTrailsResult()
{
}

DescribeTrailsResult::DescribeTrailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrailsResult& DescribeTrailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("trailList"))
  {
    Aws::Utils::Array<JsonView> trailListJsonList = jsonValue.GetArray("trailList");
    for(unsigned trailListIndex = 0; trailListIndex < trailListJsonList.GetLength(); ++trailListIndex)
    {
      m_trailList.push_back(trailListJsonList[trailListIndex].AsObject());
    }
  }



  return *this;
}
