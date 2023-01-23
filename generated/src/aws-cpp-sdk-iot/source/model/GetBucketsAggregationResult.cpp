/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetBucketsAggregationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBucketsAggregationResult::GetBucketsAggregationResult() : 
    m_totalCount(0)
{
}

GetBucketsAggregationResult::GetBucketsAggregationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalCount(0)
{
  *this = result;
}

GetBucketsAggregationResult& GetBucketsAggregationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("totalCount"))
  {
    m_totalCount = jsonValue.GetInteger("totalCount");

  }

  if(jsonValue.ValueExists("buckets"))
  {
    Aws::Utils::Array<JsonView> bucketsJsonList = jsonValue.GetArray("buckets");
    for(unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex)
    {
      m_buckets.push_back(bucketsJsonList[bucketsIndex].AsObject());
    }
  }



  return *this;
}
