/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>Specifies the persistent EBS volume configuration for workers in a service
 * managed fleet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/PersistentVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class PersistentVolumeConfiguration {
 public:
  AWS_DEADLINE_API PersistentVolumeConfiguration() = default;
  AWS_DEADLINE_API PersistentVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API PersistentVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The persistent volume size in GiB. The default is 250.</p>
   */
  inline int GetSizeGiB() const { return m_sizeGiB; }
  inline bool SizeGiBHasBeenSet() const { return m_sizeGiBHasBeenSet; }
  inline void SetSizeGiB(int value) {
    m_sizeGiBHasBeenSet = true;
    m_sizeGiB = value;
  }
  inline PersistentVolumeConfiguration& WithSizeGiB(int value) {
    SetSizeGiB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IOPS per persistent volume. The default is 3000.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline PersistentVolumeConfiguration& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throughput per persistent volume in MiB. The default is 125.</p>
   */
  inline int GetThroughputMiB() const { return m_throughputMiB; }
  inline bool ThroughputMiBHasBeenSet() const { return m_throughputMiBHasBeenSet; }
  inline void SetThroughputMiB(int value) {
    m_throughputMiBHasBeenSet = true;
    m_throughputMiB = value;
  }
  inline PersistentVolumeConfiguration& WithThroughputMiB(int value) {
    SetThroughputMiB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file system path where the persistent volume is mounted on the worker
   * instance.</p>
   */
  inline const Aws::String& GetMountPath() const { return m_mountPath; }
  inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
  template <typename MountPathT = Aws::String>
  void SetMountPath(MountPathT&& value) {
    m_mountPathHasBeenSet = true;
    m_mountPath = std::forward<MountPathT>(value);
  }
  template <typename MountPathT = Aws::String>
  PersistentVolumeConfiguration& WithMountPath(MountPathT&& value) {
    SetMountPath(std::forward<MountPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of hours a persistent volume can remain unused before it is
   * deleted. The default is 168 (7 days).</p>
   */
  inline int GetLastUsedTtlHours() const { return m_lastUsedTtlHours; }
  inline bool LastUsedTtlHoursHasBeenSet() const { return m_lastUsedTtlHoursHasBeenSet; }
  inline void SetLastUsedTtlHours(int value) {
    m_lastUsedTtlHoursHasBeenSet = true;
    m_lastUsedTtlHours = value;
  }
  inline PersistentVolumeConfiguration& WithLastUsedTtlHours(int value) {
    SetLastUsedTtlHours(value);
    return *this;
  }
  ///@}
 private:
  int m_sizeGiB{0};

  int m_iops{0};

  int m_throughputMiB{0};

  Aws::String m_mountPath;

  int m_lastUsedTtlHours{0};
  bool m_sizeGiBHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_throughputMiBHasBeenSet = false;
  bool m_mountPathHasBeenSet = false;
  bool m_lastUsedTtlHoursHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
