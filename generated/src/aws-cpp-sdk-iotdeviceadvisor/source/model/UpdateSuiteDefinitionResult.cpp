/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSuiteDefinitionResult::UpdateSuiteDefinitionResult()
{
}

UpdateSuiteDefinitionResult::UpdateSuiteDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateSuiteDefinitionResult& UpdateSuiteDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("suiteDefinitionId"))
  {
    m_suiteDefinitionId = jsonValue.GetString("suiteDefinitionId");

  }

  if(jsonValue.ValueExists("suiteDefinitionArn"))
  {
    m_suiteDefinitionArn = jsonValue.GetString("suiteDefinitionArn");

  }

  if(jsonValue.ValueExists("suiteDefinitionName"))
  {
    m_suiteDefinitionName = jsonValue.GetString("suiteDefinitionName");

  }

  if(jsonValue.ValueExists("suiteDefinitionVersion"))
  {
    m_suiteDefinitionVersion = jsonValue.GetString("suiteDefinitionVersion");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
