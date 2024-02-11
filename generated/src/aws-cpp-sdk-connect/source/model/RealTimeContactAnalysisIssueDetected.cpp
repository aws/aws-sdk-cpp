/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisIssueDetected.h>
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

RealTimeContactAnalysisIssueDetected::RealTimeContactAnalysisIssueDetected() : 
    m_transcriptItemsHasBeenSet(false)
{
}

RealTimeContactAnalysisIssueDetected::RealTimeContactAnalysisIssueDetected(JsonView jsonValue) : 
    m_transcriptItemsHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisIssueDetected& RealTimeContactAnalysisIssueDetected::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptItems"))
  {
    Aws::Utils::Array<JsonView> transcriptItemsJsonList = jsonValue.GetArray("TranscriptItems");
    for(unsigned transcriptItemsIndex = 0; transcriptItemsIndex < transcriptItemsJsonList.GetLength(); ++transcriptItemsIndex)
    {
      m_transcriptItems.push_back(transcriptItemsJsonList[transcriptItemsIndex].AsObject());
    }
    m_transcriptItemsHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisIssueDetected::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transcriptItemsJsonList(m_transcriptItems.size());
   for(unsigned transcriptItemsIndex = 0; transcriptItemsIndex < transcriptItemsJsonList.GetLength(); ++transcriptItemsIndex)
   {
     transcriptItemsJsonList[transcriptItemsIndex].AsObject(m_transcriptItems[transcriptItemsIndex].Jsonize());
   }
   payload.WithArray("TranscriptItems", std::move(transcriptItemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
