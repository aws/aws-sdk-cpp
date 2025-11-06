/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationTranscriptPointOfInterest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationTranscriptPointOfInterest::EvaluationTranscriptPointOfInterest(JsonView jsonValue) { *this = jsonValue; }

EvaluationTranscriptPointOfInterest& EvaluationTranscriptPointOfInterest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MillisecondOffsets")) {
    m_millisecondOffsets = jsonValue.GetObject("MillisecondOffsets");
    m_millisecondOffsetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TranscriptSegment")) {
    m_transcriptSegment = jsonValue.GetString("TranscriptSegment");
    m_transcriptSegmentHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationTranscriptPointOfInterest::Jsonize() const {
  JsonValue payload;

  if (m_millisecondOffsetsHasBeenSet) {
    payload.WithObject("MillisecondOffsets", m_millisecondOffsets.Jsonize());
  }

  if (m_transcriptSegmentHasBeenSet) {
    payload.WithString("TranscriptSegment", m_transcriptSegment);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
