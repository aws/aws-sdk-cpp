/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetManagedThingCapabilitiesResult.h>
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

GetManagedThingCapabilitiesResult::GetManagedThingCapabilitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetManagedThingCapabilitiesResult& GetManagedThingCapabilitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ManagedThingId"))
  {
    m_managedThingId = jsonValue.GetString("ManagedThingId");
    m_managedThingIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetString("Capabilities");
    m_capabilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapabilityReport"))
  {
    m_capabilityReport = jsonValue.GetObject("CapabilityReport");
    m_capabilityReportHasBeenSet = true;
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
