﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/GetBandwidthRateLimitScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBandwidthRateLimitScheduleResult::GetBandwidthRateLimitScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBandwidthRateLimitScheduleResult& GetBandwidthRateLimitScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BandwidthRateLimitIntervals"))
  {
    Aws::Utils::Array<JsonView> bandwidthRateLimitIntervalsJsonList = jsonValue.GetArray("BandwidthRateLimitIntervals");
    for(unsigned bandwidthRateLimitIntervalsIndex = 0; bandwidthRateLimitIntervalsIndex < bandwidthRateLimitIntervalsJsonList.GetLength(); ++bandwidthRateLimitIntervalsIndex)
    {
      m_bandwidthRateLimitIntervals.push_back(bandwidthRateLimitIntervalsJsonList[bandwidthRateLimitIntervalsIndex].AsObject());
    }
    m_bandwidthRateLimitIntervalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("GatewayArn");
    m_gatewayArnHasBeenSet = true;
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
