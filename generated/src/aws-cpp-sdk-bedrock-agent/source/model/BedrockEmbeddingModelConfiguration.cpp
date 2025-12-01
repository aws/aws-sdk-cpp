/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/BedrockEmbeddingModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

BedrockEmbeddingModelConfiguration::BedrockEmbeddingModelConfiguration(JsonView jsonValue) { *this = jsonValue; }

BedrockEmbeddingModelConfiguration& BedrockEmbeddingModelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dimensions")) {
    m_dimensions = jsonValue.GetInteger("dimensions");
    m_dimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("embeddingDataType")) {
    m_embeddingDataType = EmbeddingDataTypeMapper::GetEmbeddingDataTypeForName(jsonValue.GetString("embeddingDataType"));
    m_embeddingDataTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("audio")) {
    Aws::Utils::Array<JsonView> audioJsonList = jsonValue.GetArray("audio");
    for (unsigned audioIndex = 0; audioIndex < audioJsonList.GetLength(); ++audioIndex) {
      m_audio.push_back(audioJsonList[audioIndex].AsObject());
    }
    m_audioHasBeenSet = true;
  }
  if (jsonValue.ValueExists("video")) {
    Aws::Utils::Array<JsonView> videoJsonList = jsonValue.GetArray("video");
    for (unsigned videoIndex = 0; videoIndex < videoJsonList.GetLength(); ++videoIndex) {
      m_video.push_back(videoJsonList[videoIndex].AsObject());
    }
    m_videoHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockEmbeddingModelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dimensionsHasBeenSet) {
    payload.WithInteger("dimensions", m_dimensions);
  }

  if (m_embeddingDataTypeHasBeenSet) {
    payload.WithString("embeddingDataType", EmbeddingDataTypeMapper::GetNameForEmbeddingDataType(m_embeddingDataType));
  }

  if (m_audioHasBeenSet) {
    Aws::Utils::Array<JsonValue> audioJsonList(m_audio.size());
    for (unsigned audioIndex = 0; audioIndex < audioJsonList.GetLength(); ++audioIndex) {
      audioJsonList[audioIndex].AsObject(m_audio[audioIndex].Jsonize());
    }
    payload.WithArray("audio", std::move(audioJsonList));
  }

  if (m_videoHasBeenSet) {
    Aws::Utils::Array<JsonValue> videoJsonList(m_video.size());
    for (unsigned videoIndex = 0; videoIndex < videoJsonList.GetLength(); ++videoIndex) {
      videoJsonList[videoIndex].AsObject(m_video[videoIndex].Jsonize());
    }
    payload.WithArray("video", std::move(videoJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
