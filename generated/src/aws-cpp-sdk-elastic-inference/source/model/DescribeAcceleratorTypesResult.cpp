/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastic-inference/model/DescribeAcceleratorTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAcceleratorTypesResult::DescribeAcceleratorTypesResult()
{
}

DescribeAcceleratorTypesResult::DescribeAcceleratorTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAcceleratorTypesResult& DescribeAcceleratorTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("acceleratorTypes"))
  {
    Aws::Utils::Array<JsonView> acceleratorTypesJsonList = jsonValue.GetArray("acceleratorTypes");
    for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
    {
      m_acceleratorTypes.push_back(acceleratorTypesJsonList[acceleratorTypesIndex].AsObject());
    }
  }



  return *this;
}
