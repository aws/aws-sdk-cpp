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
    AWS_GLUE_API CreateColumnStatisticsTaskSettingsRequest() = default;

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
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    CreateColumnStatisticsTaskSettingsRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table for which to generate column statistics.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    CreateColumnStatisticsTaskSettingsRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role used for running the column statistics.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CreateColumnStatisticsTaskSettingsRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A schedule for running the column statistics, specified in CRON syntax.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    CreateColumnStatisticsTaskSettingsRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of column names for which to run statistics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNameList() const { return m_columnNameList; }
    inline bool ColumnNameListHasBeenSet() const { return m_columnNameListHasBeenSet; }
    template<typename ColumnNameListT = Aws::Vector<Aws::String>>
    void SetColumnNameList(ColumnNameListT&& value) { m_columnNameListHasBeenSet = true; m_columnNameList = std::forward<ColumnNameListT>(value); }
    template<typename ColumnNameListT = Aws::Vector<Aws::String>>
    CreateColumnStatisticsTaskSettingsRequest& WithColumnNameList(ColumnNameListT&& value) { SetColumnNameList(std::forward<ColumnNameListT>(value)); return *this;}
    template<typename ColumnNameListT = Aws::String>
    CreateColumnStatisticsTaskSettingsRequest& AddColumnNameList(ColumnNameListT&& value) { m_columnNameListHasBeenSet = true; m_columnNameList.emplace_back(std::forward<ColumnNameListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The percentage of data to sample.</p>
     */
    inline double GetSampleSize() const { return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(double value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline CreateColumnStatisticsTaskSettingsRequest& WithSampleSize(double value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline const Aws::String& GetCatalogID() const { return m_catalogID; }
    inline bool CatalogIDHasBeenSet() const { return m_catalogIDHasBeenSet; }
    template<typename CatalogIDT = Aws::String>
    void SetCatalogID(CatalogIDT&& value) { m_catalogIDHasBeenSet = true; m_catalogID = std::forward<CatalogIDT>(value); }
    template<typename CatalogIDT = Aws::String>
    CreateColumnStatisticsTaskSettingsRequest& WithCatalogID(CatalogIDT&& value) { SetCatalogID(std::forward<CatalogIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the security configuration that is used to encrypt CloudWatch
     * logs.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    CreateColumnStatisticsTaskSettingsRequest& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateColumnStatisticsTaskSettingsRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateColumnStatisticsTaskSettingsRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    double m_sampleSize{0.0};
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
