/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/RecommendationSettings.h>
#include <aws/dms/model/RecommendationData.h>
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
   * <p>Provides information that describes a recommendation of a target engine.</p>
   * <p>A <i>recommendation</i> is a set of possible Amazon Web Services target
   * engines that you can choose to migrate your source on-premises database. In this
   * set, Fleet Advisor suggests a single target engine as the right sized migration
   * destination. To determine this rightsized migration destination, Fleet Advisor
   * uses the inventory metadata and metrics from data collector. You can use
   * recommendations before the start of migration to save costs and reduce
   * risks.</p> <p>With recommendations, you can explore different target options and
   * compare metrics, so you can make an informed decision when you choose the
   * migration target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API Recommendation();
    AWS_DATABASEMIGRATIONSERVICE_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }

    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }

    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }

    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }

    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }

    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline Recommendation& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline Recommendation& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline Recommendation& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline Recommendation& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline Recommendation& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline Recommendation& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }

    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline Recommendation& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline Recommendation& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}

    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline Recommendation& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}


    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline Recommendation& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline Recommendation& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline Recommendation& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Indicates that this target is the rightsized migration destination.</p>
     */
    inline bool GetPreferred() const{ return m_preferred; }

    /**
     * <p>Indicates that this target is the rightsized migration destination.</p>
     */
    inline bool PreferredHasBeenSet() const { return m_preferredHasBeenSet; }

    /**
     * <p>Indicates that this target is the rightsized migration destination.</p>
     */
    inline void SetPreferred(bool value) { m_preferredHasBeenSet = true; m_preferred = value; }

    /**
     * <p>Indicates that this target is the rightsized migration destination.</p>
     */
    inline Recommendation& WithPreferred(bool value) { SetPreferred(value); return *this;}


    /**
     * <p>The settings in JSON format for the preferred target engine parameters. These
     * parameters include capacity, resource utilization, and the usage type
     * (production, development, or testing).</p>
     */
    inline const RecommendationSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>The settings in JSON format for the preferred target engine parameters. These
     * parameters include capacity, resource utilization, and the usage type
     * (production, development, or testing).</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The settings in JSON format for the preferred target engine parameters. These
     * parameters include capacity, resource utilization, and the usage type
     * (production, development, or testing).</p>
     */
    inline void SetSettings(const RecommendationSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The settings in JSON format for the preferred target engine parameters. These
     * parameters include capacity, resource utilization, and the usage type
     * (production, development, or testing).</p>
     */
    inline void SetSettings(RecommendationSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The settings in JSON format for the preferred target engine parameters. These
     * parameters include capacity, resource utilization, and the usage type
     * (production, development, or testing).</p>
     */
    inline Recommendation& WithSettings(const RecommendationSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>The settings in JSON format for the preferred target engine parameters. These
     * parameters include capacity, resource utilization, and the usage type
     * (production, development, or testing).</p>
     */
    inline Recommendation& WithSettings(RecommendationSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>The recommendation of a target engine for the specified source database.</p>
     */
    inline const RecommendationData& GetData() const{ return m_data; }

    /**
     * <p>The recommendation of a target engine for the specified source database.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The recommendation of a target engine for the specified source database.</p>
     */
    inline void SetData(const RecommendationData& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The recommendation of a target engine for the specified source database.</p>
     */
    inline void SetData(RecommendationData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The recommendation of a target engine for the specified source database.</p>
     */
    inline Recommendation& WithData(const RecommendationData& value) { SetData(value); return *this;}

    /**
     * <p>The recommendation of a target engine for the specified source database.</p>
     */
    inline Recommendation& WithData(RecommendationData&& value) { SetData(std::move(value)); return *this;}

  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_preferred;
    bool m_preferredHasBeenSet = false;

    RecommendationSettings m_settings;
    bool m_settingsHasBeenSet = false;

    RecommendationData m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
