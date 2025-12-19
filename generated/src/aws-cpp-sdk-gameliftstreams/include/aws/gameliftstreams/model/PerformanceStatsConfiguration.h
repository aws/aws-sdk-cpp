/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

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
 * <p>Configuration settings for sharing the stream session's performance stats
 * with the client</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/PerformanceStatsConfiguration">AWS
 * API Reference</a></p>
 */
class PerformanceStatsConfiguration {
 public:
  AWS_GAMELIFTSTREAMS_API PerformanceStatsConfiguration() = default;
  AWS_GAMELIFTSTREAMS_API PerformanceStatsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API PerformanceStatsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Performance stats for the session are streamed to the client when set to
   * <code>true</code>. Defaults to <code>false</code>.</p>
   */
  inline bool GetSharedWithClient() const { return m_sharedWithClient; }
  inline bool SharedWithClientHasBeenSet() const { return m_sharedWithClientHasBeenSet; }
  inline void SetSharedWithClient(bool value) {
    m_sharedWithClientHasBeenSet = true;
    m_sharedWithClient = value;
  }
  inline PerformanceStatsConfiguration& WithSharedWithClient(bool value) {
    SetSharedWithClient(value);
    return *this;
  }
  ///@}
 private:
  bool m_sharedWithClient{false};
  bool m_sharedWithClientHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
