/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Describes the software metadata for an image, such as the installed NVIDIA
 * GRID driver version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ImageSoftwareMetadata">AWS
 * API Reference</a></p>
 */
class ImageSoftwareMetadata {
 public:
  AWS_APPSTREAM_API ImageSoftwareMetadata() = default;
  AWS_APPSTREAM_API ImageSoftwareMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API ImageSoftwareMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The version of the NVIDIA GRID driver installed on the image. This field is
   * empty if no NVIDIA GRID driver is installed.</p>
   */
  inline const Aws::String& GetNvidiaGridDriverVersion() const { return m_nvidiaGridDriverVersion; }
  inline bool NvidiaGridDriverVersionHasBeenSet() const { return m_nvidiaGridDriverVersionHasBeenSet; }
  template <typename NvidiaGridDriverVersionT = Aws::String>
  void SetNvidiaGridDriverVersion(NvidiaGridDriverVersionT&& value) {
    m_nvidiaGridDriverVersionHasBeenSet = true;
    m_nvidiaGridDriverVersion = std::forward<NvidiaGridDriverVersionT>(value);
  }
  template <typename NvidiaGridDriverVersionT = Aws::String>
  ImageSoftwareMetadata& WithNvidiaGridDriverVersion(NvidiaGridDriverVersionT&& value) {
    SetNvidiaGridDriverVersion(std::forward<NvidiaGridDriverVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nvidiaGridDriverVersion;
  bool m_nvidiaGridDriverVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
