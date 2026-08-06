/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration for a capacity provider volume mounted into the AgentCore
 * Runtime. This references a persistent volume by its logical name, as defined in
 * the capacity provider's list of volumes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CapacityProviderVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class CapacityProviderVolumeConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderVolumeConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CapacityProviderVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logical name of the capacity provider volume to mount. This name must
   * match a volume that is defined in the capacity provider's list of volumes.</p>
   */
  inline const Aws::String& GetVolumeName() const { return m_volumeName; }
  inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
  template <typename VolumeNameT = Aws::String>
  void SetVolumeName(VolumeNameT&& value) {
    m_volumeNameHasBeenSet = true;
    m_volumeName = std::forward<VolumeNameT>(value);
  }
  template <typename VolumeNameT = Aws::String>
  CapacityProviderVolumeConfiguration& WithVolumeName(VolumeNameT&& value) {
    SetVolumeName(std::forward<VolumeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mount path for the capacity provider volume inside the AgentCore Runtime.
   * The path must be under <code>/mnt</code> with exactly one subdirectory level
   * (for example, <code>/mnt/data</code>).</p>
   */
  inline const Aws::String& GetMountPath() const { return m_mountPath; }
  inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
  template <typename MountPathT = Aws::String>
  void SetMountPath(MountPathT&& value) {
    m_mountPathHasBeenSet = true;
    m_mountPath = std::forward<MountPathT>(value);
  }
  template <typename MountPathT = Aws::String>
  CapacityProviderVolumeConfiguration& WithMountPath(MountPathT&& value) {
    SetMountPath(std::forward<MountPathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeName;

  Aws::String m_mountPath;
  bool m_volumeNameHasBeenSet = false;
  bool m_mountPathHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
