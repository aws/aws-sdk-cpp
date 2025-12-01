/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

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
 * <p>Configuration for segmenting video content during multimodal knowledge base
 * ingestion. Determines how video files are divided into chunks for
 * processing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/VideoSegmentationConfiguration">AWS
 * API Reference</a></p>
 */
class VideoSegmentationConfiguration {
 public:
  AWS_BEDROCKAGENT_API VideoSegmentationConfiguration() = default;
  AWS_BEDROCKAGENT_API VideoSegmentationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API VideoSegmentationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The duration in seconds for each video segment. Video files will be divided
   * into chunks of this length for processing.</p>
   */
  inline int GetFixedLengthDuration() const { return m_fixedLengthDuration; }
  inline bool FixedLengthDurationHasBeenSet() const { return m_fixedLengthDurationHasBeenSet; }
  inline void SetFixedLengthDuration(int value) {
    m_fixedLengthDurationHasBeenSet = true;
    m_fixedLengthDuration = value;
  }
  inline VideoSegmentationConfiguration& WithFixedLengthDuration(int value) {
    SetFixedLengthDuration(value);
    return *this;
  }
  ///@}
 private:
  int m_fixedLengthDuration{0};
  bool m_fixedLengthDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
