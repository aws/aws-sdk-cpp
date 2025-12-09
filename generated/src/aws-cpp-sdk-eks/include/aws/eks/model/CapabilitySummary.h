/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CapabilityStatus.h>
#include <aws/eks/model/CapabilityType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>A summary of a capability, containing basic information without the full
 * configuration details. This is returned by the <code>ListCapabilities</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CapabilitySummary">AWS
 * API Reference</a></p>
 */
class CapabilitySummary {
 public:
  AWS_EKS_API CapabilitySummary() = default;
  AWS_EKS_API CapabilitySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CapabilitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique name of the capability within the cluster.</p>
   */
  inline const Aws::String& GetCapabilityName() const { return m_capabilityName; }
  inline bool CapabilityNameHasBeenSet() const { return m_capabilityNameHasBeenSet; }
  template <typename CapabilityNameT = Aws::String>
  void SetCapabilityName(CapabilityNameT&& value) {
    m_capabilityNameHasBeenSet = true;
    m_capabilityName = std::forward<CapabilityNameT>(value);
  }
  template <typename CapabilityNameT = Aws::String>
  CapabilitySummary& WithCapabilityName(CapabilityNameT&& value) {
    SetCapabilityName(std::forward<CapabilityNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capability.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CapabilitySummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of capability. Valid values are <code>ACK</code>,
   * <code>ARGOCD</code>, or <code>KRO</code>.</p>
   */
  inline CapabilityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CapabilityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CapabilitySummary& WithType(CapabilityType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the capability.</p>
   */
  inline CapabilityStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CapabilityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CapabilitySummary& WithStatus(CapabilityStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the capability software that is currently running.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  CapabilitySummary& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix epoch timestamp in seconds for when the capability was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CapabilitySummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix epoch timestamp in seconds for when the capability was last
   * modified.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  CapabilitySummary& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capabilityName;

  Aws::String m_arn;

  CapabilityType m_type{CapabilityType::NOT_SET};

  CapabilityStatus m_status{CapabilityStatus::NOT_SET};

  Aws::String m_version;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_modifiedAt{};
  bool m_capabilityNameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
