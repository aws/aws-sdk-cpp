/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetFuotaTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFuotaTaskResult::GetFuotaTaskResult() : 
    m_status(FuotaTaskStatus::NOT_SET),
    m_redundancyPercent(0),
    m_fragmentSizeBytes(0),
    m_fragmentIntervalMS(0)
{
}

GetFuotaTaskResult::GetFuotaTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(FuotaTaskStatus::NOT_SET),
    m_redundancyPercent(0),
    m_fragmentSizeBytes(0),
    m_fragmentIntervalMS(0)
{
  *this = result;
}

GetFuotaTaskResult& GetFuotaTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FuotaTaskStatusMapper::GetFuotaTaskStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");

  }

  if(jsonValue.ValueExists("FirmwareUpdateImage"))
  {
    m_firmwareUpdateImage = jsonValue.GetString("FirmwareUpdateImage");

  }

  if(jsonValue.ValueExists("FirmwareUpdateRole"))
  {
    m_firmwareUpdateRole = jsonValue.GetString("FirmwareUpdateRole");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("RedundancyPercent"))
  {
    m_redundancyPercent = jsonValue.GetInteger("RedundancyPercent");

  }

  if(jsonValue.ValueExists("FragmentSizeBytes"))
  {
    m_fragmentSizeBytes = jsonValue.GetInteger("FragmentSizeBytes");

  }

  if(jsonValue.ValueExists("FragmentIntervalMS"))
  {
    m_fragmentIntervalMS = jsonValue.GetInteger("FragmentIntervalMS");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
