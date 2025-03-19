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
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class CreateDataMigrationRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateDataMigrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataMigration"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-friendly name for the data migration. Data migration names have the
     * following constraints:</p> <ul> <li> <p>Must begin with a letter, and can only
     * contain ASCII letters, digits, and hyphens. </p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> <li> <p>Length must be from
     * 1 to 255 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetDataMigrationName() const { return m_dataMigrationName; }
    inline bool DataMigrationNameHasBeenSet() const { return m_dataMigrationNameHasBeenSet; }
    template<typename DataMigrationNameT = Aws::String>
    void SetDataMigrationName(DataMigrationNameT&& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = std::forward<DataMigrationNameT>(value); }
    template<typename DataMigrationNameT = Aws::String>
    CreateDataMigrationRequest& WithDataMigrationName(DataMigrationNameT&& value) { SetDataMigrationName(std::forward<DataMigrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const { return m_migrationProjectIdentifier; }
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
    template<typename MigrationProjectIdentifierT = Aws::String>
    void SetMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::forward<MigrationProjectIdentifierT>(value); }
    template<typename MigrationProjectIdentifierT = Aws::String>
    CreateDataMigrationRequest& WithMigrationProjectIdentifier(MigrationProjectIdentifierT&& value) { SetMigrationProjectIdentifier(std::forward<MigrationProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the data migration is full-load only, change data capture (CDC)
     * only, or full-load and CDC.</p>
     */
    inline MigrationTypeValue GetDataMigrationType() const { return m_dataMigrationType; }
    inline bool DataMigrationTypeHasBeenSet() const { return m_dataMigrationTypeHasBeenSet; }
    inline void SetDataMigrationType(MigrationTypeValue value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = value; }
    inline CreateDataMigrationRequest& WithDataMigrationType(MigrationTypeValue value) { SetDataMigrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the data migration.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    CreateDataMigrationRequest& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable CloudWatch logs for the data migration.</p>
     */
    inline bool GetEnableCloudwatchLogs() const { return m_enableCloudwatchLogs; }
    inline bool EnableCloudwatchLogsHasBeenSet() const { return m_enableCloudwatchLogsHasBeenSet; }
    inline void SetEnableCloudwatchLogs(bool value) { m_enableCloudwatchLogsHasBeenSet = true; m_enableCloudwatchLogs = value; }
    inline CreateDataMigrationRequest& WithEnableCloudwatchLogs(bool value) { SetEnableCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the source data provider.</p>
     */
    inline const Aws::Vector<SourceDataSetting>& GetSourceDataSettings() const { return m_sourceDataSettings; }
    inline bool SourceDataSettingsHasBeenSet() const { return m_sourceDataSettingsHasBeenSet; }
    template<typename SourceDataSettingsT = Aws::Vector<SourceDataSetting>>
    void SetSourceDataSettings(SourceDataSettingsT&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = std::forward<SourceDataSettingsT>(value); }
    template<typename SourceDataSettingsT = Aws::Vector<SourceDataSetting>>
    CreateDataMigrationRequest& WithSourceDataSettings(SourceDataSettingsT&& value) { SetSourceDataSettings(std::forward<SourceDataSettingsT>(value)); return *this;}
    template<typename SourceDataSettingsT = SourceDataSetting>
    CreateDataMigrationRequest& AddSourceDataSettings(SourceDataSettingsT&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.emplace_back(std::forward<SourceDataSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies information about the target data provider.</p>
     */
    inline const Aws::Vector<TargetDataSetting>& GetTargetDataSettings() const { return m_targetDataSettings; }
    inline bool TargetDataSettingsHasBeenSet() const { return m_targetDataSettingsHasBeenSet; }
    template<typename TargetDataSettingsT = Aws::Vector<TargetDataSetting>>
    void SetTargetDataSettings(TargetDataSettingsT&& value) { m_targetDataSettingsHasBeenSet = true; m_targetDataSettings = std::forward<TargetDataSettingsT>(value); }
    template<typename TargetDataSettingsT = Aws::Vector<TargetDataSetting>>
    CreateDataMigrationRequest& WithTargetDataSettings(TargetDataSettingsT&& value) { SetTargetDataSettings(std::forward<TargetDataSettingsT>(value)); return *this;}
    template<typename TargetDataSettingsT = TargetDataSetting>
    CreateDataMigrationRequest& AddTargetDataSettings(TargetDataSettingsT&& value) { m_targetDataSettingsHasBeenSet = true; m_targetDataSettings.emplace_back(std::forward<TargetDataSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of parallel jobs that trigger parallel threads to unload the
     * tables from the source, and then load them to the target.</p>
     */
    inline int GetNumberOfJobs() const { return m_numberOfJobs; }
    inline bool NumberOfJobsHasBeenSet() const { return m_numberOfJobsHasBeenSet; }
    inline void SetNumberOfJobs(int value) { m_numberOfJobsHasBeenSet = true; m_numberOfJobs = value; }
    inline CreateDataMigrationRequest& WithNumberOfJobs(int value) { SetNumberOfJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags to be assigned to the data migration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDataMigrationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataMigrationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional JSON string specifying what tables, views, and schemas to include
     * or exclude from the migration.</p>
     */
    inline const Aws::String& GetSelectionRules() const { return m_selectionRules; }
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
    template<typename SelectionRulesT = Aws::String>
    void SetSelectionRules(SelectionRulesT&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::forward<SelectionRulesT>(value); }
    template<typename SelectionRulesT = Aws::String>
    CreateDataMigrationRequest& WithSelectionRules(SelectionRulesT&& value) { SetSelectionRules(std::forward<SelectionRulesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataMigrationName;
    bool m_dataMigrationNameHasBeenSet = false;

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    MigrationTypeValue m_dataMigrationType{MigrationTypeValue::NOT_SET};
    bool m_dataMigrationTypeHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    bool m_enableCloudwatchLogs{false};
    bool m_enableCloudwatchLogsHasBeenSet = false;

    Aws::Vector<SourceDataSetting> m_sourceDataSettings;
    bool m_sourceDataSettingsHasBeenSet = false;

    Aws::Vector<TargetDataSetting> m_targetDataSettings;
    bool m_targetDataSettingsHasBeenSet = false;

    int m_numberOfJobs{0};
    bool m_numberOfJobsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
