/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API OrderableReplicationInstance
  {
  public:
    OrderableReplicationInstance();
    OrderableReplicationInstance(const Aws::Utils::Json::JsonValue& jsonValue);
    OrderableReplicationInstance& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The version of the replication engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the replication engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the replication engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

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
    inline OrderableReplicationInstance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the replication engine.</p>
     */
    inline OrderableReplicationInstance& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

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
    inline void SetReplicationInstanceClass(const Aws::String& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(Aws::String&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

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
    inline OrderableReplicationInstance& WithReplicationInstanceClass(const Aws::String& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline OrderableReplicationInstance& WithReplicationInstanceClass(Aws::String&& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline OrderableReplicationInstance& WithReplicationInstanceClass(const char* value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The type of storage used by the replication instance.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

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
    inline OrderableReplicationInstance& WithStorageType(Aws::String&& value) { SetStorageType(value); return *this;}

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
    inline void SetIncludedAllocatedStorage(int value) { m_includedAllocatedStorageHasBeenSet = true; m_includedAllocatedStorage = value; }

    /**
     * <p>The amount of storage (in gigabytes) that is allocated for the replication
     * instance.</p>
     */
    inline OrderableReplicationInstance& WithIncludedAllocatedStorage(int value) { SetIncludedAllocatedStorage(value); return *this;}

  private:
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
    int m_minAllocatedStorage;
    bool m_minAllocatedStorageHasBeenSet;
    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet;
    int m_defaultAllocatedStorage;
    bool m_defaultAllocatedStorageHasBeenSet;
    int m_includedAllocatedStorage;
    bool m_includedAllocatedStorageHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
