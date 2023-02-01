/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileCacheLustreDeploymentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileCacheLustreMetadataConfiguration.h>
#include <aws/fsx/model/LustreLogConfiguration.h>
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
   * <p>The configuration for the Amazon File Cache resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileCacheLustreConfiguration">AWS
   * API Reference</a></p>
   */
  class FileCacheLustreConfiguration
  {
  public:
    AWS_FSX_API FileCacheLustreConfiguration();
    AWS_FSX_API FileCacheLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileCacheLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. Cache throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). The only supported value is <code>1000</code>.</p>
     */
    inline int GetPerUnitStorageThroughput() const{ return m_perUnitStorageThroughput; }

    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. Cache throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). The only supported value is <code>1000</code>.</p>
     */
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }

    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. Cache throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). The only supported value is <code>1000</code>.</p>
     */
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }

    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. Cache throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). The only supported value is <code>1000</code>.</p>
     */
    inline FileCacheLustreConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}


    /**
     * <p>The deployment type of the Amazon File Cache resource, which must be
     * <code>CACHE_1</code>.</p>
     */
    inline const FileCacheLustreDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>The deployment type of the Amazon File Cache resource, which must be
     * <code>CACHE_1</code>.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>The deployment type of the Amazon File Cache resource, which must be
     * <code>CACHE_1</code>.</p>
     */
    inline void SetDeploymentType(const FileCacheLustreDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>The deployment type of the Amazon File Cache resource, which must be
     * <code>CACHE_1</code>.</p>
     */
    inline void SetDeploymentType(FileCacheLustreDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>The deployment type of the Amazon File Cache resource, which must be
     * <code>CACHE_1</code>.</p>
     */
    inline FileCacheLustreConfiguration& WithDeploymentType(const FileCacheLustreDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>The deployment type of the Amazon File Cache resource, which must be
     * <code>CACHE_1</code>.</p>
     */
    inline FileCacheLustreConfiguration& WithDeploymentType(FileCacheLustreDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline const Aws::String& GetMountName() const{ return m_mountName; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline bool MountNameHasBeenSet() const { return m_mountNameHasBeenSet; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline void SetMountName(const Aws::String& value) { m_mountNameHasBeenSet = true; m_mountName = value; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline void SetMountName(Aws::String&& value) { m_mountNameHasBeenSet = true; m_mountName = std::move(value); }

    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline void SetMountName(const char* value) { m_mountNameHasBeenSet = true; m_mountName.assign(value); }

    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline FileCacheLustreConfiguration& WithMountName(const Aws::String& value) { SetMountName(value); return *this;}

    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline FileCacheLustreConfiguration& WithMountName(Aws::String&& value) { SetMountName(std::move(value)); return *this;}

    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline FileCacheLustreConfiguration& WithMountName(const char* value) { SetMountName(value); return *this;}


    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    
    inline FileCacheLustreConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    
    inline FileCacheLustreConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    
    inline FileCacheLustreConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


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
    inline FileCacheLustreConfiguration& WithMetadataConfiguration(const FileCacheLustreMetadataConfiguration& value) { SetMetadataConfiguration(value); return *this;}

    /**
     * <p>The configuration for a Lustre MDT (Metadata Target) storage volume.</p>
     */
    inline FileCacheLustreConfiguration& WithMetadataConfiguration(FileCacheLustreMetadataConfiguration&& value) { SetMetadataConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for Lustre logging used to write the enabled logging events
     * for your Amazon File Cache resource to Amazon CloudWatch Logs.</p>
     */
    inline const LustreLogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    /**
     * <p>The configuration for Lustre logging used to write the enabled logging events
     * for your Amazon File Cache resource to Amazon CloudWatch Logs.</p>
     */
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }

    /**
     * <p>The configuration for Lustre logging used to write the enabled logging events
     * for your Amazon File Cache resource to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogConfiguration(const LustreLogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The configuration for Lustre logging used to write the enabled logging events
     * for your Amazon File Cache resource to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogConfiguration(LustreLogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }

    /**
     * <p>The configuration for Lustre logging used to write the enabled logging events
     * for your Amazon File Cache resource to Amazon CloudWatch Logs.</p>
     */
    inline FileCacheLustreConfiguration& WithLogConfiguration(const LustreLogConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The configuration for Lustre logging used to write the enabled logging events
     * for your Amazon File Cache resource to Amazon CloudWatch Logs.</p>
     */
    inline FileCacheLustreConfiguration& WithLogConfiguration(LustreLogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}

  private:

    int m_perUnitStorageThroughput;
    bool m_perUnitStorageThroughputHasBeenSet = false;

    FileCacheLustreDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_mountName;
    bool m_mountNameHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    FileCacheLustreMetadataConfiguration m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;

    LustreLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
