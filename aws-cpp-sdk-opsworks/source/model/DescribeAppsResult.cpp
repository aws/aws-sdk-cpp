/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeAppsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAppsResult::DescribeAppsResult()
{
}

DescribeAppsResult::DescribeAppsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAppsResult& DescribeAppsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Apps"))
  {
    Aws::Utils::Array<JsonView> appsJsonList = jsonValue.GetArray("Apps");
    for(unsigned appsIndex = 0; appsIndex < appsJsonList.GetLength(); ++appsIndex)
    {
      m_apps.push_back(appsJsonList[appsIndex].AsObject());
    }
  }



  return *this;
}
