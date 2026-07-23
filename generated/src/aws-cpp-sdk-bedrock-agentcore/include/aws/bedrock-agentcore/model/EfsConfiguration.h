/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The configuration for mounting an Amazon Elastic File System (Amazon EFS)
 * access point that you own into a session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EfsConfiguration">AWS
 * API Reference</a></p>
 */
class EfsConfiguration {
 public:
  AWS_BEDROCKAGENTCORE_API EfsConfiguration() = default;
  AWS_BEDROCKAGENTCORE_API EfsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EfsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Elastic File System (Amazon EFS)
   * access point to mount.</p>
   */
  inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
  inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
  template <typename AccessPointArnT = Aws::String>
  void SetAccessPointArn(AccessPointArnT&& value) {
    m_accessPointArnHasBeenSet = true;
    m_accessPointArn = std::forward<AccessPointArnT>(value);
  }
  template <typename AccessPointArnT = Aws::String>
  EfsConfiguration& WithAccessPointArn(AccessPointArnT&& value) {
    SetAccessPointArn(std::forward<AccessPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The absolute path within the session at which the access point is mounted,
   * for example <code>/mnt/efs</code>. Each mount path must be unique across all
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
  EfsConfiguration& WithMountPath(MountPathT&& value) {
    SetMountPath(std::forward<MountPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Elastic File System (Amazon EFS)
   * file system that owns the access point.</p>
   */
  inline const Aws::String& GetFileSystemArn() const { return m_fileSystemArn; }
  inline bool FileSystemArnHasBeenSet() const { return m_fileSystemArnHasBeenSet; }
  template <typename FileSystemArnT = Aws::String>
  void SetFileSystemArn(FileSystemArnT&& value) {
    m_fileSystemArnHasBeenSet = true;
    m_fileSystemArn = std::forward<FileSystemArnT>(value);
  }
  template <typename FileSystemArnT = Aws::String>
  EfsConfiguration& WithFileSystemArn(FileSystemArnT&& value) {
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
}  // namespace BedrockAgentCore
}  // namespace Aws
