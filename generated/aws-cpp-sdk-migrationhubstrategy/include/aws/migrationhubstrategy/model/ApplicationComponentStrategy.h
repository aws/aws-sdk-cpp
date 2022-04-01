﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/RecommendationSet.h>
#include <aws/migrationhubstrategy/model/StrategyRecommendation.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Contains information about a strategy recommendation for an application
   * component. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ApplicationComponentStrategy">AWS
   * API Reference</a></p>
   */
  class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentStrategy
  {
  public:
    ApplicationComponentStrategy();
    ApplicationComponentStrategy(Aws::Utils::Json::JsonView jsonValue);
    ApplicationComponentStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Set to true if the recommendation is set as preferred. </p>
     */
    inline bool GetIsPreferred() const{ return m_isPreferred; }

    /**
     * <p> Set to true if the recommendation is set as preferred. </p>
     */
    inline bool IsPreferredHasBeenSet() const { return m_isPreferredHasBeenSet; }

    /**
     * <p> Set to true if the recommendation is set as preferred. </p>
     */
    inline void SetIsPreferred(bool value) { m_isPreferredHasBeenSet = true; m_isPreferred = value; }

    /**
     * <p> Set to true if the recommendation is set as preferred. </p>
     */
    inline ApplicationComponentStrategy& WithIsPreferred(bool value) { SetIsPreferred(value); return *this;}


    /**
     * <p> Strategy recommendation for the application component. </p>
     */
    inline const RecommendationSet& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p> Strategy recommendation for the application component. </p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p> Strategy recommendation for the application component. </p>
     */
    inline void SetRecommendation(const RecommendationSet& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p> Strategy recommendation for the application component. </p>
     */
    inline void SetRecommendation(RecommendationSet&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p> Strategy recommendation for the application component. </p>
     */
    inline ApplicationComponentStrategy& WithRecommendation(const RecommendationSet& value) { SetRecommendation(value); return *this;}

    /**
     * <p> Strategy recommendation for the application component. </p>
     */
    inline ApplicationComponentStrategy& WithRecommendation(RecommendationSet&& value) { SetRecommendation(std::move(value)); return *this;}


    /**
     * <p> The recommendation status of a strategy for an application component. </p>
     */
    inline const StrategyRecommendation& GetStatus() const{ return m_status; }

    /**
     * <p> The recommendation status of a strategy for an application component. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The recommendation status of a strategy for an application component. </p>
     */
    inline void SetStatus(const StrategyRecommendation& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The recommendation status of a strategy for an application component. </p>
     */
    inline void SetStatus(StrategyRecommendation&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The recommendation status of a strategy for an application component. </p>
     */
    inline ApplicationComponentStrategy& WithStatus(const StrategyRecommendation& value) { SetStatus(value); return *this;}

    /**
     * <p> The recommendation status of a strategy for an application component. </p>
     */
    inline ApplicationComponentStrategy& WithStatus(StrategyRecommendation&& value) { SetStatus(std::move(value)); return *this;}

  private:

    bool m_isPreferred;
    bool m_isPreferredHasBeenSet;

    RecommendationSet m_recommendation;
    bool m_recommendationHasBeenSet;

    StrategyRecommendation m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
