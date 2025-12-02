/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ErrorBlock.h>
#include <aws/bedrock-runtime/model/ImageFormat.h>
#include <aws/bedrock-runtime/model/ImageSource.h>

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
 * <p>Image content for a message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ImageBlock">AWS
 * API Reference</a></p>
 */
class ImageBlock {
 public:
  AWS_BEDROCKRUNTIME_API ImageBlock() = default;
  AWS_BEDROCKRUNTIME_API ImageBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ImageBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of the image.</p>
   */
  inline ImageFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(ImageFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline ImageBlock& WithFormat(ImageFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source for the image.</p>
   */
  inline const ImageSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = ImageSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = ImageSource>
  ImageBlock& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information if the image block could not be processed or contains
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
  ImageBlock& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  ImageFormat m_format{ImageFormat::NOT_SET};
  bool m_formatHasBeenSet = false;

  ImageSource m_source;
  bool m_sourceHasBeenSet = false;

  ErrorBlock m_error;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
