/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetComplianceSummaryByResourceTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComplianceSummaryByResourceTypeResult::GetComplianceSummaryByResourceTypeResult()
{
}

GetComplianceSummaryByResourceTypeResult::GetComplianceSummaryByResourceTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetComplianceSummaryByResourceTypeResult& GetComplianceSummaryByResourceTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComplianceSummariesByResourceType"))
  {
    Aws::Utils::Array<JsonView> complianceSummariesByResourceTypeJsonList = jsonValue.GetArray("ComplianceSummariesByResourceType");
    for(unsigned complianceSummariesByResourceTypeIndex = 0; complianceSummariesByResourceTypeIndex < complianceSummariesByResourceTypeJsonList.GetLength(); ++complianceSummariesByResourceTypeIndex)
    {
      m_complianceSummariesByResourceType.push_back(complianceSummariesByResourceTypeJsonList[complianceSummariesByResourceTypeIndex].AsObject());
    }
  }



  return *this;
}
