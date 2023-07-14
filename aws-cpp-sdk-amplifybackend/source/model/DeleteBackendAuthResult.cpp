﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/DeleteBackendAuthResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteBackendAuthResult::DeleteBackendAuthResult()
{
}

DeleteBackendAuthResult::DeleteBackendAuthResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteBackendAuthResult& DeleteBackendAuthResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

  }

  if(jsonValue.ValueExists("backendEnvironmentName"))
  {
    m_backendEnvironmentName = jsonValue.GetString("backendEnvironmentName");

  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

  }

  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetString("operation");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

  }



  return *this;
}
