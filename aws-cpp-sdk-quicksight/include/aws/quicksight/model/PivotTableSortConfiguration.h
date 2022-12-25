/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PivotFieldSortOptions.h>
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
   * <p>The sort configuration for a <code>PivotTableVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableSortConfiguration">AWS
   * API Reference</a></p>
   */
  class PivotTableSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PivotTableSortConfiguration();
    AWS_QUICKSIGHT_API PivotTableSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline const Aws::Vector<PivotFieldSortOptions>& GetFieldSortOptions() const{ return m_fieldSortOptions; }

    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline bool FieldSortOptionsHasBeenSet() const { return m_fieldSortOptionsHasBeenSet; }

    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline void SetFieldSortOptions(const Aws::Vector<PivotFieldSortOptions>& value) { m_fieldSortOptionsHasBeenSet = true; m_fieldSortOptions = value; }

    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline void SetFieldSortOptions(Aws::Vector<PivotFieldSortOptions>&& value) { m_fieldSortOptionsHasBeenSet = true; m_fieldSortOptions = std::move(value); }

    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline PivotTableSortConfiguration& WithFieldSortOptions(const Aws::Vector<PivotFieldSortOptions>& value) { SetFieldSortOptions(value); return *this;}

    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline PivotTableSortConfiguration& WithFieldSortOptions(Aws::Vector<PivotFieldSortOptions>&& value) { SetFieldSortOptions(std::move(value)); return *this;}

    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline PivotTableSortConfiguration& AddFieldSortOptions(const PivotFieldSortOptions& value) { m_fieldSortOptionsHasBeenSet = true; m_fieldSortOptions.push_back(value); return *this; }

    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline PivotTableSortConfiguration& AddFieldSortOptions(PivotFieldSortOptions&& value) { m_fieldSortOptionsHasBeenSet = true; m_fieldSortOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PivotFieldSortOptions> m_fieldSortOptions;
    bool m_fieldSortOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
