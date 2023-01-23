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
    AWS_FSX_API CreateFileCacheLustreConfiguration();
    AWS_FSX_API CreateFileCacheLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileCacheLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provisions the amount of read and write throughput for each 1 tebibyte (TiB)
     * of cache storage capacity, in MB/s/TiB. The only supported value is
     * <code>1000</code>.</p>
     */
    inline int GetPerUnitStorageThroughput() const{ return m_perUnitStorageThroughput; }

    /**
     * <p>Provisions the amount of read and write throughput for each 1 tebibyte (TiB)
     * of cache storage capacity, in MB/s/TiB. The only supported value is
     * <code>1000</code>.</p>
     */
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }

    /**
     * <p>Provisions the amount of read and write throughput for each 1 tebibyte (TiB)
     * of cache storage capacity, in MB/s/TiB. The only supported value is
     * <code>1000</code>.</p>
     */
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }

    /**
     * <p>Provisions the amount of read and write throughput for each 1 tebibyte (TiB)
     * of cache storage capacity, in MB/s/TiB. The only supported value is
     * <code>1000</code>.</p>
     */
    inline CreateFileCacheLustreConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}


    /**
     * <p>Specifies the cache deployment type, which must be <code>CACHE_1</code>.</p>
     */
    inline const FileCacheLustreDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Specifies the cache deployment type, which must be <code>CACHE_1</code>.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Specifies the cache deployment type, which must be <code>CACHE_1</code>.</p>
     */
    inline void SetDeploymentType(const FileCacheLustreDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Specifies the cache deployment type, which must be <code>CACHE_1</code>.</p>
     */
    inline void SetDeploymentType(FileCacheLustreDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Specifies the cache deployment type, which must be <code>CACHE_1</code>.</p>
     */
    inline CreateFileCacheLustreConfiguration& WithDeploymentType(const FileCacheLustreDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Specifies the cache deployment type, which must be <code>CACHE_1</code>.</p>
     */
    inline CreateFileCacheLustreConfiguration& WithDeploymentType(FileCacheLustreDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    
    inline CreateFileCacheLustreConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    
    inline CreateFileCacheLustreConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    
    inline CreateFileCacheLustreConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    /**
     * <p>The configuration for a Lustre MDT (Metadata Target) storage volume.</p>
     */
    inline const FileCacheLustreMetadataConfiguration& GetMetadataConfiguration() const{ return m_metadataConfiguration; }

    /**
     * <p>The configuration for a Lustre MDT (Metadata Target) storage volume.</p>
     */
    inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a Lustre MDT (Metadata Target) storage volume.</p>
     */
    inline void SetMetadataConfiguration(const FileCacheLustreMetadataConfiguration& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = value; }

    /**
     * <p>The configuration for a Lustre MDT (Metadata Target) storage volume.</p>
     */
    inline void SetMetadataConfiguration(FileCacheLustreMetadataConfiguration&& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = std::move(value); }

    /**
     * <p>The configuration for a Lustre MDT (Metadata Target) storage volume.</p>
     */
    inline CreateFileCacheLustreConfiguration& WithMetadataConfiguration(const FileCacheLustreMetadataConfiguration& value) { SetMetadataConfiguration(value); return *this;}

    /**
     * <p>The configuration for a Lustre MDT (Metadata Target) storage volume.</p>
     */
    inline CreateFileCacheLustreConfiguration& WithMetadataConfiguration(FileCacheLustreMetadataConfiguration&& value) { SetMetadataConfiguration(std::move(value)); return *this;}

  private:

    int m_perUnitStorageThroughput;
    bool m_perUnitStorageThroughputHasBeenSet = false;

    FileCacheLustreDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    FileCacheLustreMetadataConfiguration m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
