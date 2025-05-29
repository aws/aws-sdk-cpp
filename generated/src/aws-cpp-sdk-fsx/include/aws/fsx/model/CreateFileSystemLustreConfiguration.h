/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/LustreDeploymentType.h>
#include <aws/fsx/model/AutoImportPolicyType.h>
#include <aws/fsx/model/DriveCacheType.h>
#include <aws/fsx/model/DataCompressionType.h>
#include <aws/fsx/model/LustreLogCreateConfiguration.h>
#include <aws/fsx/model/LustreRootSquashConfiguration.h>
#include <aws/fsx/model/CreateFileSystemLustreMetadataConfiguration.h>
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
   * <p>The Lustre configuration for the file system being created.</p>  <p>The
   * following parameters are not supported for file systems with a data repository
   * association created with .</p> <ul> <li> <p> <code>AutoImportPolicy</code> </p>
   * </li> <li> <p> <code>ExportPath</code> </p> </li> <li> <p>
   * <code>ImportedFileChunkSize</code> </p> </li> <li> <p> <code>ImportPath</code>
   * </p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemLustreConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemLustreConfiguration
  {
  public:
    AWS_FSX_API CreateFileSystemLustreConfiguration() = default;
    AWS_FSX_API CreateFileSystemLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileSystemLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone, where d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    CreateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The path to the Amazon S3 bucket (including the optional prefix)
     * that you're using as the data repository for your Amazon FSx for Lustre file
     * system. The root of your FSx for Lustre file system will be mapped to the root
     * of the Amazon S3 bucket you select. An example is
     * <code>s3://import-bucket/optional-prefix</code>. If you specify a prefix after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>  <p>This parameter is not supported for file systems with
     * a data repository association.</p> 
     */
    inline const Aws::String& GetImportPath() const { return m_importPath; }
    inline bool ImportPathHasBeenSet() const { return m_importPathHasBeenSet; }
    template<typename ImportPathT = Aws::String>
    void SetImportPath(ImportPathT&& value) { m_importPathHasBeenSet = true; m_importPath = std::forward<ImportPathT>(value); }
    template<typename ImportPathT = Aws::String>
    CreateFileSystemLustreConfiguration& WithImportPath(ImportPathT&& value) { SetImportPath(std::forward<ImportPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Specifies the path in the Amazon S3 bucket where the root of your
     * Amazon FSx file system is exported. The path must use the same Amazon S3 bucket
     * as specified in ImportPath. You can provide an optional prefix to which new and
     * changed data is to be exported from your Amazon FSx for Lustre file system. If
     * an <code>ExportPath</code> value is not provided, Amazon FSx sets a default
     * export path, <code>s3://import-bucket/FSxLustre[creation-timestamp]</code>. The
     * timestamp is in UTC format, for example
     * <code>s3://import-bucket/FSxLustre20181105T222312Z</code>.</p> <p>The Amazon S3
     * export bucket must be the same as the import bucket specified by
     * <code>ImportPath</code>. If you specify only a bucket name, such as
     * <code>s3://import-bucket</code>, you get a 1:1 mapping of file system objects to
     * S3 bucket objects. This mapping means that the input data in S3 is overwritten
     * on export. If you provide a custom prefix in the export path, such as
     * <code>s3://import-bucket/[custom-optional-prefix]</code>, Amazon FSx exports the
     * contents of your file system to that export prefix in the Amazon S3 bucket.</p>
     *  <p>This parameter is not supported for file systems with a data
     * repository association.</p> 
     */
    inline const Aws::String& GetExportPath() const { return m_exportPath; }
    inline bool ExportPathHasBeenSet() const { return m_exportPathHasBeenSet; }
    template<typename ExportPathT = Aws::String>
    void SetExportPath(ExportPathT&& value) { m_exportPathHasBeenSet = true; m_exportPath = std::forward<ExportPathT>(value); }
    template<typename ExportPathT = Aws::String>
    CreateFileSystemLustreConfiguration& WithExportPath(ExportPathT&& value) { SetExportPath(std::forward<ExportPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) For files imported from a data repository, this value determines
     * the stripe count and maximum amount of data per file (in MiB) stored on a single
     * physical disk. The maximum number of disks that a single file can be striped
     * across is limited by the total number of disks that make up the file system.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>  <p>This
     * parameter is not supported for file systems with a data repository
     * association.</p> 
     */
    inline int GetImportedFileChunkSize() const { return m_importedFileChunkSize; }
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }
    inline CreateFileSystemLustreConfiguration& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Choose <code>SCRATCH_1</code> and <code>SCRATCH_2</code>
     * deployment types when you need temporary storage and shorter-term processing of
     * data. The <code>SCRATCH_2</code> deployment type provides in-transit encryption
     * of data and higher burst throughput capacity than <code>SCRATCH_1</code>.</p>
     * <p>Choose <code>PERSISTENT_1</code> for longer-term storage and for
     * throughput-focused workloads that aren’t latency-sensitive.
     * <code>PERSISTENT_1</code> supports encryption of data in transit, and is
     * available in all Amazon Web Services Regions in which FSx for Lustre is
     * available.</p> <p>Choose <code>PERSISTENT_2</code> for longer-term storage and
     * for latency-sensitive workloads that require the highest levels of
     * IOPS/throughput. <code>PERSISTENT_2</code> supports the SSD and
     * Intelligent-Tiering storage classes. You can optionally specify a metadata
     * configuration mode for <code>PERSISTENT_2</code> which supports increasing
     * metadata performance. <code>PERSISTENT_2</code> is available in a limited number
     * of Amazon Web Services Regions. For more information, and an up-to-date list of
     * Amazon Web Services Regions in which <code>PERSISTENT_2</code> is available, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-fsx-lustre.html">Deployment
     * and storage class options for FSx for Lustre file systems</a> in the <i>Amazon
     * FSx for Lustre User Guide</i>.</p>  <p>If you choose
     * <code>PERSISTENT_2</code>, and you set <code>FileSystemTypeVersion</code> to
     * <code>2.10</code>, the <code>CreateFileSystem</code> operation fails.</p>
     *  <p>Encryption of data in transit is automatically turned on when you
     * access <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> file systems from Amazon EC2 instances that support
     * automatic encryption in the Amazon Web Services Regions where they are
     * available. For more information about encryption in transit for FSx for Lustre
     * file systems, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/encryption-in-transit-fsxl.html">Encrypting
     * data in transit</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     * <p>(Default = <code>SCRATCH_1</code>)</p>
     */
    inline LustreDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(LustreDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline CreateFileSystemLustreConfiguration& WithDeploymentType(LustreDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this parameter to choose how Amazon FSx
     * keeps your file and directory listings up to date as you add or modify objects
     * in your linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update file and directory listings
     * for any new or changed objects after choosing this option.</p> </li> <li> <p>
     * <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports directory
     * listings of any new objects added to the linked S3 bucket that do not currently
     * exist in the FSx file system. </p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. Amazon FSx automatically imports file and directory listings
     * of any new objects added to the S3 bucket and any existing objects that are
     * changed in the S3 bucket after you choose this option.</p> </li> <li> <p>
     * <code>NEW_CHANGED_DELETED</code> - AutoImport is on. Amazon FSx automatically
     * imports file and directory listings of any new objects added to the S3 bucket,
     * any existing objects that are changed in the S3 bucket, and any objects that
     * were deleted in the S3 bucket.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/older-deployment-types.html#legacy-auto-import-from-s3">
     * Automatically import updates from your S3 bucket</a>.</p>  <p>This
     * parameter is not supported for file systems with a data repository
     * association.</p> 
     */
    inline AutoImportPolicyType GetAutoImportPolicy() const { return m_autoImportPolicy; }
    inline bool AutoImportPolicyHasBeenSet() const { return m_autoImportPolicyHasBeenSet; }
    inline void SetAutoImportPolicy(AutoImportPolicyType value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = value; }
    inline CreateFileSystemLustreConfiguration& WithAutoImportPolicy(AutoImportPolicyType value) { SetAutoImportPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required with <code>PERSISTENT_1</code> and <code>PERSISTENT_2</code>
     * deployment types using an SSD or HDD storage class, provisions the amount of
     * read and write throughput for each 1 tebibyte (TiB) of file system storage
     * capacity, in MB/s/TiB. File system throughput capacity is calculated by
     * multiplying ﬁle system storage capacity (TiB) by the
     * <code>PerUnitStorageThroughput</code> (MB/s/TiB). For a 2.4-TiB ﬁle system,
     * provisioning 50 MB/s/TiB of <code>PerUnitStorageThroughput</code> yields 120
     * MB/s of ﬁle system throughput. You pay for the amount of throughput that you
     * provision. </p> <p>Valid values:</p> <ul> <li> <p>For <code>PERSISTENT_1</code>
     * SSD storage: 50, 100, 200 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_1</code> HDD storage: 12, 40 MB/s/TiB.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000 MB/s/TiB.</p> </li>
     * </ul>
     */
    inline int GetPerUnitStorageThroughput() const { return m_perUnitStorageThroughput; }
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }
    inline CreateFileSystemLustreConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    CreateFileSystemLustreConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain automatic backups. Setting this property to
     * <code>0</code> disables automatic backups. You can retain automatic backups for
     * a maximum of 90 days. The default is <code>0</code>.</p>
     */
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline CreateFileSystemLustreConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Not available for use with file systems that are linked to a data
     * repository. A boolean flag indicating whether tags for the file system should be
     * copied to backups. The default value is false. If <code>CopyTagsToBackups</code>
     * is set to true, all file system tags are copied to all automatic and
     * user-initiated backups when the user doesn't specify any backup-specific tags.
     * If <code>CopyTagsToBackups</code> is set to true and you specify one or more
     * backup tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p> <p>(Default = <code>false</code>)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">
     * Working with backups</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline CreateFileSystemLustreConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * storage type is HDD. Set this property to <code>READ</code> to improve the
     * performance for frequently accessed files by caching up to 20% of the total
     * storage capacity of the file system.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to <code>HDD</code>.</p>
     */
    inline DriveCacheType GetDriveCacheType() const { return m_driveCacheType; }
    inline bool DriveCacheTypeHasBeenSet() const { return m_driveCacheTypeHasBeenSet; }
    inline void SetDriveCacheType(DriveCacheType value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = value; }
    inline CreateFileSystemLustreConfiguration& WithDriveCacheType(DriveCacheType value) { SetDriveCacheType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - (Default) Data compression is turned off when the file
     * system is created.</p> </li> <li> <p> <code>LZ4</code> - Data compression is
     * turned on with the LZ4 algorithm.</p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a> in the <i>Amazon FSx for Lustre User Guide</i>.</p>
     */
    inline DataCompressionType GetDataCompressionType() const { return m_dataCompressionType; }
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }
    inline void SetDataCompressionType(DataCompressionType value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }
    inline CreateFileSystemLustreConfiguration& WithDataCompressionType(DataCompressionType value) { SetDataCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Specifies whether Elastic Fabric Adapter (EFA) and GPUDirect
     * Storage (GDS) support is enabled for the Amazon FSx for Lustre file system.</p>
     * <p>(Default = <code>false</code>)</p>
     */
    inline bool GetEfaEnabled() const { return m_efaEnabled; }
    inline bool EfaEnabledHasBeenSet() const { return m_efaEnabledHasBeenSet; }
    inline void SetEfaEnabled(bool value) { m_efaEnabledHasBeenSet = true; m_efaEnabled = value; }
    inline CreateFileSystemLustreConfiguration& WithEfaEnabled(bool value) { SetEfaEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre logging configuration used when creating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline const LustreLogCreateConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LustreLogCreateConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LustreLogCreateConfiguration>
    CreateFileSystemLustreConfiguration& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre root squash configuration used when creating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline const LustreRootSquashConfiguration& GetRootSquashConfiguration() const { return m_rootSquashConfiguration; }
    inline bool RootSquashConfigurationHasBeenSet() const { return m_rootSquashConfigurationHasBeenSet; }
    template<typename RootSquashConfigurationT = LustreRootSquashConfiguration>
    void SetRootSquashConfiguration(RootSquashConfigurationT&& value) { m_rootSquashConfigurationHasBeenSet = true; m_rootSquashConfiguration = std::forward<RootSquashConfigurationT>(value); }
    template<typename RootSquashConfigurationT = LustreRootSquashConfiguration>
    CreateFileSystemLustreConfiguration& WithRootSquashConfiguration(RootSquashConfigurationT&& value) { SetRootSquashConfiguration(std::forward<RootSquashConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre metadata performance configuration for the creation of an FSx for
     * Lustre file system using a <code>PERSISTENT_2</code> deployment type.</p>
     */
    inline const CreateFileSystemLustreMetadataConfiguration& GetMetadataConfiguration() const { return m_metadataConfiguration; }
    inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
    template<typename MetadataConfigurationT = CreateFileSystemLustreMetadataConfiguration>
    void SetMetadataConfiguration(MetadataConfigurationT&& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = std::forward<MetadataConfigurationT>(value); }
    template<typename MetadataConfigurationT = CreateFileSystemLustreMetadataConfiguration>
    CreateFileSystemLustreConfiguration& WithMetadataConfiguration(MetadataConfigurationT&& value) { SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throughput of an FSx for Lustre file system using the
     * Intelligent-Tiering storage class, measured in megabytes per second (MBps).
     * Valid values are 4000 MBps or multiples of 4000 MBps. You pay for the amount of
     * throughput that you provision.</p>
     */
    inline int GetThroughputCapacity() const { return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline CreateFileSystemLustreConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optional provisioned SSD read cache on FSx for Lustre file
     * systems that use the Intelligent-Tiering storage class. Required when
     * <code>StorageType</code> is set to <code>INTELLIGENT_TIERING</code>.</p>
     */
    inline const LustreReadCacheConfiguration& GetDataReadCacheConfiguration() const { return m_dataReadCacheConfiguration; }
    inline bool DataReadCacheConfigurationHasBeenSet() const { return m_dataReadCacheConfigurationHasBeenSet; }
    template<typename DataReadCacheConfigurationT = LustreReadCacheConfiguration>
    void SetDataReadCacheConfiguration(DataReadCacheConfigurationT&& value) { m_dataReadCacheConfigurationHasBeenSet = true; m_dataReadCacheConfiguration = std::forward<DataReadCacheConfigurationT>(value); }
    template<typename DataReadCacheConfigurationT = LustreReadCacheConfiguration>
    CreateFileSystemLustreConfiguration& WithDataReadCacheConfiguration(DataReadCacheConfigurationT&& value) { SetDataReadCacheConfiguration(std::forward<DataReadCacheConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    Aws::String m_importPath;
    bool m_importPathHasBeenSet = false;

    Aws::String m_exportPath;
    bool m_exportPathHasBeenSet = false;

    int m_importedFileChunkSize{0};
    bool m_importedFileChunkSizeHasBeenSet = false;

    LustreDeploymentType m_deploymentType{LustreDeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    AutoImportPolicyType m_autoImportPolicy{AutoImportPolicyType::NOT_SET};
    bool m_autoImportPolicyHasBeenSet = false;

    int m_perUnitStorageThroughput{0};
    bool m_perUnitStorageThroughputHasBeenSet = false;

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

    bool m_efaEnabled{false};
    bool m_efaEnabledHasBeenSet = false;

    LustreLogCreateConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    LustreRootSquashConfiguration m_rootSquashConfiguration;
    bool m_rootSquashConfigurationHasBeenSet = false;

    CreateFileSystemLustreMetadataConfiguration m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;

    int m_throughputCapacity{0};
    bool m_throughputCapacityHasBeenSet = false;

    LustreReadCacheConfiguration m_dataReadCacheConfiguration;
    bool m_dataReadCacheConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
