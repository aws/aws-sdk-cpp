/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeDeliveryChannelStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDeliveryChannelStatusResult::DescribeDeliveryChannelStatusResult()
{
}

DescribeDeliveryChannelStatusResult::DescribeDeliveryChannelStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDeliveryChannelStatusResult& DescribeDeliveryChannelStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeliveryChannelsStatus"))
  {
    Aws::Utils::Array<JsonView> deliveryChannelsStatusJsonList = jsonValue.GetArray("DeliveryChannelsStatus");
    for(unsigned deliveryChannelsStatusIndex = 0; deliveryChannelsStatusIndex < deliveryChannelsStatusJsonList.GetLength(); ++deliveryChannelsStatusIndex)
    {
      m_deliveryChannelsStatus.push_back(deliveryChannelsStatusJsonList[deliveryChannelsStatusIndex].AsObject());
    }
  }



  return *this;
}
