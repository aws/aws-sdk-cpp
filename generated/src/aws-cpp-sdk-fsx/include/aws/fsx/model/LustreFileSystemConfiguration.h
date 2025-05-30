/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryConfiguration.h>
#include <aws/fsx/model/LustreDeploymentType.h>
#include <aws/fsx/model/DriveCacheType.h>
#include <aws/fsx/model/DataCompressionType.h>
#include <aws/fsx/model/LustreLogConfiguration.h>
#include <aws/fsx/model/LustreRootSquashConfiguration.h>
#include <aws/fsx/model/FileSystemLustreMetadataConfiguration.h>
#include <aws/fsx/model/LustreReadCacheConfiguration.h>
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
   * <p>The configuration for the Amazon FSx for Lustre file system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class LustreFileSystemConfiguration
  {
  public:
    AWS_FSX_API LustreFileSystemConfiguration() = default;
    AWS_FSX_API LustreFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API LustreFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataRepositoryConfiguration& GetDataRepositoryConfiguration() const { return m_dataRepositoryConfiguration; }
    inline bool DataRepositoryConfigurationHasBeenSet() const { return m_dataRepositoryConfigurationHasBeenSet; }
    template<typename DataRepositoryConfigurationT = DataRepositoryConfiguration>
    void SetDataRepositoryConfiguration(DataRepositoryConfigurationT&& value) { m_dataRepositoryConfigurationHasBeenSet = true; m_dataRepositoryConfiguration = std::forward<DataRepositoryConfigurationT>(value); }
    template<typename DataRepositoryConfigurationT = DataRepositoryConfiguration>
    LustreFileSystemConfiguration& WithDataRepositoryConfiguration(DataRepositoryConfigurationT&& value) { SetDataRepositoryConfiguration(std::forward<DataRepositoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment type of the FSx for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment type is used for longer-term storage and
     * workloads and encryption of data in transit. <code>PERSISTENT_2</code> offers
     * higher <code>PerUnitStorageThroughput</code> (up to 1000 MB/s/TiB) along with a
     * lower minimum storage capacity requirement (600 GiB). To learn more about FSx
     * for Lustre deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html">Deployment
     * and storage class options for FSx for Lustre file systems</a>.</p> <p>The
     * default is <code>SCRATCH_1</code>.</p>
     */
    inline LustreDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(LustreDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline LustreFileSystemConfiguration& WithDeploymentType(LustreDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment types. </p> <p>Valid values:</p> <ul> <li>
     * <p>For <code>PERSISTENT_1</code> SSD storage: 50, 100, 200.</p> </li> <li>
     * <p>For <code>PERSISTENT_1</code> HDD storage: 12, 40.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000.</p> </li> </ul>
     */
    inline int GetPerUnitStorageThroughput() const { return m_perUnitStorageThroughput; }
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }
    inline LustreFileSystemConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
     */
    inline const Aws::String& GetMountName() const { return m_mountName; }
    inline bool MountNameHasBeenSet() const { return m_mountNameHasBeenSet; }
    template<typename MountNameT = Aws::String>
    void SetMountName(MountNameT&& value) { m_mountNameHasBeenSet = true; m_mountName = std::forward<MountNameT>(value); }
    template<typename MountNameT = Aws::String>
    LustreFileSystemConfiguration& WithMountName(MountNameT&& value) { SetMountName(std::forward<MountNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    LustreFileSystemConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline LustreFileSystemConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag indicating whether tags on the file system are copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline LustreFileSystemConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * <code>StorageType</code> is HDD. When set to <code>READ</code> the file system
     * has an SSD storage cache that is sized to 20% of the file system's storage
     * capacity. This improves the performance for frequently accessed files by caching
     * up to 20% of the total storage capacity.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to HDD.</p>
     */
    inline DriveCacheType GetDriveCacheType() const { return m_driveCacheType; }
    inline bool DriveCacheTypeHasBeenSet() const { return m_driveCacheTypeHasBeenSet; }
    inline void SetDriveCacheType(DriveCacheType value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = value; }
    inline LustreFileSystemConfiguration& WithDriveCacheType(DriveCacheType value) { SetDriveCacheType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline DataCompressionType GetDataCompressionType() const { return m_dataCompressionType; }
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }
    inline void SetDataCompressionType(DataCompressionType value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }
    inline LustreFileSystemConfiguration& WithDataCompressionType(DataCompressionType value) { SetDataCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre logging configuration. Lustre logging writes the enabled log
     * events for your file system to Amazon CloudWatch Logs.</p>
     */
    inline const LustreLogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LustreLogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LustreLogConfiguration>
    LustreFileSystemConfiguration& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre root squash configuration for an Amazon FSx for Lustre file
     * system. When enabled, root squash restricts root-level access from clients that
     * try to access your file system as a root user.</p>
     */
    inline const LustreRootSquashConfiguration& GetRootSquashConfiguration() const { return m_rootSquashConfiguration; }
    inline bool RootSquashConfigurationHasBeenSet() const { return m_rootSquashConfigurationHasBeenSet; }
    template<typename RootSquashConfigurationT = LustreRootSquashConfiguration>
    void SetRootSquashConfiguration(RootSquashConfigurationT&& value) { m_rootSquashConfigurationHasBeenSet = true; m_rootSquashConfiguration = std::forward<RootSquashConfigurationT>(value); }
    template<typename RootSquashConfigurationT = LustreRootSquashConfiguration>
    LustreFileSystemConfiguration& WithRootSquashConfiguration(RootSquashConfigurationT&& value) { SetRootSquashConfiguration(std::forward<RootSquashConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre metadata performance configuration for an Amazon FSx for Lustre
     * file system using a <code>PERSISTENT_2</code> deployment type.</p>
     */
    inline const FileSystemLustreMetadataConfiguration& GetMetadataConfiguration() const { return m_metadataConfiguration; }
    inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
    template<typename MetadataConfigurationT = FileSystemLustreMetadataConfiguration>
    void SetMetadataConfiguration(MetadataConfigurationT&& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = std::forward<MetadataConfigurationT>(value); }
    template<typename MetadataConfigurationT = FileSystemLustreMetadataConfiguration>
    LustreFileSystemConfiguration& WithMetadataConfiguration(MetadataConfigurationT&& value) { SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Elastic Fabric Adapter (EFA) and GPUDirect Storage (GDS)
     * support is enabled for the Amazon FSx for Lustre file system.</p>
     */
    inline bool GetEfaEnabled() const { return m_efaEnabled; }
    inline bool EfaEnabledHasBeenSet() const { return m_efaEnabledHasBeenSet; }
    inline void SetEfaEnabled(bool value) { m_efaEnabledHasBeenSet = true; m_efaEnabled = value; }
    inline LustreFileSystemConfiguration& WithEfaEnabled(bool value) { SetEfaEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput of an Amazon FSx for Lustre file system using the
     * Intelligent-Tiering storage class, measured in megabytes per second (MBps).</p>
     */
    inline int GetThroughputCapacity() const { return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline LustreFileSystemConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required when <code>StorageType</code> is set to
     * <code>INTELLIGENT_TIERING</code>. Specifies the optional provisioned SSD read
     * cache.</p>
     */
    inline const LustreReadCacheConfiguration& GetDataReadCacheConfiguration() const { return m_dataReadCacheConfiguration; }
    inline bool DataReadCacheConfigurationHasBeenSet() const { return m_dataReadCacheConfigurationHasBeenSet; }
    template<typename DataReadCacheConfigurationT = LustreReadCacheConfiguration>
    void SetDataReadCacheConfiguration(DataReadCacheConfigurationT&& value) { m_dataReadCacheConfigurationHasBeenSet = true; m_dataReadCacheConfiguration = std::forward<DataReadCacheConfigurationT>(value); }
    template<typename DataReadCacheConfigurationT = LustreReadCacheConfiguration>
    LustreFileSystemConfiguration& WithDataReadCacheConfiguration(DataReadCacheConfigurationT&& value) { SetDataReadCacheConfiguration(std::forward<DataReadCacheConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    DataRepositoryConfiguration m_dataRepositoryConfiguration;
    bool m_dataRepositoryConfigurationHasBeenSet = false;

    LustreDeploymentType m_deploymentType{LustreDeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    int m_perUnitStorageThroughput{0};
    bool m_perUnitStorageThroughputHasBeenSet = false;

    Aws::String m_mountName;
    bool m_mountNameHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    int m_automaticBackupRetentionDays{0};
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    bool m_copyTagsToBackups{false};
    bool m_copyTagsToBackupsHasBeenSet = false;

    DriveCacheType m_driveCacheType{DriveCacheType::NOT_SET};
    bool m_driveCacheTypeHasBeenSet = false;

    DataCompressionType m_dataCompressionType{DataCompressionType::NOT_SET};
    bool m_dataCompressionTypeHasBeenSet = false;

    LustreLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    LustreRootSquashConfiguration m_rootSquashConfiguration;
    bool m_rootSquashConfigurationHasBeenSet = false;

    FileSystemLustreMetadataConfiguration m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;

    bool m_efaEnabled{false};
    bool m_efaEnabledHasBeenSet = false;

    int m_throughputCapacity{0};
    bool m_throughputCapacityHasBeenSet = false;

    LustreReadCacheConfiguration m_dataReadCacheConfiguration;
    bool m_dataReadCacheConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
