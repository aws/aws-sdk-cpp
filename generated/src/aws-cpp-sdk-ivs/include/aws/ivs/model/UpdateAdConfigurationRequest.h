/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/MediaTailorPlaybackConfiguration.h>
#include <aws/ivs/model/PostRollConfiguration.h>

#include <utility>

namespace Aws {
namespace IVS {
namespace Model {

/**
 */
class UpdateAdConfigurationRequest : public IVSRequest {
 public:
  AWS_IVS_API UpdateAdConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAdConfiguration"; }

  AWS_IVS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ARN of the ad configuration to be updated.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateAdConfigurationRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ad configuration name. The value does not need to be unique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateAdConfigurationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of integration configurations with MediaTailor resources. The first item
   * in the list is the default playback configuration used for the ad configuration.
   * To select a different configuration per viewing session, see <a
   * href="https://docs.aws.amazon.com/ivs/latest/LowLatencyUserGuide/private-channels-generate-tokens.html">Generate
   * and Sign IVS Playback Tokens</a>.</p>
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
  UpdateAdConfigurationRequest& WithMediaTailorPlaybackConfigurations(MediaTailorPlaybackConfigurationsT&& value) {
    SetMediaTailorPlaybackConfigurations(std::forward<MediaTailorPlaybackConfigurationsT>(value));
    return *this;
  }
  template <typename MediaTailorPlaybackConfigurationsT = MediaTailorPlaybackConfiguration>
  UpdateAdConfigurationRequest& AddMediaTailorPlaybackConfigurations(MediaTailorPlaybackConfigurationsT&& value) {
    m_mediaTailorPlaybackConfigurationsHasBeenSet = true;
    m_mediaTailorPlaybackConfigurations.emplace_back(std::forward<MediaTailorPlaybackConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for the post-roll ad break to use for this ad
   * configuration.</p>
   */
  inline const PostRollConfiguration& GetPostRollConfiguration() const { return m_postRollConfiguration; }
  inline bool PostRollConfigurationHasBeenSet() const { return m_postRollConfigurationHasBeenSet; }
  template <typename PostRollConfigurationT = PostRollConfiguration>
  void SetPostRollConfiguration(PostRollConfigurationT&& value) {
    m_postRollConfigurationHasBeenSet = true;
    m_postRollConfiguration = std::forward<PostRollConfigurationT>(value);
  }
  template <typename PostRollConfigurationT = PostRollConfiguration>
  UpdateAdConfigurationRequest& WithPostRollConfiguration(PostRollConfigurationT&& value) {
    SetPostRollConfiguration(std::forward<PostRollConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::Vector<MediaTailorPlaybackConfiguration> m_mediaTailorPlaybackConfigurations;

  PostRollConfiguration m_postRollConfiguration;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_mediaTailorPlaybackConfigurationsHasBeenSet = false;
  bool m_postRollConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
