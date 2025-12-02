/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/OntapFileSystemIdentity.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Specifies the FSx for ONTAP volume that the S3 access point will be attached
 * to, and the file system user identity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateAndAttachS3AccessPointOntapConfiguration">AWS
 * API Reference</a></p>
 */
class CreateAndAttachS3AccessPointOntapConfiguration {
 public:
  AWS_FSX_API CreateAndAttachS3AccessPointOntapConfiguration() = default;
  AWS_FSX_API CreateAndAttachS3AccessPointOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API CreateAndAttachS3AccessPointOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the FSx for ONTAP volume to which you want the S3 access point
   * attached.</p>
   */
  inline const Aws::String& GetVolumeId() const { return m_volumeId; }
  inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
  template <typename VolumeIdT = Aws::String>
  void SetVolumeId(VolumeIdT&& value) {
    m_volumeIdHasBeenSet = true;
    m_volumeId = std::forward<VolumeIdT>(value);
  }
  template <typename VolumeIdT = Aws::String>
  CreateAndAttachS3AccessPointOntapConfiguration& WithVolumeId(VolumeIdT&& value) {
    SetVolumeId(std::forward<VolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the file system user identity to use for authorizing file read and
   * write requests that are made using this S3 access point.</p>
   */
  inline const OntapFileSystemIdentity& GetFileSystemIdentity() const { return m_fileSystemIdentity; }
  inline bool FileSystemIdentityHasBeenSet() const { return m_fileSystemIdentityHasBeenSet; }
  template <typename FileSystemIdentityT = OntapFileSystemIdentity>
  void SetFileSystemIdentity(FileSystemIdentityT&& value) {
    m_fileSystemIdentityHasBeenSet = true;
    m_fileSystemIdentity = std::forward<FileSystemIdentityT>(value);
  }
  template <typename FileSystemIdentityT = OntapFileSystemIdentity>
  CreateAndAttachS3AccessPointOntapConfiguration& WithFileSystemIdentity(FileSystemIdentityT&& value) {
    SetFileSystemIdentity(std::forward<FileSystemIdentityT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeId;
  bool m_volumeIdHasBeenSet = false;

  OntapFileSystemIdentity m_fileSystemIdentity;
  bool m_fileSystemIdentityHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
