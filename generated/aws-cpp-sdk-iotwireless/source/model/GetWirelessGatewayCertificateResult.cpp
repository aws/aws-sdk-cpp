﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessGatewayCertificateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWirelessGatewayCertificateResult::GetWirelessGatewayCertificateResult()
{
}

GetWirelessGatewayCertificateResult::GetWirelessGatewayCertificateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWirelessGatewayCertificateResult& GetWirelessGatewayCertificateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IotCertificateId"))
  {
    m_iotCertificateId = jsonValue.GetString("IotCertificateId");

  }

  if(jsonValue.ValueExists("LoRaWANNetworkServerCertificateId"))
  {
    m_loRaWANNetworkServerCertificateId = jsonValue.GetString("LoRaWANNetworkServerCertificateId");

  }



  return *this;
}
