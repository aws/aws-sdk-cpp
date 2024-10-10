/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/SourceDataSetting.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class ModifyDataMigrationRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataMigrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDataMigration"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier (name or ARN) of the data migration to modify.</p>
     */
    inline const Aws::String& GetDataMigrationIdentifier() const{ return m_dataMigrationIdentifier; }
    inline bool DataMigrationIdentifierHasBeenSet() const { return m_dataMigrationIdentifierHasBeenSet; }
    inline void SetDataMigrationIdentifier(const Aws::String& value) { m_dataMigrationIdentifierHasBeenSet = true; m_dataMigrationIdentifier = value; }
    inline void SetDataMigrationIdentifier(Aws::String&& value) { m_dataMigrationIdentifierHasBeenSet = true; m_dataMigrationIdentifier = std::move(value); }
    inline void SetDataMigrationIdentifier(const char* value) { m_dataMigrationIdentifierHasBeenSet = true; m_dataMigrationIdentifier.assign(value); }
    inline ModifyDataMigrationRequest& WithDataMigrationIdentifier(const Aws::String& value) { SetDataMigrationIdentifier(value); return *this;}
    inline ModifyDataMigrationRequest& WithDataMigrationIdentifier(Aws::String&& value) { SetDataMigrationIdentifier(std::move(value)); return *this;}
    inline ModifyDataMigrationRequest& WithDataMigrationIdentifier(const char* value) { SetDataMigrationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the data migration.</p>
     */
    inline const Aws::String& GetDataMigrationName() const{ return m_dataMigrationName; }
    inline bool DataMigrationNameHasBeenSet() const { return m_dataMigrationNameHasBeenSet; }
    inline void SetDataMigrationName(const Aws::String& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = value; }
    inline void SetDataMigrationName(Aws::String&& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = std::move(value); }
    inline void SetDataMigrationName(const char* value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName.assign(value); }
    inline ModifyDataMigrationRequest& WithDataMigrationName(const Aws::String& value) { SetDataMigrationName(value); return *this;}
    inline ModifyDataMigrationRequest& WithDataMigrationName(Aws::String&& value) { SetDataMigrationName(std::move(value)); return *this;}
    inline ModifyDataMigrationRequest& WithDataMigrationName(const char* value) { SetDataMigrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable Cloudwatch logs for the data migration.</p>
     */
    inline bool GetEnableCloudwatchLogs() const{ return m_enableCloudwatchLogs; }
    inline bool EnableCloudwatchLogsHasBeenSet() const { return m_enableCloudwatchLogsHasBeenSet; }
    inline void SetEnableCloudwatchLogs(bool value) { m_enableCloudwatchLogsHasBeenSet = true; m_enableCloudwatchLogs = value; }
    inline ModifyDataMigrationRequest& WithEnableCloudwatchLogs(bool value) { SetEnableCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new service access role ARN for the data migration.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }
    inline ModifyDataMigrationRequest& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}
    inline ModifyDataMigrationRequest& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}
    inline ModifyDataMigrationRequest& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new migration type for the data migration.</p>
     */
    inline const MigrationTypeValue& GetDataMigrationType() const{ return m_dataMigrationType; }
    inline bool DataMigrationTypeHasBeenSet() const { return m_dataMigrationTypeHasBeenSet; }
    inline void SetDataMigrationType(const MigrationTypeValue& value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = value; }
    inline void SetDataMigrationType(MigrationTypeValue&& value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = std::move(value); }
    inline ModifyDataMigrationRequest& WithDataMigrationType(const MigrationTypeValue& value) { SetDataMigrationType(value); return *this;}
    inline ModifyDataMigrationRequest& WithDataMigrationType(MigrationTypeValue&& value) { SetDataMigrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new information about the source data provider for the data
     * migration.</p>
     */
    inline const Aws::Vector<SourceDataSetting>& GetSourceDataSettings() const{ return m_sourceDataSettings; }
    inline bool SourceDataSettingsHasBeenSet() const { return m_sourceDataSettingsHasBeenSet; }
    inline void SetSourceDataSettings(const Aws::Vector<SourceDataSetting>& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = value; }
    inline void SetSourceDataSettings(Aws::Vector<SourceDataSetting>&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = std::move(value); }
    inline ModifyDataMigrationRequest& WithSourceDataSettings(const Aws::Vector<SourceDataSetting>& value) { SetSourceDataSettings(value); return *this;}
    inline ModifyDataMigrationRequest& WithSourceDataSettings(Aws::Vector<SourceDataSetting>&& value) { SetSourceDataSettings(std::move(value)); return *this;}
    inline ModifyDataMigrationRequest& AddSourceDataSettings(const SourceDataSetting& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.push_back(value); return *this; }
    inline ModifyDataMigrationRequest& AddSourceDataSettings(SourceDataSetting&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of parallel jobs that trigger parallel threads to unload the
     * tables from the source, and then load them to the target.</p>
     */
    inline int GetNumberOfJobs() const{ return m_numberOfJobs; }
    inline bool NumberOfJobsHasBeenSet() const { return m_numberOfJobsHasBeenSet; }
    inline void SetNumberOfJobs(int value) { m_numberOfJobsHasBeenSet = true; m_numberOfJobs = value; }
    inline ModifyDataMigrationRequest& WithNumberOfJobs(int value) { SetNumberOfJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON-formatted string that defines what objects to include and exclude from
     * the migration.</p>
     */
    inline const Aws::String& GetSelectionRules() const{ return m_selectionRules; }
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
    inline void SetSelectionRules(const Aws::String& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = value; }
    inline void SetSelectionRules(Aws::String&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::move(value); }
    inline void SetSelectionRules(const char* value) { m_selectionRulesHasBeenSet = true; m_selectionRules.assign(value); }
    inline ModifyDataMigrationRequest& WithSelectionRules(const Aws::String& value) { SetSelectionRules(value); return *this;}
    inline ModifyDataMigrationRequest& WithSelectionRules(Aws::String&& value) { SetSelectionRules(std::move(value)); return *this;}
    inline ModifyDataMigrationRequest& WithSelectionRules(const char* value) { SetSelectionRules(value); return *this;}
    ///@}
  private:

    Aws::String m_dataMigrationIdentifier;
    bool m_dataMigrationIdentifierHasBeenSet = false;

    Aws::String m_dataMigrationName;
    bool m_dataMigrationNameHasBeenSet = false;

    bool m_enableCloudwatchLogs;
    bool m_enableCloudwatchLogsHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    MigrationTypeValue m_dataMigrationType;
    bool m_dataMigrationTypeHasBeenSet = false;

    Aws::Vector<SourceDataSetting> m_sourceDataSettings;
    bool m_sourceDataSettingsHasBeenSet = false;

    int m_numberOfJobs;
    bool m_numberOfJobsHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
