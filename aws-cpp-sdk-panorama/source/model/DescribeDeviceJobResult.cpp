/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeDeviceJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDeviceJobResult::DescribeDeviceJobResult() : 
    m_deviceType(DeviceType::NOT_SET),
    m_jobType(JobType::NOT_SET),
    m_status(UpdateProgress::NOT_SET)
{
}

DescribeDeviceJobResult::DescribeDeviceJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deviceType(DeviceType::NOT_SET),
    m_jobType(JobType::NOT_SET),
    m_status(UpdateProgress::NOT_SET)
{
  *this = result;
}

DescribeDeviceJobResult& DescribeDeviceJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("DeviceArn"))
  {
    m_deviceArn = jsonValue.GetString("DeviceArn");

  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

  }

  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

  }

  if(jsonValue.ValueExists("DeviceType"))
  {
    m_deviceType = DeviceTypeMapper::GetDeviceTypeForName(jsonValue.GetString("DeviceType"));

  }

  if(jsonValue.ValueExists("ImageVersion"))
  {
    m_imageVersion = jsonValue.GetString("ImageVersion");

  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("JobType"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = UpdateProgressMapper::GetUpdateProgressForName(jsonValue.GetString("Status"));

  }



  return *this;
}
