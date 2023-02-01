/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeOrganizationConformancePacksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationConformancePacksResult::DescribeOrganizationConformancePacksResult()
{
}

DescribeOrganizationConformancePacksResult::DescribeOrganizationConformancePacksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOrganizationConformancePacksResult& DescribeOrganizationConformancePacksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationConformancePacks"))
  {
    Aws::Utils::Array<JsonView> organizationConformancePacksJsonList = jsonValue.GetArray("OrganizationConformancePacks");
    for(unsigned organizationConformancePacksIndex = 0; organizationConformancePacksIndex < organizationConformancePacksJsonList.GetLength(); ++organizationConformancePacksIndex)
    {
      m_organizationConformancePacks.push_back(organizationConformancePacksJsonList[organizationConformancePacksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
