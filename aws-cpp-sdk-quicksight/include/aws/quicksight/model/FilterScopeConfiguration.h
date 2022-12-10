/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SelectedSheetsFilterScopeConfiguration.h>
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
   * <p>The scope configuration for a <code>FilterGroup</code>.</p> <p>This is a
   * union type structure. For this structure to be valid, only one of the attributes
   * can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterScopeConfiguration">AWS
   * API Reference</a></p>
   */
  class FilterScopeConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FilterScopeConfiguration();
    AWS_QUICKSIGHT_API FilterScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for applying a filter to specific sheets.</p>
     */
    inline const SelectedSheetsFilterScopeConfiguration& GetSelectedSheets() const{ return m_selectedSheets; }

    /**
     * <p>The configuration for applying a filter to specific sheets.</p>
     */
    inline bool SelectedSheetsHasBeenSet() const { return m_selectedSheetsHasBeenSet; }

    /**
     * <p>The configuration for applying a filter to specific sheets.</p>
     */
    inline void SetSelectedSheets(const SelectedSheetsFilterScopeConfiguration& value) { m_selectedSheetsHasBeenSet = true; m_selectedSheets = value; }

    /**
     * <p>The configuration for applying a filter to specific sheets.</p>
     */
    inline void SetSelectedSheets(SelectedSheetsFilterScopeConfiguration&& value) { m_selectedSheetsHasBeenSet = true; m_selectedSheets = std::move(value); }

    /**
     * <p>The configuration for applying a filter to specific sheets.</p>
     */
    inline FilterScopeConfiguration& WithSelectedSheets(const SelectedSheetsFilterScopeConfiguration& value) { SetSelectedSheets(value); return *this;}

    /**
     * <p>The configuration for applying a filter to specific sheets.</p>
     */
    inline FilterScopeConfiguration& WithSelectedSheets(SelectedSheetsFilterScopeConfiguration&& value) { SetSelectedSheets(std::move(value)); return *this;}

  private:

    SelectedSheetsFilterScopeConfiguration m_selectedSheets;
    bool m_selectedSheetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
