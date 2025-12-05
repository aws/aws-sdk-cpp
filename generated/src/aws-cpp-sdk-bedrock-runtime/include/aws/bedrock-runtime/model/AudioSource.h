/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/S3Location.h>
#include <aws/core/utils/Array.h>

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
 * <p>The source of audio data, which can be provided either as raw bytes or a
 * reference to an S3 location.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/AudioSource">AWS
 * API Reference</a></p>
 */
class AudioSource {
 public:
  AWS_BEDROCKRUNTIME_API AudioSource() = default;
  AWS_BEDROCKRUNTIME_API AudioSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API AudioSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Audio data encoded in base64.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetBytes() const { return m_bytes; }
  inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
  template <typename BytesT = Aws::Utils::ByteBuffer>
  void SetBytes(BytesT&& value) {
    m_bytesHasBeenSet = true;
    m_bytes = std::forward<BytesT>(value);
  }
  template <typename BytesT = Aws::Utils::ByteBuffer>
  AudioSource& WithBytes(BytesT&& value) {
    SetBytes(std::forward<BytesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reference to audio data stored in an Amazon S3 bucket. To see which models
   * support S3 uploads, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/conversation-inference-supported-models-features.html">Supported
   * models and features for Converse</a>.</p>
   */
  inline const S3Location& GetS3Location() const { return m_s3Location; }
  inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
  template <typename S3LocationT = S3Location>
  void SetS3Location(S3LocationT&& value) {
    m_s3LocationHasBeenSet = true;
    m_s3Location = std::forward<S3LocationT>(value);
  }
  template <typename S3LocationT = S3Location>
  AudioSource& WithS3Location(S3LocationT&& value) {
    SetS3Location(std::forward<S3LocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_bytes{};

  S3Location m_s3Location;
  bool m_bytesHasBeenSet = false;
  bool m_s3LocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
