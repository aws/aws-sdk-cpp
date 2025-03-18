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
    AWS_DATABASEMIGRATIONSERVICE_API Recommendation() = default;
    AWS_DATABASEMIGRATIONSERVICE_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the source database for which Fleet Advisor provided this
     * recommendation.</p>
     */
    inline const Aws::String& GetDatabaseId() const { return m_databaseId; }
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
    template<typename DatabaseIdT = Aws::String>
    void SetDatabaseId(DatabaseIdT&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::forward<DatabaseIdT>(value); }
    template<typename DatabaseIdT = Aws::String>
    Recommendation& WithDatabaseId(DatabaseIdT&& value) { SetDatabaseId(std::forward<DatabaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target engine. Valid values include
     * <code>"rds-aurora-mysql"</code>, <code>"rds-aurora-postgresql"</code>,
     * <code>"rds-mysql"</code>, <code>"rds-oracle"</code>,
     * <code>"rds-sql-server"</code>, and <code>"rds-postgresql"</code>.</p>
     */
    inline const Aws::String& GetEngineName() const { return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    template<typename EngineNameT = Aws::String>
    void SetEngineName(EngineNameT&& value) { m_engineNameHasBeenSet = true; m_engineName = std::forward<EngineNameT>(value); }
    template<typename EngineNameT = Aws::String>
    Recommendation& WithEngineName(EngineNameT&& value) { SetEngineName(std::forward<EngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when Fleet Advisor created the target engine recommendation.</p>
     */
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    Recommendation& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the target engine recommendation. Valid values include
     * <code>"alternate"</code>, <code>"in-progress"</code>, <code>"not-viable"</code>,
     * and <code>"recommended"</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Recommendation& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that this target is the rightsized migration destination.</p>
     */
    inline bool GetPreferred() const { return m_preferred; }
    inline bool PreferredHasBeenSet() const { return m_preferredHasBeenSet; }
    inline void SetPreferred(bool value) { m_preferredHasBeenSet = true; m_preferred = value; }
    inline Recommendation& WithPreferred(bool value) { SetPreferred(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings in JSON format for the preferred target engine parameters. These
     * parameters include capacity, resource utilization, and the usage type
     * (production, development, or testing).</p>
     */
    inline const RecommendationSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = RecommendationSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = RecommendationSettings>
    Recommendation& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation of a target engine for the specified source database.</p>
     */
    inline const RecommendationData& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = RecommendationData>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = RecommendationData>
    Recommendation& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_preferred{false};
    bool m_preferredHasBeenSet = false;

    RecommendationSettings m_settings;
    bool m_settingsHasBeenSet = false;

    RecommendationData m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
