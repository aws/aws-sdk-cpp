/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/PutFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutFeedbackRequest::PutFeedbackRequest() : 
    m_insightFeedbackHasBeenSet(false)
{
}

Aws::String PutFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_insightFeedbackHasBeenSet)
  {
   payload.WithObject("InsightFeedback", m_insightFeedback.Jsonize());

  }

  return payload.View().WriteReadable();
}




