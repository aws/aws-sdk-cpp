/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information about the values of pending modifications to a
   * replication instance. This data type is an object of the <a
   * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ReplicationInstance.html">
   * <code>ReplicationInstance</code> </a> user-defined data type. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class ReplicationPendingModifiedValues
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationPendingModifiedValues() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationPendingModifiedValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationPendingModifiedValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class.</p> <p>For more information on the
     * settings and capacities for the available replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const { return m_replicationInstanceClass; }
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }
    template<typename ReplicationInstanceClassT = Aws::String>
    void SetReplicationInstanceClass(ReplicationInstanceClassT&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::forward<ReplicationInstanceClassT>(value); }
    template<typename ReplicationInstanceClassT = Aws::String>
    ReplicationPendingModifiedValues& WithReplicationInstanceClass(ReplicationInstanceClassT&& value) { SetReplicationInstanceClass(std::forward<ReplicationInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline ReplicationPendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the replication instance is a Multi-AZ deployment. You
     * can't set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter
     * is set to <code>true</code>. </p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ReplicationPendingModifiedValues& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ReplicationPendingModifiedValues& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline const Aws::String& GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    template<typename NetworkTypeT = Aws::String>
    void SetNetworkType(NetworkTypeT&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::forward<NetworkTypeT>(value); }
    template<typename NetworkTypeT = Aws::String>
    ReplicationPendingModifiedValues& WithNetworkType(NetworkTypeT&& value) { SetNetworkType(std::forward<NetworkTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
