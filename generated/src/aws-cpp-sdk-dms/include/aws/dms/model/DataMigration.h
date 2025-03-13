/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/dms/model/DataMigrationSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/DataMigrationStatistics.h>
#include <aws/dms/model/SourceDataSetting.h>
#include <aws/dms/model/TargetDataSetting.h>
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
   * <p>This object provides information about a DMS data migration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DataMigration">AWS
   * API Reference</a></p>
   */
  class DataMigration
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DataMigration() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DataMigration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataMigration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user-friendly name for the data migration.</p>
     */
    inline const Aws::String& GetDataMigrationName() const { return m_dataMigrationName; }
    inline bool DataMigrationNameHasBeenSet() const { return m_dataMigrationNameHasBeenSet; }
    template<typename DataMigrationNameT = Aws::String>
    void SetDataMigrationName(DataMigrationNameT&& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = std::forward<DataMigrationNameT>(value); }
    template<typename DataMigrationNameT = Aws::String>
    DataMigration& WithDataMigrationName(DataMigrationNameT&& value) { SetDataMigrationName(std::forward<DataMigrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies this replication.</p>
     */
    inline const Aws::String& GetDataMigrationArn() const { return m_dataMigrationArn; }
    inline bool DataMigrationArnHasBeenSet() const { return m_dataMigrationArnHasBeenSet; }
    template<typename DataMigrationArnT = Aws::String>
    void SetDataMigrationArn(DataMigrationArnT&& value) { m_dataMigrationArnHasBeenSet = true; m_dataMigrationArn = std::forward<DataMigrationArnT>(value); }
    template<typename DataMigrationArnT = Aws::String>
    DataMigration& WithDataMigrationArn(DataMigrationArnT&& value) { SetDataMigrationArn(std::forward<DataMigrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time when DMS created the data migration.</p>
     */
    inline const Aws::Utils::DateTime& GetDataMigrationCreateTime() const { return m_dataMigrationCreateTime; }
    inline bool DataMigrationCreateTimeHasBeenSet() const { return m_dataMigrationCreateTimeHasBeenSet; }
    template<typename DataMigrationCreateTimeT = Aws::Utils::DateTime>
    void SetDataMigrationCreateTime(DataMigrationCreateTimeT&& value) { m_dataMigrationCreateTimeHasBeenSet = true; m_dataMigrationCreateTime = std::forward<DataMigrationCreateTimeT>(value); }
    template<typename DataMigrationCreateTimeT = Aws::Utils::DateTime>
    DataMigration& WithDataMigrationCreateTime(DataMigrationCreateTimeT&& value) { SetDataMigrationCreateTime(std::forward<DataMigrationCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time when DMS started the data migration.</p>
     */
    inline const Aws::Utils::DateTime& GetDataMigrationStartTime() const { return m_dataMigrationStartTime; }
    inline bool DataMigrationStartTimeHasBeenSet() const { return m_dataMigrationStartTimeHasBeenSet; }
    template<typename DataMigrationStartTimeT = Aws::Utils::DateTime>
    void SetDataMigrationStartTime(DataMigrationStartTimeT&& value) { m_dataMigrationStartTimeHasBeenSet = true; m_dataMigrationStartTime = std::forward<DataMigrationStartTimeT>(value); }
    template<typename DataMigrationStartTimeT = Aws::Utils::DateTime>
    DataMigration& WithDataMigrationStartTime(DataMigrationStartTimeT&& value) { SetDataMigrationStartTime(std::forward<DataMigrationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time when data migration ended.</p>
     */
    inline const Aws::Utils::DateTime& GetDataMigrationEndTime() const { return m_dataMigrationEndTime; }
    inline bool DataMigrationEndTimeHasBeenSet() const { return m_dataMigrationEndTimeHasBeenSet; }
    template<typename DataMigrationEndTimeT = Aws::Utils::DateTime>
    void SetDataMigrationEndTime(DataMigrationEndTimeT&& value) { m_dataMigrationEndTimeHasBeenSet = true; m_dataMigrationEndTime = std::forward<DataMigrationEndTimeT>(value); }
    template<typename DataMigrationEndTimeT = Aws::Utils::DateTime>
    DataMigration& WithDataMigrationEndTime(DataMigrationEndTimeT&& value) { SetDataMigrationEndTime(std::forward<DataMigrationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that the data migration uses to access Amazon Web Services
     * resources.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    DataMigration& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data migration's associated migration
     * project.</p>
     */
    inline const Aws::String& GetMigrationProjectArn() const { return m_migrationProjectArn; }
    inline bool MigrationProjectArnHasBeenSet() const { return m_migrationProjectArnHasBeenSet; }
    template<typename MigrationProjectArnT = Aws::String>
    void SetMigrationProjectArn(MigrationProjectArnT&& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = std::forward<MigrationProjectArnT>(value); }
    template<typename MigrationProjectArnT = Aws::String>
    DataMigration& WithMigrationProjectArn(MigrationProjectArnT&& value) { SetMigrationProjectArn(std::forward<MigrationProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the data migration is full-load only, change data capture
     * (CDC) only, or full-load and CDC.</p>
     */
    inline MigrationTypeValue GetDataMigrationType() const { return m_dataMigrationType; }
    inline bool DataMigrationTypeHasBeenSet() const { return m_dataMigrationTypeHasBeenSet; }
    inline void SetDataMigrationType(MigrationTypeValue value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = value; }
    inline DataMigration& WithDataMigrationType(MigrationTypeValue value) { SetDataMigrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies CloudWatch settings and selection rules for the data migration.</p>
     */
    inline const DataMigrationSettings& GetDataMigrationSettings() const { return m_dataMigrationSettings; }
    inline bool DataMigrationSettingsHasBeenSet() const { return m_dataMigrationSettingsHasBeenSet; }
    template<typename DataMigrationSettingsT = DataMigrationSettings>
    void SetDataMigrationSettings(DataMigrationSettingsT&& value) { m_dataMigrationSettingsHasBeenSet = true; m_dataMigrationSettings = std::forward<DataMigrationSettingsT>(value); }
    template<typename DataMigrationSettingsT = DataMigrationSettings>
    DataMigration& WithDataMigrationSettings(DataMigrationSettingsT&& value) { SetDataMigrationSettings(std::forward<DataMigrationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the data migration's source data provider.</p>
     */
    inline const Aws::Vector<SourceDataSetting>& GetSourceDataSettings() const { return m_sourceDataSettings; }
    inline bool SourceDataSettingsHasBeenSet() const { return m_sourceDataSettingsHasBeenSet; }
    template<typename SourceDataSettingsT = Aws::Vector<SourceDataSetting>>
    void SetSourceDataSettings(SourceDataSettingsT&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = std::forward<SourceDataSettingsT>(value); }
    template<typename SourceDataSettingsT = Aws::Vector<SourceDataSetting>>
    DataMigration& WithSourceDataSettings(SourceDataSettingsT&& value) { SetSourceDataSettings(std::forward<SourceDataSettingsT>(value)); return *this;}
    template<typename SourceDataSettingsT = SourceDataSetting>
    DataMigration& AddSourceDataSettings(SourceDataSettingsT&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.emplace_back(std::forward<SourceDataSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies information about the data migration's target data provider.</p>
     */
    inline const Aws::Vector<TargetDataSetting>& GetTargetDataSettings() const { return m_targetDataSettings; }
    inline bool TargetDataSettingsHasBeenSet() const { return m_targetDataSettingsHasBeenSet; }
    template<typename TargetDataSettingsT = Aws::Vector<TargetDataSetting>>
    void SetTargetDataSettings(TargetDataSettingsT&& value) { m_targetDataSettingsHasBeenSet = true; m_targetDataSettings = std::forward<TargetDataSettingsT>(value); }
    template<typename TargetDataSettingsT = Aws::Vector<TargetDataSetting>>
    DataMigration& WithTargetDataSettings(TargetDataSettingsT&& value) { SetTargetDataSettings(std::forward<TargetDataSettingsT>(value)); return *this;}
    template<typename TargetDataSettingsT = TargetDataSetting>
    DataMigration& AddTargetDataSettings(TargetDataSettingsT&& value) { m_targetDataSettingsHasBeenSet = true; m_targetDataSettings.emplace_back(std::forward<TargetDataSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides information about the data migration's run, including start and stop
     * time, latency, and data migration progress.</p>
     */
    inline const DataMigrationStatistics& GetDataMigrationStatistics() const { return m_dataMigrationStatistics; }
    inline bool DataMigrationStatisticsHasBeenSet() const { return m_dataMigrationStatisticsHasBeenSet; }
    template<typename DataMigrationStatisticsT = DataMigrationStatistics>
    void SetDataMigrationStatistics(DataMigrationStatisticsT&& value) { m_dataMigrationStatisticsHasBeenSet = true; m_dataMigrationStatistics = std::forward<DataMigrationStatisticsT>(value); }
    template<typename DataMigrationStatisticsT = DataMigrationStatistics>
    DataMigration& WithDataMigrationStatistics(DataMigrationStatisticsT&& value) { SetDataMigrationStatistics(std::forward<DataMigrationStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the data migration. </p>
     */
    inline const Aws::String& GetDataMigrationStatus() const { return m_dataMigrationStatus; }
    inline bool DataMigrationStatusHasBeenSet() const { return m_dataMigrationStatusHasBeenSet; }
    template<typename DataMigrationStatusT = Aws::String>
    void SetDataMigrationStatus(DataMigrationStatusT&& value) { m_dataMigrationStatusHasBeenSet = true; m_dataMigrationStatus = std::forward<DataMigrationStatusT>(value); }
    template<typename DataMigrationStatusT = Aws::String>
    DataMigration& WithDataMigrationStatus(DataMigrationStatusT&& value) { SetDataMigrationStatus(std::forward<DataMigrationStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the endpoints for the data migration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicIpAddresses() const { return m_publicIpAddresses; }
    inline bool PublicIpAddressesHasBeenSet() const { return m_publicIpAddressesHasBeenSet; }
    template<typename PublicIpAddressesT = Aws::Vector<Aws::String>>
    void SetPublicIpAddresses(PublicIpAddressesT&& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses = std::forward<PublicIpAddressesT>(value); }
    template<typename PublicIpAddressesT = Aws::Vector<Aws::String>>
    DataMigration& WithPublicIpAddresses(PublicIpAddressesT&& value) { SetPublicIpAddresses(std::forward<PublicIpAddressesT>(value)); return *this;}
    template<typename PublicIpAddressesT = Aws::String>
    DataMigration& AddPublicIpAddresses(PublicIpAddressesT&& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses.emplace_back(std::forward<PublicIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CIDR blocks of the endpoints for the data migration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataMigrationCidrBlocks() const { return m_dataMigrationCidrBlocks; }
    inline bool DataMigrationCidrBlocksHasBeenSet() const { return m_dataMigrationCidrBlocksHasBeenSet; }
    template<typename DataMigrationCidrBlocksT = Aws::Vector<Aws::String>>
    void SetDataMigrationCidrBlocks(DataMigrationCidrBlocksT&& value) { m_dataMigrationCidrBlocksHasBeenSet = true; m_dataMigrationCidrBlocks = std::forward<DataMigrationCidrBlocksT>(value); }
    template<typename DataMigrationCidrBlocksT = Aws::Vector<Aws::String>>
    DataMigration& WithDataMigrationCidrBlocks(DataMigrationCidrBlocksT&& value) { SetDataMigrationCidrBlocks(std::forward<DataMigrationCidrBlocksT>(value)); return *this;}
    template<typename DataMigrationCidrBlocksT = Aws::String>
    DataMigration& AddDataMigrationCidrBlocks(DataMigrationCidrBlocksT&& value) { m_dataMigrationCidrBlocksHasBeenSet = true; m_dataMigrationCidrBlocks.emplace_back(std::forward<DataMigrationCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the data migration's most recent error or failure.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const { return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    template<typename LastFailureMessageT = Aws::String>
    void SetLastFailureMessage(LastFailureMessageT&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::forward<LastFailureMessageT>(value); }
    template<typename LastFailureMessageT = Aws::String>
    DataMigration& WithLastFailureMessage(LastFailureMessageT&& value) { SetLastFailureMessage(std::forward<LastFailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the data migration last stopped.</p>
     */
    inline const Aws::String& GetStopReason() const { return m_stopReason; }
    inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }
    template<typename StopReasonT = Aws::String>
    void SetStopReason(StopReasonT&& value) { m_stopReasonHasBeenSet = true; m_stopReason = std::forward<StopReasonT>(value); }
    template<typename StopReasonT = Aws::String>
    DataMigration& WithStopReason(StopReasonT&& value) { SetStopReason(std::forward<StopReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataMigrationName;
    bool m_dataMigrationNameHasBeenSet = false;

    Aws::String m_dataMigrationArn;
    bool m_dataMigrationArnHasBeenSet = false;

    Aws::Utils::DateTime m_dataMigrationCreateTime{};
    bool m_dataMigrationCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataMigrationStartTime{};
    bool m_dataMigrationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataMigrationEndTime{};
    bool m_dataMigrationEndTimeHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_migrationProjectArn;
    bool m_migrationProjectArnHasBeenSet = false;

    MigrationTypeValue m_dataMigrationType{MigrationTypeValue::NOT_SET};
    bool m_dataMigrationTypeHasBeenSet = false;

    DataMigrationSettings m_dataMigrationSettings;
    bool m_dataMigrationSettingsHasBeenSet = false;

    Aws::Vector<SourceDataSetting> m_sourceDataSettings;
    bool m_sourceDataSettingsHasBeenSet = false;

    Aws::Vector<TargetDataSetting> m_targetDataSettings;
    bool m_targetDataSettingsHasBeenSet = false;

    DataMigrationStatistics m_dataMigrationStatistics;
    bool m_dataMigrationStatisticsHasBeenSet = false;

    Aws::String m_dataMigrationStatus;
    bool m_dataMigrationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_publicIpAddresses;
    bool m_publicIpAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataMigrationCidrBlocks;
    bool m_dataMigrationCidrBlocksHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_stopReason;
    bool m_stopReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
