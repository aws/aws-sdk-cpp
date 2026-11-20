/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DiscoveryFeature.h>
#include <aws/apiportal/model/DiscoverySource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class PutDiscoveryConfigurationRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API PutDiscoveryConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutDiscoveryConfiguration"; }

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
  PutDiscoveryConfigurationRequest& WithDiscoverySources(DiscoverySourcesT&& value) {
    SetDiscoverySources(std::forward<DiscoverySourcesT>(value));
    return *this;
  }
  inline PutDiscoveryConfigurationRequest& AddDiscoverySources(DiscoverySource value) {
    m_discoverySourcesHasBeenSet = true;
    m_discoverySources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of resources to leave out of discovery, up to 50.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedResources() const { return m_excludedResources; }
  inline bool ExcludedResourcesHasBeenSet() const { return m_excludedResourcesHasBeenSet; }
  template <typename ExcludedResourcesT = Aws::Vector<Aws::String>>
  void SetExcludedResources(ExcludedResourcesT&& value) {
    m_excludedResourcesHasBeenSet = true;
    m_excludedResources = std::forward<ExcludedResourcesT>(value);
  }
  template <typename ExcludedResourcesT = Aws::Vector<Aws::String>>
  PutDiscoveryConfigurationRequest& WithExcludedResources(ExcludedResourcesT&& value) {
    SetExcludedResources(std::forward<ExcludedResourcesT>(value));
    return *this;
  }
  template <typename ExcludedResourcesT = Aws::String>
  PutDiscoveryConfigurationRequest& AddExcludedResources(ExcludedResourcesT&& value) {
    m_excludedResourcesHasBeenSet = true;
    m_excludedResources.emplace_back(std::forward<ExcludedResourcesT>(value));
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
  PutDiscoveryConfigurationRequest& WithFeatures(FeaturesT&& value) {
    SetFeatures(std::forward<FeaturesT>(value));
    return *this;
  }
  inline PutDiscoveryConfigurationRequest& AddFeatures(DiscoveryFeature value) {
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
  PutDiscoveryConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutDiscoveryConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DiscoverySource> m_discoverySources;

  Aws::Vector<Aws::String> m_excludedResources;

  Aws::Vector<DiscoveryFeature> m_features;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_discoverySourcesHasBeenSet = false;
  bool m_excludedResourcesHasBeenSet = false;
  bool m_featuresHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
