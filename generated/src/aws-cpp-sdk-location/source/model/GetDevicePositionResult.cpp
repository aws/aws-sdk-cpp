/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetDevicePositionResult.h>
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

GetDevicePositionResult::GetDevicePositionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDevicePositionResult& GetDevicePositionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");
    m_deviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SampleTime"))
  {
    m_sampleTime = jsonValue.GetString("SampleTime");
    m_sampleTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceivedTime"))
  {
    m_receivedTime = jsonValue.GetString("ReceivedTime");
    m_receivedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Accuracy"))
  {
    m_accuracy = jsonValue.GetObject("Accuracy");
    m_accuracyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PositionProperties"))
  {
    Aws::Map<Aws::String, JsonView> positionPropertiesJsonMap = jsonValue.GetObject("PositionProperties").GetAllObjects();
    for(auto& positionPropertiesItem : positionPropertiesJsonMap)
    {
      m_positionProperties[positionPropertiesItem.first] = positionPropertiesItem.second.AsString();
    }
    m_positionPropertiesHasBeenSet = true;
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
