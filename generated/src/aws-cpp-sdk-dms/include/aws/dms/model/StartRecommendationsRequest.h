/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/RecommendationSettings.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class StartRecommendationsRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRecommendations"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the source database to analyze and provide recommendations
     * for.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }

    /**
     * <p>The identifier of the source database to analyze and provide recommendations
     * for.</p>
     */
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }

    /**
     * <p>The identifier of the source database to analyze and provide recommendations
     * for.</p>
     */
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }

    /**
     * <p>The identifier of the source database to analyze and provide recommendations
     * for.</p>
     */
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }

    /**
     * <p>The identifier of the source database to analyze and provide recommendations
     * for.</p>
     */
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }

    /**
     * <p>The identifier of the source database to analyze and provide recommendations
     * for.</p>
     */
    inline StartRecommendationsRequest& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p>The identifier of the source database to analyze and provide recommendations
     * for.</p>
     */
    inline StartRecommendationsRequest& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source database to analyze and provide recommendations
     * for.</p>
     */
    inline StartRecommendationsRequest& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


    /**
     * <p>The settings in JSON format that Fleet Advisor uses to determine target
     * engine recommendations. These parameters include target instance sizing and
     * availability and durability settings. For target instance sizing, Fleet Advisor
     * supports the following two options: total capacity and resource utilization. For
     * availability and durability, Fleet Advisor supports the following two options:
     * production (Multi-AZ deployments) and Dev/Test (Single-AZ deployments).</p>
     */
    inline const RecommendationSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>The settings in JSON format that Fleet Advisor uses to determine target
     * engine recommendations. These parameters include target instance sizing and
     * availability and durability settings. For target instance sizing, Fleet Advisor
     * supports the following two options: total capacity and resource utilization. For
     * availability and durability, Fleet Advisor supports the following two options:
     * production (Multi-AZ deployments) and Dev/Test (Single-AZ deployments).</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The settings in JSON format that Fleet Advisor uses to determine target
     * engine recommendations. These parameters include target instance sizing and
     * availability and durability settings. For target instance sizing, Fleet Advisor
     * supports the following two options: total capacity and resource utilization. For
     * availability and durability, Fleet Advisor supports the following two options:
     * production (Multi-AZ deployments) and Dev/Test (Single-AZ deployments).</p>
     */
    inline void SetSettings(const RecommendationSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The settings in JSON format that Fleet Advisor uses to determine target
     * engine recommendations. These parameters include target instance sizing and
     * availability and durability settings. For target instance sizing, Fleet Advisor
     * supports the following two options: total capacity and resource utilization. For
     * availability and durability, Fleet Advisor supports the following two options:
     * production (Multi-AZ deployments) and Dev/Test (Single-AZ deployments).</p>
     */
    inline void SetSettings(RecommendationSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The settings in JSON format that Fleet Advisor uses to determine target
     * engine recommendations. These parameters include target instance sizing and
     * availability and durability settings. For target instance sizing, Fleet Advisor
     * supports the following two options: total capacity and resource utilization. For
     * availability and durability, Fleet Advisor supports the following two options:
     * production (Multi-AZ deployments) and Dev/Test (Single-AZ deployments).</p>
     */
    inline StartRecommendationsRequest& WithSettings(const RecommendationSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>The settings in JSON format that Fleet Advisor uses to determine target
     * engine recommendations. These parameters include target instance sizing and
     * availability and durability settings. For target instance sizing, Fleet Advisor
     * supports the following two options: total capacity and resource utilization. For
     * availability and durability, Fleet Advisor supports the following two options:
     * production (Multi-AZ deployments) and Dev/Test (Single-AZ deployments).</p>
     */
    inline StartRecommendationsRequest& WithSettings(RecommendationSettings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    RecommendationSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
