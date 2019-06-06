/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> findingIdsJsonList(m_findingIds.size());
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




