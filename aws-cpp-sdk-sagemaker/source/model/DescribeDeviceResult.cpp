/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDeviceResult::DescribeDeviceResult() : 
    m_maxModels(0)
{
}

DescribeDeviceResult::DescribeDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxModels(0)
{
  *this = result;
}

DescribeDeviceResult& DescribeDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceArn"))
  {
    m_deviceArn = jsonValue.GetString("DeviceArn");

  }

  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");

  }

  if(jsonValue.ValueExists("IotThingName"))
  {
    m_iotThingName = jsonValue.GetString("IotThingName");

  }

  if(jsonValue.ValueExists("RegistrationTime"))
  {
    m_registrationTime = jsonValue.GetDouble("RegistrationTime");

  }

  if(jsonValue.ValueExists("LatestHeartbeat"))
  {
    m_latestHeartbeat = jsonValue.GetDouble("LatestHeartbeat");

  }

  if(jsonValue.ValueExists("Models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("Models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("MaxModels"))
  {
    m_maxModels = jsonValue.GetInteger("MaxModels");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");

  }



  return *this;
}
