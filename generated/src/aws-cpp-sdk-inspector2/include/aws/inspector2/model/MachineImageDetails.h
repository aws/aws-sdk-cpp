/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Architecture.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Details about a machine image resource scanned directly by
 * Inspector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/MachineImageDetails">AWS
 * API Reference</a></p>
 */
class MachineImageDetails {
 public:
  AWS_INSPECTOR2_API MachineImageDetails() = default;
  AWS_INSPECTOR2_API MachineImageDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API MachineImageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The machine image ID (e.g., ami-0abcdef1234567890)</p>
   */
  inline const Aws::String& GetMachineImageId() const { return m_machineImageId; }
  inline bool MachineImageIdHasBeenSet() const { return m_machineImageIdHasBeenSet; }
  template <typename MachineImageIdT = Aws::String>
  void SetMachineImageId(MachineImageIdT&& value) {
    m_machineImageIdHasBeenSet = true;
    m_machineImageId = std::forward<MachineImageIdT>(value);
  }
  template <typename MachineImageIdT = Aws::String>
  MachineImageDetails& WithMachineImageId(MachineImageIdT&& value) {
    SetMachineImageId(std::forward<MachineImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable image name</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MachineImageDetails& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account ID that owns the image</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  MachineImageDetails& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OS platform (Linux/Windows)</p>
   */
  inline const Aws::String& GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  template <typename PlatformT = Aws::String>
  void SetPlatform(PlatformT&& value) {
    m_platformHasBeenSet = true;
    m_platform = std::forward<PlatformT>(value);
  }
  template <typename PlatformT = Aws::String>
  MachineImageDetails& WithPlatform(PlatformT&& value) {
    SetPlatform(std::forward<PlatformT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CPU architecture (x86_64/arm64)</p>
   */
  inline Architecture GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  inline void SetArchitecture(Architecture value) {
    m_architectureHasBeenSet = true;
    m_architecture = value;
  }
  inline MachineImageDetails& WithArchitecture(Architecture value) {
    SetArchitecture(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the image was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
  inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
  template <typename CreationDateT = Aws::Utils::DateTime>
  void SetCreationDate(CreationDateT&& value) {
    m_creationDateHasBeenSet = true;
    m_creationDate = std::forward<CreationDateT>(value);
  }
  template <typename CreationDateT = Aws::Utils::DateTime>
  MachineImageDetails& WithCreationDate(CreationDateT&& value) {
    SetCreationDate(std::forward<CreationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Image state (available/pending/deregistered)</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  MachineImageDetails& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the image is publicly shared</p>
   */
  inline bool GetIsPublic() const { return m_isPublic; }
  inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
  inline void SetIsPublic(bool value) {
    m_isPublicHasBeenSet = true;
    m_isPublic = value;
  }
  inline MachineImageDetails& WithIsPublic(bool value) {
    SetIsPublic(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Root device type (ebs/instance-store) — AWS-specific</p>
   */
  inline const Aws::String& GetRootDeviceType() const { return m_rootDeviceType; }
  inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }
  template <typename RootDeviceTypeT = Aws::String>
  void SetRootDeviceType(RootDeviceTypeT&& value) {
    m_rootDeviceTypeHasBeenSet = true;
    m_rootDeviceType = std::forward<RootDeviceTypeT>(value);
  }
  template <typename RootDeviceTypeT = Aws::String>
  MachineImageDetails& WithRootDeviceType(RootDeviceTypeT&& value) {
    SetRootDeviceType(std::forward<RootDeviceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Virtualization type (hvm/paravirtual) — AWS-specific</p>
   */
  inline const Aws::String& GetVirtualizationType() const { return m_virtualizationType; }
  inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
  template <typename VirtualizationTypeT = Aws::String>
  void SetVirtualizationType(VirtualizationTypeT&& value) {
    m_virtualizationTypeHasBeenSet = true;
    m_virtualizationType = std::forward<VirtualizationTypeT>(value);
  }
  template <typename VirtualizationTypeT = Aws::String>
  MachineImageDetails& WithVirtualizationType(VirtualizationTypeT&& value) {
    SetVirtualizationType(std::forward<VirtualizationTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source resource the image was created from (nullable)</p>
   */
  inline const Aws::String& GetSourceResourceId() const { return m_sourceResourceId; }
  inline bool SourceResourceIdHasBeenSet() const { return m_sourceResourceIdHasBeenSet; }
  template <typename SourceResourceIdT = Aws::String>
  void SetSourceResourceId(SourceResourceIdT&& value) {
    m_sourceResourceIdHasBeenSet = true;
    m_sourceResourceId = std::forward<SourceResourceIdT>(value);
  }
  template <typename SourceResourceIdT = Aws::String>
  MachineImageDetails& WithSourceResourceId(SourceResourceIdT&& value) {
    SetSourceResourceId(std::forward<SourceResourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_machineImageId;

  Aws::String m_name;

  Aws::String m_ownerAccountId;

  Aws::String m_platform;

  Architecture m_architecture{Architecture::NOT_SET};

  Aws::Utils::DateTime m_creationDate{};

  Aws::String m_state;

  bool m_isPublic{false};

  Aws::String m_rootDeviceType;

  Aws::String m_virtualizationType;

  Aws::String m_sourceResourceId;
  bool m_machineImageIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_platformHasBeenSet = false;
  bool m_architectureHasBeenSet = false;
  bool m_creationDateHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_isPublicHasBeenSet = false;
  bool m_rootDeviceTypeHasBeenSet = false;
  bool m_virtualizationTypeHasBeenSet = false;
  bool m_sourceResourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
