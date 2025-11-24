/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/DefaultStorageTier.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KinesisVideo {
namespace Model {

/**
 * <p>The configuration for stream storage, including the default storage tier for
 * stream data. This configuration determines how stream data is stored and
 * accessed, with different tiers offering varying levels of performance and cost
 * optimization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/StreamStorageConfiguration">AWS
 * API Reference</a></p>
 */
class StreamStorageConfiguration {
 public:
  AWS_KINESISVIDEO_API StreamStorageConfiguration() = default;
  AWS_KINESISVIDEO_API StreamStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISVIDEO_API StreamStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default storage tier for the stream data. This setting determines the
   * storage class used for stream data, affecting both performance characteristics
   * and storage costs.</p> <p>Available storage tiers:</p> <ul> <li> <p>
   * <code>HOT</code> - Optimized for frequent access with the lowest latency and
   * highest performance. Ideal for real-time applications and frequently accessed
   * data.</p> </li> <li> <p> <code>WARM</code> - Balanced performance and cost for
   * moderately accessed data. Suitable for data that is accessed regularly but not
   * continuously.</p> </li> </ul>
   */
  inline DefaultStorageTier GetDefaultStorageTier() const { return m_defaultStorageTier; }
  inline bool DefaultStorageTierHasBeenSet() const { return m_defaultStorageTierHasBeenSet; }
  inline void SetDefaultStorageTier(DefaultStorageTier value) {
    m_defaultStorageTierHasBeenSet = true;
    m_defaultStorageTier = value;
  }
  inline StreamStorageConfiguration& WithDefaultStorageTier(DefaultStorageTier value) {
    SetDefaultStorageTier(value);
    return *this;
  }
  ///@}
 private:
  DefaultStorageTier m_defaultStorageTier{DefaultStorageTier::NOT_SET};
  bool m_defaultStorageTierHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
