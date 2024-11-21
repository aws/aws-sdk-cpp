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

GetCommitmentPurchaseAnalysisResult::GetCommitmentPurchaseAnalysisResult() : 
    m_analysisStatus(AnalysisStatus::NOT_SET),
    m_errorCode(ErrorCode::NOT_SET)
{
}

GetCommitmentPurchaseAnalysisResult::GetCommitmentPurchaseAnalysisResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetCommitmentPurchaseAnalysisResult()
{
  *this = result;
}

GetCommitmentPurchaseAnalysisResult& GetCommitmentPurchaseAnalysisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EstimatedCompletionTime"))
  {
    m_estimatedCompletionTime = jsonValue.GetString("EstimatedCompletionTime");

  }

  if(jsonValue.ValueExists("AnalysisCompletionTime"))
  {
    m_analysisCompletionTime = jsonValue.GetString("AnalysisCompletionTime");

  }

  if(jsonValue.ValueExists("AnalysisStartedTime"))
  {
    m_analysisStartedTime = jsonValue.GetString("AnalysisStartedTime");

  }

  if(jsonValue.ValueExists("AnalysisId"))
  {
    m_analysisId = jsonValue.GetString("AnalysisId");

  }

  if(jsonValue.ValueExists("AnalysisStatus"))
  {
    m_analysisStatus = AnalysisStatusMapper::GetAnalysisStatusForName(jsonValue.GetString("AnalysisStatus"));

  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("ErrorCode"));

  }

  if(jsonValue.ValueExists("AnalysisDetails"))
  {
    m_analysisDetails = jsonValue.GetObject("AnalysisDetails");

  }

  if(jsonValue.ValueExists("CommitmentPurchaseAnalysisConfiguration"))
  {
    m_commitmentPurchaseAnalysisConfiguration = jsonValue.GetObject("CommitmentPurchaseAnalysisConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
