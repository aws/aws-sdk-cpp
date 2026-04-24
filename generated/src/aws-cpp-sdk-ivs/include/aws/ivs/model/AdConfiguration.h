/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/MediaTailorPlaybackConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IVS {
namespace Model {

/**
 * <p>Object specifying a configuration for a server-side advertising insertion
 * (which can be triggered with the operation).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/AdConfiguration">AWS
 * API Reference</a></p>
 */
class AdConfiguration {
 public:
  AWS_IVS_API AdConfiguration() = default;
  AWS_IVS_API AdConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVS_API AdConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Ad configuration ARN.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  AdConfiguration& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ad configuration name. Defaults to “”.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AdConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of integration configurations with media tailor resources.</p>
   */
  inline const Aws::Vector<MediaTailorPlaybackConfiguration>& GetMediaTailorPlaybackConfigurations() const {
    return m_mediaTailorPlaybackConfigurations;
  }
  inline bool MediaTailorPlaybackConfigurationsHasBeenSet() const { return m_mediaTailorPlaybackConfigurationsHasBeenSet; }
  template <typename MediaTailorPlaybackConfigurationsT = Aws::Vector<MediaTailorPlaybackConfiguration>>
  void SetMediaTailorPlaybackConfigurations(MediaTailorPlaybackConfigurationsT&& value) {
    m_mediaTailorPlaybackConfigurationsHasBeenSet = true;
    m_mediaTailorPlaybackConfigurations = std::forward<MediaTailorPlaybackConfigurationsT>(value);
  }
  template <typename MediaTailorPlaybackConfigurationsT = Aws::Vector<MediaTailorPlaybackConfiguration>>
  AdConfiguration& WithMediaTailorPlaybackConfigurations(MediaTailorPlaybackConfigurationsT&& value) {
    SetMediaTailorPlaybackConfigurations(std::forward<MediaTailorPlaybackConfigurationsT>(value));
    return *this;
  }
  template <typename MediaTailorPlaybackConfigurationsT = MediaTailorPlaybackConfiguration>
  AdConfiguration& AddMediaTailorPlaybackConfigurations(MediaTailorPlaybackConfigurationsT&& value) {
    m_mediaTailorPlaybackConfigurationsHasBeenSet = true;
    m_mediaTailorPlaybackConfigurations.emplace_back(std::forward<MediaTailorPlaybackConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags attached to the resource. Array of 1-50 maps, each of the form
   * <code>string:string (key:value)</code>. See <a
   * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
   * practices and strategies</a> in <i>Tagging Amazon Web Services Resources and Tag
   * Editor</i> for details, including restrictions that apply to tags and "Tag
   * naming limits and requirements"; Amazon IVS has no service-specific constraints
   * beyond what is documented there.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  AdConfiguration& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  AdConfiguration& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::Vector<MediaTailorPlaybackConfiguration> m_mediaTailorPlaybackConfigurations;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_mediaTailorPlaybackConfigurationsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
