/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateGatewayCapabilityConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateGatewayCapabilityConfigurationResult::UpdateGatewayCapabilityConfigurationResult() : 
    m_capabilitySyncStatus(CapabilitySyncStatus::NOT_SET)
{
}

UpdateGatewayCapabilityConfigurationResult::UpdateGatewayCapabilityConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_capabilitySyncStatus(CapabilitySyncStatus::NOT_SET)
{
  *this = result;
}

UpdateGatewayCapabilityConfigurationResult& UpdateGatewayCapabilityConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("capabilityNamespace"))
  {
    m_capabilityNamespace = jsonValue.GetString("capabilityNamespace");

  }

  if(jsonValue.ValueExists("capabilitySyncStatus"))
  {
    m_capabilitySyncStatus = CapabilitySyncStatusMapper::GetCapabilitySyncStatusForName(jsonValue.GetString("capabilitySyncStatus"));

  }



  return *this;
}
