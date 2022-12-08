/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DefaultInteractiveLayoutConfiguration.h>
#include <aws/quicksight/model/DefaultPaginatedLayoutConfiguration.h>
#include <aws/quicksight/model/SheetContentType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration for default new sheet settings.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultNewSheetConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultNewSheetConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DefaultNewSheetConfiguration();
    AWS_QUICKSIGHT_API DefaultNewSheetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultNewSheetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the default settings for interactive layout
     * configuration.</p>
     */
    inline const DefaultInteractiveLayoutConfiguration& GetInteractiveLayoutConfiguration() const{ return m_interactiveLayoutConfiguration; }

    /**
     * <p>The options that determine the default settings for interactive layout
     * configuration.</p>
     */
    inline bool InteractiveLayoutConfigurationHasBeenSet() const { return m_interactiveLayoutConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the default settings for interactive layout
     * configuration.</p>
     */
    inline void SetInteractiveLayoutConfiguration(const DefaultInteractiveLayoutConfiguration& value) { m_interactiveLayoutConfigurationHasBeenSet = true; m_interactiveLayoutConfiguration = value; }

    /**
     * <p>The options that determine the default settings for interactive layout
     * configuration.</p>
     */
    inline void SetInteractiveLayoutConfiguration(DefaultInteractiveLayoutConfiguration&& value) { m_interactiveLayoutConfigurationHasBeenSet = true; m_interactiveLayoutConfiguration = std::move(value); }

    /**
     * <p>The options that determine the default settings for interactive layout
     * configuration.</p>
     */
    inline DefaultNewSheetConfiguration& WithInteractiveLayoutConfiguration(const DefaultInteractiveLayoutConfiguration& value) { SetInteractiveLayoutConfiguration(value); return *this;}

    /**
     * <p>The options that determine the default settings for interactive layout
     * configuration.</p>
     */
    inline DefaultNewSheetConfiguration& WithInteractiveLayoutConfiguration(DefaultInteractiveLayoutConfiguration&& value) { SetInteractiveLayoutConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the default settings for a paginated layout
     * configuration.</p>
     */
    inline const DefaultPaginatedLayoutConfiguration& GetPaginatedLayoutConfiguration() const{ return m_paginatedLayoutConfiguration; }

    /**
     * <p>The options that determine the default settings for a paginated layout
     * configuration.</p>
     */
    inline bool PaginatedLayoutConfigurationHasBeenSet() const { return m_paginatedLayoutConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the default settings for a paginated layout
     * configuration.</p>
     */
    inline void SetPaginatedLayoutConfiguration(const DefaultPaginatedLayoutConfiguration& value) { m_paginatedLayoutConfigurationHasBeenSet = true; m_paginatedLayoutConfiguration = value; }

    /**
     * <p>The options that determine the default settings for a paginated layout
     * configuration.</p>
     */
    inline void SetPaginatedLayoutConfiguration(DefaultPaginatedLayoutConfiguration&& value) { m_paginatedLayoutConfigurationHasBeenSet = true; m_paginatedLayoutConfiguration = std::move(value); }

    /**
     * <p>The options that determine the default settings for a paginated layout
     * configuration.</p>
     */
    inline DefaultNewSheetConfiguration& WithPaginatedLayoutConfiguration(const DefaultPaginatedLayoutConfiguration& value) { SetPaginatedLayoutConfiguration(value); return *this;}

    /**
     * <p>The options that determine the default settings for a paginated layout
     * configuration.</p>
     */
    inline DefaultNewSheetConfiguration& WithPaginatedLayoutConfiguration(DefaultPaginatedLayoutConfiguration&& value) { SetPaginatedLayoutConfiguration(std::move(value)); return *this;}


    /**
     * <p>The option that determines the sheet content type.</p>
     */
    inline const SheetContentType& GetSheetContentType() const{ return m_sheetContentType; }

    /**
     * <p>The option that determines the sheet content type.</p>
     */
    inline bool SheetContentTypeHasBeenSet() const { return m_sheetContentTypeHasBeenSet; }

    /**
     * <p>The option that determines the sheet content type.</p>
     */
    inline void SetSheetContentType(const SheetContentType& value) { m_sheetContentTypeHasBeenSet = true; m_sheetContentType = value; }

    /**
     * <p>The option that determines the sheet content type.</p>
     */
    inline void SetSheetContentType(SheetContentType&& value) { m_sheetContentTypeHasBeenSet = true; m_sheetContentType = std::move(value); }

    /**
     * <p>The option that determines the sheet content type.</p>
     */
    inline DefaultNewSheetConfiguration& WithSheetContentType(const SheetContentType& value) { SetSheetContentType(value); return *this;}

    /**
     * <p>The option that determines the sheet content type.</p>
     */
    inline DefaultNewSheetConfiguration& WithSheetContentType(SheetContentType&& value) { SetSheetContentType(std::move(value)); return *this;}

  private:

    DefaultInteractiveLayoutConfiguration m_interactiveLayoutConfiguration;
    bool m_interactiveLayoutConfigurationHasBeenSet = false;

    DefaultPaginatedLayoutConfiguration m_paginatedLayoutConfiguration;
    bool m_paginatedLayoutConfigurationHasBeenSet = false;

    SheetContentType m_sheetContentType;
    bool m_sheetContentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
