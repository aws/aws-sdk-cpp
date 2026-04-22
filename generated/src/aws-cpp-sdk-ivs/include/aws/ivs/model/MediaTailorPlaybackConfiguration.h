/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVS_EXPORTS.h>

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
 * <p>Object specifying a configuration for integration with an AWS Elemental
 * MediaTailor (EMT).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/MediaTailorPlaybackConfiguration">AWS
 * API Reference</a></p>
 */
class MediaTailorPlaybackConfiguration {
 public:
  AWS_IVS_API MediaTailorPlaybackConfiguration() = default;
  AWS_IVS_API MediaTailorPlaybackConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVS_API MediaTailorPlaybackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the customer-created EMT PlaybackConfiguration resource in the same
   * region and account.</p>
   */
  inline const Aws::String& GetPlaybackConfigurationArn() const { return m_playbackConfigurationArn; }
  inline bool PlaybackConfigurationArnHasBeenSet() const { return m_playbackConfigurationArnHasBeenSet; }
  template <typename PlaybackConfigurationArnT = Aws::String>
  void SetPlaybackConfigurationArn(PlaybackConfigurationArnT&& value) {
    m_playbackConfigurationArnHasBeenSet = true;
    m_playbackConfigurationArn = std::forward<PlaybackConfigurationArnT>(value);
  }
  template <typename PlaybackConfigurationArnT = Aws::String>
  MediaTailorPlaybackConfiguration& WithPlaybackConfigurationArn(PlaybackConfigurationArnT&& value) {
    SetPlaybackConfigurationArn(std::forward<PlaybackConfigurationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_playbackConfigurationArn;
  bool m_playbackConfigurationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
