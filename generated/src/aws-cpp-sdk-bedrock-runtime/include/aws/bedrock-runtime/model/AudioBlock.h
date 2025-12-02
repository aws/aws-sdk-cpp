/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/AudioFormat.h>
#include <aws/bedrock-runtime/model/AudioSource.h>
#include <aws/bedrock-runtime/model/ErrorBlock.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>An audio content block that contains audio data in various supported
 * formats.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/AudioBlock">AWS
 * API Reference</a></p>
 */
class AudioBlock {
 public:
  AWS_BEDROCKRUNTIME_API AudioBlock() = default;
  AWS_BEDROCKRUNTIME_API AudioBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API AudioBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of the audio data, such as MP3, WAV, FLAC, or other supported
   * audio formats.</p>
   */
  inline AudioFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(AudioFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline AudioBlock& WithFormat(AudioFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the audio data, which can be provided as raw bytes or an S3
   * location.</p>
   */
  inline const AudioSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = AudioSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = AudioSource>
  AudioBlock& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information if the audio block could not be processed or contains
   * invalid data.</p>
   */
  inline const ErrorBlock& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ErrorBlock>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorBlock>
  AudioBlock& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  AudioFormat m_format{AudioFormat::NOT_SET};
  bool m_formatHasBeenSet = false;

  AudioSource m_source;
  bool m_sourceHasBeenSet = false;

  ErrorBlock m_error;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
