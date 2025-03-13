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
    AWS_FSX_API FileCacheLustreConfiguration() = default;
    AWS_FSX_API FileCacheLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileCacheLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. Cache throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). The only supported value is <code>1000</code>.</p>
     */
    inline int GetPerUnitStorageThroughput() const { return m_perUnitStorageThroughput; }
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }
    inline FileCacheLustreConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment type of the Amazon File Cache resource, which must be
     * <code>CACHE_1</code>.</p>
     */
    inline FileCacheLustreDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(FileCacheLustreDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline FileCacheLustreConfiguration& WithDeploymentType(FileCacheLustreDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You use the <code>MountName</code> value when mounting the cache. If you pass
     * a cache ID to the <code>DescribeFileCaches</code> operation, it returns the the
     * <code>MountName</code> value as part of the cache's description.</p>
     */
    inline const Aws::String& GetMountName() const { return m_mountName; }
    inline bool MountNameHasBeenSet() const { return m_mountNameHasBeenSet; }
    template<typename MountNameT = Aws::String>
    void SetMountName(MountNameT&& value) { m_mountNameHasBeenSet = true; m_mountName = std::forward<MountNameT>(value); }
    template<typename MountNameT = Aws::String>
    FileCacheLustreConfiguration& WithMountName(MountNameT&& value) { SetMountName(std::forward<MountNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    FileCacheLustreConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
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
    FileCacheLustreConfiguration& WithMetadataConfiguration(MetadataConfigurationT&& value) { SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for Lustre logging used to write the enabled logging events
     * for your Amazon File Cache resource to Amazon CloudWatch Logs.</p>
     */
    inline const LustreLogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LustreLogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LustreLogConfiguration>
    FileCacheLustreConfiguration& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}
  private:

    int m_perUnitStorageThroughput{0};
    bool m_perUnitStorageThroughputHasBeenSet = false;

    FileCacheLustreDeploymentType m_deploymentType{FileCacheLustreDeploymentType::NOT_SET};
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
