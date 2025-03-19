/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReleaseStatusValues.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>In response to the <code>DescribeOrderableReplicationInstances</code>
   * operation, this object describes an available replication instance. This
   * description includes the replication instance's type, engine version, and
   * allocated storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/OrderableReplicationInstance">AWS
   * API Reference</a></p>
   */
  class OrderableReplicationInstance
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API OrderableReplicationInstance() = default;
    AWS_DATABASEMIGRATIONSERVICE_API OrderableReplicationInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API OrderableReplicationInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the replication engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    OrderableReplicationInstance& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const { return m_replicationInstanceClass; }
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }
    template<typename ReplicationInstanceClassT = Aws::String>
    void SetReplicationInstanceClass(ReplicationInstanceClassT&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::forward<ReplicationInstanceClassT>(value); }
    template<typename ReplicationInstanceClassT = Aws::String>
    OrderableReplicationInstance& WithReplicationInstanceClass(ReplicationInstanceClassT&& value) { SetReplicationInstanceClass(std::forward<ReplicationInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    OrderableReplicationInstance& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline int GetMinAllocatedStorage() const { return m_minAllocatedStorage; }
    inline bool MinAllocatedStorageHasBeenSet() const { return m_minAllocatedStorageHasBeenSet; }
    inline void SetMinAllocatedStorage(int value) { m_minAllocatedStorageHasBeenSet = true; m_minAllocatedStorage = value; }
    inline OrderableReplicationInstance& WithMinAllocatedStorage(int value) { SetMinAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline int GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline OrderableReplicationInstance& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default amount of storage (in gigabytes) that is allocated for the
     * replication instance.</p>
     */
    inline int GetDefaultAllocatedStorage() const { return m_defaultAllocatedStorage; }
    inline bool DefaultAllocatedStorageHasBeenSet() const { return m_defaultAllocatedStorageHasBeenSet; }
    inline void SetDefaultAllocatedStorage(int value) { m_defaultAllocatedStorageHasBeenSet = true; m_defaultAllocatedStorage = value; }
    inline OrderableReplicationInstance& WithDefaultAllocatedStorage(int value) { SetDefaultAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline int GetIncludedAllocatedStorage() const { return m_includedAllocatedStorage; }
    inline bool IncludedAllocatedStorageHasBeenSet() const { return m_includedAllocatedStorageHasBeenSet; }
    inline void SetIncludedAllocatedStorage(int value) { m_includedAllocatedStorageHasBeenSet = true; m_includedAllocatedStorage = value; }
    inline OrderableReplicationInstance& WithIncludedAllocatedStorage(int value) { SetIncludedAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    OrderableReplicationInstance& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    OrderableReplicationInstance& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value returned when the specified <code>EngineVersion</code> of the
     * replication instance is in Beta or test mode. This indicates some features might
     * not work as expected.</p>  <p>DMS supports the <code>ReleaseStatus</code>
     * parameter in versions 3.1.4 and later.</p> 
     */
    inline ReleaseStatusValues GetReleaseStatus() const { return m_releaseStatus; }
    inline bool ReleaseStatusHasBeenSet() const { return m_releaseStatusHasBeenSet; }
    inline void SetReleaseStatus(ReleaseStatusValues value) { m_releaseStatusHasBeenSet = true; m_releaseStatus = value; }
    inline OrderableReplicationInstance& WithReleaseStatus(ReleaseStatusValues value) { SetReleaseStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_minAllocatedStorage{0};
    bool m_minAllocatedStorageHasBeenSet = false;

    int m_maxAllocatedStorage{0};
    bool m_maxAllocatedStorageHasBeenSet = false;

    int m_defaultAllocatedStorage{0};
    bool m_defaultAllocatedStorageHasBeenSet = false;

    int m_includedAllocatedStorage{0};
    bool m_includedAllocatedStorageHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    ReleaseStatusValues m_releaseStatus{ReleaseStatusValues::NOT_SET};
    bool m_releaseStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
