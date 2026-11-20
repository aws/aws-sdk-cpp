/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DiscoveryExclusionFilters.h>
#include <aws/apiportal/model/DiscoveryFeature.h>
#include <aws/apiportal/model/DiscoverySource.h>
#include <aws/apiportal/model/OrganizationDiscoveryFilters.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class PutOrganizationDiscoveryConfigurationRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API PutOrganizationDiscoveryConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutOrganizationDiscoveryConfiguration"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The sources to discover APIs from. Omitting it removes all sources, which
   * stops discovery for this configuration.</p>
   */
  inline const Aws::Vector<DiscoverySource>& GetDiscoverySources() const { return m_discoverySources; }
  inline bool DiscoverySourcesHasBeenSet() const { return m_discoverySourcesHasBeenSet; }
  template <typename DiscoverySourcesT = Aws::Vector<DiscoverySource>>
  void SetDiscoverySources(DiscoverySourcesT&& value) {
    m_discoverySourcesHasBeenSet = true;
    m_discoverySources = std::forward<DiscoverySourcesT>(value);
  }
  template <typename DiscoverySourcesT = Aws::Vector<DiscoverySource>>
  PutOrganizationDiscoveryConfigurationRequest& WithDiscoverySources(DiscoverySourcesT&& value) {
    SetDiscoverySources(std::forward<DiscoverySourcesT>(value));
    return *this;
  }
  inline PutOrganizationDiscoveryConfigurationRequest& AddDiscoverySources(DiscoverySource value) {
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
  PutOrganizationDiscoveryConfigurationRequest& WithExclusionFilters(ExclusionFiltersT&& value) {
    SetExclusionFilters(std::forward<ExclusionFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The accounts or organizational units to include in or exclude from
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
  PutOrganizationDiscoveryConfigurationRequest& WithDiscoveryFilters(DiscoveryFiltersT&& value) {
    SetDiscoveryFilters(std::forward<DiscoveryFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional capabilities to enable. Omitting it disables all of them, as with
   * the other fields.</p>
   */
  inline const Aws::Vector<DiscoveryFeature>& GetFeatures() const { return m_features; }
  inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
  template <typename FeaturesT = Aws::Vector<DiscoveryFeature>>
  void SetFeatures(FeaturesT&& value) {
    m_featuresHasBeenSet = true;
    m_features = std::forward<FeaturesT>(value);
  }
  template <typename FeaturesT = Aws::Vector<DiscoveryFeature>>
  PutOrganizationDiscoveryConfigurationRequest& WithFeatures(FeaturesT&& value) {
    SetFeatures(std::forward<FeaturesT>(value));
    return *this;
  }
  inline PutOrganizationDiscoveryConfigurationRequest& AddFeatures(DiscoveryFeature value) {
    m_featuresHasBeenSet = true;
    m_features.push_back(value);
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
  PutOrganizationDiscoveryConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutOrganizationDiscoveryConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DiscoverySource> m_discoverySources;

  DiscoveryExclusionFilters m_exclusionFilters;

  OrganizationDiscoveryFilters m_discoveryFilters;

  Aws::Vector<DiscoveryFeature> m_features;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_discoverySourcesHasBeenSet = false;
  bool m_exclusionFiltersHasBeenSet = false;
  bool m_discoveryFiltersHasBeenSet = false;
  bool m_featuresHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
