/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>This is used when you're using an S3Files file system for job
 * storage.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/S3FilesVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class S3FilesVolumeConfiguration {
 public:
  AWS_BATCH_API S3FilesVolumeConfiguration() = default;
  AWS_BATCH_API S3FilesVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API S3FilesVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3Files file system to use.</p>
   */
  inline const Aws::String& GetFileSystemArn() const { return m_fileSystemArn; }
  inline bool FileSystemArnHasBeenSet() const { return m_fileSystemArnHasBeenSet; }
  template <typename FileSystemArnT = Aws::String>
  void SetFileSystemArn(FileSystemArnT&& value) {
    m_fileSystemArnHasBeenSet = true;
    m_fileSystemArn = std::forward<FileSystemArnT>(value);
  }
  template <typename FileSystemArnT = Aws::String>
  S3FilesVolumeConfiguration& WithFileSystemArn(FileSystemArnT&& value) {
    SetFileSystemArn(std::forward<FileSystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The directory within the S3Files file system to mount as the root
   * directory.</p>
   */
  inline const Aws::String& GetRootDirectory() const { return m_rootDirectory; }
  inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
  template <typename RootDirectoryT = Aws::String>
  void SetRootDirectory(RootDirectoryT&& value) {
    m_rootDirectoryHasBeenSet = true;
    m_rootDirectory = std::forward<RootDirectoryT>(value);
  }
  template <typename RootDirectoryT = Aws::String>
  S3FilesVolumeConfiguration& WithRootDirectory(RootDirectoryT&& value) {
    SetRootDirectory(std::forward<RootDirectoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port to use when sending encrypted data between the Amazon ECS host and
   * the S3Files file system server.</p>
   */
  inline int GetTransitEncryptionPort() const { return m_transitEncryptionPort; }
  inline bool TransitEncryptionPortHasBeenSet() const { return m_transitEncryptionPortHasBeenSet; }
  inline void SetTransitEncryptionPort(int value) {
    m_transitEncryptionPortHasBeenSet = true;
    m_transitEncryptionPort = value;
  }
  inline S3FilesVolumeConfiguration& WithTransitEncryptionPort(int value) {
    SetTransitEncryptionPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3Files access point to use.</p>
   */
  inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
  inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
  template <typename AccessPointArnT = Aws::String>
  void SetAccessPointArn(AccessPointArnT&& value) {
    m_accessPointArnHasBeenSet = true;
    m_accessPointArn = std::forward<AccessPointArnT>(value);
  }
  template <typename AccessPointArnT = Aws::String>
  S3FilesVolumeConfiguration& WithAccessPointArn(AccessPointArnT&& value) {
    SetAccessPointArn(std::forward<AccessPointArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileSystemArn;

  Aws::String m_rootDirectory;

  int m_transitEncryptionPort{0};

  Aws::String m_accessPointArn;
  bool m_fileSystemArnHasBeenSet = false;
  bool m_rootDirectoryHasBeenSet = false;
  bool m_transitEncryptionPortHasBeenSet = false;
  bool m_accessPointArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
