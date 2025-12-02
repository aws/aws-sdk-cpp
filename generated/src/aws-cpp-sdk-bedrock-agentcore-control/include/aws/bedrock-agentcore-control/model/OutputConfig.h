/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CloudWatchOutputConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> The configuration that specifies where evaluation results should be written
 * for monitoring and analysis. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/OutputConfig">AWS
 * API Reference</a></p>
 */
class OutputConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API OutputConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API OutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API OutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The CloudWatch configuration for writing evaluation results to CloudWatch
   * logs with embedded metric format. </p>
   */
  inline const CloudWatchOutputConfig& GetCloudWatchConfig() const { return m_cloudWatchConfig; }
  inline bool CloudWatchConfigHasBeenSet() const { return m_cloudWatchConfigHasBeenSet; }
  template <typename CloudWatchConfigT = CloudWatchOutputConfig>
  void SetCloudWatchConfig(CloudWatchConfigT&& value) {
    m_cloudWatchConfigHasBeenSet = true;
    m_cloudWatchConfig = std::forward<CloudWatchConfigT>(value);
  }
  template <typename CloudWatchConfigT = CloudWatchOutputConfig>
  OutputConfig& WithCloudWatchConfig(CloudWatchConfigT&& value) {
    SetCloudWatchConfig(std::forward<CloudWatchConfigT>(value));
    return *this;
  }
  ///@}
 private:
  CloudWatchOutputConfig m_cloudWatchConfig;
  bool m_cloudWatchConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
