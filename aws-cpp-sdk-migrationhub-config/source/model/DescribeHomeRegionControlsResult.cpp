/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/model/DescribeHomeRegionControlsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHomeRegionControlsResult::DescribeHomeRegionControlsResult()
{
}

DescribeHomeRegionControlsResult::DescribeHomeRegionControlsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeHomeRegionControlsResult& DescribeHomeRegionControlsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HomeRegionControls"))
  {
    Aws::Utils::Array<JsonView> homeRegionControlsJsonList = jsonValue.GetArray("HomeRegionControls");
    for(unsigned homeRegionControlsIndex = 0; homeRegionControlsIndex < homeRegionControlsJsonList.GetLength(); ++homeRegionControlsIndex)
    {
      m_homeRegionControls.push_back(homeRegionControlsJsonList[homeRegionControlsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
