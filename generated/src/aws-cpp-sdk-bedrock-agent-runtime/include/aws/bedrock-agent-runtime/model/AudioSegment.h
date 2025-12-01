/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Contains information about an audio segment retrieved from a knowledge base,
 * including its location and transcription.</p> <p>This data type is used in the
 * following API operations:</p> <ul> <li> <p> <a
 * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_ResponseSyntax">Retrieve
 * response</a> – in the <code>audio</code> field</p> </li> </ul><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AudioSegment">AWS
 * API Reference</a></p>
 */
class AudioSegment {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AudioSegment() = default;
  AWS_BEDROCKAGENTRUNTIME_API AudioSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AudioSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 URI where this specific audio segment is stored in the multimodal
   * storage destination.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  AudioSegment& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text transcription of the audio segment content.</p>
   */
  inline const Aws::String& GetTranscription() const { return m_transcription; }
  inline bool TranscriptionHasBeenSet() const { return m_transcriptionHasBeenSet; }
  template <typename TranscriptionT = Aws::String>
  void SetTranscription(TranscriptionT&& value) {
    m_transcriptionHasBeenSet = true;
    m_transcription = std::forward<TranscriptionT>(value);
  }
  template <typename TranscriptionT = Aws::String>
  AudioSegment& WithTranscription(TranscriptionT&& value) {
    SetTranscription(std::forward<TranscriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Uri;
  bool m_s3UriHasBeenSet = false;

  Aws::String m_transcription;
  bool m_transcriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
