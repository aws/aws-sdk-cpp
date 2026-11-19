/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/DescriptorSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Descriptor that names the source that the registry synchronizes a full skill
 * package from. It holds only the source. The record's <code>artifact</code>
 * member returns the package that the registry reads from this
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AgentSkillsPackageDescriptor">AWS
 * API Reference</a></p>
 */
class AgentSkillsPackageDescriptor {
 public:
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsPackageDescriptor() = default;
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsPackageDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsPackageDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source of the skill package. Specify an <code>s3://</code> URL of a ZIP
   * object, or a GitHub folder URL together with <code>repositoryProvider</code> set
   * to <code>GITHUB</code>. For a GitHub folder, the registry builds the package
   * from every file in the folder.</p>
   */
  inline const DescriptorSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = DescriptorSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = DescriptorSource>
  AgentSkillsPackageDescriptor& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  DescriptorSource m_source;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
