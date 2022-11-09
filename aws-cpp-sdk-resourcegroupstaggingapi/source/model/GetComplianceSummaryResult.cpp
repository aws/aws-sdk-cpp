/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComplianceSummaryResult::GetComplianceSummaryResult()
{
}

GetComplianceSummaryResult::GetComplianceSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetComplianceSummaryResult& GetComplianceSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SummaryList"))
  {
    Aws::Utils::Array<JsonView> summaryListJsonList = jsonValue.GetArray("SummaryList");
    for(unsigned summaryListIndex = 0; summaryListIndex < summaryListJsonList.GetLength(); ++summaryListIndex)
    {
      m_summaryList.push_back(summaryListJsonList[summaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PaginationToken"))
  {
    m_paginationToken = jsonValue.GetString("PaginationToken");

  }



  return *this;
}
