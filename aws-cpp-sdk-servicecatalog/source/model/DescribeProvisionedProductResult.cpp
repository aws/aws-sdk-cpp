/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeProvisionedProductResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProvisionedProductResult::DescribeProvisionedProductResult()
{
}

DescribeProvisionedProductResult::DescribeProvisionedProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProvisionedProductResult& DescribeProvisionedProductResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisionedProductDetail"))
  {
    m_provisionedProductDetail = jsonValue.GetObject("ProvisionedProductDetail");

  }

  if(jsonValue.ValueExists("CloudWatchDashboards"))
  {
    Aws::Utils::Array<JsonView> cloudWatchDashboardsJsonList = jsonValue.GetArray("CloudWatchDashboards");
    for(unsigned cloudWatchDashboardsIndex = 0; cloudWatchDashboardsIndex < cloudWatchDashboardsJsonList.GetLength(); ++cloudWatchDashboardsIndex)
    {
      m_cloudWatchDashboards.push_back(cloudWatchDashboardsJsonList[cloudWatchDashboardsIndex].AsObject());
    }
  }



  return *this;
}
