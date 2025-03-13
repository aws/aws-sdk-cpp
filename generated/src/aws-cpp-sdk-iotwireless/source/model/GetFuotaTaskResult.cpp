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

GetFuotaTaskResult::GetFuotaTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFuotaTaskResult& GetFuotaTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FuotaTaskStatusMapper::GetFuotaTaskStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LoRaWAN"))
  {
    m_loRaWAN = jsonValue.GetObject("LoRaWAN");
    m_loRaWANHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirmwareUpdateImage"))
  {
    m_firmwareUpdateImage = jsonValue.GetString("FirmwareUpdateImage");
    m_firmwareUpdateImageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirmwareUpdateRole"))
  {
    m_firmwareUpdateRole = jsonValue.GetString("FirmwareUpdateRole");
    m_firmwareUpdateRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedundancyPercent"))
  {
    m_redundancyPercent = jsonValue.GetInteger("RedundancyPercent");
    m_redundancyPercentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FragmentSizeBytes"))
  {
    m_fragmentSizeBytes = jsonValue.GetInteger("FragmentSizeBytes");
    m_fragmentSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FragmentIntervalMS"))
  {
    m_fragmentIntervalMS = jsonValue.GetInteger("FragmentIntervalMS");
    m_fragmentIntervalMSHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Descriptor"))
  {
    m_descriptor = jsonValue.GetString("Descriptor");
    m_descriptorHasBeenSet = true;
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
