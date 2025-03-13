/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileCacheLustreDeploymentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileCacheLustreMetadataConfiguration.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The Amazon File Cache configuration for the cache that you are
   * creating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileCacheLustreConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateFileCacheLustreConfiguration
  {
  public:
    AWS_FSX_API CreateFileCacheLustreConfiguration() = default;
    AWS_FSX_API CreateFileCacheLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileCacheLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provisions the amount of read and write throughput for each 1 tebibyte (TiB)
     * of cache storage capacity, in MB/s/TiB. The only supported value is
     * <code>1000</code>.</p>
     */
    inline int GetPerUnitStorageThroughput() const { return m_perUnitStorageThroughput; }
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }
    inline CreateFileCacheLustreConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the cache deployment type, which must be <code>CACHE_1</code>.</p>
     */
    inline FileCacheLustreDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(FileCacheLustreDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline CreateFileCacheLustreConfiguration& WithDeploymentType(FileCacheLustreDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    CreateFileCacheLustreConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a Lustre MDT (Metadata Target) storage volume.</p>
     */
    inline const FileCacheLustreMetadataConfiguration& GetMetadataConfiguration() const { return m_metadataConfiguration; }
    inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
    template<typename MetadataConfigurationT = FileCacheLustreMetadataConfiguration>
    void SetMetadataConfiguration(MetadataConfigurationT&& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = std::forward<MetadataConfigurationT>(value); }
    template<typename MetadataConfigurationT = FileCacheLustreMetadataConfiguration>
    CreateFileCacheLustreConfiguration& WithMetadataConfiguration(MetadataConfigurationT&& value) { SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value)); return *this;}
    ///@}
  private:

    int m_perUnitStorageThroughput{0};
    bool m_perUnitStorageThroughputHasBeenSet = false;

    FileCacheLustreDeploymentType m_deploymentType{FileCacheLustreDeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    FileCacheLustreMetadataConfiguration m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
