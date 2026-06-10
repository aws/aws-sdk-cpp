/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/Array.h>

#include <utility>

namespace Aws {
namespace ConnectHealth {
namespace Model {
/**
 * <p>An event containing raw binary audio data for the Medical Scribe stream. The
 * audio is sent as a raw binary payload rather than as a base64-encoded
 * value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeBinaryAudioEvent">AWS
 * API Reference</a></p>
 */
class MedicalScribeBinaryAudioEvent {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeBinaryAudioEvent() = default;
  AWS_CONNECTHEALTH_API MedicalScribeBinaryAudioEvent(Aws::Vector<unsigned char>&& value) { m_audioChunk = std::move(value); }

  ///@{
  /**
   * <p>The raw binary audio data chunk</p>
   */
  inline const Aws::Vector<unsigned char>& GetAudioChunk() const { return m_audioChunk; }
  inline Aws::Vector<unsigned char>&& GetAudioChunkWithOwnership() { return std::move(m_audioChunk); }
  inline void SetAudioChunk(const Aws::Vector<unsigned char>& value) {
    m_audioChunkHasBeenSet = true;
    m_audioChunk = value;
  }
  inline void SetAudioChunk(Aws::Vector<unsigned char>&& value) {
    m_audioChunkHasBeenSet = true;
    m_audioChunk = std::move(value);
  }
  inline MedicalScribeBinaryAudioEvent& WithAudioChunk(const Aws::Vector<unsigned char>& value) {
    SetAudioChunk(value);
    return *this;
  }
  inline MedicalScribeBinaryAudioEvent& WithAudioChunk(Aws::Vector<unsigned char>&& value) {
    SetAudioChunk(std::move(value));
    return *this;
  }
  ///@}

 private:
  Aws::Vector<unsigned char> m_audioChunk;
  bool m_audioChunkHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
