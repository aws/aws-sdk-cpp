/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ApplicationMode.h>
#include <aws/migrationhubstrategy/model/ApplicationPreferences.h>
#include <aws/migrationhubstrategy/model/DatabasePreferences.h>
#include <aws/migrationhubstrategy/model/PrioritizeBusinessGoals.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetPortfolioPreferencesResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The classification for application component types.</p>
     */
    inline const ApplicationMode& GetApplicationMode() const{ return m_applicationMode; }

    /**
     * <p>The classification for application component types.</p>
     */
    inline void SetApplicationMode(const ApplicationMode& value) { m_applicationMode = value; }

    /**
     * <p>The classification for application component types.</p>
     */
    inline void SetApplicationMode(ApplicationMode&& value) { m_applicationMode = std::move(value); }

    /**
     * <p>The classification for application component types.</p>
     */
    inline GetPortfolioPreferencesResult& WithApplicationMode(const ApplicationMode& value) { SetApplicationMode(value); return *this;}

    /**
     * <p>The classification for application component types.</p>
     */
    inline GetPortfolioPreferencesResult& WithApplicationMode(ApplicationMode&& value) { SetApplicationMode(std::move(value)); return *this;}


    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline const ApplicationPreferences& GetApplicationPreferences() const{ return m_applicationPreferences; }

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline void SetApplicationPreferences(const ApplicationPreferences& value) { m_applicationPreferences = value; }

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline void SetApplicationPreferences(ApplicationPreferences&& value) { m_applicationPreferences = std::move(value); }

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline GetPortfolioPreferencesResult& WithApplicationPreferences(const ApplicationPreferences& value) { SetApplicationPreferences(value); return *this;}

    /**
     * <p> The transformation preferences for non-database applications. </p>
     */
    inline GetPortfolioPreferencesResult& WithApplicationPreferences(ApplicationPreferences&& value) { SetApplicationPreferences(std::move(value)); return *this;}


    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline const DatabasePreferences& GetDatabasePreferences() const{ return m_databasePreferences; }

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline void SetDatabasePreferences(const DatabasePreferences& value) { m_databasePreferences = value; }

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline void SetDatabasePreferences(DatabasePreferences&& value) { m_databasePreferences = std::move(value); }

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline GetPortfolioPreferencesResult& WithDatabasePreferences(const DatabasePreferences& value) { SetDatabasePreferences(value); return *this;}

    /**
     * <p> The transformation preferences for database applications. </p>
     */
    inline GetPortfolioPreferencesResult& WithDatabasePreferences(DatabasePreferences&& value) { SetDatabasePreferences(std::move(value)); return *this;}


    /**
     * <p> The rank of business goals based on priority. </p>
     */
    inline const PrioritizeBusinessGoals& GetPrioritizeBusinessGoals() const{ return m_prioritizeBusinessGoals; }

    /**
     * <p> The rank of business goals based on priority. </p>
     */
    inline void SetPrioritizeBusinessGoals(const PrioritizeBusinessGoals& value) { m_prioritizeBusinessGoals = value; }

    /**
     * <p> The rank of business goals based on priority. </p>
     */
    inline void SetPrioritizeBusinessGoals(PrioritizeBusinessGoals&& value) { m_prioritizeBusinessGoals = std::move(value); }

    /**
     * <p> The rank of business goals based on priority. </p>
     */
    inline GetPortfolioPreferencesResult& WithPrioritizeBusinessGoals(const PrioritizeBusinessGoals& value) { SetPrioritizeBusinessGoals(value); return *this;}

    /**
     * <p> The rank of business goals based on priority. </p>
     */
    inline GetPortfolioPreferencesResult& WithPrioritizeBusinessGoals(PrioritizeBusinessGoals&& value) { SetPrioritizeBusinessGoals(std::move(value)); return *this;}

  private:

    ApplicationMode m_applicationMode;

    ApplicationPreferences m_applicationPreferences;

    DatabasePreferences m_databasePreferences;

    PrioritizeBusinessGoals m_prioritizeBusinessGoals;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
