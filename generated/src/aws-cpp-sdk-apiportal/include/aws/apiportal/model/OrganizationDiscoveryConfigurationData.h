/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DiscoveryConfigurationStatus.h>
#include <aws/apiportal/model/DiscoveryExclusionFilters.h>
#include <aws/apiportal/model/DiscoveryFeature.h>
#include <aws/apiportal/model/DiscoverySource.h>
#include <aws/apiportal/model/OrganizationDiscoveryFilters.h>
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
 * <p>An organization-level discovery configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/OrganizationDiscoveryConfigurationData">AWS
 * API Reference</a></p>
 */
class OrganizationDiscoveryConfigurationData {
 public:
  AWS_APIPORTAL_API OrganizationDiscoveryConfigurationData() = default;
  AWS_APIPORTAL_API OrganizationDiscoveryConfigurationData(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API OrganizationDiscoveryConfigurationData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the organization discovery configuration.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  OrganizationDiscoveryConfigurationData& WithArn(ArnT&& value) {
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
  inline OrganizationDiscoveryConfigurationData& WithStatus(DiscoveryConfigurationStatus value) {
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
  OrganizationDiscoveryConfigurationData& WithDiscoverySources(DiscoverySourcesT&& value) {
    SetDiscoverySources(std::forward<DiscoverySourcesT>(value));
    return *this;
  }
  inline OrganizationDiscoveryConfigurationData& AddDiscoverySources(DiscoverySource value) {
    m_discoverySourcesHasBeenSet = true;
    m_discoverySources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exclusion filters for organization-scoped discovery. @deprecated. Remove this
   * once client (Console) moves to discoveryFilters</p>
   */
  inline const DiscoveryExclusionFilters& GetExclusionFilters() const { return m_exclusionFilters; }
  inline bool ExclusionFiltersHasBeenSet() const { return m_exclusionFiltersHasBeenSet; }
  template <typename ExclusionFiltersT = DiscoveryExclusionFilters>
  void SetExclusionFilters(ExclusionFiltersT&& value) {
    m_exclusionFiltersHasBeenSet = true;
    m_exclusionFilters = std::forward<ExclusionFiltersT>(value);
  }
  template <typename ExclusionFiltersT = DiscoveryExclusionFilters>
  OrganizationDiscoveryConfigurationData& WithExclusionFilters(ExclusionFiltersT&& value) {
    SetExclusionFilters(std::forward<ExclusionFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The accounts or organizational units included in or excluded from
   * discovery.</p>
   */
  inline const OrganizationDiscoveryFilters& GetDiscoveryFilters() const { return m_discoveryFilters; }
  inline bool DiscoveryFiltersHasBeenSet() const { return m_discoveryFiltersHasBeenSet; }
  template <typename DiscoveryFiltersT = OrganizationDiscoveryFilters>
  void SetDiscoveryFilters(DiscoveryFiltersT&& value) {
    m_discoveryFiltersHasBeenSet = true;
    m_discoveryFilters = std::forward<DiscoveryFiltersT>(value);
  }
  template <typename DiscoveryFiltersT = OrganizationDiscoveryFilters>
  OrganizationDiscoveryConfigurationData& WithDiscoveryFilters(DiscoveryFiltersT&& value) {
    SetDiscoveryFilters(std::forward<DiscoveryFiltersT>(value));
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
  OrganizationDiscoveryConfigurationData& WithFeatures(FeaturesT&& value) {
    SetFeatures(std::forward<FeaturesT>(value));
    return *this;
  }
  inline OrganizationDiscoveryConfigurationData& AddFeatures(DiscoveryFeature value) {
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
  OrganizationDiscoveryConfigurationData& WithCreatedAt(CreatedAtT&& value) {
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
  OrganizationDiscoveryConfigurationData& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  DiscoveryConfigurationStatus m_status{DiscoveryConfigurationStatus::NOT_SET};

  Aws::Vector<DiscoverySource> m_discoverySources;

  DiscoveryExclusionFilters m_exclusionFilters;

  OrganizationDiscoveryFilters m_discoveryFilters;

  Aws::Vector<DiscoveryFeature> m_features;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_discoverySourcesHasBeenSet = false;
  bool m_exclusionFiltersHasBeenSet = false;
  bool m_discoveryFiltersHasBeenSet = false;
  bool m_featuresHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
