/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/RecommendationSettings.h>
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
   * <p>Provides information about the source database to analyze and provide target
   * recommendations according to the specified requirements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartRecommendationsRequestEntry">AWS
   * API Reference</a></p>
   */
  class StartRecommendationsRequestEntry
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartRecommendationsRequestEntry() = default;
    AWS_DATABASEMIGRATIONSERVICE_API StartRecommendationsRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API StartRecommendationsRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the source database.</p>
     */
    inline const Aws::String& GetDatabaseId() const { return m_databaseId; }
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }
    template<typename DatabaseIdT = Aws::String>
    void SetDatabaseId(DatabaseIdT&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::forward<DatabaseIdT>(value); }
    template<typename DatabaseIdT = Aws::String>
    StartRecommendationsRequestEntry& WithDatabaseId(DatabaseIdT&& value) { SetDatabaseId(std::forward<DatabaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required target engine settings.</p>
     */
    inline const RecommendationSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = RecommendationSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = RecommendationSettings>
    StartRecommendationsRequestEntry& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    RecommendationSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
