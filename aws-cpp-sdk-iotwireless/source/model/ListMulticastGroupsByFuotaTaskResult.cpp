/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMulticastGroupsByFuotaTaskResult::ListMulticastGroupsByFuotaTaskResult()
{
}

ListMulticastGroupsByFuotaTaskResult::ListMulticastGroupsByFuotaTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMulticastGroupsByFuotaTaskResult& ListMulticastGroupsByFuotaTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("MulticastGroupList"))
  {
    Aws::Utils::Array<JsonView> multicastGroupListJsonList = jsonValue.GetArray("MulticastGroupList");
    for(unsigned multicastGroupListIndex = 0; multicastGroupListIndex < multicastGroupListJsonList.GetLength(); ++multicastGroupListIndex)
    {
      m_multicastGroupList.push_back(multicastGroupListJsonList[multicastGroupListIndex].AsObject());
    }
  }



  return *this;
}
