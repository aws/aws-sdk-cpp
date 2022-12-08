/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/AppType.h>
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
   * <p> Contains the summary of application components. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ApplicationComponentSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationComponentSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentSummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Contains the name of application types. </p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }

    /**
     * <p> Contains the name of application types. </p>
     */
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }

    /**
     * <p> Contains the name of application types. </p>
     */
    inline void SetAppType(const AppType& value) { m_appTypeHasBeenSet = true; m_appType = value; }

    /**
     * <p> Contains the name of application types. </p>
     */
    inline void SetAppType(AppType&& value) { m_appTypeHasBeenSet = true; m_appType = std::move(value); }

    /**
     * <p> Contains the name of application types. </p>
     */
    inline ApplicationComponentSummary& WithAppType(const AppType& value) { SetAppType(value); return *this;}

    /**
     * <p> Contains the name of application types. </p>
     */
    inline ApplicationComponentSummary& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}


    /**
     * <p> Contains the count of application type. </p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p> Contains the count of application type. </p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p> Contains the count of application type. </p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p> Contains the count of application type. </p>
     */
    inline ApplicationComponentSummary& WithCount(int value) { SetCount(value); return *this;}

  private:

    AppType m_appType;
    bool m_appTypeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
