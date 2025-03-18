﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetApproximateUsageRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApproximateUsageRecordsResult::GetApproximateUsageRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApproximateUsageRecordsResult& GetApproximateUsageRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Services"))
  {
    Aws::Map<Aws::String, JsonView> servicesJsonMap = jsonValue.GetObject("Services").GetAllObjects();
    for(auto& servicesItem : servicesJsonMap)
    {
      m_services[servicesItem.first] = servicesItem.second.AsInt64();
    }
    m_servicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalRecords"))
  {
    m_totalRecords = jsonValue.GetInt64("TotalRecords");
    m_totalRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LookbackPeriod"))
  {
    m_lookbackPeriod = jsonValue.GetObject("LookbackPeriod");
    m_lookbackPeriodHasBeenSet = true;
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
