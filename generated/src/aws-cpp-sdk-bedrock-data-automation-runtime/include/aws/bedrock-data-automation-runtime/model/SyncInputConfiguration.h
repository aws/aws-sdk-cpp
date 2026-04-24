/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomationRuntime {
namespace Model {

/**
 * <p>Input configuration for synchronous API</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/SyncInputConfiguration">AWS
 * API Reference</a></p>
 */
class SyncInputConfiguration {
 public:
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API SyncInputConfiguration() = default;
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API SyncInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API SyncInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Input data as bytes</p>
   */
  inline const Aws::Utils::ByteBuffer& GetBytes() const { return m_bytes; }
  inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
  template <typename BytesT = Aws::Utils::ByteBuffer>
  void SetBytes(BytesT&& value) {
    m_bytesHasBeenSet = true;
    m_bytes = std::forward<BytesT>(value);
  }
  template <typename BytesT = Aws::Utils::ByteBuffer>
  SyncInputConfiguration& WithBytes(BytesT&& value) {
    SetBytes(std::forward<BytesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>S3 URI of the input data</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  SyncInputConfiguration& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_bytes{};

  Aws::String m_s3Uri;
  bool m_bytesHasBeenSet = false;
  bool m_s3UriHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
