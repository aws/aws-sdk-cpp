/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastic-inference/model/DescribeAcceleratorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAcceleratorsResult::DescribeAcceleratorsResult()
{
}

DescribeAcceleratorsResult::DescribeAcceleratorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAcceleratorsResult& DescribeAcceleratorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("acceleratorSet"))
  {
    Aws::Utils::Array<JsonView> acceleratorSetJsonList = jsonValue.GetArray("acceleratorSet");
    for(unsigned acceleratorSetIndex = 0; acceleratorSetIndex < acceleratorSetJsonList.GetLength(); ++acceleratorSetIndex)
    {
      m_acceleratorSet.push_back(acceleratorSetJsonList[acceleratorSetIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
