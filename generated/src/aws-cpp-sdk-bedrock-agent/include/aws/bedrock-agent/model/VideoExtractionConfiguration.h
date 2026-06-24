/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/EnabledOrDisabledState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>Configuration for video extraction.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/VideoExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class VideoExtractionConfiguration {
 public:
  AWS_BEDROCKAGENT_API VideoExtractionConfiguration() = default;
  AWS_BEDROCKAGENT_API VideoExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API VideoExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether video extraction is enabled or disabled.</p>
   */
  inline EnabledOrDisabledState GetVideoExtractionStatus() const { return m_videoExtractionStatus; }
  inline bool VideoExtractionStatusHasBeenSet() const { return m_videoExtractionStatusHasBeenSet; }
  inline void SetVideoExtractionStatus(EnabledOrDisabledState value) {
    m_videoExtractionStatusHasBeenSet = true;
    m_videoExtractionStatus = value;
  }
  inline VideoExtractionConfiguration& WithVideoExtractionStatus(EnabledOrDisabledState value) {
    SetVideoExtractionStatus(value);
    return *this;
  }
  ///@}
 private:
  EnabledOrDisabledState m_videoExtractionStatus{EnabledOrDisabledState::NOT_SET};
  bool m_videoExtractionStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
