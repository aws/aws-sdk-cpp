/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealtimeContactAnalysisSegment.h>
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

RealtimeContactAnalysisSegment::RealtimeContactAnalysisSegment() : 
    m_transcriptHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_issuesHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_attachmentsHasBeenSet(false)
{
}

RealtimeContactAnalysisSegment::RealtimeContactAnalysisSegment(JsonView jsonValue) : 
    m_transcriptHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_issuesHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_attachmentsHasBeenSet(false)
{
  *this = jsonValue;
}

RealtimeContactAnalysisSegment& RealtimeContactAnalysisSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetObject("Transcript");

    m_transcriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Categories"))
  {
    m_categories = jsonValue.GetObject("Categories");

    m_categoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Issues"))
  {
    m_issues = jsonValue.GetObject("Issues");

    m_issuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Event"))
  {
    m_event = jsonValue.GetObject("Event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attachments"))
  {
    m_attachments = jsonValue.GetObject("Attachments");

    m_attachmentsHasBeenSet = true;
  }

  return *this;
}

JsonValue RealtimeContactAnalysisSegment::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptHasBeenSet)
  {
   payload.WithObject("Transcript", m_transcript.Jsonize());

  }

  if(m_categoriesHasBeenSet)
  {
   payload.WithObject("Categories", m_categories.Jsonize());

  }

  if(m_issuesHasBeenSet)
  {
   payload.WithObject("Issues", m_issues.Jsonize());

  }

  if(m_eventHasBeenSet)
  {
   payload.WithObject("Event", m_event.Jsonize());

  }

  if(m_attachmentsHasBeenSet)
  {
   payload.WithObject("Attachments", m_attachments.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
