/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/NfsMountOptions.h>

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
 * <p>Specifies the Network File System (NFS) protocol configuration that DataSync
 * uses to access your FSx for OpenZFS file system or FSx for ONTAP file system's
 * storage virtual machine (SVM).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FsxProtocolNfs">AWS
 * API Reference</a></p>
 */
class FsxProtocolNfs {
 public:
  AWS_DATASYNC_API FsxProtocolNfs() = default;
  AWS_DATASYNC_API FsxProtocolNfs(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DATASYNC_API FsxProtocolNfs& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DATASYNC_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const NfsMountOptions& GetMountOptions() const { return m_mountOptions; }
  inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }
  template <typename MountOptionsT = NfsMountOptions>
  void SetMountOptions(MountOptionsT&& value) {
    m_mountOptionsHasBeenSet = true;
    m_mountOptions = std::forward<MountOptionsT>(value);
  }
  template <typename MountOptionsT = NfsMountOptions>
  FsxProtocolNfs& WithMountOptions(MountOptionsT&& value) {
    SetMountOptions(std::forward<MountOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  NfsMountOptions m_mountOptions;
  bool m_mountOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
