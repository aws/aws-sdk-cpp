/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateColumnStatisticsTaskSettingsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateColumnStatisticsTaskSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateColumnStatisticsTaskSettings"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the database where the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreateColumnStatisticsTaskSettingsRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table for which to generate column statistics.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline CreateColumnStatisticsTaskSettingsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role used for running the column statistics.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline CreateColumnStatisticsTaskSettingsRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A schedule for running the column statistics, specified in CRON syntax.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }
    inline CreateColumnStatisticsTaskSettingsRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of column names for which to run statistics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNameList() const{ return m_columnNameList; }
    inline bool ColumnNameListHasBeenSet() const { return m_columnNameListHasBeenSet; }
    inline void SetColumnNameList(const Aws::Vector<Aws::String>& value) { m_columnNameListHasBeenSet = true; m_columnNameList = value; }
    inline void SetColumnNameList(Aws::Vector<Aws::String>&& value) { m_columnNameListHasBeenSet = true; m_columnNameList = std::move(value); }
    inline CreateColumnStatisticsTaskSettingsRequest& WithColumnNameList(const Aws::Vector<Aws::String>& value) { SetColumnNameList(value); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithColumnNameList(Aws::Vector<Aws::String>&& value) { SetColumnNameList(std::move(value)); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& AddColumnNameList(const Aws::String& value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(value); return *this; }
    inline CreateColumnStatisticsTaskSettingsRequest& AddColumnNameList(Aws::String&& value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(std::move(value)); return *this; }
    inline CreateColumnStatisticsTaskSettingsRequest& AddColumnNameList(const char* value) { m_columnNameListHasBeenSet = true; m_columnNameList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The percentage of data to sample.</p>
     */
    inline double GetSampleSize() const{ return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(double value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline CreateColumnStatisticsTaskSettingsRequest& WithSampleSize(double value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline const Aws::String& GetCatalogID() const{ return m_catalogID; }
    inline bool CatalogIDHasBeenSet() const { return m_catalogIDHasBeenSet; }
    inline void SetCatalogID(const Aws::String& value) { m_catalogIDHasBeenSet = true; m_catalogID = value; }
    inline void SetCatalogID(Aws::String&& value) { m_catalogIDHasBeenSet = true; m_catalogID = std::move(value); }
    inline void SetCatalogID(const char* value) { m_catalogIDHasBeenSet = true; m_catalogID.assign(value); }
    inline CreateColumnStatisticsTaskSettingsRequest& WithCatalogID(const Aws::String& value) { SetCatalogID(value); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithCatalogID(Aws::String&& value) { SetCatalogID(std::move(value)); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithCatalogID(const char* value) { SetCatalogID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch
     * logs.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }
    inline CreateColumnStatisticsTaskSettingsRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateColumnStatisticsTaskSettingsRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateColumnStatisticsTaskSettingsRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateColumnStatisticsTaskSettingsRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateColumnStatisticsTaskSettingsRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateColumnStatisticsTaskSettingsRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateColumnStatisticsTaskSettingsRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateColumnStatisticsTaskSettingsRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateColumnStatisticsTaskSettingsRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNameList;
    bool m_columnNameListHasBeenSet = false;

    double m_sampleSize;
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_catalogID;
    bool m_catalogIDHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
