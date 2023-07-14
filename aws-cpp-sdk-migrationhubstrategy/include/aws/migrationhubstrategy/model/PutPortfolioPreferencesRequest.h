﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/migrationhubstrategy/model/ApplicationPreferences.h>
#include <aws/migrationhubstrategy/model/DatabasePreferences.h>
#include <aws/migrationhubstrategy/model/PrioritizeBusinessGoals.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PutPortfolioPreferencesRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    PutPortfolioPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPortfolioPreferences"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline const ApplicationPreferences& GetApplicationPreferences() const{ return m_applicationPreferences; }

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline bool ApplicationPreferencesHasBeenSet() const { return m_applicationPreferencesHasBeenSet; }

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline void SetApplicationPreferences(const ApplicationPreferences& value) { m_applicationPreferencesHasBeenSet = true; m_applicationPreferences = value; }

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline void SetApplicationPreferences(ApplicationPreferences&& value) { m_applicationPreferencesHasBeenSet = true; m_applicationPreferences = std::move(value); }

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline PutPortfolioPreferencesRequest& WithApplicationPreferences(const ApplicationPreferences& value) { SetApplicationPreferences(value); return *this;}

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline PutPortfolioPreferencesRequest& WithApplicationPreferences(ApplicationPreferences&& value) { SetApplicationPreferences(std::move(value)); return *this;}


    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline const DatabasePreferences& GetDatabasePreferences() const{ return m_databasePreferences; }

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline bool DatabasePreferencesHasBeenSet() const { return m_databasePreferencesHasBeenSet; }

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline void SetDatabasePreferences(const DatabasePreferences& value) { m_databasePreferencesHasBeenSet = true; m_databasePreferences = value; }

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline void SetDatabasePreferences(DatabasePreferences&& value) { m_databasePreferencesHasBeenSet = true; m_databasePreferences = std::move(value); }

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline PutPortfolioPreferencesRequest& WithDatabasePreferences(const DatabasePreferences& value) { SetDatabasePreferences(value); return *this;}

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline PutPortfolioPreferencesRequest& WithDatabasePreferences(DatabasePreferences&& value) { SetDatabasePreferences(std::move(value)); return *this;}


    /**
     * <p> The rank of the business goals based on priority. </p>
     */
    inline const PrioritizeBusinessGoals& GetPrioritizeBusinessGoals() const{ return m_prioritizeBusinessGoals; }

    /**
     * <p> The rank of the business goals based on priority. </p>
     */
    inline bool PrioritizeBusinessGoalsHasBeenSet() const { return m_prioritizeBusinessGoalsHasBeenSet; }

    /**
     * <p> The rank of the business goals based on priority. </p>
     */
    inline void SetPrioritizeBusinessGoals(const PrioritizeBusinessGoals& value) { m_prioritizeBusinessGoalsHasBeenSet = true; m_prioritizeBusinessGoals = value; }

    /**
     * <p> The rank of the business goals based on priority. </p>
     */
    inline void SetPrioritizeBusinessGoals(PrioritizeBusinessGoals&& value) { m_prioritizeBusinessGoalsHasBeenSet = true; m_prioritizeBusinessGoals = std::move(value); }

    /**
     * <p> The rank of the business goals based on priority. </p>
     */
    inline PutPortfolioPreferencesRequest& WithPrioritizeBusinessGoals(const PrioritizeBusinessGoals& value) { SetPrioritizeBusinessGoals(value); return *this;}

    /**
     * <p> The rank of the business goals based on priority. </p>
     */
    inline PutPortfolioPreferencesRequest& WithPrioritizeBusinessGoals(PrioritizeBusinessGoals&& value) { SetPrioritizeBusinessGoals(std::move(value)); return *this;}

  private:

    ApplicationPreferences m_applicationPreferences;
    bool m_applicationPreferencesHasBeenSet;

    DatabasePreferences m_databasePreferences;
    bool m_databasePreferencesHasBeenSet;

    PrioritizeBusinessGoals m_prioritizeBusinessGoals;
    bool m_prioritizeBusinessGoalsHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
