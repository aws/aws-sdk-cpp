/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetOrganizationConformancePackDetailedStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOrganizationConformancePackDetailedStatusResult::GetOrganizationConformancePackDetailedStatusResult()
{
}

GetOrganizationConformancePackDetailedStatusResult::GetOrganizationConformancePackDetailedStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOrganizationConformancePackDetailedStatusResult& GetOrganizationConformancePackDetailedStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationConformancePackDetailedStatuses"))
  {
    Aws::Utils::Array<JsonView> organizationConformancePackDetailedStatusesJsonList = jsonValue.GetArray("OrganizationConformancePackDetailedStatuses");
    for(unsigned organizationConformancePackDetailedStatusesIndex = 0; organizationConformancePackDetailedStatusesIndex < organizationConformancePackDetailedStatusesJsonList.GetLength(); ++organizationConformancePackDetailedStatusesIndex)
    {
      m_organizationConformancePackDetailedStatuses.push_back(organizationConformancePackDetailedStatusesJsonList[organizationConformancePackDetailedStatusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
