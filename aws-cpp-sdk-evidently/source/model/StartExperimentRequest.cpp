/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/StartExperimentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartExperimentRequest::StartExperimentRequest() : 
    m_analysisCompleteTimeHasBeenSet(false),
    m_experimentHasBeenSet(false),
    m_projectHasBeenSet(false)
{
}

Aws::String StartExperimentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analysisCompleteTimeHasBeenSet)
  {
   payload.WithDouble("analysisCompleteTime", m_analysisCompleteTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}




