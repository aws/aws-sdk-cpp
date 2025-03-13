/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCommitmentPurchaseAnalysisResult.h>
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

GetCommitmentPurchaseAnalysisResult::GetCommitmentPurchaseAnalysisResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCommitmentPurchaseAnalysisResult& GetCommitmentPurchaseAnalysisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EstimatedCompletionTime"))
  {
    m_estimatedCompletionTime = jsonValue.GetString("EstimatedCompletionTime");
    m_estimatedCompletionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnalysisCompletionTime"))
  {
    m_analysisCompletionTime = jsonValue.GetString("AnalysisCompletionTime");
    m_analysisCompletionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnalysisStartedTime"))
  {
    m_analysisStartedTime = jsonValue.GetString("AnalysisStartedTime");
    m_analysisStartedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnalysisId"))
  {
    m_analysisId = jsonValue.GetString("AnalysisId");
    m_analysisIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnalysisStatus"))
  {
    m_analysisStatus = AnalysisStatusMapper::GetAnalysisStatusForName(jsonValue.GetString("AnalysisStatus"));
    m_analysisStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("ErrorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnalysisDetails"))
  {
    m_analysisDetails = jsonValue.GetObject("AnalysisDetails");
    m_analysisDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommitmentPurchaseAnalysisConfiguration"))
  {
    m_commitmentPurchaseAnalysisConfiguration = jsonValue.GetObject("CommitmentPurchaseAnalysisConfiguration");
    m_commitmentPurchaseAnalysisConfigurationHasBeenSet = true;
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
