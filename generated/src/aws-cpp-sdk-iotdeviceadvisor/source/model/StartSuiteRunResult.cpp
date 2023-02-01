/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/StartSuiteRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartSuiteRunResult::StartSuiteRunResult()
{
}

StartSuiteRunResult::StartSuiteRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartSuiteRunResult& StartSuiteRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("suiteRunId"))
  {
    m_suiteRunId = jsonValue.GetString("suiteRunId");

  }

  if(jsonValue.ValueExists("suiteRunArn"))
  {
    m_suiteRunArn = jsonValue.GetString("suiteRunArn");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

  }



  return *this;
}
