/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeDeliveryChannelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDeliveryChannelsResult::DescribeDeliveryChannelsResult()
{
}

DescribeDeliveryChannelsResult::DescribeDeliveryChannelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDeliveryChannelsResult& DescribeDeliveryChannelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeliveryChannels"))
  {
    Aws::Utils::Array<JsonView> deliveryChannelsJsonList = jsonValue.GetArray("DeliveryChannels");
    for(unsigned deliveryChannelsIndex = 0; deliveryChannelsIndex < deliveryChannelsJsonList.GetLength(); ++deliveryChannelsIndex)
    {
      m_deliveryChannels.push_back(deliveryChannelsJsonList[deliveryChannelsIndex].AsObject());
    }
  }



  return *this;
}
