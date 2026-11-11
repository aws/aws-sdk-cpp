/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/DataSync_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace DataSync {
namespace Model {

/**
 * <p>The platform-related details about the DataSync agent, such as the version
 * number.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Platform">AWS
 * API Reference</a></p>
 */
class Platform {
 public:
  AWS_DATASYNC_API Platform() = default;
  AWS_DATASYNC_API Platform(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DATASYNC_API Platform& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DATASYNC_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The version of the DataSync agent.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  Platform& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
