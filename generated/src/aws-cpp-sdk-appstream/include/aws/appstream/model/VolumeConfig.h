/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Configuration for the root volume of fleet instances and image builders. This
 * allows you to customize the storage capacity beyond the default 200
 * GB.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/VolumeConfig">AWS
 * API Reference</a></p>
 */
class VolumeConfig {
 public:
  AWS_APPSTREAM_API VolumeConfig() = default;
  AWS_APPSTREAM_API VolumeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API VolumeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The size of the root volume in GB. Valid range is 200-500 GB. The default is
   * 200 GB, which is included in the hourly instance rate. Additional storage beyond
   * 200 GB incurs extra charges and applies to instances regardless of their running
   * state.</p>
   */
  inline int GetVolumeSizeInGb() const { return m_volumeSizeInGb; }
  inline bool VolumeSizeInGbHasBeenSet() const { return m_volumeSizeInGbHasBeenSet; }
  inline void SetVolumeSizeInGb(int value) {
    m_volumeSizeInGbHasBeenSet = true;
    m_volumeSizeInGb = value;
  }
  inline VolumeConfig& WithVolumeSizeInGb(int value) {
    SetVolumeSizeInGb(value);
    return *this;
  }
  ///@}
 private:
  int m_volumeSizeInGb{0};
  bool m_volumeSizeInGbHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
