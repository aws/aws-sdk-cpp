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
 * <p>Configuration for image extraction.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ImageExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class ImageExtractionConfiguration {
 public:
  AWS_BEDROCKAGENT_API ImageExtractionConfiguration() = default;
  AWS_BEDROCKAGENT_API ImageExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API ImageExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether image extraction is enabled or disabled.</p>
   */
  inline EnabledOrDisabledState GetImageExtractionStatus() const { return m_imageExtractionStatus; }
  inline bool ImageExtractionStatusHasBeenSet() const { return m_imageExtractionStatusHasBeenSet; }
  inline void SetImageExtractionStatus(EnabledOrDisabledState value) {
    m_imageExtractionStatusHasBeenSet = true;
    m_imageExtractionStatus = value;
  }
  inline ImageExtractionConfiguration& WithImageExtractionStatus(EnabledOrDisabledState value) {
    SetImageExtractionStatus(value);
    return *this;
  }
  ///@}
 private:
  EnabledOrDisabledState m_imageExtractionStatus{EnabledOrDisabledState::NOT_SET};
  bool m_imageExtractionStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
