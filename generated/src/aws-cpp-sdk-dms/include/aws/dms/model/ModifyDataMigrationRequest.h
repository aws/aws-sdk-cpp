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
#include <aws/dms/model/TargetDataSetting.h>
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
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataMigrationRequest() = default;

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
    inline const Aws::String& GetDataMigrationIdentifier() const { return m_dataMigrationIdentifier; }
    inline bool DataMigrationIdentifierHasBeenSet() const { return m_dataMigrationIdentifierHasBeenSet; }
    template<typename DataMigrationIdentifierT = Aws::String>
    void SetDataMigrationIdentifier(DataMigrationIdentifierT&& value) { m_dataMigrationIdentifierHasBeenSet = true; m_dataMigrationIdentifier = std::forward<DataMigrationIdentifierT>(value); }
    template<typename DataMigrationIdentifierT = Aws::String>
    ModifyDataMigrationRequest& WithDataMigrationIdentifier(DataMigrationIdentifierT&& value) { SetDataMigrationIdentifier(std::forward<DataMigrationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the data migration.</p>
     */
    inline const Aws::String& GetDataMigrationName() const { return m_dataMigrationName; }
    inline bool DataMigrationNameHasBeenSet() const { return m_dataMigrationNameHasBeenSet; }
    template<typename DataMigrationNameT = Aws::String>
    void SetDataMigrationName(DataMigrationNameT&& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = std::forward<DataMigrationNameT>(value); }
    template<typename DataMigrationNameT = Aws::String>
    ModifyDataMigrationRequest& WithDataMigrationName(DataMigrationNameT&& value) { SetDataMigrationName(std::forward<DataMigrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable Cloudwatch logs for the data migration.</p>
     */
    inline bool GetEnableCloudwatchLogs() const { return m_enableCloudwatchLogs; }
    inline bool EnableCloudwatchLogsHasBeenSet() const { return m_enableCloudwatchLogsHasBeenSet; }
    inline void SetEnableCloudwatchLogs(bool value) { m_enableCloudwatchLogsHasBeenSet = true; m_enableCloudwatchLogs = value; }
    inline ModifyDataMigrationRequest& WithEnableCloudwatchLogs(bool value) { SetEnableCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new service access role ARN for the data migration.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    ModifyDataMigrationRequest& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new migration type for the data migration.</p>
     */
    inline MigrationTypeValue GetDataMigrationType() const { return m_dataMigrationType; }
    inline bool DataMigrationTypeHasBeenSet() const { return m_dataMigrationTypeHasBeenSet; }
    inline void SetDataMigrationType(MigrationTypeValue value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = value; }
    inline ModifyDataMigrationRequest& WithDataMigrationType(MigrationTypeValue value) { SetDataMigrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new information about the source data provider for the data
     * migration.</p>
     */
    inline const Aws::Vector<SourceDataSetting>& GetSourceDataSettings() const { return m_sourceDataSettings; }
    inline bool SourceDataSettingsHasBeenSet() const { return m_sourceDataSettingsHasBeenSet; }
    template<typename SourceDataSettingsT = Aws::Vector<SourceDataSetting>>
    void SetSourceDataSettings(SourceDataSettingsT&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = std::forward<SourceDataSettingsT>(value); }
    template<typename SourceDataSettingsT = Aws::Vector<SourceDataSetting>>
    ModifyDataMigrationRequest& WithSourceDataSettings(SourceDataSettingsT&& value) { SetSourceDataSettings(std::forward<SourceDataSettingsT>(value)); return *this;}
    template<typename SourceDataSettingsT = SourceDataSetting>
    ModifyDataMigrationRequest& AddSourceDataSettings(SourceDataSettingsT&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.emplace_back(std::forward<SourceDataSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new information about the target data provider for the data
     * migration.</p>
     */
    inline const Aws::Vector<TargetDataSetting>& GetTargetDataSettings() const { return m_targetDataSettings; }
    inline bool TargetDataSettingsHasBeenSet() const { return m_targetDataSettingsHasBeenSet; }
    template<typename TargetDataSettingsT = Aws::Vector<TargetDataSetting>>
    void SetTargetDataSettings(TargetDataSettingsT&& value) { m_targetDataSettingsHasBeenSet = true; m_targetDataSettings = std::forward<TargetDataSettingsT>(value); }
    template<typename TargetDataSettingsT = Aws::Vector<TargetDataSetting>>
    ModifyDataMigrationRequest& WithTargetDataSettings(TargetDataSettingsT&& value) { SetTargetDataSettings(std::forward<TargetDataSettingsT>(value)); return *this;}
    template<typename TargetDataSettingsT = TargetDataSetting>
    ModifyDataMigrationRequest& AddTargetDataSettings(TargetDataSettingsT&& value) { m_targetDataSettingsHasBeenSet = true; m_targetDataSettings.emplace_back(std::forward<TargetDataSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of parallel jobs that trigger parallel threads to unload the
     * tables from the source, and then load them to the target.</p>
     */
    inline int GetNumberOfJobs() const { return m_numberOfJobs; }
    inline bool NumberOfJobsHasBeenSet() const { return m_numberOfJobsHasBeenSet; }
    inline void SetNumberOfJobs(int value) { m_numberOfJobsHasBeenSet = true; m_numberOfJobs = value; }
    inline ModifyDataMigrationRequest& WithNumberOfJobs(int value) { SetNumberOfJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON-formatted string that defines what objects to include and exclude from
     * the migration.</p>
     */
    inline const Aws::String& GetSelectionRules() const { return m_selectionRules; }
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
    template<typename SelectionRulesT = Aws::String>
    void SetSelectionRules(SelectionRulesT&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::forward<SelectionRulesT>(value); }
    template<typename SelectionRulesT = Aws::String>
    ModifyDataMigrationRequest& WithSelectionRules(SelectionRulesT&& value) { SetSelectionRules(std::forward<SelectionRulesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataMigrationIdentifier;
    bool m_dataMigrationIdentifierHasBeenSet = false;

    Aws::String m_dataMigrationName;
    bool m_dataMigrationNameHasBeenSet = false;

    bool m_enableCloudwatchLogs{false};
    bool m_enableCloudwatchLogsHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    MigrationTypeValue m_dataMigrationType{MigrationTypeValue::NOT_SET};
    bool m_dataMigrationTypeHasBeenSet = false;

    Aws::Vector<SourceDataSetting> m_sourceDataSettings;
    bool m_sourceDataSettingsHasBeenSet = false;

    Aws::Vector<TargetDataSetting> m_targetDataSettings;
    bool m_targetDataSettingsHasBeenSet = false;

    int m_numberOfJobs{0};
    bool m_numberOfJobsHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
