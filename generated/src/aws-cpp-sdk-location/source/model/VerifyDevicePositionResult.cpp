﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/VerifyDevicePositionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

VerifyDevicePositionResult::VerifyDevicePositionResult() : 
    m_distanceUnit(DistanceUnit::NOT_SET)
{
}

VerifyDevicePositionResult::VerifyDevicePositionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : VerifyDevicePositionResult()
{
  *this = result;
}

VerifyDevicePositionResult& VerifyDevicePositionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InferredState"))
  {
    m_inferredState = jsonValue.GetObject("InferredState");

  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

  }

  if(jsonValue.ValueExists("SampleTime"))
  {
    m_sampleTime = jsonValue.GetString("SampleTime");

  }

  if(jsonValue.ValueExists("ReceivedTime"))
  {
    m_receivedTime = jsonValue.GetString("ReceivedTime");

  }

  if(jsonValue.ValueExists("DistanceUnit"))
  {
    m_distanceUnit = DistanceUnitMapper::GetDistanceUnitForName(jsonValue.GetString("DistanceUnit"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
