/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ReplicationPendingModifiedValues
  {
  public:
    ReplicationPendingModifiedValues();
    ReplicationPendingModifiedValues(Aws::Utils::Json::JsonView jsonValue);
    ReplicationPendingModifiedValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const{ return m_replicationInstanceClass; }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(const Aws::String& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(Aws::String&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(const char* value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline ReplicationPendingModifiedValues& WithReplicationInstanceClass(const Aws::String& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline ReplicationPendingModifiedValues& WithReplicationInstanceClass(Aws::String&& value) { SetReplicationInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline ReplicationPendingModifiedValues& WithReplicationInstanceClass(const char* value) { SetReplicationInstanceClass(value); return *this;}


    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline ReplicationPendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p> Specifies if the replication instance is a Multi-AZ deployment. You cannot
     * set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter is set
     * to <code>true</code>. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p> Specifies if the replication instance is a Multi-AZ deployment. You cannot
     * set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter is set
     * to <code>true</code>. </p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p> Specifies if the replication instance is a Multi-AZ deployment. You cannot
     * set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter is set
     * to <code>true</code>. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p> Specifies if the replication instance is a Multi-AZ deployment. You cannot
     * set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter is set
     * to <code>true</code>. </p>
     */
    inline ReplicationPendingModifiedValues& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline ReplicationPendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline ReplicationPendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline ReplicationPendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

  private:

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
