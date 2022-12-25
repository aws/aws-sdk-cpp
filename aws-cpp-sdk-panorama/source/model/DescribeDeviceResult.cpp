/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDeviceResult::DescribeDeviceResult() : 
    m_brand(DeviceBrand::NOT_SET),
    m_deviceAggregatedStatus(DeviceAggregatedStatus::NOT_SET),
    m_deviceConnectionStatus(DeviceConnectionStatus::NOT_SET),
    m_provisioningStatus(DeviceStatus::NOT_SET),
    m_type(DeviceType::NOT_SET)
{
}

DescribeDeviceResult::DescribeDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_brand(DeviceBrand::NOT_SET),
    m_deviceAggregatedStatus(DeviceAggregatedStatus::NOT_SET),
    m_deviceConnectionStatus(DeviceConnectionStatus::NOT_SET),
    m_provisioningStatus(DeviceStatus::NOT_SET),
    m_type(DeviceType::NOT_SET)
{
  *this = result;
}

DescribeDeviceResult& DescribeDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AlternateSoftwares"))
  {
    Aws::Utils::Array<JsonView> alternateSoftwaresJsonList = jsonValue.GetArray("AlternateSoftwares");
    for(unsigned alternateSoftwaresIndex = 0; alternateSoftwaresIndex < alternateSoftwaresJsonList.GetLength(); ++alternateSoftwaresIndex)
    {
      m_alternateSoftwares.push_back(alternateSoftwaresJsonList[alternateSoftwaresIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Brand"))
  {
    m_brand = DeviceBrandMapper::GetDeviceBrandForName(jsonValue.GetString("Brand"));

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("CurrentNetworkingStatus"))
  {
    m_currentNetworkingStatus = jsonValue.GetObject("CurrentNetworkingStatus");

  }

  if(jsonValue.ValueExists("CurrentSoftware"))
  {
    m_currentSoftware = jsonValue.GetString("CurrentSoftware");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DeviceAggregatedStatus"))
  {
    m_deviceAggregatedStatus = DeviceAggregatedStatusMapper::GetDeviceAggregatedStatusForName(jsonValue.GetString("DeviceAggregatedStatus"));

  }

  if(jsonValue.ValueExists("DeviceConnectionStatus"))
  {
    m_deviceConnectionStatus = DeviceConnectionStatusMapper::GetDeviceConnectionStatusForName(jsonValue.GetString("DeviceConnectionStatus"));

  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

  }

  if(jsonValue.ValueExists("LatestAlternateSoftware"))
  {
    m_latestAlternateSoftware = jsonValue.GetString("LatestAlternateSoftware");

  }

  if(jsonValue.ValueExists("LatestDeviceJob"))
  {
    m_latestDeviceJob = jsonValue.GetObject("LatestDeviceJob");

  }

  if(jsonValue.ValueExists("LatestSoftware"))
  {
    m_latestSoftware = jsonValue.GetString("LatestSoftware");

  }

  if(jsonValue.ValueExists("LeaseExpirationTime"))
  {
    m_leaseExpirationTime = jsonValue.GetDouble("LeaseExpirationTime");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("NetworkingConfiguration"))
  {
    m_networkingConfiguration = jsonValue.GetObject("NetworkingConfiguration");

  }

  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("ProvisioningStatus"));

  }

  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetString("SerialNumber");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DeviceTypeMapper::GetDeviceTypeForName(jsonValue.GetString("Type"));

  }



  return *this;
}
