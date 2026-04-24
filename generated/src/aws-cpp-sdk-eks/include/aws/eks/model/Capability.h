/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CapabilityConfigurationResponse.h>
#include <aws/eks/model/CapabilityDeletePropagationPolicy.h>
#include <aws/eks/model/CapabilityHealth.h>
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
 * <p>An object representing a managed capability in an Amazon EKS cluster. This
 * includes all configuration, status, and health information for the
 * capability.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Capability">AWS API
 * Reference</a></p>
 */
class Capability {
 public:
  AWS_EKS_API Capability() = default;
  AWS_EKS_API Capability(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Capability& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  Capability& WithCapabilityName(CapabilityNameT&& value) {
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
  Capability& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon EKS cluster that contains this capability.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  Capability& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
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
  inline Capability& WithType(CapabilityType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the capability uses to
   * interact with Amazon Web Services services.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  Capability& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the capability. Valid values include:</p> <ul> <li> <p>
   * <code>CREATING</code> – The capability is being created.</p> </li> <li> <p>
   * <code>ACTIVE</code> – The capability is running and available.</p> </li> <li>
   * <p> <code>UPDATING</code> – The capability is being updated.</p> </li> <li> <p>
   * <code>DELETING</code> – The capability is being deleted.</p> </li> <li> <p>
   * <code>CREATE_FAILED</code> – The capability creation failed.</p> </li> <li> <p>
   * <code>UPDATE_FAILED</code> – The capability update failed.</p> </li> <li> <p>
   * <code>DELETE_FAILED</code> – The capability deletion failed.</p> </li> </ul>
   */
  inline CapabilityStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CapabilityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Capability& WithStatus(CapabilityStatus value) {
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
  Capability& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the capability. The structure varies depending
   * on the capability type.</p>
   */
  inline const CapabilityConfigurationResponse& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = CapabilityConfigurationResponse>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = CapabilityConfigurationResponse>
  Capability& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  Capability& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  Capability& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Health information for the capability, including any issues that may be
   * affecting its operation.</p>
   */
  inline const CapabilityHealth& GetHealth() const { return m_health; }
  inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
  template <typename HealthT = CapabilityHealth>
  void SetHealth(HealthT&& value) {
    m_healthHasBeenSet = true;
    m_health = std::forward<HealthT>(value);
  }
  template <typename HealthT = CapabilityHealth>
  Capability& WithHealth(HealthT&& value) {
    SetHealth(std::forward<HealthT>(value));
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
  Capability& WithCreatedAt(CreatedAtT&& value) {
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
  Capability& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The delete propagation policy for the capability. Currently, the only
   * supported value is <code>RETAIN</code>, which keeps all resources managed by the
   * capability when the capability is deleted.</p>
   */
  inline CapabilityDeletePropagationPolicy GetDeletePropagationPolicy() const { return m_deletePropagationPolicy; }
  inline bool DeletePropagationPolicyHasBeenSet() const { return m_deletePropagationPolicyHasBeenSet; }
  inline void SetDeletePropagationPolicy(CapabilityDeletePropagationPolicy value) {
    m_deletePropagationPolicyHasBeenSet = true;
    m_deletePropagationPolicy = value;
  }
  inline Capability& WithDeletePropagationPolicy(CapabilityDeletePropagationPolicy value) {
    SetDeletePropagationPolicy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_capabilityName;

  Aws::String m_arn;

  Aws::String m_clusterName;

  CapabilityType m_type{CapabilityType::NOT_SET};

  Aws::String m_roleArn;

  CapabilityStatus m_status{CapabilityStatus::NOT_SET};

  Aws::String m_version;

  CapabilityConfigurationResponse m_configuration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  CapabilityHealth m_health;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_modifiedAt{};

  CapabilityDeletePropagationPolicy m_deletePropagationPolicy{CapabilityDeletePropagationPolicy::NOT_SET};
  bool m_capabilityNameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_clusterNameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_healthHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_deletePropagationPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
