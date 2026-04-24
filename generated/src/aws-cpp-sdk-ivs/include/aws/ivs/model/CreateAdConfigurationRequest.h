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

#include <utility>

namespace Aws {
namespace IVS {
namespace Model {

/**
 */
class CreateAdConfigurationRequest : public IVSRequest {
 public:
  AWS_IVS_API CreateAdConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAdConfiguration"; }

  AWS_IVS_API Aws::String SerializePayload() const override;

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
  CreateAdConfigurationRequest& WithName(NameT&& value) {
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
  CreateAdConfigurationRequest& WithMediaTailorPlaybackConfigurations(MediaTailorPlaybackConfigurationsT&& value) {
    SetMediaTailorPlaybackConfigurations(std::forward<MediaTailorPlaybackConfigurationsT>(value));
    return *this;
  }
  template <typename MediaTailorPlaybackConfigurationsT = MediaTailorPlaybackConfiguration>
  CreateAdConfigurationRequest& AddMediaTailorPlaybackConfigurations(MediaTailorPlaybackConfigurationsT&& value) {
    m_mediaTailorPlaybackConfigurationsHasBeenSet = true;
    m_mediaTailorPlaybackConfigurations.emplace_back(std::forward<MediaTailorPlaybackConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<MediaTailorPlaybackConfiguration> m_mediaTailorPlaybackConfigurations;
  bool m_nameHasBeenSet = false;
  bool m_mediaTailorPlaybackConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
