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
    AWS_DATABASEMIGRATIONSERVICE_API RdsConfiguration() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RdsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RdsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the recommended target Amazon RDS engine edition.</p>
     */
    inline const Aws::String& GetEngineEdition() const { return m_engineEdition; }
    inline bool EngineEditionHasBeenSet() const { return m_engineEditionHasBeenSet; }
    template<typename EngineEditionT = Aws::String>
    void SetEngineEdition(EngineEditionT&& value) { m_engineEditionHasBeenSet = true; m_engineEdition = std::forward<EngineEditionT>(value); }
    template<typename EngineEditionT = Aws::String>
    RdsConfiguration& WithEngineEdition(EngineEditionT&& value) { SetEngineEdition(std::forward<EngineEditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the recommended target Amazon RDS instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    RdsConfiguration& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the number of virtual CPUs (vCPU) on the recommended Amazon RDS DB
     * instance that meets your requirements.</p>
     */
    inline double GetInstanceVcpu() const { return m_instanceVcpu; }
    inline bool InstanceVcpuHasBeenSet() const { return m_instanceVcpuHasBeenSet; }
    inline void SetInstanceVcpu(double value) { m_instanceVcpuHasBeenSet = true; m_instanceVcpu = value; }
    inline RdsConfiguration& WithInstanceVcpu(double value) { SetInstanceVcpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the memory on the recommended Amazon RDS DB instance that meets
     * your requirements.</p>
     */
    inline double GetInstanceMemory() const { return m_instanceMemory; }
    inline bool InstanceMemoryHasBeenSet() const { return m_instanceMemoryHasBeenSet; }
    inline void SetInstanceMemory(double value) { m_instanceMemoryHasBeenSet = true; m_instanceMemory = value; }
    inline RdsConfiguration& WithInstanceMemory(double value) { SetInstanceMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the storage type of the recommended Amazon RDS DB instance that
     * meets your requirements.</p> <p>Amazon RDS provides three storage types: General
     * Purpose SSD (also known as gp2 and gp3), Provisioned IOPS SSD (also known as
     * io1), and magnetic (also known as standard).</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    RdsConfiguration& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the storage size of the recommended Amazon RDS DB instance that
     * meets your requirements.</p>
     */
    inline int GetStorageSize() const { return m_storageSize; }
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }
    inline void SetStorageSize(int value) { m_storageSizeHasBeenSet = true; m_storageSize = value; }
    inline RdsConfiguration& WithStorageSize(int value) { SetStorageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the number of I/O operations completed each second (IOPS) on the
     * recommended Amazon RDS DB instance that meets your requirements.</p>
     */
    inline int GetStorageIops() const { return m_storageIops; }
    inline bool StorageIopsHasBeenSet() const { return m_storageIopsHasBeenSet; }
    inline void SetStorageIops(int value) { m_storageIopsHasBeenSet = true; m_storageIops = value; }
    inline RdsConfiguration& WithStorageIops(int value) { SetStorageIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the deployment option for the recommended Amazon RDS DB instance.
     * The deployment options include Multi-AZ and Single-AZ deployments. Valid values
     * include <code>"MULTI_AZ"</code> and <code>"SINGLE_AZ"</code>.</p>
     */
    inline const Aws::String& GetDeploymentOption() const { return m_deploymentOption; }
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }
    template<typename DeploymentOptionT = Aws::String>
    void SetDeploymentOption(DeploymentOptionT&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::forward<DeploymentOptionT>(value); }
    template<typename DeploymentOptionT = Aws::String>
    RdsConfiguration& WithDeploymentOption(DeploymentOptionT&& value) { SetDeploymentOption(std::forward<DeploymentOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the recommended target Amazon RDS engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RdsConfiguration& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engineEdition;
    bool m_engineEditionHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    double m_instanceVcpu{0.0};
    bool m_instanceVcpuHasBeenSet = false;

    double m_instanceMemory{0.0};
    bool m_instanceMemoryHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_storageSize{0};
    bool m_storageSizeHasBeenSet = false;

    int m_storageIops{0};
    bool m_storageIopsHasBeenSet = false;

    Aws::String m_deploymentOption;
    bool m_deploymentOptionHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
