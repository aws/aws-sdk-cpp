/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/worklink/model/DescribeDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDeviceResult::DescribeDeviceResult() : 
    m_status(DeviceStatus::NOT_SET)
{
}

DescribeDeviceResult::DescribeDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DeviceStatus::NOT_SET)
{
  *this = result;
}

DescribeDeviceResult& DescribeDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");

  }

  if(jsonValue.ValueExists("Manufacturer"))
  {
    m_manufacturer = jsonValue.GetString("Manufacturer");

  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = jsonValue.GetString("OperatingSystem");

  }

  if(jsonValue.ValueExists("OperatingSystemVersion"))
  {
    m_operatingSystemVersion = jsonValue.GetString("OperatingSystemVersion");

  }

  if(jsonValue.ValueExists("PatchLevel"))
  {
    m_patchLevel = jsonValue.GetString("PatchLevel");

  }

  if(jsonValue.ValueExists("FirstAccessedTime"))
  {
    m_firstAccessedTime = jsonValue.GetDouble("FirstAccessedTime");

  }

  if(jsonValue.ValueExists("LastAccessedTime"))
  {
    m_lastAccessedTime = jsonValue.GetDouble("LastAccessedTime");

  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

  }



  return *this;
}
