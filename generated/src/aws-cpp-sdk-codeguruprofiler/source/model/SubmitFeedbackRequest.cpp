/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/SubmitFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SubmitFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FeedbackTypeMapper::GetNameForFeedbackType(m_type));
  }

  return payload.View().WriteReadable();
}




