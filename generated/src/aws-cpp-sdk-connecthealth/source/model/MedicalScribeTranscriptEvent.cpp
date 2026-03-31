/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeTranscriptEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribeTranscriptEvent::MedicalScribeTranscriptEvent(JsonView jsonValue) { *this = jsonValue; }

MedicalScribeTranscriptEvent& MedicalScribeTranscriptEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("transcriptSegment")) {
    m_transcriptSegment = jsonValue.GetObject("transcriptSegment");
    m_transcriptSegmentHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeTranscriptEvent::Jsonize() const {
  JsonValue payload;

  if (m_transcriptSegmentHasBeenSet) {
    payload.WithObject("transcriptSegment", m_transcriptSegment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
