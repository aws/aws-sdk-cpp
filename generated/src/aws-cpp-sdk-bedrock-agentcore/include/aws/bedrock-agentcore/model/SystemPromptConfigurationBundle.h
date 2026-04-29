/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>A system prompt sourced from a configuration bundle version.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SystemPromptConfigurationBundle">AWS
 * API Reference</a></p>
 */
class SystemPromptConfigurationBundle {
 public:
  AWS_BEDROCKAGENTCORE_API SystemPromptConfigurationBundle() = default;
  AWS_BEDROCKAGENTCORE_API SystemPromptConfigurationBundle(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SystemPromptConfigurationBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleArn() const { return m_bundleArn; }
  inline bool BundleArnHasBeenSet() const { return m_bundleArnHasBeenSet; }
  template <typename BundleArnT = Aws::String>
  void SetBundleArn(BundleArnT&& value) {
    m_bundleArnHasBeenSet = true;
    m_bundleArn = std::forward<BundleArnT>(value);
  }
  template <typename BundleArnT = Aws::String>
  SystemPromptConfigurationBundle& WithBundleArn(BundleArnT&& value) {
    SetBundleArn(std::forward<BundleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the configuration bundle.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  SystemPromptConfigurationBundle& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON path within the configuration bundle that contains the system
   * prompt.</p>
   */
  inline const Aws::String& GetSystemPromptJsonPath() const { return m_systemPromptJsonPath; }
  inline bool SystemPromptJsonPathHasBeenSet() const { return m_systemPromptJsonPathHasBeenSet; }
  template <typename SystemPromptJsonPathT = Aws::String>
  void SetSystemPromptJsonPath(SystemPromptJsonPathT&& value) {
    m_systemPromptJsonPathHasBeenSet = true;
    m_systemPromptJsonPath = std::forward<SystemPromptJsonPathT>(value);
  }
  template <typename SystemPromptJsonPathT = Aws::String>
  SystemPromptConfigurationBundle& WithSystemPromptJsonPath(SystemPromptJsonPathT&& value) {
    SetSystemPromptJsonPath(std::forward<SystemPromptJsonPathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bundleArn;

  Aws::String m_versionId;

  Aws::String m_systemPromptJsonPath;
  bool m_bundleArnHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_systemPromptJsonPathHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
