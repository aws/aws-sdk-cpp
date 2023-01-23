﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/RemoveBackendConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RemoveBackendConfigResult::RemoveBackendConfigResult()
{
}

RemoveBackendConfigResult::RemoveBackendConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RemoveBackendConfigResult& RemoveBackendConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

  }



  return *this;
}
