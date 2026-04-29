/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ConfigurationBundleToolEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Tool descriptions sourced from a configuration bundle version.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ToolDescriptionConfigurationBundle">AWS
 * API Reference</a></p>
 */
class ToolDescriptionConfigurationBundle {
 public:
  AWS_BEDROCKAGENTCORE_API ToolDescriptionConfigurationBundle() = default;
  AWS_BEDROCKAGENTCORE_API ToolDescriptionConfigurationBundle(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ToolDescriptionConfigurationBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ToolDescriptionConfigurationBundle& WithBundleArn(BundleArnT&& value) {
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
  ToolDescriptionConfigurationBundle& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of tool entries mapping tool names to their JSON paths within the
   * bundle.</p>
   */
  inline const Aws::Vector<ConfigurationBundleToolEntry>& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = Aws::Vector<ConfigurationBundleToolEntry>>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = Aws::Vector<ConfigurationBundleToolEntry>>
  ToolDescriptionConfigurationBundle& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  template <typename ToolsT = ConfigurationBundleToolEntry>
  ToolDescriptionConfigurationBundle& AddTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools.emplace_back(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bundleArn;

  Aws::String m_versionId;

  Aws::Vector<ConfigurationBundleToolEntry> m_tools;
  bool m_bundleArnHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_toolsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
