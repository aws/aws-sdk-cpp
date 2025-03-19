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
    AWS_DATABASEMIGRATIONSERVICE_API RdsRequirements() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RdsRequirements(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RdsRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The required target Amazon RDS engine edition.</p>
     */
    inline const Aws::String& GetEngineEdition() const { return m_engineEdition; }
    inline bool EngineEditionHasBeenSet() const { return m_engineEditionHasBeenSet; }
    template<typename EngineEditionT = Aws::String>
    void SetEngineEdition(EngineEditionT&& value) { m_engineEditionHasBeenSet = true; m_engineEdition = std::forward<EngineEditionT>(value); }
    template<typename EngineEditionT = Aws::String>
    RdsRequirements& WithEngineEdition(EngineEditionT&& value) { SetEngineEdition(std::forward<EngineEditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required number of virtual CPUs (vCPU) on the Amazon RDS DB instance.</p>
     */
    inline double GetInstanceVcpu() const { return m_instanceVcpu; }
    inline bool InstanceVcpuHasBeenSet() const { return m_instanceVcpuHasBeenSet; }
    inline void SetInstanceVcpu(double value) { m_instanceVcpuHasBeenSet = true; m_instanceVcpu = value; }
    inline RdsRequirements& WithInstanceVcpu(double value) { SetInstanceVcpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required memory on the Amazon RDS DB instance.</p>
     */
    inline double GetInstanceMemory() const { return m_instanceMemory; }
    inline bool InstanceMemoryHasBeenSet() const { return m_instanceMemoryHasBeenSet; }
    inline void SetInstanceMemory(double value) { m_instanceMemoryHasBeenSet = true; m_instanceMemory = value; }
    inline RdsRequirements& WithInstanceMemory(double value) { SetInstanceMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required Amazon RDS DB instance storage size.</p>
     */
    inline int GetStorageSize() const { return m_storageSize; }
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }
    inline void SetStorageSize(int value) { m_storageSizeHasBeenSet = true; m_storageSize = value; }
    inline RdsRequirements& WithStorageSize(int value) { SetStorageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required number of I/O operations completed each second (IOPS) on your
     * Amazon RDS DB instance.</p>
     */
    inline int GetStorageIops() const { return m_storageIops; }
    inline bool StorageIopsHasBeenSet() const { return m_storageIopsHasBeenSet; }
    inline void SetStorageIops(int value) { m_storageIopsHasBeenSet = true; m_storageIops = value; }
    inline RdsRequirements& WithStorageIops(int value) { SetStorageIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required deployment option for the Amazon RDS DB instance. Valid values
     * include <code>"MULTI_AZ"</code> for Multi-AZ deployments and
     * <code>"SINGLE_AZ"</code> for Single-AZ deployments.</p>
     */
    inline const Aws::String& GetDeploymentOption() const { return m_deploymentOption; }
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }
    template<typename DeploymentOptionT = Aws::String>
    void SetDeploymentOption(DeploymentOptionT&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::forward<DeploymentOptionT>(value); }
    template<typename DeploymentOptionT = Aws::String>
    RdsRequirements& WithDeploymentOption(DeploymentOptionT&& value) { SetDeploymentOption(std::forward<DeploymentOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required target Amazon RDS engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RdsRequirements& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engineEdition;
    bool m_engineEditionHasBeenSet = false;

    double m_instanceVcpu{0.0};
    bool m_instanceVcpuHasBeenSet = false;

    double m_instanceMemory{0.0};
    bool m_instanceMemoryHasBeenSet = false;

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
