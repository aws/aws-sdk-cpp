/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/DirectorySize.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace DirectoryService {
namespace Model {

/**
 * <p>Contains the directory size configuration for update
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DirectorySizeUpdateSettings">AWS
 * API Reference</a></p>
 */
class DirectorySizeUpdateSettings {
 public:
  AWS_DIRECTORYSERVICE_API DirectorySizeUpdateSettings() = default;
  AWS_DIRECTORYSERVICE_API DirectorySizeUpdateSettings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API DirectorySizeUpdateSettings& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The target directory size for the update operation.</p>
   */
  inline DirectorySize GetDirectorySize() const { return m_directorySize; }
  inline bool DirectorySizeHasBeenSet() const { return m_directorySizeHasBeenSet; }
  inline void SetDirectorySize(DirectorySize value) {
    m_directorySizeHasBeenSet = true;
    m_directorySize = value;
  }
  inline DirectorySizeUpdateSettings& WithDirectorySize(DirectorySize value) {
    SetDirectorySize(value);
    return *this;
  }
  ///@}
 private:
  DirectorySize m_directorySize{DirectorySize::NOT_SET};
  bool m_directorySizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
