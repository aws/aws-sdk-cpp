/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UpdateFindingsFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFindingsFeedbackRequest::UpdateFindingsFeedbackRequest() : 
    m_detectorIdHasBeenSet(false),
    m_findingIdsHasBeenSet(false),
    m_feedback(Feedback::NOT_SET),
    m_feedbackHasBeenSet(false),
    m_commentsHasBeenSet(false)
{
}

Aws::String UpdateFindingsFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingIdsJsonList(m_findingIds.size());
   for(unsigned findingIdsIndex = 0; findingIdsIndex < findingIdsJsonList.GetLength(); ++findingIdsIndex)
   {
     findingIdsJsonList[findingIdsIndex].AsString(m_findingIds[findingIdsIndex]);
   }
   payload.WithArray("findingIds", std::move(findingIdsJsonList));

  }

  if(m_feedbackHasBeenSet)
  {
   payload.WithString("feedback", FeedbackMapper::GetNameForFeedback(m_feedback));
  }

  if(m_commentsHasBeenSet)
  {
   payload.WithString("comments", m_comments);

  }

  return payload.View().WriteReadable();
}




