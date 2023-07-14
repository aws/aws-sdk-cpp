/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/model/CreateHomeRegionControlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateHomeRegionControlResult::CreateHomeRegionControlResult()
{
}

CreateHomeRegionControlResult::CreateHomeRegionControlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateHomeRegionControlResult& CreateHomeRegionControlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HomeRegionControl"))
  {
    m_homeRegionControl = jsonValue.GetObject("HomeRegionControl");

  }



  return *this;
}
