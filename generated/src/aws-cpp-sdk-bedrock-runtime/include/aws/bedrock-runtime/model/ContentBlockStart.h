/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ImageBlockStart.h>
#include <aws/bedrock-runtime/model/ToolResultBlockStart.h>
#include <aws/bedrock-runtime/model/ToolUseBlockStart.h>

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
 * <p>Content block start information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ContentBlockStart">AWS
 * API Reference</a></p>
 */
class ContentBlockStart {
 public:
  AWS_BEDROCKRUNTIME_API ContentBlockStart() = default;
  AWS_BEDROCKRUNTIME_API ContentBlockStart(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ContentBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about a tool that the model is requesting to use.</p>
   */
  inline const ToolUseBlockStart& GetToolUse() const { return m_toolUse; }
  inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
  template <typename ToolUseT = ToolUseBlockStart>
  void SetToolUse(ToolUseT&& value) {
    m_toolUseHasBeenSet = true;
    m_toolUse = std::forward<ToolUseT>(value);
  }
  template <typename ToolUseT = ToolUseBlockStart>
  ContentBlockStart& WithToolUse(ToolUseT&& value) {
    SetToolUse(std::forward<ToolUseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The </p>
   */
  inline const ToolResultBlockStart& GetToolResult() const { return m_toolResult; }
  inline bool ToolResultHasBeenSet() const { return m_toolResultHasBeenSet; }
  template <typename ToolResultT = ToolResultBlockStart>
  void SetToolResult(ToolResultT&& value) {
    m_toolResultHasBeenSet = true;
    m_toolResult = std::forward<ToolResultT>(value);
  }
  template <typename ToolResultT = ToolResultBlockStart>
  ContentBlockStart& WithToolResult(ToolResultT&& value) {
    SetToolResult(std::forward<ToolResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial event indicating the start of a streaming image block.</p>
   */
  inline const ImageBlockStart& GetImage() const { return m_image; }
  inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
  template <typename ImageT = ImageBlockStart>
  void SetImage(ImageT&& value) {
    m_imageHasBeenSet = true;
    m_image = std::forward<ImageT>(value);
  }
  template <typename ImageT = ImageBlockStart>
  ContentBlockStart& WithImage(ImageT&& value) {
    SetImage(std::forward<ImageT>(value));
    return *this;
  }
  ///@}
 private:
  ToolUseBlockStart m_toolUse;
  bool m_toolUseHasBeenSet = false;

  ToolResultBlockStart m_toolResult;
  bool m_toolResultHasBeenSet = false;

  ImageBlockStart m_image;
  bool m_imageHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
