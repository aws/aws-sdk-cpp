/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/GetBackendResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBackendResult::GetBackendResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBackendResult& GetBackendResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("amplifyFeatureFlags"))
  {
    m_amplifyFeatureFlags = jsonValue.GetString("amplifyFeatureFlags");
    m_amplifyFeatureFlagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("amplifyMetaConfig"))
  {
    m_amplifyMetaConfig = jsonValue.GetString("amplifyMetaConfig");
    m_amplifyMetaConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appName"))
  {
    m_appName = jsonValue.GetString("appName");
    m_appNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backendEnvironmentList"))
  {
    Aws::Utils::Array<JsonView> backendEnvironmentListJsonList = jsonValue.GetArray("backendEnvironmentList");
    for(unsigned backendEnvironmentListIndex = 0; backendEnvironmentListIndex < backendEnvironmentListJsonList.GetLength(); ++backendEnvironmentListIndex)
    {
      m_backendEnvironmentList.push_back(backendEnvironmentListJsonList[backendEnvironmentListIndex].AsString());
    }
    m_backendEnvironmentListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backendEnvironmentName"))
  {
    m_backendEnvironmentName = jsonValue.GetString("backendEnvironmentName");
    m_backendEnvironmentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
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
