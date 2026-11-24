/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DiscoveryConfigurationStatus.h>
#include <aws/apiportal/model/DiscoveryFeature.h>
#include <aws/apiportal/model/DiscoverySource.h>
#include <aws/core/utils/DateTime.h>
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
namespace APIPortal {
namespace Model {

/**
 * <p>An account-level discovery configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DiscoveryConfigurationData">AWS
 * API Reference</a></p>
 */
class DiscoveryConfigurationData {
 public:
  AWS_APIPORTAL_API DiscoveryConfigurationData() = default;
  AWS_APIPORTAL_API DiscoveryConfigurationData(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API DiscoveryConfigurationData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the discovery configuration.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DiscoveryConfigurationData& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the discovery configuration.</p>
   */
  inline DiscoveryConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DiscoveryConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DiscoveryConfigurationData& WithStatus(DiscoveryConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sources APIs are discovered from.</p>
   */
  inline const Aws::Vector<DiscoverySource>& GetDiscoverySources() const { return m_discoverySources; }
  inline bool DiscoverySourcesHasBeenSet() const { return m_discoverySourcesHasBeenSet; }
  template <typename DiscoverySourcesT = Aws::Vector<DiscoverySource>>
  void SetDiscoverySources(DiscoverySourcesT&& value) {
    m_discoverySourcesHasBeenSet = true;
    m_discoverySources = std::forward<DiscoverySourcesT>(value);
  }
  template <typename DiscoverySourcesT = Aws::Vector<DiscoverySource>>
  DiscoveryConfigurationData& WithDiscoverySources(DiscoverySourcesT&& value) {
    SetDiscoverySources(std::forward<DiscoverySourcesT>(value));
    return *this;
  }
  inline DiscoveryConfigurationData& AddDiscoverySources(DiscoverySource value) {
    m_discoverySourcesHasBeenSet = true;
    m_discoverySources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of resources left out of discovery.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedResources() const { return m_excludedResources; }
  inline bool ExcludedResourcesHasBeenSet() const { return m_excludedResourcesHasBeenSet; }
  template <typename ExcludedResourcesT = Aws::Vector<Aws::String>>
  void SetExcludedResources(ExcludedResourcesT&& value) {
    m_excludedResourcesHasBeenSet = true;
    m_excludedResources = std::forward<ExcludedResourcesT>(value);
  }
  template <typename ExcludedResourcesT = Aws::Vector<Aws::String>>
  DiscoveryConfigurationData& WithExcludedResources(ExcludedResourcesT&& value) {
    SetExcludedResources(std::forward<ExcludedResourcesT>(value));
    return *this;
  }
  template <typename ExcludedResourcesT = Aws::String>
  DiscoveryConfigurationData& AddExcludedResources(ExcludedResourcesT&& value) {
    m_excludedResourcesHasBeenSet = true;
    m_excludedResources.emplace_back(std::forward<ExcludedResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional capabilities enabled for this configuration. Absent when none
   * are.</p>
   */
  inline const Aws::Vector<DiscoveryFeature>& GetFeatures() const { return m_features; }
  inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
  template <typename FeaturesT = Aws::Vector<DiscoveryFeature>>
  void SetFeatures(FeaturesT&& value) {
    m_featuresHasBeenSet = true;
    m_features = std::forward<FeaturesT>(value);
  }
  template <typename FeaturesT = Aws::Vector<DiscoveryFeature>>
  DiscoveryConfigurationData& WithFeatures(FeaturesT&& value) {
    SetFeatures(std::forward<FeaturesT>(value));
    return *this;
  }
  inline DiscoveryConfigurationData& AddFeatures(DiscoveryFeature value) {
    m_featuresHasBeenSet = true;
    m_features.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DiscoveryConfigurationData& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DiscoveryConfigurationData& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  DiscoveryConfigurationStatus m_status{DiscoveryConfigurationStatus::NOT_SET};

  Aws::Vector<DiscoverySource> m_discoverySources;

  Aws::Vector<Aws::String> m_excludedResources;

  Aws::Vector<DiscoveryFeature> m_features;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_discoverySourcesHasBeenSet = false;
  bool m_excludedResourcesHasBeenSet = false;
  bool m_featuresHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
