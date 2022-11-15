/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastic-inference/model/DescribeAcceleratorOfferingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAcceleratorOfferingsResult::DescribeAcceleratorOfferingsResult()
{
}

DescribeAcceleratorOfferingsResult::DescribeAcceleratorOfferingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAcceleratorOfferingsResult& DescribeAcceleratorOfferingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("acceleratorTypeOfferings"))
  {
    Aws::Utils::Array<JsonView> acceleratorTypeOfferingsJsonList = jsonValue.GetArray("acceleratorTypeOfferings");
    for(unsigned acceleratorTypeOfferingsIndex = 0; acceleratorTypeOfferingsIndex < acceleratorTypeOfferingsJsonList.GetLength(); ++acceleratorTypeOfferingsIndex)
    {
      m_acceleratorTypeOfferings.push_back(acceleratorTypeOfferingsJsonList[acceleratorTypeOfferingsIndex].AsObject());
    }
  }



  return *this;
}
