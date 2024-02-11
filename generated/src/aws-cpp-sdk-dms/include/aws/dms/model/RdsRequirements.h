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
   * <p>Provides information that describes the requirements to the target engine on
   * Amazon RDS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RdsRequirements">AWS
   * API Reference</a></p>
   */
  class RdsRequirements
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RdsRequirements();
    AWS_DATABASEMIGRATIONSERVICE_API RdsRequirements(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RdsRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline const Aws::String& GetEngineEdition() const{ return m_engineEdition; }

    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline bool EngineEditionHasBeenSet() const { return m_engineEditionHasBeenSet; }

    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline void SetEngineEdition(const Aws::String& value) { m_engineEditionHasBeenSet = true; m_engineEdition = value; }

    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline void SetEngineEdition(Aws::String&& value) { m_engineEditionHasBeenSet = true; m_engineEdition = std::move(value); }

    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline void SetEngineEdition(const char* value) { m_engineEditionHasBeenSet = true; m_engineEdition.assign(value); }

    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline RdsRequirements& WithEngineEdition(const Aws::String& value) { SetEngineEdition(value); return *this;}

    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline RdsRequirements& WithEngineEdition(Aws::String&& value) { SetEngineEdition(std::move(value)); return *this;}

    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline RdsRequirements& WithEngineEdition(const char* value) { SetEngineEdition(value); return *this;}


    /**
     * <p>The required number of virtual CPUs (vCPU) on the Amazon RDS DB instance.</p>
     */
    inline double GetInstanceVcpu() const{ return m_instanceVcpu; }

    /**
     * <p>The required number of virtual CPUs (vCPU) on the Amazon RDS DB instance.</p>
     */
    inline bool InstanceVcpuHasBeenSet() const { return m_instanceVcpuHasBeenSet; }

    /**
     * <p>The required number of virtual CPUs (vCPU) on the Amazon RDS DB instance.</p>
     */
    inline void SetInstanceVcpu(double value) { m_instanceVcpuHasBeenSet = true; m_instanceVcpu = value; }

    /**
     * <p>The required number of virtual CPUs (vCPU) on the Amazon RDS DB instance.</p>
     */
    inline RdsRequirements& WithInstanceVcpu(double value) { SetInstanceVcpu(value); return *this;}


    /**
     * <p>The required memory on the Amazon RDS DB instance.</p>
     */
    inline double GetInstanceMemory() const{ return m_instanceMemory; }

    /**
     * <p>The required memory on the Amazon RDS DB instance.</p>
     */
    inline bool InstanceMemoryHasBeenSet() const { return m_instanceMemoryHasBeenSet; }

    /**
     * <p>The required memory on the Amazon RDS DB instance.</p>
     */
    inline void SetInstanceMemory(double value) { m_instanceMemoryHasBeenSet = true; m_instanceMemory = value; }

    /**
     * <p>The required memory on the Amazon RDS DB instance.</p>
     */
    inline RdsRequirements& WithInstanceMemory(double value) { SetInstanceMemory(value); return *this;}


    /**
     * <p>The required Amazon RDS DB instance storage size.</p>
     */
    inline int GetStorageSize() const{ return m_storageSize; }

    /**
     * <p>The required Amazon RDS DB instance storage size.</p>
     */
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }

    /**
     * <p>The required Amazon RDS DB instance storage size.</p>
     */
    inline void SetStorageSize(int value) { m_storageSizeHasBeenSet = true; m_storageSize = value; }

    /**
     * <p>The required Amazon RDS DB instance storage size.</p>
     */
    inline RdsRequirements& WithStorageSize(int value) { SetStorageSize(value); return *this;}


    /**
     * <p>The required number of I/O operations completed each second (IOPS) on your
     * Amazon RDS DB instance.</p>
     */
    inline int GetStorageIops() const{ return m_storageIops; }

    /**
     * <p>The required number of I/O operations completed each second (IOPS) on your
     * Amazon RDS DB instance.</p>
     */
    inline bool StorageIopsHasBeenSet() const { return m_storageIopsHasBeenSet; }

    /**
     * <p>The required number of I/O operations completed each second (IOPS) on your
     * Amazon RDS DB instance.</p>
     */
    inline void SetStorageIops(int value) { m_storageIopsHasBeenSet = true; m_storageIops = value; }

    /**
     * <p>The required number of I/O operations completed each second (IOPS) on your
     * Amazon RDS DB instance.</p>
     */
    inline RdsRequirements& WithStorageIops(int value) { SetStorageIops(value); return *this;}


    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline const Aws::String& GetDeploymentOption() const{ return m_deploymentOption; }

    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }

    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline void SetDeploymentOption(const Aws::String& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }

    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline void SetDeploymentOption(Aws::String&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::move(value); }

    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline void SetDeploymentOption(const char* value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption.assign(value); }

    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline RdsRequirements& WithDeploymentOption(const Aws::String& value) { SetDeploymentOption(value); return *this;}

    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline RdsRequirements& WithDeploymentOption(Aws::String&& value) { SetDeploymentOption(std::move(value)); return *this;}

    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline RdsRequirements& WithDeploymentOption(const char* value) { SetDeploymentOption(value); return *this;}


    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline RdsRequirements& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline RdsRequirements& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline RdsRequirements& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

  private:

    Aws::String m_engineEdition;
    bool m_engineEditionHasBeenSet = false;

    double m_instanceVcpu;
    bool m_instanceVcpuHasBeenSet = false;

    double m_instanceMemory;
    bool m_instanceMemoryHasBeenSet = false;

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
