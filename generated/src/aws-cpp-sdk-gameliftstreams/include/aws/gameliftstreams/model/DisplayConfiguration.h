/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/Resolution.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {

/**
 * <p>The virtual monitor settings for a stream session, including the resolution.
 * If not specified, the stream session uses the default resolution of 1920 ×
 * 1080.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/DisplayConfiguration">AWS
 * API Reference</a></p>
 */
class DisplayConfiguration {
 public:
  AWS_GAMELIFTSTREAMS_API DisplayConfiguration() = default;
  AWS_GAMELIFTSTREAMS_API DisplayConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API DisplayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resolution to apply to the stream session's virtual monitor. When
   * specified, this value overrides the default resolution of 1920 × 1080.</p>
   */
  inline const Resolution& GetResolution() const { return m_resolution; }
  inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
  template <typename ResolutionT = Resolution>
  void SetResolution(ResolutionT&& value) {
    m_resolutionHasBeenSet = true;
    m_resolution = std::forward<ResolutionT>(value);
  }
  template <typename ResolutionT = Resolution>
  DisplayConfiguration& WithResolution(ResolutionT&& value) {
    SetResolution(std::forward<ResolutionT>(value));
    return *this;
  }
  ///@}
 private:
  Resolution m_resolution;
  bool m_resolutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
