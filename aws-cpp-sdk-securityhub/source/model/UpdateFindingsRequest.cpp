/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFindingsRequest::UpdateFindingsRequest() : 
    m_filtersHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_recordState(RecordState::NOT_SET),
    m_recordStateHasBeenSet(false)
{
}

Aws::String UpdateFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_noteHasBeenSet)
  {
   payload.WithObject("Note", m_note.Jsonize());

  }

  if(m_recordStateHasBeenSet)
  {
   payload.WithString("RecordState", RecordStateMapper::GetNameForRecordState(m_recordState));
  }

  return payload.View().WriteReadable();
}




