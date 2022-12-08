/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/AppUnitErrorCategory.h>
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
   * <p>Error in the analysis of the application unit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AppUnitError">AWS
   * API Reference</a></p>
   */
  class AppUnitError
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AppUnitError();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AppUnitError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AppUnitError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category of the error.</p>
     */
    inline const AppUnitErrorCategory& GetAppUnitErrorCategory() const{ return m_appUnitErrorCategory; }

    /**
     * <p>The category of the error.</p>
     */
    inline bool AppUnitErrorCategoryHasBeenSet() const { return m_appUnitErrorCategoryHasBeenSet; }

    /**
     * <p>The category of the error.</p>
     */
    inline void SetAppUnitErrorCategory(const AppUnitErrorCategory& value) { m_appUnitErrorCategoryHasBeenSet = true; m_appUnitErrorCategory = value; }

    /**
     * <p>The category of the error.</p>
     */
    inline void SetAppUnitErrorCategory(AppUnitErrorCategory&& value) { m_appUnitErrorCategoryHasBeenSet = true; m_appUnitErrorCategory = std::move(value); }

    /**
     * <p>The category of the error.</p>
     */
    inline AppUnitError& WithAppUnitErrorCategory(const AppUnitErrorCategory& value) { SetAppUnitErrorCategory(value); return *this;}

    /**
     * <p>The category of the error.</p>
     */
    inline AppUnitError& WithAppUnitErrorCategory(AppUnitErrorCategory&& value) { SetAppUnitErrorCategory(std::move(value)); return *this;}

  private:

    AppUnitErrorCategory m_appUnitErrorCategory;
    bool m_appUnitErrorCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
