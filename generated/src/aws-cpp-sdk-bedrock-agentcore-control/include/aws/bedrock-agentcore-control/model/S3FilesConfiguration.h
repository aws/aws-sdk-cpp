/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The configuration for mounting an Amazon Simple Storage Service (Amazon S3)
 * Files access point that you own into a session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/S3FilesConfiguration">AWS
 * API Reference</a></p>
 */
class S3FilesConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API S3FilesConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API S3FilesConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API S3FilesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Simple Storage Service (Amazon
   * S3) Files access point to mount.</p>
   */
  inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
  inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
  template <typename AccessPointArnT = Aws::String>
  void SetAccessPointArn(AccessPointArnT&& value) {
    m_accessPointArnHasBeenSet = true;
    m_accessPointArn = std::forward<AccessPointArnT>(value);
  }
  template <typename AccessPointArnT = Aws::String>
  S3FilesConfiguration& WithAccessPointArn(AccessPointArnT&& value) {
    SetAccessPointArn(std::forward<AccessPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The absolute path within the session at which the access point is mounted,
   * for example <code>/mnt/s3data</code>. Each mount path must be unique across all
   * file system configurations in the session.</p>
   */
  inline const Aws::String& GetMountPath() const { return m_mountPath; }
  inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
  template <typename MountPathT = Aws::String>
  void SetMountPath(MountPathT&& value) {
    m_mountPathHasBeenSet = true;
    m_mountPath = std::forward<MountPathT>(value);
  }
  template <typename MountPathT = Aws::String>
  S3FilesConfiguration& WithMountPath(MountPathT&& value) {
    SetMountPath(std::forward<MountPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Simple Storage Service (Amazon
   * S3) Files file system that owns the access point.</p>
   */
  inline const Aws::String& GetFileSystemArn() const { return m_fileSystemArn; }
  inline bool FileSystemArnHasBeenSet() const { return m_fileSystemArnHasBeenSet; }
  template <typename FileSystemArnT = Aws::String>
  void SetFileSystemArn(FileSystemArnT&& value) {
    m_fileSystemArnHasBeenSet = true;
    m_fileSystemArn = std::forward<FileSystemArnT>(value);
  }
  template <typename FileSystemArnT = Aws::String>
  S3FilesConfiguration& WithFileSystemArn(FileSystemArnT&& value) {
    SetFileSystemArn(std::forward<FileSystemArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessPointArn;

  Aws::String m_mountPath;

  Aws::String m_fileSystemArn;
  bool m_accessPointArnHasBeenSet = false;
  bool m_mountPathHasBeenSet = false;
  bool m_fileSystemArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
