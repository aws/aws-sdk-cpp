/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CancelMaintenanceWindowExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelMaintenanceWindowExecutionResult::CancelMaintenanceWindowExecutionResult()
{
}

CancelMaintenanceWindowExecutionResult::CancelMaintenanceWindowExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelMaintenanceWindowExecutionResult& CancelMaintenanceWindowExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowExecutionId"))
  {
    m_windowExecutionId = jsonValue.GetString("WindowExecutionId");

  }



  return *this;
}
