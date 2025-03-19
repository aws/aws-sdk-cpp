/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSegmentPostContactSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RealTimeContactAnalysisSegmentPostContactSummary::RealTimeContactAnalysisSegmentPostContactSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RealTimeContactAnalysisSegmentPostContactSummary& RealTimeContactAnalysisSegmentPostContactSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = RealTimeContactAnalysisPostContactSummaryStatusMapper::GetRealTimeContactAnalysisPostContactSummaryStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureCode"))
  {
    m_failureCode = RealTimeContactAnalysisPostContactSummaryFailureCodeMapper::GetRealTimeContactAnalysisPostContactSummaryFailureCodeForName(jsonValue.GetString("FailureCode"));
    m_failureCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue RealTimeContactAnalysisSegmentPostContactSummary::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RealTimeContactAnalysisPostContactSummaryStatusMapper::GetNameForRealTimeContactAnalysisPostContactSummaryStatus(m_status));
  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("FailureCode", RealTimeContactAnalysisPostContactSummaryFailureCodeMapper::GetNameForRealTimeContactAnalysisPostContactSummaryFailureCode(m_failureCode));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
