/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnalysisSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

AnalysisSummary::AnalysisSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisSummary& AnalysisSummary::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("AnalysisId"))
  {
    m_analysisId = jsonValue.GetString("AnalysisId");
    m_analysisIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommitmentPurchaseAnalysisConfiguration"))
  {
    m_commitmentPurchaseAnalysisConfiguration = jsonValue.GetObject("CommitmentPurchaseAnalysisConfiguration");
    m_commitmentPurchaseAnalysisConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisSummary::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedCompletionTimeHasBeenSet)
  {
   payload.WithString("EstimatedCompletionTime", m_estimatedCompletionTime);

  }

  if(m_analysisCompletionTimeHasBeenSet)
  {
   payload.WithString("AnalysisCompletionTime", m_analysisCompletionTime);

  }

  if(m_analysisStartedTimeHasBeenSet)
  {
   payload.WithString("AnalysisStartedTime", m_analysisStartedTime);

  }

  if(m_analysisStatusHasBeenSet)
  {
   payload.WithString("AnalysisStatus", AnalysisStatusMapper::GetNameForAnalysisStatus(m_analysisStatus));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  if(m_analysisIdHasBeenSet)
  {
   payload.WithString("AnalysisId", m_analysisId);

  }

  if(m_commitmentPurchaseAnalysisConfigurationHasBeenSet)
  {
   payload.WithObject("CommitmentPurchaseAnalysisConfiguration", m_commitmentPurchaseAnalysisConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
