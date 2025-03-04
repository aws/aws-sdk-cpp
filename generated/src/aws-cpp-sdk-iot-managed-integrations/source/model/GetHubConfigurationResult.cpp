/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetHubConfigurationResult.h>
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

GetHubConfigurationResult::GetHubConfigurationResult() : 
    m_hubTokenTimerExpirySettingInSeconds(0)
{
}

GetHubConfigurationResult::GetHubConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetHubConfigurationResult()
{
  *this = result;
}

GetHubConfigurationResult& GetHubConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubTokenTimerExpirySettingInSeconds"))
  {
    m_hubTokenTimerExpirySettingInSeconds = jsonValue.GetInt64("HubTokenTimerExpirySettingInSeconds");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
