/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeDeliveryDestinationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDeliveryDestinationsResult::DescribeDeliveryDestinationsResult()
{
}

DescribeDeliveryDestinationsResult::DescribeDeliveryDestinationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDeliveryDestinationsResult& DescribeDeliveryDestinationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deliveryDestinations"))
  {
    Aws::Utils::Array<JsonView> deliveryDestinationsJsonList = jsonValue.GetArray("deliveryDestinations");
    for(unsigned deliveryDestinationsIndex = 0; deliveryDestinationsIndex < deliveryDestinationsJsonList.GetLength(); ++deliveryDestinationsIndex)
    {
      m_deliveryDestinations.push_back(deliveryDestinationsJsonList[deliveryDestinationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
