﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StartDetectMitigationActionsTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartDetectMitigationActionsTaskResult::StartDetectMitigationActionsTaskResult()
{
}

StartDetectMitigationActionsTaskResult::StartDetectMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartDetectMitigationActionsTaskResult& StartDetectMitigationActionsTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

  }



  return *this;
}
