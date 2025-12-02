/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ImageFormat.h>

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
 * <p>The initial event in a streaming image block that indicates the start of
 * image content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ImageBlockStart">AWS
 * API Reference</a></p>
 */
class ImageBlockStart {
 public:
  AWS_BEDROCKRUNTIME_API ImageBlockStart() = default;
  AWS_BEDROCKRUNTIME_API ImageBlockStart(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ImageBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of the image data that will be streamed in subsequent delta
   * events.</p>
   */
  inline ImageFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(ImageFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline ImageBlockStart& WithFormat(ImageFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}
 private:
  ImageFormat m_format{ImageFormat::NOT_SET};
  bool m_formatHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
