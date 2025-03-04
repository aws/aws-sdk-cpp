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

GetDeviceDiscoveryResult::GetDeviceDiscoveryResult() : 
    m_discoveryType(DiscoveryType::NOT_SET),
    m_status(DeviceDiscoveryStatus::NOT_SET)
{
}

GetDeviceDiscoveryResult::GetDeviceDiscoveryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetDeviceDiscoveryResult()
{
  *this = result;
}

GetDeviceDiscoveryResult& GetDeviceDiscoveryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("DiscoveryType"))
  {
    m_discoveryType = DiscoveryTypeMapper::GetDiscoveryTypeForName(jsonValue.GetString("DiscoveryType"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DeviceDiscoveryStatusMapper::GetDeviceDiscoveryStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");

  }

  if(jsonValue.ValueExists("ControllerId"))
  {
    m_controllerId = jsonValue.GetString("ControllerId");

  }

  if(jsonValue.ValueExists("ConnectorAssociationId"))
  {
    m_connectorAssociationId = jsonValue.GetString("ConnectorAssociationId");

  }

  if(jsonValue.ValueExists("FinishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("FinishedAt");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
