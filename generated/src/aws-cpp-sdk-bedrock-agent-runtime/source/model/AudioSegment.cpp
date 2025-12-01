/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AudioSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AudioSegment::AudioSegment(JsonView jsonValue) { *this = jsonValue; }

AudioSegment& AudioSegment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Uri")) {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transcription")) {
    m_transcription = jsonValue.GetString("transcription");
    m_transcriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioSegment::Jsonize() const {
  JsonValue payload;

  if (m_s3UriHasBeenSet) {
    payload.WithString("s3Uri", m_s3Uri);
  }

  if (m_transcriptionHasBeenSet) {
    payload.WithString("transcription", m_transcription);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
