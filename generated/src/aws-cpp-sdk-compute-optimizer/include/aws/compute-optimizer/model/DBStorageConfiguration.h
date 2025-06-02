/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> The configuration of the recommended RDS storage. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/DBStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class DBStorageConfiguration
  {
  public:
    AWS_COMPUTEOPTIMIZER_API DBStorageConfiguration() = default;
    AWS_COMPUTEOPTIMIZER_API DBStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API DBStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of DB storage. </p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    DBStorageConfiguration& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the DB storage in gigabytes (GB). </p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBStorageConfiguration& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The provisioned IOPs of the DB storage. </p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline DBStorageConfiguration& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance. </p>
     */
    inline int GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline DBStorageConfiguration& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The storage throughput of the DB storage. </p>
     */
    inline int GetStorageThroughput() const { return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline DBStorageConfiguration& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}
  private:

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    int m_maxAllocatedStorage{0};
    bool m_maxAllocatedStorageHasBeenSet = false;

    int m_storageThroughput{0};
    bool m_storageThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
