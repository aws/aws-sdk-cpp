/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSegmentIssues.h>
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

RealTimeContactAnalysisSegmentIssues::RealTimeContactAnalysisSegmentIssues() : 
    m_issuesDetectedHasBeenSet(false)
{
}

RealTimeContactAnalysisSegmentIssues::RealTimeContactAnalysisSegmentIssues(JsonView jsonValue) : 
    m_issuesDetectedHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisSegmentIssues& RealTimeContactAnalysisSegmentIssues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IssuesDetected"))
  {
    Aws::Utils::Array<JsonView> issuesDetectedJsonList = jsonValue.GetArray("IssuesDetected");
    for(unsigned issuesDetectedIndex = 0; issuesDetectedIndex < issuesDetectedJsonList.GetLength(); ++issuesDetectedIndex)
    {
      m_issuesDetected.push_back(issuesDetectedJsonList[issuesDetectedIndex].AsObject());
    }
    m_issuesDetectedHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisSegmentIssues::Jsonize() const
{
  JsonValue payload;

  if(m_issuesDetectedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> issuesDetectedJsonList(m_issuesDetected.size());
   for(unsigned issuesDetectedIndex = 0; issuesDetectedIndex < issuesDetectedJsonList.GetLength(); ++issuesDetectedIndex)
   {
     issuesDetectedJsonList[issuesDetectedIndex].AsObject(m_issuesDetected[issuesDetectedIndex].Jsonize());
   }
   payload.WithArray("IssuesDetected", std::move(issuesDetectedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
