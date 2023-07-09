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
   * <p>Provides information that describes the configuration of the recommended
   * target engine on Amazon RDS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RdsConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsConfiguration
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RdsConfiguration();
    AWS_DATABASEMIGRATIONSERVICE_API RdsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RdsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline const Aws::String& GetEngineEdition() const{ return m_engineEdition; }

    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline bool EngineEditionHasBeenSet() const { return m_engineEditionHasBeenSet; }

    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline void SetEngineEdition(const Aws::String& value) { m_engineEditionHasBeenSet = true; m_engineEdition = value; }

    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline void SetEngineEdition(Aws::String&& value) { m_engineEditionHasBeenSet = true; m_engineEdition = std::move(value); }

    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline void SetEngineEdition(const char* value) { m_engineEditionHasBeenSet = true; m_engineEdition.assign(value); }

    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline RdsConfiguration& WithEngineEdition(const Aws::String& value) { SetEngineEdition(value); return *this;}

    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline RdsConfiguration& WithEngineEdition(Aws::String&& value) { SetEngineEdition(std::move(value)); return *this;}

    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline RdsConfiguration& WithEngineEdition(const char* value) { SetEngineEdition(value); return *this;}


    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline RdsConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline RdsConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline RdsConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>Describes the number of virtual CPUs (vCPU) on the recommended Amazon RDS DB
     * instance that meets your requirements.</p>
     */
    inline double GetInstanceVcpu() const{ return m_instanceVcpu; }

    /**
     * <p>Describes the number of virtual CPUs (vCPU) on the recommended Amazon RDS DB
     * instance that meets your requirements.</p>
     */
    inline bool InstanceVcpuHasBeenSet() const { return m_instanceVcpuHasBeenSet; }

    /**
     * <p>Describes the number of virtual CPUs (vCPU) on the recommended Amazon RDS DB
     * instance that meets your requirements.</p>
     */
    inline void SetInstanceVcpu(double value) { m_instanceVcpuHasBeenSet = true; m_instanceVcpu = value; }

    /**
     * <p>Describes the number of virtual CPUs (vCPU) on the recommended Amazon RDS DB
     * instance that meets your requirements.</p>
     */
    inline RdsConfiguration& WithInstanceVcpu(double value) { SetInstanceVcpu(value); return *this;}


    /**
     * <p>Describes the memory on the recommended Amazon RDS DB instance that meets
     * your requirements.</p>
     */
    inline double GetInstanceMemory() const{ return m_instanceMemory; }

    /**
     * <p>Describes the memory on the recommended Amazon RDS DB instance that meets
     * your requirements.</p>
     */
    inline bool InstanceMemoryHasBeenSet() const { return m_instanceMemoryHasBeenSet; }

    /**
     * <p>Describes the memory on the recommended Amazon RDS DB instance that meets
     * your requirements.</p>
     */
    inline void SetInstanceMemory(double value) { m_instanceMemoryHasBeenSet = true; m_instanceMemory = value; }

    /**
     * <p>Describes the memory on the recommended Amazon RDS DB instance that meets
     * your requirements.</p>
     */
    inline RdsConfiguration& WithInstanceMemory(double value) { SetInstanceMemory(value); return *this;}


    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline RdsConfiguration& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline RdsConfiguration& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline RdsConfiguration& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>Describes the storage size of the recommended Amazon RDS DB instance that
     * meets your requirements.</p>
     */
    inline int GetStorageSize() const{ return m_storageSize; }

    /**
     * <p>Describes the storage size of the recommended Amazon RDS DB instance that
     * meets your requirements.</p>
     */
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }

    /**
     * <p>Describes the storage size of the recommended Amazon RDS DB instance that
     * meets your requirements.</p>
     */
    inline void SetStorageSize(int value) { m_storageSizeHasBeenSet = true; m_storageSize = value; }

    /**
     * <p>Describes the storage size of the recommended Amazon RDS DB instance that
     * meets your requirements.</p>
     */
    inline RdsConfiguration& WithStorageSize(int value) { SetStorageSize(value); return *this;}


    /**
     * <p>Describes the number of I/O operations completed each second (IOPS) on the
     * recommended Amazon RDS DB instance that meets your requirements.</p>
     */
    inline int GetStorageIops() const{ return m_storageIops; }

    /**
     * <p>Describes the number of I/O operations completed each second (IOPS) on the
     * recommended Amazon RDS DB instance that meets your requirements.</p>
     */
    inline bool StorageIopsHasBeenSet() const { return m_storageIopsHasBeenSet; }

    /**
     * <p>Describes the number of I/O operations completed each second (IOPS) on the
     * recommended Amazon RDS DB instance that meets your requirements.</p>
     */
    inline void SetStorageIops(int value) { m_storageIopsHasBeenSet = true; m_storageIops = value; }

    /**
     * <p>Describes the number of I/O operations completed each second (IOPS) on the
     * recommended Amazon RDS DB instance that meets your requirements.</p>
     */
    inline RdsConfiguration& WithStorageIops(int value) { SetStorageIops(value); return *this;}


    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline const Aws::String& GetDeploymentOption() const{ return m_deploymentOption; }

    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }

    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline void SetDeploymentOption(const Aws::String& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }

    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline void SetDeploymentOption(Aws::String&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::move(value); }

    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline void SetDeploymentOption(const char* value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption.assign(value); }

    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline RdsConfiguration& WithDeploymentOption(const Aws::String& value) { SetDeploymentOption(value); return *this;}

    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline RdsConfiguration& WithDeploymentOption(Aws::String&& value) { SetDeploymentOption(std::move(value)); return *this;}

    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline RdsConfiguration& WithDeploymentOption(const char* value) { SetDeploymentOption(value); return *this;}


    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline RdsConfiguration& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline RdsConfiguration& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline RdsConfiguration& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

  private:

    Aws::String m_engineEdition;
    bool m_engineEditionHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    double m_instanceVcpu;
    bool m_instanceVcpuHasBeenSet = false;

    double m_instanceMemory;
    bool m_instanceMemoryHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_storageSize;
    bool m_storageSizeHasBeenSet = false;

    int m_storageIops;
    bool m_storageIopsHasBeenSet = false;

    Aws::String m_deploymentOption;
    bool m_deploymentOptionHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
