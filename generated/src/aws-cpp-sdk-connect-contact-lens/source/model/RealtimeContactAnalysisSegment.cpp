/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/RealtimeContactAnalysisSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectContactLens
{
namespace Model
{

RealtimeContactAnalysisSegment::RealtimeContactAnalysisSegment(JsonView jsonValue)
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
  if(jsonValue.ValueExists("PostContactSummary"))
  {
    m_postContactSummary = jsonValue.GetObject("PostContactSummary");
    m_postContactSummaryHasBeenSet = true;
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

  if(m_postContactSummaryHasBeenSet)
  {
   payload.WithObject("PostContactSummary", m_postContactSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
