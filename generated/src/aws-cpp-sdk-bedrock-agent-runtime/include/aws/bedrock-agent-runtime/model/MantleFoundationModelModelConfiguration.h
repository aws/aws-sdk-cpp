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
 * <p>Model configuration for a Mantle foundation model.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/MantleFoundationModelModelConfiguration">AWS
 * API Reference</a></p>
 */
class MantleFoundationModelModelConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API MantleFoundationModelModelConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API MantleFoundationModelModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API MantleFoundationModelModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Mantle foundation model.</p>
   */
  inline const Aws::String& GetModelArn() const { return m_modelArn; }
  inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
  template <typename ModelArnT = Aws::String>
  void SetModelArn(ModelArnT&& value) {
    m_modelArnHasBeenSet = true;
    m_modelArn = std::forward<ModelArnT>(value);
  }
  template <typename ModelArnT = Aws::String>
  MantleFoundationModelModelConfiguration& WithModelArn(ModelArnT&& value) {
    SetModelArn(std::forward<ModelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Bedrock project ID used for billing and usage attribution. If you
   * don't specify a value, the service uses the default project.</p>
   */
  inline const Aws::String& GetProjectId() const { return m_projectId; }
  inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
  template <typename ProjectIdT = Aws::String>
  void SetProjectId(ProjectIdT&& value) {
    m_projectIdHasBeenSet = true;
    m_projectId = std::forward<ProjectIdT>(value);
  }
  template <typename ProjectIdT = Aws::String>
  MantleFoundationModelModelConfiguration& WithProjectId(ProjectIdT&& value) {
    SetProjectId(std::forward<ProjectIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelArn;

  Aws::String m_projectId;
  bool m_modelArnHasBeenSet = false;
  bool m_projectIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
