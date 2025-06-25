/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSFileSystemIdentity.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>Describes the FSx for OpenZFS attachment configuration of an S3 access point
   * attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/S3AccessPointOpenZFSConfiguration">AWS
   * API Reference</a></p>
   */
  class S3AccessPointOpenZFSConfiguration
  {
  public:
    AWS_FSX_API S3AccessPointOpenZFSConfiguration() = default;
    AWS_FSX_API S3AccessPointOpenZFSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API S3AccessPointOpenZFSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the FSx for OpenZFS volume that the S3 access point is attached
     * to.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    S3AccessPointOpenZFSConfiguration& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system identity used to authorize file access requests made using
     * the S3 access point.</p>
     */
    inline const OpenZFSFileSystemIdentity& GetFileSystemIdentity() const { return m_fileSystemIdentity; }
    inline bool FileSystemIdentityHasBeenSet() const { return m_fileSystemIdentityHasBeenSet; }
    template<typename FileSystemIdentityT = OpenZFSFileSystemIdentity>
    void SetFileSystemIdentity(FileSystemIdentityT&& value) { m_fileSystemIdentityHasBeenSet = true; m_fileSystemIdentity = std::forward<FileSystemIdentityT>(value); }
    template<typename FileSystemIdentityT = OpenZFSFileSystemIdentity>
    S3AccessPointOpenZFSConfiguration& WithFileSystemIdentity(FileSystemIdentityT&& value) { SetFileSystemIdentity(std::forward<FileSystemIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    OpenZFSFileSystemIdentity m_fileSystemIdentity;
    bool m_fileSystemIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
