﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DescribeConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationsResult::DescribeConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConfigurationsResult& DescribeConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configurations"))
  {
    Aws::Utils::Array<JsonView> configurationsJsonList = jsonValue.GetArray("configurations");
    for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
    {
      Aws::Map<Aws::String, JsonView> describeConfigurationsAttributeJsonMap = configurationsJsonList[configurationsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> describeConfigurationsAttributeMap;
      for(auto& describeConfigurationsAttributeItem : describeConfigurationsAttributeJsonMap)
      {
        describeConfigurationsAttributeMap[describeConfigurationsAttributeItem.first] = describeConfigurationsAttributeItem.second.AsString();
      }
      m_configurations.push_back(std::move(describeConfigurationsAttributeMap));
    }
    m_configurationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
