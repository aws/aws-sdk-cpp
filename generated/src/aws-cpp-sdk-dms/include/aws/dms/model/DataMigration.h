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
    AWS_DATABASEMIGRATIONSERVICE_API DataMigration();
    AWS_DATABASEMIGRATIONSERVICE_API DataMigration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataMigration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user-friendly name for the data migration.</p>
     */
    inline const Aws::String& GetDataMigrationName() const{ return m_dataMigrationName; }
    inline bool DataMigrationNameHasBeenSet() const { return m_dataMigrationNameHasBeenSet; }
    inline void SetDataMigrationName(const Aws::String& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = value; }
    inline void SetDataMigrationName(Aws::String&& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = std::move(value); }
    inline void SetDataMigrationName(const char* value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName.assign(value); }
    inline DataMigration& WithDataMigrationName(const Aws::String& value) { SetDataMigrationName(value); return *this;}
    inline DataMigration& WithDataMigrationName(Aws::String&& value) { SetDataMigrationName(std::move(value)); return *this;}
    inline DataMigration& WithDataMigrationName(const char* value) { SetDataMigrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies this replication.</p>
     */
    inline const Aws::String& GetDataMigrationArn() const{ return m_dataMigrationArn; }
    inline bool DataMigrationArnHasBeenSet() const { return m_dataMigrationArnHasBeenSet; }
    inline void SetDataMigrationArn(const Aws::String& value) { m_dataMigrationArnHasBeenSet = true; m_dataMigrationArn = value; }
    inline void SetDataMigrationArn(Aws::String&& value) { m_dataMigrationArnHasBeenSet = true; m_dataMigrationArn = std::move(value); }
    inline void SetDataMigrationArn(const char* value) { m_dataMigrationArnHasBeenSet = true; m_dataMigrationArn.assign(value); }
    inline DataMigration& WithDataMigrationArn(const Aws::String& value) { SetDataMigrationArn(value); return *this;}
    inline DataMigration& WithDataMigrationArn(Aws::String&& value) { SetDataMigrationArn(std::move(value)); return *this;}
    inline DataMigration& WithDataMigrationArn(const char* value) { SetDataMigrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time when DMS created the data migration.</p>
     */
    inline const Aws::Utils::DateTime& GetDataMigrationCreateTime() const{ return m_dataMigrationCreateTime; }
    inline bool DataMigrationCreateTimeHasBeenSet() const { return m_dataMigrationCreateTimeHasBeenSet; }
    inline void SetDataMigrationCreateTime(const Aws::Utils::DateTime& value) { m_dataMigrationCreateTimeHasBeenSet = true; m_dataMigrationCreateTime = value; }
    inline void SetDataMigrationCreateTime(Aws::Utils::DateTime&& value) { m_dataMigrationCreateTimeHasBeenSet = true; m_dataMigrationCreateTime = std::move(value); }
    inline DataMigration& WithDataMigrationCreateTime(const Aws::Utils::DateTime& value) { SetDataMigrationCreateTime(value); return *this;}
    inline DataMigration& WithDataMigrationCreateTime(Aws::Utils::DateTime&& value) { SetDataMigrationCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time when DMS started the data migration.</p>
     */
    inline const Aws::Utils::DateTime& GetDataMigrationStartTime() const{ return m_dataMigrationStartTime; }
    inline bool DataMigrationStartTimeHasBeenSet() const { return m_dataMigrationStartTimeHasBeenSet; }
    inline void SetDataMigrationStartTime(const Aws::Utils::DateTime& value) { m_dataMigrationStartTimeHasBeenSet = true; m_dataMigrationStartTime = value; }
    inline void SetDataMigrationStartTime(Aws::Utils::DateTime&& value) { m_dataMigrationStartTimeHasBeenSet = true; m_dataMigrationStartTime = std::move(value); }
    inline DataMigration& WithDataMigrationStartTime(const Aws::Utils::DateTime& value) { SetDataMigrationStartTime(value); return *this;}
    inline DataMigration& WithDataMigrationStartTime(Aws::Utils::DateTime&& value) { SetDataMigrationStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time when data migration ended.</p>
     */
    inline const Aws::Utils::DateTime& GetDataMigrationEndTime() const{ return m_dataMigrationEndTime; }
    inline bool DataMigrationEndTimeHasBeenSet() const { return m_dataMigrationEndTimeHasBeenSet; }
    inline void SetDataMigrationEndTime(const Aws::Utils::DateTime& value) { m_dataMigrationEndTimeHasBeenSet = true; m_dataMigrationEndTime = value; }
    inline void SetDataMigrationEndTime(Aws::Utils::DateTime&& value) { m_dataMigrationEndTimeHasBeenSet = true; m_dataMigrationEndTime = std::move(value); }
    inline DataMigration& WithDataMigrationEndTime(const Aws::Utils::DateTime& value) { SetDataMigrationEndTime(value); return *this;}
    inline DataMigration& WithDataMigrationEndTime(Aws::Utils::DateTime&& value) { SetDataMigrationEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that the data migration uses to access Amazon Web Services
     * resources.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }
    inline DataMigration& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}
    inline DataMigration& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}
    inline DataMigration& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data migration's associated migration
     * project.</p>
     */
    inline const Aws::String& GetMigrationProjectArn() const{ return m_migrationProjectArn; }
    inline bool MigrationProjectArnHasBeenSet() const { return m_migrationProjectArnHasBeenSet; }
    inline void SetMigrationProjectArn(const Aws::String& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = value; }
    inline void SetMigrationProjectArn(Aws::String&& value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn = std::move(value); }
    inline void SetMigrationProjectArn(const char* value) { m_migrationProjectArnHasBeenSet = true; m_migrationProjectArn.assign(value); }
    inline DataMigration& WithMigrationProjectArn(const Aws::String& value) { SetMigrationProjectArn(value); return *this;}
    inline DataMigration& WithMigrationProjectArn(Aws::String&& value) { SetMigrationProjectArn(std::move(value)); return *this;}
    inline DataMigration& WithMigrationProjectArn(const char* value) { SetMigrationProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the data migration is full-load only, change data capture
     * (CDC) only, or full-load and CDC.</p>
     */
    inline const MigrationTypeValue& GetDataMigrationType() const{ return m_dataMigrationType; }
    inline bool DataMigrationTypeHasBeenSet() const { return m_dataMigrationTypeHasBeenSet; }
    inline void SetDataMigrationType(const MigrationTypeValue& value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = value; }
    inline void SetDataMigrationType(MigrationTypeValue&& value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = std::move(value); }
    inline DataMigration& WithDataMigrationType(const MigrationTypeValue& value) { SetDataMigrationType(value); return *this;}
    inline DataMigration& WithDataMigrationType(MigrationTypeValue&& value) { SetDataMigrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies CloudWatch settings and selection rules for the data migration.</p>
     */
    inline const DataMigrationSettings& GetDataMigrationSettings() const{ return m_dataMigrationSettings; }
    inline bool DataMigrationSettingsHasBeenSet() const { return m_dataMigrationSettingsHasBeenSet; }
    inline void SetDataMigrationSettings(const DataMigrationSettings& value) { m_dataMigrationSettingsHasBeenSet = true; m_dataMigrationSettings = value; }
    inline void SetDataMigrationSettings(DataMigrationSettings&& value) { m_dataMigrationSettingsHasBeenSet = true; m_dataMigrationSettings = std::move(value); }
    inline DataMigration& WithDataMigrationSettings(const DataMigrationSettings& value) { SetDataMigrationSettings(value); return *this;}
    inline DataMigration& WithDataMigrationSettings(DataMigrationSettings&& value) { SetDataMigrationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the data migration's source data provider.</p>
     */
    inline const Aws::Vector<SourceDataSetting>& GetSourceDataSettings() const{ return m_sourceDataSettings; }
    inline bool SourceDataSettingsHasBeenSet() const { return m_sourceDataSettingsHasBeenSet; }
    inline void SetSourceDataSettings(const Aws::Vector<SourceDataSetting>& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = value; }
    inline void SetSourceDataSettings(Aws::Vector<SourceDataSetting>&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = std::move(value); }
    inline DataMigration& WithSourceDataSettings(const Aws::Vector<SourceDataSetting>& value) { SetSourceDataSettings(value); return *this;}
    inline DataMigration& WithSourceDataSettings(Aws::Vector<SourceDataSetting>&& value) { SetSourceDataSettings(std::move(value)); return *this;}
    inline DataMigration& AddSourceDataSettings(const SourceDataSetting& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.push_back(value); return *this; }
    inline DataMigration& AddSourceDataSettings(SourceDataSetting&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides information about the data migration's run, including start and stop
     * time, latency, and data migration progress.</p>
     */
    inline const DataMigrationStatistics& GetDataMigrationStatistics() const{ return m_dataMigrationStatistics; }
    inline bool DataMigrationStatisticsHasBeenSet() const { return m_dataMigrationStatisticsHasBeenSet; }
    inline void SetDataMigrationStatistics(const DataMigrationStatistics& value) { m_dataMigrationStatisticsHasBeenSet = true; m_dataMigrationStatistics = value; }
    inline void SetDataMigrationStatistics(DataMigrationStatistics&& value) { m_dataMigrationStatisticsHasBeenSet = true; m_dataMigrationStatistics = std::move(value); }
    inline DataMigration& WithDataMigrationStatistics(const DataMigrationStatistics& value) { SetDataMigrationStatistics(value); return *this;}
    inline DataMigration& WithDataMigrationStatistics(DataMigrationStatistics&& value) { SetDataMigrationStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the data migration. </p>
     */
    inline const Aws::String& GetDataMigrationStatus() const{ return m_dataMigrationStatus; }
    inline bool DataMigrationStatusHasBeenSet() const { return m_dataMigrationStatusHasBeenSet; }
    inline void SetDataMigrationStatus(const Aws::String& value) { m_dataMigrationStatusHasBeenSet = true; m_dataMigrationStatus = value; }
    inline void SetDataMigrationStatus(Aws::String&& value) { m_dataMigrationStatusHasBeenSet = true; m_dataMigrationStatus = std::move(value); }
    inline void SetDataMigrationStatus(const char* value) { m_dataMigrationStatusHasBeenSet = true; m_dataMigrationStatus.assign(value); }
    inline DataMigration& WithDataMigrationStatus(const Aws::String& value) { SetDataMigrationStatus(value); return *this;}
    inline DataMigration& WithDataMigrationStatus(Aws::String&& value) { SetDataMigrationStatus(std::move(value)); return *this;}
    inline DataMigration& WithDataMigrationStatus(const char* value) { SetDataMigrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the endpoints for the data migration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicIpAddresses() const{ return m_publicIpAddresses; }
    inline bool PublicIpAddressesHasBeenSet() const { return m_publicIpAddressesHasBeenSet; }
    inline void SetPublicIpAddresses(const Aws::Vector<Aws::String>& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses = value; }
    inline void SetPublicIpAddresses(Aws::Vector<Aws::String>&& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses = std::move(value); }
    inline DataMigration& WithPublicIpAddresses(const Aws::Vector<Aws::String>& value) { SetPublicIpAddresses(value); return *this;}
    inline DataMigration& WithPublicIpAddresses(Aws::Vector<Aws::String>&& value) { SetPublicIpAddresses(std::move(value)); return *this;}
    inline DataMigration& AddPublicIpAddresses(const Aws::String& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses.push_back(value); return *this; }
    inline DataMigration& AddPublicIpAddresses(Aws::String&& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses.push_back(std::move(value)); return *this; }
    inline DataMigration& AddPublicIpAddresses(const char* value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CIDR blocks of the endpoints for the data migration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataMigrationCidrBlocks() const{ return m_dataMigrationCidrBlocks; }
    inline bool DataMigrationCidrBlocksHasBeenSet() const { return m_dataMigrationCidrBlocksHasBeenSet; }
    inline void SetDataMigrationCidrBlocks(const Aws::Vector<Aws::String>& value) { m_dataMigrationCidrBlocksHasBeenSet = true; m_dataMigrationCidrBlocks = value; }
    inline void SetDataMigrationCidrBlocks(Aws::Vector<Aws::String>&& value) { m_dataMigrationCidrBlocksHasBeenSet = true; m_dataMigrationCidrBlocks = std::move(value); }
    inline DataMigration& WithDataMigrationCidrBlocks(const Aws::Vector<Aws::String>& value) { SetDataMigrationCidrBlocks(value); return *this;}
    inline DataMigration& WithDataMigrationCidrBlocks(Aws::Vector<Aws::String>&& value) { SetDataMigrationCidrBlocks(std::move(value)); return *this;}
    inline DataMigration& AddDataMigrationCidrBlocks(const Aws::String& value) { m_dataMigrationCidrBlocksHasBeenSet = true; m_dataMigrationCidrBlocks.push_back(value); return *this; }
    inline DataMigration& AddDataMigrationCidrBlocks(Aws::String&& value) { m_dataMigrationCidrBlocksHasBeenSet = true; m_dataMigrationCidrBlocks.push_back(std::move(value)); return *this; }
    inline DataMigration& AddDataMigrationCidrBlocks(const char* value) { m_dataMigrationCidrBlocksHasBeenSet = true; m_dataMigrationCidrBlocks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the data migration's most recent error or failure.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::move(value); }
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }
    inline DataMigration& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}
    inline DataMigration& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}
    inline DataMigration& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the data migration last stopped.</p>
     */
    inline const Aws::String& GetStopReason() const{ return m_stopReason; }
    inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }
    inline void SetStopReason(const Aws::String& value) { m_stopReasonHasBeenSet = true; m_stopReason = value; }
    inline void SetStopReason(Aws::String&& value) { m_stopReasonHasBeenSet = true; m_stopReason = std::move(value); }
    inline void SetStopReason(const char* value) { m_stopReasonHasBeenSet = true; m_stopReason.assign(value); }
    inline DataMigration& WithStopReason(const Aws::String& value) { SetStopReason(value); return *this;}
    inline DataMigration& WithStopReason(Aws::String&& value) { SetStopReason(std::move(value)); return *this;}
    inline DataMigration& WithStopReason(const char* value) { SetStopReason(value); return *this;}
    ///@}
  private:

    Aws::String m_dataMigrationName;
    bool m_dataMigrationNameHasBeenSet = false;

    Aws::String m_dataMigrationArn;
    bool m_dataMigrationArnHasBeenSet = false;

    Aws::Utils::DateTime m_dataMigrationCreateTime;
    bool m_dataMigrationCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataMigrationStartTime;
    bool m_dataMigrationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataMigrationEndTime;
    bool m_dataMigrationEndTimeHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_migrationProjectArn;
    bool m_migrationProjectArnHasBeenSet = false;

    MigrationTypeValue m_dataMigrationType;
    bool m_dataMigrationTypeHasBeenSet = false;

    DataMigrationSettings m_dataMigrationSettings;
    bool m_dataMigrationSettingsHasBeenSet = false;

    Aws::Vector<SourceDataSetting> m_sourceDataSettings;
    bool m_sourceDataSettingsHasBeenSet = false;

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
