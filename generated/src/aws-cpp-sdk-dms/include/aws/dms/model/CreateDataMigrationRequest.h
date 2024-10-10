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
    AWS_DATABASEMIGRATIONSERVICE_API CreateDataMigrationRequest();

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
    inline const Aws::String& GetDataMigrationName() const{ return m_dataMigrationName; }
    inline bool DataMigrationNameHasBeenSet() const { return m_dataMigrationNameHasBeenSet; }
    inline void SetDataMigrationName(const Aws::String& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = value; }
    inline void SetDataMigrationName(Aws::String&& value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName = std::move(value); }
    inline void SetDataMigrationName(const char* value) { m_dataMigrationNameHasBeenSet = true; m_dataMigrationName.assign(value); }
    inline CreateDataMigrationRequest& WithDataMigrationName(const Aws::String& value) { SetDataMigrationName(value); return *this;}
    inline CreateDataMigrationRequest& WithDataMigrationName(Aws::String&& value) { SetDataMigrationName(std::move(value)); return *this;}
    inline CreateDataMigrationRequest& WithDataMigrationName(const char* value) { SetDataMigrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the migration project.</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const{ return m_migrationProjectIdentifier; }
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }
    inline void SetMigrationProjectIdentifier(const Aws::String& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = value; }
    inline void SetMigrationProjectIdentifier(Aws::String&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::move(value); }
    inline void SetMigrationProjectIdentifier(const char* value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier.assign(value); }
    inline CreateDataMigrationRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}
    inline CreateDataMigrationRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}
    inline CreateDataMigrationRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the data migration is full-load only, change data capture (CDC)
     * only, or full-load and CDC.</p>
     */
    inline const MigrationTypeValue& GetDataMigrationType() const{ return m_dataMigrationType; }
    inline bool DataMigrationTypeHasBeenSet() const { return m_dataMigrationTypeHasBeenSet; }
    inline void SetDataMigrationType(const MigrationTypeValue& value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = value; }
    inline void SetDataMigrationType(MigrationTypeValue&& value) { m_dataMigrationTypeHasBeenSet = true; m_dataMigrationType = std::move(value); }
    inline CreateDataMigrationRequest& WithDataMigrationType(const MigrationTypeValue& value) { SetDataMigrationType(value); return *this;}
    inline CreateDataMigrationRequest& WithDataMigrationType(MigrationTypeValue&& value) { SetDataMigrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the service access role that you want to
     * use to create the data migration.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }
    inline CreateDataMigrationRequest& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}
    inline CreateDataMigrationRequest& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}
    inline CreateDataMigrationRequest& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable CloudWatch logs for the data migration.</p>
     */
    inline bool GetEnableCloudwatchLogs() const{ return m_enableCloudwatchLogs; }
    inline bool EnableCloudwatchLogsHasBeenSet() const { return m_enableCloudwatchLogsHasBeenSet; }
    inline void SetEnableCloudwatchLogs(bool value) { m_enableCloudwatchLogsHasBeenSet = true; m_enableCloudwatchLogs = value; }
    inline CreateDataMigrationRequest& WithEnableCloudwatchLogs(bool value) { SetEnableCloudwatchLogs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the source data provider.</p>
     */
    inline const Aws::Vector<SourceDataSetting>& GetSourceDataSettings() const{ return m_sourceDataSettings; }
    inline bool SourceDataSettingsHasBeenSet() const { return m_sourceDataSettingsHasBeenSet; }
    inline void SetSourceDataSettings(const Aws::Vector<SourceDataSetting>& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = value; }
    inline void SetSourceDataSettings(Aws::Vector<SourceDataSetting>&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings = std::move(value); }
    inline CreateDataMigrationRequest& WithSourceDataSettings(const Aws::Vector<SourceDataSetting>& value) { SetSourceDataSettings(value); return *this;}
    inline CreateDataMigrationRequest& WithSourceDataSettings(Aws::Vector<SourceDataSetting>&& value) { SetSourceDataSettings(std::move(value)); return *this;}
    inline CreateDataMigrationRequest& AddSourceDataSettings(const SourceDataSetting& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.push_back(value); return *this; }
    inline CreateDataMigrationRequest& AddSourceDataSettings(SourceDataSetting&& value) { m_sourceDataSettingsHasBeenSet = true; m_sourceDataSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of parallel jobs that trigger parallel threads to unload the
     * tables from the source, and then load them to the target.</p>
     */
    inline int GetNumberOfJobs() const{ return m_numberOfJobs; }
    inline bool NumberOfJobsHasBeenSet() const { return m_numberOfJobsHasBeenSet; }
    inline void SetNumberOfJobs(int value) { m_numberOfJobsHasBeenSet = true; m_numberOfJobs = value; }
    inline CreateDataMigrationRequest& WithNumberOfJobs(int value) { SetNumberOfJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags to be assigned to the data migration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDataMigrationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDataMigrationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDataMigrationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDataMigrationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional JSON string specifying what tables, views, and schemas to include
     * or exclude from the migration.</p>
     */
    inline const Aws::String& GetSelectionRules() const{ return m_selectionRules; }
    inline bool SelectionRulesHasBeenSet() const { return m_selectionRulesHasBeenSet; }
    inline void SetSelectionRules(const Aws::String& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = value; }
    inline void SetSelectionRules(Aws::String&& value) { m_selectionRulesHasBeenSet = true; m_selectionRules = std::move(value); }
    inline void SetSelectionRules(const char* value) { m_selectionRulesHasBeenSet = true; m_selectionRules.assign(value); }
    inline CreateDataMigrationRequest& WithSelectionRules(const Aws::String& value) { SetSelectionRules(value); return *this;}
    inline CreateDataMigrationRequest& WithSelectionRules(Aws::String&& value) { SetSelectionRules(std::move(value)); return *this;}
    inline CreateDataMigrationRequest& WithSelectionRules(const char* value) { SetSelectionRules(value); return *this;}
    ///@}
  private:

    Aws::String m_dataMigrationName;
    bool m_dataMigrationNameHasBeenSet = false;

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    MigrationTypeValue m_dataMigrationType;
    bool m_dataMigrationTypeHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    bool m_enableCloudwatchLogs;
    bool m_enableCloudwatchLogsHasBeenSet = false;

    Aws::Vector<SourceDataSetting> m_sourceDataSettings;
    bool m_sourceDataSettingsHasBeenSet = false;

    int m_numberOfJobs;
    bool m_numberOfJobsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_selectionRules;
    bool m_selectionRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
