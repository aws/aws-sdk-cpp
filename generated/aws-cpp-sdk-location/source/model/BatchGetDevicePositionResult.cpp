﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchGetDevicePositionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDevicePositionResult::BatchGetDevicePositionResult()
{
}

BatchGetDevicePositionResult::BatchGetDevicePositionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetDevicePositionResult& BatchGetDevicePositionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DevicePositions"))
  {
    Array<JsonView> devicePositionsJsonList = jsonValue.GetArray("DevicePositions");
    for(unsigned devicePositionsIndex = 0; devicePositionsIndex < devicePositionsJsonList.GetLength(); ++devicePositionsIndex)
    {
      m_devicePositions.push_back(devicePositionsJsonList[devicePositionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
