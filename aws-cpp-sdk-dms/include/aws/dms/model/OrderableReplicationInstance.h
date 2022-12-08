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
    AWS_DATABASEMIGRATIONSERVICE_API OrderableReplicationInstance();
    AWS_DATABASEMIGRATIONSERVICE_API OrderableReplicationInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API OrderableReplicationInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the replication engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the replication engine.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the replication engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the replication engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the replication engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the replication engine.</p>
     */
    inline OrderableReplicationInstance& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the replication engine.</p>
     */
    inline OrderableReplicationInstance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the replication engine.</p>
     */
    inline OrderableReplicationInstance& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const{ return m_replicationInstanceClass; }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline void SetReplicationInstanceClass(const Aws::String& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline void SetReplicationInstanceClass(Aws::String&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline void SetReplicationInstanceClass(const char* value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline OrderableReplicationInstance& WithReplicationInstanceClass(const Aws::String& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline OrderableReplicationInstance& WithReplicationInstanceClass(Aws::String&& value) { SetReplicationInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline OrderableReplicationInstance& WithReplicationInstanceClass(const char* value) { SetReplicationInstanceClass(value); return *this;}


    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline OrderableReplicationInstance& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline OrderableReplicationInstance& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline OrderableReplicationInstance& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline int GetMinAllocatedStorage() const{ return m_minAllocatedStorage; }

    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline bool MinAllocatedStorageHasBeenSet() const { return m_minAllocatedStorageHasBeenSet; }

    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline void SetMinAllocatedStorage(int value) { m_minAllocatedStorageHasBeenSet = true; m_minAllocatedStorage = value; }

    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline OrderableReplicationInstance& WithMinAllocatedStorage(int value) { SetMinAllocatedStorage(value); return *this;}


    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline int GetMaxAllocatedStorage() const{ return m_maxAllocatedStorage; }

    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }

    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }

    /**
     * <p>The minimum amount of storage (in gigabytes) that can be allocated for the
     * replication instance.</p>
     */
    inline OrderableReplicationInstance& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}


    /**
     * <p>The default amount of storage (in gigabytes) that is allocated for the
     * replication instance.</p>
     */
    inline int GetDefaultAllocatedStorage() const{ return m_defaultAllocatedStorage; }

    /**
     * <p>The default amount of storage (in gigabytes) that is allocated for the
     * replication instance.</p>
     */
    inline bool DefaultAllocatedStorageHasBeenSet() const { return m_defaultAllocatedStorageHasBeenSet; }

    /**
     * <p>The default amount of storage (in gigabytes) that is allocated for the
     * replication instance.</p>
     */
    inline void SetDefaultAllocatedStorage(int value) { m_defaultAllocatedStorageHasBeenSet = true; m_defaultAllocatedStorage = value; }

    /**
     * <p>The default amount of storage (in gigabytes) that is allocated for the
     * replication instance.</p>
     */
    inline OrderableReplicationInstance& WithDefaultAllocatedStorage(int value) { SetDefaultAllocatedStorage(value); return *this;}


    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline int GetIncludedAllocatedStorage() const{ return m_includedAllocatedStorage; }

    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline bool IncludedAllocatedStorageHasBeenSet() const { return m_includedAllocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline void SetIncludedAllocatedStorage(int value) { m_includedAllocatedStorageHasBeenSet = true; m_includedAllocatedStorage = value; }

    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline OrderableReplicationInstance& WithIncludedAllocatedStorage(int value) { SetIncludedAllocatedStorage(value); return *this;}


    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline OrderableReplicationInstance& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline OrderableReplicationInstance& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline OrderableReplicationInstance& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline OrderableReplicationInstance& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>List of Availability Zones for this replication instance.</p>
     */
    inline OrderableReplicationInstance& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The value returned when the specified <code>EngineVersion</code> of the
     * replication instance is in Beta or test mode. This indicates some features might
     * not work as expected.</p>  <p>DMS supports the <code>ReleaseStatus</code>
     * parameter in versions 3.1.4 and later.</p> 
     */
    inline const ReleaseStatusValues& GetReleaseStatus() const{ return m_releaseStatus; }

    /**
     * <p>The value returned when the specified <code>EngineVersion</code> of the
     * replication instance is in Beta or test mode. This indicates some features might
     * not work as expected.</p>  <p>DMS supports the <code>ReleaseStatus</code>
     * parameter in versions 3.1.4 and later.</p> 
     */
    inline bool ReleaseStatusHasBeenSet() const { return m_releaseStatusHasBeenSet; }

    /**
     * <p>The value returned when the specified <code>EngineVersion</code> of the
     * replication instance is in Beta or test mode. This indicates some features might
     * not work as expected.</p>  <p>DMS supports the <code>ReleaseStatus</code>
     * parameter in versions 3.1.4 and later.</p> 
     */
    inline void SetReleaseStatus(const ReleaseStatusValues& value) { m_releaseStatusHasBeenSet = true; m_releaseStatus = value; }

    /**
     * <p>The value returned when the specified <code>EngineVersion</code> of the
     * replication instance is in Beta or test mode. This indicates some features might
     * not work as expected.</p>  <p>DMS supports the <code>ReleaseStatus</code>
     * parameter in versions 3.1.4 and later.</p> 
     */
    inline void SetReleaseStatus(ReleaseStatusValues&& value) { m_releaseStatusHasBeenSet = true; m_releaseStatus = std::move(value); }

    /**
     * <p>The value returned when the specified <code>EngineVersion</code> of the
     * replication instance is in Beta or test mode. This indicates some features might
     * not work as expected.</p>  <p>DMS supports the <code>ReleaseStatus</code>
     * parameter in versions 3.1.4 and later.</p> 
     */
    inline OrderableReplicationInstance& WithReleaseStatus(const ReleaseStatusValues& value) { SetReleaseStatus(value); return *this;}

    /**
     * <p>The value returned when the specified <code>EngineVersion</code> of the
     * replication instance is in Beta or test mode. This indicates some features might
     * not work as expected.</p>  <p>DMS supports the <code>ReleaseStatus</code>
     * parameter in versions 3.1.4 and later.</p> 
     */
    inline OrderableReplicationInstance& WithReleaseStatus(ReleaseStatusValues&& value) { SetReleaseStatus(std::move(value)); return *this;}

  private:

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_minAllocatedStorage;
    bool m_minAllocatedStorageHasBeenSet = false;

    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet = false;

    int m_defaultAllocatedStorage;
    bool m_defaultAllocatedStorageHasBeenSet = false;

    int m_includedAllocatedStorage;
    bool m_includedAllocatedStorageHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    ReleaseStatusValues m_releaseStatus;
    bool m_releaseStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
