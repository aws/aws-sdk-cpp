/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ApplyPendingMaintenanceActionResult::ApplyPendingMaintenanceActionResult()
{
}

ApplyPendingMaintenanceActionResult::ApplyPendingMaintenanceActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ApplyPendingMaintenanceActionResult& ApplyPendingMaintenanceActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourcePendingMaintenanceActions"))
  {
    m_resourcePendingMaintenanceActions = jsonValue.GetObject("ResourcePendingMaintenanceActions");

  }



  return *this;
}
