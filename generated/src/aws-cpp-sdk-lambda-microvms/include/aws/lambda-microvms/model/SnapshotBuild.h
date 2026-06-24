/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Contains size information about a MicroVM image snapshot build.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/SnapshotBuild">AWS
 * API Reference</a></p>
 */
class SnapshotBuild {
 public:
  AWS_LAMBDAMICROVMS_API SnapshotBuild() = default;
  AWS_LAMBDAMICROVMS_API SnapshotBuild(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API SnapshotBuild& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The size of the memory snapshot in bytes.</p>
   */
  inline long long GetMemorySnapshotSizeInBytes() const { return m_memorySnapshotSizeInBytes; }
  inline bool MemorySnapshotSizeInBytesHasBeenSet() const { return m_memorySnapshotSizeInBytesHasBeenSet; }
  inline void SetMemorySnapshotSizeInBytes(long long value) {
    m_memorySnapshotSizeInBytesHasBeenSet = true;
    m_memorySnapshotSizeInBytes = value;
  }
  inline SnapshotBuild& WithMemorySnapshotSizeInBytes(long long value) {
    SetMemorySnapshotSizeInBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the installed code in bytes.</p>
   */
  inline long long GetCodeInstallSizeInBytes() const { return m_codeInstallSizeInBytes; }
  inline bool CodeInstallSizeInBytesHasBeenSet() const { return m_codeInstallSizeInBytesHasBeenSet; }
  inline void SetCodeInstallSizeInBytes(long long value) {
    m_codeInstallSizeInBytesHasBeenSet = true;
    m_codeInstallSizeInBytes = value;
  }
  inline SnapshotBuild& WithCodeInstallSizeInBytes(long long value) {
    SetCodeInstallSizeInBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the disk snapshot in bytes.</p>
   */
  inline long long GetDiskSnapshotSizeInBytes() const { return m_diskSnapshotSizeInBytes; }
  inline bool DiskSnapshotSizeInBytesHasBeenSet() const { return m_diskSnapshotSizeInBytesHasBeenSet; }
  inline void SetDiskSnapshotSizeInBytes(long long value) {
    m_diskSnapshotSizeInBytesHasBeenSet = true;
    m_diskSnapshotSizeInBytes = value;
  }
  inline SnapshotBuild& WithDiskSnapshotSizeInBytes(long long value) {
    SetDiskSnapshotSizeInBytes(value);
    return *this;
  }
  ///@}
 private:
  long long m_memorySnapshotSizeInBytes{0};

  long long m_codeInstallSizeInBytes{0};

  long long m_diskSnapshotSizeInBytes{0};
  bool m_memorySnapshotSizeInBytesHasBeenSet = false;
  bool m_codeInstallSizeInBytesHasBeenSet = false;
  bool m_diskSnapshotSizeInBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
