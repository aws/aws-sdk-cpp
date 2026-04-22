/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizer {
namespace Model {

/**
 * <p> The configuration of the recommended RDS storage. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/DBStorageConfiguration">AWS
 * API Reference</a></p>
 */
class DBStorageConfiguration {
 public:
  AWS_COMPUTEOPTIMIZER_API DBStorageConfiguration() = default;
  AWS_COMPUTEOPTIMIZER_API DBStorageConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API DBStorageConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The type of DB storage. </p>
   */
  inline const Aws::String& GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  template <typename StorageTypeT = Aws::String>
  void SetStorageType(StorageTypeT&& value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = std::forward<StorageTypeT>(value);
  }
  template <typename StorageTypeT = Aws::String>
  DBStorageConfiguration& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The size of the DB storage in gigabytes (GB). </p>
   */
  inline int64_t GetAllocatedStorage() const { return m_allocatedStorage; }
  inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
  inline void SetAllocatedStorage(int64_t value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline DBStorageConfiguration& WithAllocatedStorage(int64_t value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The provisioned IOPs of the DB storage. </p>
   */
  inline int64_t GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int64_t value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline DBStorageConfiguration& WithIops(int64_t value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum limit in gibibytes (GiB) to which Amazon RDS can automatically
   * scale the storage of the DB instance. </p>
   */
  inline int64_t GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
  inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
  inline void SetMaxAllocatedStorage(int64_t value) {
    m_maxAllocatedStorageHasBeenSet = true;
    m_maxAllocatedStorage = value;
  }
  inline DBStorageConfiguration& WithMaxAllocatedStorage(int64_t value) {
    SetMaxAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The storage throughput of the DB storage. </p>
   */
  inline int64_t GetStorageThroughput() const { return m_storageThroughput; }
  inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
  inline void SetStorageThroughput(int64_t value) {
    m_storageThroughputHasBeenSet = true;
    m_storageThroughput = value;
  }
  inline DBStorageConfiguration& WithStorageThroughput(int64_t value) {
    SetStorageThroughput(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_storageType;

  int64_t m_allocatedStorage{0};

  int64_t m_iops{0};

  int64_t m_maxAllocatedStorage{0};

  int64_t m_storageThroughput{0};
  bool m_storageTypeHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_maxAllocatedStorageHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws
