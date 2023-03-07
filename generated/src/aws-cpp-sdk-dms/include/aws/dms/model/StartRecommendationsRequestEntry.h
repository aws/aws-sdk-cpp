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
    AWS_DATABASEMIGRATIONSERVICE_API StartRecommendationsRequestEntry();
    AWS_DATABASEMIGRATIONSERVICE_API StartRecommendationsRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API StartRecommendationsRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the source database.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline StartRecommendationsRequestEntry& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p>The identifier of the source database.</p>
     */
    inline StartRecommendationsRequestEntry& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source database.</p>
     */
    inline StartRecommendationsRequestEntry& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


    /**
     * <p>The required target engine settings.</p>
     */
    inline const RecommendationSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>The required target engine settings.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The required target engine settings.</p>
     */
    inline void SetSettings(const RecommendationSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The required target engine settings.</p>
     */
    inline void SetSettings(RecommendationSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The required target engine settings.</p>
     */
    inline StartRecommendationsRequestEntry& WithSettings(const RecommendationSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>The required target engine settings.</p>
     */
    inline StartRecommendationsRequestEntry& WithSettings(RecommendationSettings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    RecommendationSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
