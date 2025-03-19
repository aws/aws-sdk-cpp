/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListCommitmentPurchaseAnalysesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCommitmentPurchaseAnalysesResult::ListCommitmentPurchaseAnalysesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCommitmentPurchaseAnalysesResult& ListCommitmentPurchaseAnalysesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnalysisSummaryList"))
  {
    Aws::Utils::Array<JsonView> analysisSummaryListJsonList = jsonValue.GetArray("AnalysisSummaryList");
    for(unsigned analysisSummaryListIndex = 0; analysisSummaryListIndex < analysisSummaryListJsonList.GetLength(); ++analysisSummaryListIndex)
    {
      m_analysisSummaryList.push_back(analysisSummaryListJsonList[analysisSummaryListIndex].AsObject());
    }
    m_analysisSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");
    m_nextPageTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
