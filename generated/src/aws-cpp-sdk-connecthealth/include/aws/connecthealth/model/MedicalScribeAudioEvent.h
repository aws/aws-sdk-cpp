/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/Array.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>An event containing audio data for the Medical Scribe stream</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeAudioEvent">AWS
 * API Reference</a></p>
 */
class MedicalScribeAudioEvent {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeAudioEvent() = default;
  AWS_CONNECTHEALTH_API MedicalScribeAudioEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeAudioEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The audio data chunk</p>
   */
  inline const Aws::Utils::ByteBuffer& GetAudioChunk() const { return m_audioChunk; }
  inline bool AudioChunkHasBeenSet() const { return m_audioChunkHasBeenSet; }
  template <typename AudioChunkT = Aws::Utils::ByteBuffer>
  void SetAudioChunk(AudioChunkT&& value) {
    m_audioChunkHasBeenSet = true;
    m_audioChunk = std::forward<AudioChunkT>(value);
  }
  template <typename AudioChunkT = Aws::Utils::ByteBuffer>
  MedicalScribeAudioEvent& WithAudioChunk(AudioChunkT&& value) {
    SetAudioChunk(std::forward<AudioChunkT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_audioChunk{};
  bool m_audioChunkHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
