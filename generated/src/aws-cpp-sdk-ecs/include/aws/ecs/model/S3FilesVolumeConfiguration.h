/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>This parameter is specified when you're using an Amazon S3 Files file system
 * for task storage. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/s3files-volumes.html">Amazon
 * S3 Files volumes</a> in the <i>Amazon Elastic Container Service Developer
 * Guide</i>.</p>  <p>Your task definition must include a Task IAM Role.
 * See <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-files-prereq-policies.html#s3-files-prereq-iam-compute-role">
 * IAM role for attaching your file system to AWS compute resources</a> for
 * required permissions.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/S3FilesVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class S3FilesVolumeConfiguration {
 public:
  AWS_ECS_API S3FilesVolumeConfiguration() = default;
  AWS_ECS_API S3FilesVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API S3FilesVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The full ARN of the S3 Files file system to mount.</p>
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
   * <p>The directory within the Amazon S3 Files file system to mount as the root
   * directory. If this parameter is omitted, the root of the Amazon S3 Files file
   * system will be used. Specifying <code>/</code> will have the same effect as
   * omitting this parameter.</p>  <p>If a S3 Files access point is
   * specified in the <code>accessPointArn</code>, the root directory parameter must
   * either be omitted or set to <code>/</code> which will enforce the path set on
   * the S3 Files access point.</p>
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
   * <p>The port to use for sending encrypted data between the ECS host and the S3
   * Files file system. If you do not specify a transit encryption port, it will use
   * the port selection strategy that the Amazon S3 Files mount helper uses. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-files-mounting.html">S3
   * Files mount helper</a>.</p>
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
   * <p>The full ARN of the S3 Files access point to use. If an access point is
   * specified, the root directory value specified in the
   * <code>S3FilesVolumeConfiguration</code> must either be omitted or set to
   * <code>/</code> which will enforce the path set on the S3 Files access point. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-files-access-points-creating.html">Creating
   * S3 Files access points</a>.</p>
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
}  // namespace ECS
}  // namespace Aws
