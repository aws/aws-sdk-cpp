/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The Amazon RDS DB instance storage configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/RdsDbInstanceStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsDbInstanceStorageConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API RdsDbInstanceStorageConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API RdsDbInstanceStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API RdsDbInstanceStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The storage type to associate with the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    RdsDbInstanceStorageConfiguration& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new amount of storage in GB to allocate for the DB instance.</p>
     */
    inline double GetAllocatedStorageInGb() const { return m_allocatedStorageInGb; }
    inline bool AllocatedStorageInGbHasBeenSet() const { return m_allocatedStorageInGbHasBeenSet; }
    inline void SetAllocatedStorageInGb(double value) { m_allocatedStorageInGbHasBeenSet = true; m_allocatedStorageInGb = value; }
    inline RdsDbInstanceStorageConfiguration& WithAllocatedStorageInGb(double value) { SetAllocatedStorageInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline double GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(double value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline RdsDbInstanceStorageConfiguration& WithIops(double value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput for the DB instance.</p>
     */
    inline double GetStorageThroughput() const { return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(double value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline RdsDbInstanceStorageConfiguration& WithStorageThroughput(double value) { SetStorageThroughput(value); return *this;}
    ///@}
  private:

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    double m_allocatedStorageInGb{0.0};
    bool m_allocatedStorageInGbHasBeenSet = false;

    double m_iops{0.0};
    bool m_iopsHasBeenSet = false;

    double m_storageThroughput{0.0};
    bool m_storageThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
