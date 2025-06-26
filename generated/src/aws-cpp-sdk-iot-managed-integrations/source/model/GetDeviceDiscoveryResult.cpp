/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetDeviceDiscoveryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeviceDiscoveryResult::GetDeviceDiscoveryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeviceDiscoveryResult& GetDeviceDiscoveryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiscoveryType"))
  {
    m_discoveryType = DiscoveryTypeMapper::GetDiscoveryTypeForName(jsonValue.GetString("DiscoveryType"));
    m_discoveryTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DeviceDiscoveryStatusMapper::GetDeviceDiscoveryStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ControllerId"))
  {
    m_controllerId = jsonValue.GetString("ControllerId");
    m_controllerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountAssociationId"))
  {
    m_accountAssociationId = jsonValue.GetString("AccountAssociationId");
    m_accountAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FinishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("FinishedAt");
    m_finishedAtHasBeenSet = true;
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
