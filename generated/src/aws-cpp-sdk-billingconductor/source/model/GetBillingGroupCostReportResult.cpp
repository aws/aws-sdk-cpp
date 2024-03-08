/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/GetBillingGroupCostReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBillingGroupCostReportResult::GetBillingGroupCostReportResult()
{
}

GetBillingGroupCostReportResult::GetBillingGroupCostReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBillingGroupCostReportResult& GetBillingGroupCostReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BillingGroupCostReportResults"))
  {
    Aws::Utils::Array<JsonView> billingGroupCostReportResultsJsonList = jsonValue.GetArray("BillingGroupCostReportResults");
    for(unsigned billingGroupCostReportResultsIndex = 0; billingGroupCostReportResultsIndex < billingGroupCostReportResultsJsonList.GetLength(); ++billingGroupCostReportResultsIndex)
    {
      m_billingGroupCostReportResults.push_back(billingGroupCostReportResultsJsonList[billingGroupCostReportResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
