/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeTranscriptSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribeTranscriptSegment::MedicalScribeTranscriptSegment(JsonView jsonValue) { *this = jsonValue; }

MedicalScribeTranscriptSegment& MedicalScribeTranscriptSegment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("segmentId")) {
    m_segmentId = jsonValue.GetString("segmentId");
    m_segmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("audioBeginOffset")) {
    m_audioBeginOffset = jsonValue.GetDouble("audioBeginOffset");
    m_audioBeginOffsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("audioEndOffset")) {
    m_audioEndOffset = jsonValue.GetDouble("audioEndOffset");
    m_audioEndOffsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isPartial")) {
    m_isPartial = jsonValue.GetBool("isPartial");
    m_isPartialHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channelId")) {
    m_channelId = jsonValue.GetString("channelId");
    m_channelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeTranscriptSegment::Jsonize() const {
  JsonValue payload;

  if (m_segmentIdHasBeenSet) {
    payload.WithString("segmentId", m_segmentId);
  }

  if (m_audioBeginOffsetHasBeenSet) {
    payload.WithDouble("audioBeginOffset", m_audioBeginOffset);
  }

  if (m_audioEndOffsetHasBeenSet) {
    payload.WithDouble("audioEndOffset", m_audioEndOffset);
  }

  if (m_isPartialHasBeenSet) {
    payload.WithBool("isPartial", m_isPartial);
  }

  if (m_channelIdHasBeenSet) {
    payload.WithString("channelId", m_channelId);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
