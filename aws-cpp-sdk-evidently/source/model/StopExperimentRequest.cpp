/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/StopExperimentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopExperimentRequest::StopExperimentRequest() : 
    m_desiredState(ExperimentStopDesiredState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_experimentHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Aws::String StopExperimentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("desiredState", ExperimentStopDesiredStateMapper::GetNameForExperimentStopDesiredState(m_desiredState));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload.View().WriteReadable();
}




