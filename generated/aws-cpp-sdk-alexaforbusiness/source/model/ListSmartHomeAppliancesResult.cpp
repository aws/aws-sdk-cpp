﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListSmartHomeAppliancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSmartHomeAppliancesResult::ListSmartHomeAppliancesResult()
{
}

ListSmartHomeAppliancesResult::ListSmartHomeAppliancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSmartHomeAppliancesResult& ListSmartHomeAppliancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SmartHomeAppliances"))
  {
    Array<JsonView> smartHomeAppliancesJsonList = jsonValue.GetArray("SmartHomeAppliances");
    for(unsigned smartHomeAppliancesIndex = 0; smartHomeAppliancesIndex < smartHomeAppliancesJsonList.GetLength(); ++smartHomeAppliancesIndex)
    {
      m_smartHomeAppliances.push_back(smartHomeAppliancesJsonList[smartHomeAppliancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
